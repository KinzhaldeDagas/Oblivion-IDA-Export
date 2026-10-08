char __usercall SummonCreatureEffect_Remove@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  MagicTarget *v5; // ecx
  Actor *ParentActor; // edi
  int v7; // eax
  int v8; // ecx
  char *v9; // ecx

  v5 = *(MagicTarget **)(a1 + 0x20); /*0x6a5393*/
  if ( v5 ) /*0x6a5399*/
    ParentActor = MagicTarget_GetParentActor(v5); /*0x6a53a0*/
  else
    ParentActor = 0; /*0x6a53a4*/
  v7 = *(_DWORD *)(a1 + 0x3C); /*0x6a53a6*/
  if ( v7 ) /*0x6a53ab*/
  {
    if ( ParentActor ) /*0x6a53b3*/
    {
      v8 = *(_DWORD *)(v7 + 0x58); /*0x6a53b9*/
      if ( !v8 || (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) ) /*0x6a53c5*/
      {
        sub_692660(*(_DWORD **)(a1 + 0x3C), (int)ParentActor, 1); /*0x6a5424*/
        LOBYTE(v7) = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x3C) + 0x8C))(*(_DWORD *)(a1 + 0x3C), 1); /*0x6a5439*/
      }
      else
      {
        if ( !(*(unsigned __int8 (__usercall **)@<al>(_DWORD@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x3C) + 0x198))( /*0x6a53d8*/
                *(_DWORD *)(a1 + 0x3C),
                0,
                a4,
                a3,
                a2) )
        {
          MagicTarget_RemoveActiveEffectsByCode((MagicTarget *)(*(_DWORD *)(a1 + 0x3C) + 0x68), 0x50525453u, 0); /*0x6a53eb*/
          Actor_Kill(*(Actor **)(a1 + 0x3C), a2, a3, 0.0, 0, COERCE_INT(0.0)); /*0x6a53fb*/
        }
        sub_633130(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58), *(Actor **)(a1 + 0x3C)); /*0x6a5407*/
        LOBYTE(v7) = sub_692660(*(_DWORD **)(a1 + 0x3C), (int)ParentActor, 1); /*0x6a5413*/
      }
      *(_DWORD *)(a1 + 0x3C) = 0; /*0x6a543b*/
    }
  }
  if ( *(_BYTE *)(a1 + 0x61) ) /*0x6a5442*/
  {
    v9 = *(char **)(a1 + 8); /*0x6a5448*/
    if ( v9 ) /*0x6a544d*/
    {
      LOBYTE(v7) = MagicItem_UnloadVFXModels(v9, 0); /*0x6a5451*/
      *(_BYTE *)(a1 + 0x61) = 0; /*0x6a5456*/
    }
  }
  return v7; /*0x6a545a*/
}
