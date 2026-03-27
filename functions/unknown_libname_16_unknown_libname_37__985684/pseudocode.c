// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_16_::unknown_libname_37@<eax>(
        char a1@<dl>,
        unsigned int a2@<ecx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>)
{
  int v5; // esi
  int v6; // edi
  unsigned int v7; // ecx
  int v8; // edx
  int result; // eax

  v5 = a2 + a5 - 4;
  v6 = a2 + a4 - 4;
  if ( (v6 & 3) != 0 )
    return unknown_libname_38_::unknown_libname_39();
  v7 = a2 >> 2;
  v8 = a1 & 3;
  if ( v7 < 8 )
    return unknown_libname_38();
  while ( v7 )
  {
    *(_DWORD *)v6 = *(_DWORD *)v5;
    v5 -= 4;
    v6 -= 4;
    --v7;
  }
  switch ( v8 )
  {
    case 0:
      result = *(_DWORD *)(a3 + 8);
      break;
    case 1:
      *(_BYTE *)(v6 + 3) = *(_BYTE *)(v5 + 3);
      result = *(_DWORD *)(a3 + 8);
      break;
    case 2:
      *(_BYTE *)(v6 + 3) = *(_BYTE *)(v5 + 3);
      *(_BYTE *)(v6 + 2) = *(_BYTE *)(v5 + 2);
      result = *(_DWORD *)(a3 + 8);
      break;
    case 3:
      *(_BYTE *)(v6 + 3) = *(_BYTE *)(v5 + 3);
      *(_BYTE *)(v6 + 2) = *(_BYTE *)(v5 + 2);
      *(_BYTE *)(v6 + 1) = *(_BYTE *)(v5 + 1);
      result = *(_DWORD *)(a3 + 8);
      break;
  }
  return result;
}
