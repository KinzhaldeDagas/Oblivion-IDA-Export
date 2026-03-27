void __userpurge sub_55CB50(int a1@<ecx>, double a2@<st0>, int a3)
{
  int v3; // eax
  int v4; // eax
  float v5; // [esp+14h] [ebp-4h]

  v3 = (*(int (__usercall **)@<eax>(int@<ecx>, int, double@<st0>))(*(_DWORD *)a1 + 0x9C))(a1, a1, a2);
  v5 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v3 + 0x70))(v3, 0);
  if ( v5 > 0.0 && v5 <= 1.0 )
  {
    if ( (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a3 + 0x10) + 0x24))(*(_DWORD *)(a3 + 0x10), 0) )
    {
      if ( !*(_BYTE *)(a3 + 0x1C) )
      {
        sub_5508F0(*(_DWORD *)a3, a3 + 4);
        *(_BYTE *)(a3 + 0x1C) = 1;
      }
      v4 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a3 + 0x10) + 0x24))(*(_DWORD *)(a3 + 0x10), 0);
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD, float))(*(_DWORD *)v4 + 4))(
        v4,
        a3 + 4,
        *(_DWORD *)(a3 + 0x18),
        *(_DWORD *)(a3 + 0x14),
        COERCE_FLOAT(LODWORD(v5)));
    }
  }
}
