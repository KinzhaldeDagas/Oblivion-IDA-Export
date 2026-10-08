void __userpurge sub_55CB50(int a1@<ecx>, double a2@<st0>, int a3)
{
  int v3; // eax
  int v4; // eax
  float v5; // [esp+14h] [ebp-4h]

  v3 = (*(int (__usercall **)@<eax>(int@<ecx>, int, double@<st0>))(*(_DWORD *)a1 + 0x9C))(a1, a1, a2); /*0x55cb59*/
  v5 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v3 + 0x70))(v3, 0); /*0x55cb66*/
  if ( v5 > 0.0 && v5 <= 1.0 ) /*0x55cb82*/
  {
    if ( (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a3 + 0x10) + 0x24))(*(_DWORD *)(a3 + 0x10), 0) ) /*0x55cb93*/
    {
      if ( !*(_BYTE *)(a3 + 0x1C) ) /*0x55cb99*/
      {
        NiGeometry_RestoreFaceGenBaseVertices(*(_DWORD *)a3, a3 + 4); /*0x55cba6*/
        *(_BYTE *)(a3 + 0x1C) = 1; /*0x55cbae*/
      }
      v4 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a3 + 0x10) + 0x24))(*(_DWORD *)(a3 + 0x10), 0); /*0x55cbbc*/
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD, float))(*(_DWORD *)v4 + 4))( /*0x55cbd9*/
        v4,
        a3 + 4,
        *(_DWORD *)(a3 + 0x18),
        *(_DWORD *)(a3 + 0x14),
        COERCE_FLOAT(LODWORD(v5)));
    }
  }
}
