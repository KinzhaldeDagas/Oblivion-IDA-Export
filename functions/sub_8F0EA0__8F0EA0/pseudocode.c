__int16 __userpurge sub_8F0EA0@<ax>(int a1@<ebx>, int a2, char *a3, unsigned int a4)
{
  __int16 result; // ax

  result = (__int16)a3;
  if ( a3 )
    return sub_8B18C0(a1, a3, 0, a4);
  return result;
}
