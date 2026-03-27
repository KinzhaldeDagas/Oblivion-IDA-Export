char __usercall SummonCreatureEffect_Remove@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  MagicTarget *v5; // ecx
  Actor *ParentActor; // edi
  int v7; // eax
  int v8; // ecx
  char *v9; // ecx

  v5 = *(MagicTarget **)(a1 + 0x20);
  if ( v5 )
    ParentActor = MagicTarget_GetParentActor(v5);
  else
    ParentActor = 0;
  v7 = *(_DWORD *)(a1 + 0x3C);
  if ( v7 )
  {
    if ( ParentActor )
    {
      v8 = *(_DWORD *)(v7 + 0x58);
      if ( !v8 || (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) )
      {
        sub_692660(*(_DWORD **)(a1 + 0x3C), (int)ParentActor, 1);
        LOBYTE(v7) = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x3C) + 0x8C))(*(_DWORD *)(a1 + 0x3C), 1);
      }
      else
      {
        if ( !(*(unsigned __int8 (__usercall **)@<al>(_DWORD@<ecx>, _DWORD, double@<st0>, double@<st1>))(**(_DWORD **)(a1 + 0x3C) + 0x198))(
                *(_DWORD *)(a1 + 0x3C),
                0,
                a4,
                a3) )
        {
          sub_6A24B0(*(_DWORD *)(a1 + 0x3C) + 0x68, a1, a4, 0x50525453, 0);
          Actor_Kill(*(Actor **)(a1 + 0x3C), a2, a3, 0.0, 0, COERCE_INT(0.0));
        }
        sub_633130(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58), a2, *(Actor **)(a1 + 0x3C));
        LOBYTE(v7) = sub_692660(*(_DWORD **)(a1 + 0x3C), (int)ParentActor, 1);
      }
      *(_DWORD *)(a1 + 0x3C) = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 0x61) )
  {
    v9 = *(char **)(a1 + 8);
    if ( v9 )
    {
      LOBYTE(v7) = sub_419F10(v9, 0);
      *(_BYTE *)(a1 + 0x61) = 0;
    }
  }
  return v7;
}
