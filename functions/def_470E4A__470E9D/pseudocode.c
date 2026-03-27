// positive sp value has been detected, the output may be wrong!
__int16 __userpurge def_470E4A@<ax>(__int16 a1@<bx>, _DWORD **a2@<esi>, int a3, char a4)
{
  __int16 result; // ax

  if ( a4 )
    return 0;
  if ( (a1 & 0xF000) == 0 || (result = sub_470D20(a2, a1 & 0xFFF, 1), (unsigned __int8)a1 ^ (unsigned __int8)result) )
  {
    if ( (_BYTE)a1 )
      JUMPOUT(0x470D30);
    return 0;
  }
  return result;
}
