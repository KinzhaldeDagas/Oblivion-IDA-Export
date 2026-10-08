double __userpurge sub_55CAA0@<st0>(int a1@<ecx>, double result@<st0>, double a3@<st1>, double a4@<st2>, int a5)
{
  int i; // edi
  int v8; // eax
  int v9; // eax
  float v10; // [esp+20h] [ebp+4h]

  for ( i = 0; i < 0x10; ++i ) /*0x55caa9*/
  {
    v8 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))(a1, result, a3); /*0x55cabb*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x68))(v8, i); /*0x55cac5*/
    v10 = a4; /*0x55cac7*/
    a4 = v10; /*0x55cad5*/
    if ( v10 > 0.0 && a4 <= 1.0 ) /*0x55cae5*/
    {
      if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a5 + 0x10) + 0x20))(*(_DWORD *)(a5 + 0x10), i) ) /*0x55caf0*/
      {
        if ( !*(_BYTE *)(a5 + 0x1C) ) /*0x55caf6*/
        {
          NiGeometry_RestoreFaceGenBaseVertices(*(_DWORD *)a5, a5 + 4); /*0x55cb03*/
          *(_BYTE *)(a5 + 0x1C) = 1; /*0x55cb0b*/
        }
        v9 = (*(int (__usercall **)@<eax>(_DWORD@<ecx>, int, double@<st0>, double@<st1>))(**(_DWORD **)(a5 + 0x10) + 0x20))( /*0x55cb18*/
               *(_DWORD *)(a5 + 0x10),
               i,
               result,
               a3);
        result = v10; /*0x55cb1a*/
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD, float))(*(_DWORD *)v9 + 4))( /*0x55cb35*/
          v9,
          a5 + 4,
          *(_DWORD *)(a5 + 0x18),
          *(_DWORD *)(a5 + 0x14),
          COERCE_FLOAT(LODWORD(v10)));
      }
    }
  }
  return result; /*0x55cb47*/
}
