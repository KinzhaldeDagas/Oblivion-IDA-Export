__int16 __usercall sub_948CE0@<ax>(int a1@<ecx>, int a2@<ebx>)
{
  __int16 result; // ax

  result = sub_8B0DA0(a1 + 0x18, a2);
  *(_DWORD *)(a1 + 0x10) = 0;
  return result;
}
