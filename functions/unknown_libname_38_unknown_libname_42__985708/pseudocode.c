// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_38_::unknown_libname_42@<eax>(
        int a1@<edx>,
        unsigned int a2@<ecx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>)
{
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // esi
  int v8; // edi
  int result; // eax

  v5 = a2 & a1;
  *(_BYTE *)(a4 + 3) = *(_BYTE *)(a5 + 3);
  v6 = a2 >> 2;
  *(_BYTE *)(a4 + 2) = *(_BYTE *)(a5 + 2);
  v7 = a5 - 2;
  v8 = a4 - 2;
  if ( v6 < 8 )
    return unknown_libname_38(v6);
  while ( v6 )
  {
    *(_DWORD *)v8 = *(_DWORD *)v7;
    v7 -= 4;
    v8 -= 4;
    --v6;
  }
  switch ( v5 )
  {
    case 0:
      result = *(_DWORD *)(a3 + 8);
      break;
    case 1:
      *(_BYTE *)(v8 + 3) = *(_BYTE *)(v7 + 3);
      result = *(_DWORD *)(a3 + 8);
      break;
    case 2:
      *(_BYTE *)(v8 + 3) = *(_BYTE *)(v7 + 3);
      *(_BYTE *)(v8 + 2) = *(_BYTE *)(v7 + 2);
      result = *(_DWORD *)(a3 + 8);
      break;
    case 3:
      *(_BYTE *)(v8 + 3) = *(_BYTE *)(v7 + 3);
      *(_BYTE *)(v8 + 2) = *(_BYTE *)(v7 + 2);
      *(_BYTE *)(v8 + 1) = *(_BYTE *)(v7 + 1);
      result = *(_DWORD *)(a3 + 8);
      break;
  }
  return result;
}
