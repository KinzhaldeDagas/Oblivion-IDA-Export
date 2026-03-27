signed int __userpurge sub_6239D0@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        float *a5,
        char a6)
{
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int *v11; // eax
  int v13; // ebp
  char *Name; // eax
  TESObjectREFR *v15; // edi
  _BYTE *v16; // eax
  bool v17; // al
  Actor *v18; // edi
  TESObjectREFR *v19; // eax
  unsigned int v20; // eax
  int v21; // edi
  PlayerCharacter *v22; // ebx
  char v23; // al
  char v24; // [esp+8h] [ebp-18h]
  char v25; // [esp+Ch] [ebp-14h]
  float v26; // [esp+Ch] [ebp-14h]

  v8 = *(_DWORD *)(a1 + 0x3C);
  if ( !v8
    || (v9 = *(_DWORD *)(v8 + 0x58)) == 0
    || !(*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 0xEC))(v9, 1)
    || (v10 = *(_DWORD *)((*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xEC))(
                            *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
                            1)
                        + 8)) == 0 )
  {
    v10 = *(_DWORD *)(a1 + 0xA8);
  }
  if ( *(_DWORD *)(a1 + 0xA8)
    || (v11 = sub_5E0F50(*(void **)(a1 + 0x3C)), (*(unsigned __int8 (__thiscall **)(int *, int))(*v11 + 0x168))(v11, 1)) )
  {
    *(_BYTE *)(a1 + 0x48) = 1;
  }
  if ( sub_5E1CF0(*(void **)(a1 + 0x3C)) && !v10 && !*(_BYTE *)(a1 + 0x48) && *(_DWORD *)(a1 + 0x70) != 6 )
    return 0xD;
  v13 = *(_DWORD *)(a1 + 0x70);
  if ( v13 != 5 )
  {
    if ( byte_B3B908 )
    {
      Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C));
      Interface_ConsolePrint("%.20s is going to %s!", Name, "attempt to Yield");
    }
    a4 = flt_A30634;
    *(float *)(a1 + 0x188) = flt_A30634;
  }
  v15 = *(TESObjectREFR **)(a1 + 0x3C);
  *(_DWORD *)(a1 + 0x70) = 5;
  v16 = (_BYTE *)sub_6135F0(a1);
  *(_DWORD *)(a1 + 0xC8) = sub_521450((TESObjectREFR *)g_idleAnimationMap, v15, v16);
  sub_612DE0(a1, v13);
  v17 = a6 || *(_BYTE *)(a1 + 0x4D);
  v18 = *(Actor **)(a1 + 0x3C);
  v25 = *(_DWORD *)(a1 + 0xC8) != 0;
  v24 = v17;
  v19 = (TESObjectREFR *)sub_6135F0(a1);
  v20 = sub_621B40((SInt32)v18, a3, a4, v18, 0.0, v19, a5, v24, v25);
  v21 = v20;
  if ( !v10 )
    goto LABEL_32;
  if ( v20 )
  {
    if ( v20 == 0xD )
    {
      switch ( *(_BYTE *)(v10 + 0x90) )
      {
        case 0:
        case 1:
        case 2:
        case 3:
          v21 = 1;
          sub_5E6D70(*(_DWORD **)(a1 + 0x3C), 1);
          goto LABEL_36;
        case 4:
          goto LABEL_30;
        case 5:
          if ( !(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xF4))(
                  *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
                  1)
            && !*(_BYTE *)(a1 + 0x48) )
          {
            sub_5F5170(*(Actor **)(a1 + 0x3C), 1, 5);
          }
LABEL_30:
          v21 = 2;
          sub_5E6D70(*(_DWORD **)(a1 + 0x3C), 1);
          break;
        default:
          JUMPOUT(0x623B8E);
      }
      goto LABEL_36;
    }
LABEL_32:
    if ( v20 >= 2 && v20 != 3 && v20 != 2 && v20 != 4 )
      return v21;
    goto LABEL_36;
  }
  v22 = *(PlayerCharacter **)(a1 + 0x3C);
  v23 = sub_612D60((_DWORD *)a1);
  Actor_UnequipItem(v22, a4, a2, a3, v23, 1, 0, 0, 1, 0);
LABEL_36:
  sub_612DE0(a1, v21);
  sub_61E8A0((void **)a1);
  v26 = sub_615520(a1);
  sub_612EA0((_DWORD **)a1, v26);
  sub_612DE0(a1, v13);
  return v21;
}
