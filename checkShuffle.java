//package com.CheckShuffle

import java.io.*;
import java.util.*;
import java.lang.*;

class CheckShuffle{
	static Scanner sc=new Scanner(System.in);
	
	static boolean checkLength(String merge,String result){
		if(merge.length()==result.length()) return true;
		else return false;
	}
	
	static String sortString(String str){
		char[] ch=str.toCharArray();
		Arrays.sort(ch);
		
		str=String.valueOf(ch);
		
		return str;
	}
	
	static boolean shuffle(String merge,String result){
		merge=sortString(merge);
		result=sortString(result);
		
		if(merge.equals(result)) return true;
		else	return false;
	}
	
	public static void main(String[] args){
		String first=sc.next();
		String second=sc.next();
		String result=sc.next();
		
		String merge=first+second;
		
		if(checkLength(merge,result)&&shuffle(merge,result)){
			System.out.println("YES");
		}
		else{
			System.out.println("NO");
		}
	}
}
