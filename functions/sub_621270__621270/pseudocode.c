void __usercall sub_621270(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v6; // eax
  _DWORD *v7; // eax
  bool IsSwimming; // bl

  if ( sub_6135F0(a1) )
  {
    if ( Actor_IsSwimming(*(_DWORD **)(a1 + 0x3C)) && !Actor_CanFightInWater(*(void **)(a1 + 0x3C)) )
    {
      sub_6135F0(a1);
      if ( *(_DWORD *)(a1 + 0x6C) == 7
        && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x174))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) != a1 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x178))(
          *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
          0);
      }
      sub_612DE0(a1, 0xC);
      sub_619920(a1, 0);
      sub_620E80(a1, a2, a3, a4);
      return;
    }
    v6 = *(_DWORD *)(a1 + 0x6C);
    if ( v6 != 0xB && v6 != 0xA )
    {
      v7 = (_DWORD *)sub_6135F0(a1);
      IsSwimming = Actor_IsSwimming(v7);
      if ( IsSwimming && !Actor_IsSwimming(*(_DWORD **)(a1 + 0x3C)) && sub_5E3400(*(Actor **)(a1 + 0x3C)) )
      {
        if ( sub_612690(*(_DWORD *)(a1 + 0x70)) )
        {
          if ( *(_BYTE *)(a1 + 0x130) && !*(_DWORD *)(a1 + 0x7C) )
          {
            if ( !*(_BYTE *)(a1 + 0x115) )
            {
              sub_6160B0((Actor **)a1);
              sub_61FE90((float *)a1, a2, a4);
              return;
            }
            goto LABEL_27;
          }
        }
        else if ( !Actor_CanFightInWater(*(void **)(a1 + 0x3C)) )
        {
          sub_6160B0((Actor **)a1);
          sub_61FEF0((float *)a1, a2, a4);
        }
      }
      if ( sub_5E1E90(*(void **)(a1 + 0x3C)) )
      {
        if ( IsSwimming )
          return;
        goto LABEL_26;
      }
      if ( (!sub_5E3400(*(Actor **)(a1 + 0x3C)) || !Actor_CanFightInWater(*(void **)(a1 + 0x3C))) && IsSwimming )
      {
LABEL_26:
        if ( !*(_BYTE *)(a1 + 0x115) )
        {
          sub_620E50((Actor **)a1, a2, a4);
          return;
        }
LABEL_27:
        sub_61C6E0(a1);
      }
    }
  }
}
