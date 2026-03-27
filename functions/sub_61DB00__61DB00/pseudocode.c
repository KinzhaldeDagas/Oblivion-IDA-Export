char __userpurge sub_61DB00@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  char v5; // bl
  _DWORD *v7; // eax
  TESObjectREFR ***v8; // edi
  TESObjectREFR **i; // eax
  int v10; // eax
  int v11; // edi
  int j; // eax
  _DWORD *v13; // eax
  unsigned int v15; // eax
  _DWORD *v16; // edi
  int v17; // eax
  TESObjectREFR *v18; // edi
  TESObjectREFR *v19; // eax
  char *v20; // eax
  char *Name; // [esp-4h] [ebp-14h]

  v5 = 0;
  if ( !a5 )
  {
    v8 = *(TESObjectREFR ****)(a1 + 0x40);
    if ( v8 )
    {
      for ( i = *v8; *v8; i = *v8 )
        sub_6162D0((float *)a1, *i);
    }
    goto LABEL_9;
  }
  sub_5EFF30(*(Actor **)(a1 + 0x3C), 0, a1, (int)a5);
  sub_6162D0((float *)a1, a5);
  v7 = *(_DWORD **)(a1 + 0x40);
  if ( !v7 || !v7[1] && !*v7 )
LABEL_9:
    v5 = 1;
  v10 = *(_DWORD *)(a1 + 0x6C);
  switch ( v10 )
  {
    case 2:
    case 3:
      sub_6160B0((Actor **)a1);
LABEL_19:
      if ( *(_DWORD *)(a1 + 0x70) != 0xD )
        *(float *)(a1 + 0x188) = flt_A30634;
      *(_DWORD *)(a1 + 0x70) = 0xD;
      break;
    case 7:
      v11 = *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11) )
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11) + 0x20) != 0xC )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 0x178))(v11, 0);
      }
      goto LABEL_19;
    case 4:
      sub_619920(a1, 0);
      sub_612DA0((_DWORD *)a1, 9);
      break;
  }
  if ( Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)) )
    sub_5F4AE0(*(Actor **)(a1 + 0x3C), a2, a3, a4, 0);
  if ( v5 )
  {
    for ( j = 0; j < 2; ++j )
    {
      if ( *(_DWORD *)(4 * j + 0xB15198) == 0x2C )
        break;
    }
    if ( j < 2 )
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x17C))(
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        j);
    v13 = *(_DWORD **)(a1 + 0x9C);
    if ( v13
      && *v13
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x198))(
            *(_DWORD *)(a1 + 0x3C),
            0) )
    {
      MagicTarget_RemoveEffects();
      return v5;
    }
  }
  else if ( sub_6135F0(a1) )
  {
    if ( *(_BYTE *)(a1 + 0x114) )
    {
      v15 = *(_DWORD *)(a1 + 0x70);
      if ( v15 < 2 || v15 == 3 )
        *(_BYTE *)(a1 + 0x114) = 0;
    }
    v16 = *(_DWORD **)(a1 + 0x28);
    v17 = sub_6135F0(a1);
    TeSPackage_TargetData_SetTargetREFR(v16, v17);
    if ( *(_DWORD *)(a1 + 0x70) != 0xD )
      *(float *)(a1 + 0x188) = flt_A30634;
    *(_DWORD *)(a1 + 0x70) = 0xD;
    if ( byte_B3B908 )
    {
      v18 = *(TESObjectREFR **)(a1 + 0x3C);
      v19 = (TESObjectREFR *)sub_6135F0(a1);
      Name = TESObjectREFR_GetName(v19);
      v20 = TESObjectREFR_GetName(v18);
      Interface_ConsolePrint("%.20s is now fighting %s!", v20, Name);
    }
  }
  return v5;
}
