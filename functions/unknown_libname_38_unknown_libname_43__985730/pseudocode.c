// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_38_::unknown_libname_43@<eax>(
        int a1@<edx>,
        unsigned int a2@<ecx>,
        int a3@<ebp>,
        _BYTE *a4@<edi>,
        _BYTE *a5@<esi>)
{
  int v5; // edx
  unsigned int v6; // ecx
  _BYTE *v7; // esi
  _BYTE *v8; // edi
  int result; // eax

  v5 = a2 & a1;
  a4[3] = a5[3];
  a4[2] = a5[2];
  v6 = a2 >> 2;
  a4[1] = a5[1];
  v7 = a5 + 0xFFFFFFFD;
  v8 = a4 + 0xFFFFFFFD;
  if ( v6 < 8 )
    return unknown_libname_38(v6);
  while ( v6 )
  {
    *(_DWORD *)v8 = *(_DWORD *)v7;
    v7 += 0xFFFFFFFC;
    v8 += 0xFFFFFFFC;
    --v6;
  }
  switch ( v5 )
  {
    case 0:
      result = *(_DWORD *)(a3 + 8);
      break;
    case 1:
      v8[3] = v7[3];
      result = *(_DWORD *)(a3 + 8);
      break;
    case 2:
      v8[3] = v7[3];
      v8[2] = v7[2];
      result = *(_DWORD *)(a3 + 8);
      break;
    case 3:
      v8[3] = v7[3];
      v8[2] = v7[2];
      v8[1] = v7[1];
      result = *(_DWORD *)(a3 + 8);
      break;
  }
  return result;
}
