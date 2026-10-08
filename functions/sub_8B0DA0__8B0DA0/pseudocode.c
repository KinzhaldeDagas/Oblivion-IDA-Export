__int16 __usercall sub_8B0DA0@<ax>(int a1@<ecx>, int a2@<ebx>)
{
  __int16 result; // ax

  result = sub_8B18C0(a2, *(char **)a1, 0, 8 * *(_DWORD *)(a1 + 8) + 8); /*0x8b0db3*/
  *(_DWORD *)(a1 + 4) = 0; /*0x8b0dbb*/
  return result; /*0x8b0dc2*/
}
