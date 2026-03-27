int __usercall sub_746E20@<eax>(int result@<eax>)
{
  int v1; // ecx
  __int16 v2; // cx

  v1 = *(_DWORD *)(result + 0x16B4);
  if ( v1 == 0x10 )
  {
    *(_BYTE *)(*(_DWORD *)(result + 8) + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
    *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
    ++*(_DWORD *)(result + 0x14);
    *(_DWORD *)(result + 0x16B4) = 0;
    *(_WORD *)(result + 0x16B0) = 0;
  }
  else if ( v1 >= 8 )
  {
    *(_BYTE *)(*(_DWORD *)(result + 8) + *(_DWORD *)(result + 0x14)) = *(_BYTE *)(result + 0x16B0);
    v2 = *(unsigned __int8 *)(result + 0x16B1);
    ++*(_DWORD *)(result + 0x14);
    *(_DWORD *)(result + 0x16B4) -= 8;
    *(_WORD *)(result + 0x16B0) = v2;
  }
  return result;
}
