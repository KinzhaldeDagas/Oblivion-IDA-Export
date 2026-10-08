double __usercall sub_61D5D0@<st0>(int a1@<ecx>, double result@<st0>)
{
  int v3; // esi
  char v4; // bl
  int v5; // edi
  int v6; // eax
  void *v7; // eax
  char v8; // al
  Actor *v9; // eax

  if ( *(_DWORD *)(a1 + 0x6C) == 9 ) /*0x61d5d7*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58); /*0x61d5e2*/
    v4 = *(_BYTE *)((*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)v3 + 0x184))(v3, result) + 0x20); /*0x61d5f6*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x380))(*(_DWORD *)(a1 + 0x3C)) ) /*0x61d5ff*/
    {
      if ( v4 != 0x16 ) /*0x61d608*/
      {
        v5 = *(_DWORD *)(a1 + 0x3C); /*0x61d616*/
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x184))(v3); /*0x61d61b*/
        if ( !v6 || *(_BYTE *)(v6 + 0x20) != 0x17 ) /*0x61d625*/
        {
          v7 = (void *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)v5 + 0x380))(v5, result); /*0x61d631*/
          sub_5E9A60(v7, result); /*0x61d635*/
          if ( !v8 ) /*0x61d63c*/
          {
            v9 = (Actor *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x380))(v5); /*0x61d648*/
            sub_5F80D0(v9); /*0x61d64c*/
          }
          return ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 0x230))(v5); /*0x61d65e*/
        }
      }
    }
    else
    {
      if ( (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)v3 + 0x184))(v3, result) != a1 ) /*0x61d66e*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 0x178))(v3, 0); /*0x61d67c*/
      if ( *(_DWORD *)(a1 + 0x70) != 0xD ) /*0x61d686*/
      {
        result = kTerrainLODQuadRayDirectionZ; /*0x61d688*/
        *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x61d68e*/
      }
      *(_DWORD *)(a1 + 0x70) = 0xD; /*0x61d696*/
      sub_61D320(a1); /*0x61d69c*/
    }
  }
  return result; /*0x61d69b*/
}
