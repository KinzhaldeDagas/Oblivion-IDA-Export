int __usercall sub_746EA0@<eax>(int result@<eax>)
{
  int v1; // edx
  char v2; // bl
  int v3; // edx

  v1 = *(_DWORD *)(result + 0x16B4);
  if ( v1 <= 8 )
  {
    if ( v1 > 0 )
      *(_BYTE *)(*(_DWORD *)(result + 8) + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
    *(_WORD *)(result + 0x16B0) = 0;
    *(_DWORD *)(result + 0x16B4) = 0;
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)(result + 8) + *(_DWORD *)(result + 0x14)) = *(_BYTE *)(result + 0x16B0);
    v2 = *(_BYTE *)(result + 0x16B1);
    v3 = *(_DWORD *)(result + 8);
    *(_BYTE *)(++*(_DWORD *)(result + 0x14) + v3) = v2;
    ++*(_DWORD *)(result + 0x14);
    *(_WORD *)(result + 0x16B0) = 0;
    *(_DWORD *)(result + 0x16B4) = 0;
  }
  return result;
}
