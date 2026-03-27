int __userpurge sub_609D50@<eax>(
        _DWORD *a1@<ecx>,
        double a2@<st2>,
        double a3@<st0>,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  int result; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // ecx
  char v13; // al
  _DWORD v14[5]; // [esp+4h] [ebp-24h] BYREF
  char v15; // [esp+18h] [ebp-10h]
  char v16; // [esp+19h] [ebp-Fh]
  char *v17; // [esp+1Ch] [ebp-Ch]
  _DWORD *v18; // [esp+20h] [ebp-8h]
  int v19; // [esp+24h] [ebp-4h]

  result = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*a1 + 0x154))(a1, a3);
  if ( result )
  {
    v11 = (_DWORD *)a1[0x17];
    if ( v11 )
    {
      if ( *v11 == 1 )
      {
        result = sub_480340(result);
        if ( result )
        {
          v12 = *(_DWORD **)(result + 0x10);
          if ( v12 )
          {
            *(float *)&v14[4] = flt_A3D65C;
            v18 = v12;
            v19 = a8;
            v13 = *(_BYTE *)(sub_494F10(v12) + 0x10);
            *(float *)&v14[3] = a4;
            v14[0] = a5;
            v15 = v13;
            v16 = a9;
            v14[1] = a6;
            v14[2] = a7;
            v17 = (char *)a1 + a8;
            return sub_6B0C70(a2, COERCE_FLOAT(v14));
          }
        }
      }
    }
  }
  return result;
}
