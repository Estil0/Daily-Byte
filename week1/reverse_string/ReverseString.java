/*Given a string, reverse all of its characters and return the resulting string.
Ex: Given the following strings...
“Cat”, return “taC”
“The Daily Byte”, return "etyB yliaD ehT”
“civic”, return “civic”*/

class ReverseString{
    public static void main(String[]args){
        String s="Cat";
        StringBuilder result=new StringBuilder();
        result.append(s);
        result.reverse();
        System.out.println(result);
    }
}