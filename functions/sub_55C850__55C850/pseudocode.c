double __userpurge sub_55C850@<st0>(int a1@<ecx>, double result@<st0>, double a3@<st1>, double a4@<st2>, int a5)
{
  int i; // edi
  int v8; // eax
  int v9; // eax
  float v10; // [esp+20h] [ebp+4h]

  for ( i = 0; i < 0xD; ++i ) /*0x55c859*/
  {
    v8 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x9C))(a1, result, a3); /*0x55c86b*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x54))(v8, i); /*0x55c875*/
    v10 = a4; /*0x55c877*/
    a4 = v10; /*0x55c885*/
    if ( v10 > 0.0 && a4 <= 1.0 ) /*0x55c895*/
    {
      if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a5 + 0x10) + 0x18))(*(_DWORD *)(a5 + 0x10), i) ) /*0x55c8a0*/
      {
        if ( !*(_BYTE *)(a5 + 0x1C) ) /*0x55c8a6*/
        {
          NiGeometry_RestoreFaceGenBaseVertices(*(_DWORD *)a5, a5 + 4); /*0x55c8b3*/
          *(_BYTE *)(a5 + 0x1C) = 1; /*0x55c8bb*/
        }
        v9 = (*(int (__usercall **)@<eax>(_DWORD@<ecx>, int, double@<st0>, double@<st1>))(**(_DWORD **)(a5 + 0x10) + 0x18))( /*0x55c8c8*/
               *(_DWORD *)(a5 + 0x10),
               i,
               result,
               a3);
        result = v10; /*0x55c8ca*/
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD, float))(*(_DWORD *)v9 + 4))( /*0x55c8e5*/
          v9,
          a5 + 4,
          *(_DWORD *)(a5 + 0x18),
          *(_DWORD *)(a5 + 0x14),
          COERCE_FLOAT(LODWORD(v10)));
      }
    }
  }
  return result; /*0x55c8f7*/
}
