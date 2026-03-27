double __userpurge sub_55CAA0@<st0>(int a1@<ecx>, double result@<st0>, double a3@<st1>, int a4)
{
  int i; // edi
  int v7; // eax
  int v8; // eax
  float v9; // [esp+20h] [ebp+4h]

  for ( i = 0; i < 0x10; ++i )
  {
    v7 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x9C))(a1, result);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x68))(v7, i);
    v9 = a3;
    a3 = v9;
    if ( v9 > 0.0 && a3 <= 1.0 )
    {
      if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a4 + 0x10) + 0x20))(*(_DWORD *)(a4 + 0x10), i) )
      {
        if ( !*(_BYTE *)(a4 + 0x1C) )
        {
          sub_5508F0(*(_DWORD *)a4, a4 + 4);
          *(_BYTE *)(a4 + 0x1C) = 1;
        }
        v8 = (*(int (__usercall **)@<eax>(_DWORD@<ecx>, int, double@<st0>))(**(_DWORD **)(a4 + 0x10) + 0x20))(
               *(_DWORD *)(a4 + 0x10),
               i,
               result);
        result = v9;
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD, float))(*(_DWORD *)v8 + 4))(
          v8,
          a4 + 4,
          *(_DWORD *)(a4 + 0x18),
          *(_DWORD *)(a4 + 0x14),
          COERCE_FLOAT(LODWORD(v9)));
      }
    }
  }
  return result;
}
