double __usercall sub_61D5D0@<st0>(int a1@<ecx>, double result@<st0>)
{
  int v3; // esi
  char v4; // bl
  int v5; // edi
  int v6; // eax
  void *v7; // eax
  char v8; // al
  Actor *v9; // eax

  if ( *(_DWORD *)(a1 + 0x6C) == 9 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58);
    v4 = *(_BYTE *)((*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)v3 + 0x184))(v3, result) + 0x20);
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x380))(*(_DWORD *)(a1 + 0x3C)) )
    {
      if ( v4 != 0x16 )
      {
        v5 = *(_DWORD *)(a1 + 0x3C);
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x184))(v3);
        if ( !v6 || *(_BYTE *)(v6 + 0x20) != 0x17 )
        {
          v7 = (void *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)v5 + 0x380))(v5, result);
          sub_5E9A60(v7, result);
          if ( !v8 )
          {
            v9 = (Actor *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x380))(v5);
            sub_5F80D0(v9);
          }
          return ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 0x230))(v5);
        }
      }
    }
    else
    {
      if ( (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)v3 + 0x184))(v3, result) != a1 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 0x178))(v3, 0);
      if ( *(_DWORD *)(a1 + 0x70) != 0xD )
      {
        result = flt_A30634;
        *(float *)(a1 + 0x188) = flt_A30634;
      }
      *(_DWORD *)(a1 + 0x70) = 0xD;
      sub_61D320(a1);
    }
  }
  return result;
}
