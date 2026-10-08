void __usercall sub_4DC100(int a1@<ecx>, double a2@<st0>, double a3@<st2>, double a4@<st1>)
{
  int v6; // ecx
  bool v7; // bl
  int v8; // eax
  signed int v9; // eax
  NiAVObject *v10; // ecx
  int v11; // eax
  char v12; // al

  v6 = *(_DWORD *)(a1 + 0x1C); /*0x4dc104*/
  v7 = 0; /*0x4dc107*/
  if ( v6 ) /*0x4dc10b*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 0xF4))(v6) ) /*0x4dc115*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) ) /*0x4dc125*/
        v7 = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) != 0x1A; /*0x4dc13d*/
    }
  }
  if ( (!*(_DWORD *)(a1 + 0x3C) || (*(_DWORD *)(a1 + 8) & 0x80000) != 0) && !sub_4354F0(MEMORY[0xB33A1C], a1) ) /*0x4dc159*/
  {
    v8 = *(_DWORD *)(a1 + 8); /*0x4dc166*/
    if ( (v8 & 0x20) == 0 && !v7 ) /*0x4dc175*/
    {
      if ( (v8 & 0x800) != 0 ) /*0x4dc17c*/
      {
        if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x4dc1cb*/
        {
          sub_4F9EC0(a2, a3, a4, a1, (ExtraDataList *)(a1 + 0x44)); /*0x4dc1da*/
          Script_AddEventToExtraScript(a1, a1 + 0x44, 0x1000); /*0x4dc1e6*/
        }
      }
      else
      {
        if ( (*(unsigned __int8 (__usercall **)@<al>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x190))( /*0x4dc188*/
               a1,
               a2,
               a4,
               a3) )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x1A4))(a1); /*0x4dc198*/
          sub_674E10((int *)&qword_B3BB2C[0x75], (TESForm *)a1); /*0x4dc1a0*/
        }
        v9 = sub_440C80(MEMORY[0xB333A0], *(TESObjectCELL **)(a1 + 0x40), 0); /*0x4dc1b1*/
        sub_438060((_DWORD **)MEMORY[0xB33A1C], (TESObjectREFR *)a1, v9); /*0x4dc1be*/
      }
    }
  }
  sub_4D9310((char *)a1, 1); /*0x4dc1f3*/
  v10 = *(NiAVObject **)(a1 + 0x3C); /*0x4dc1f8*/
  if ( v10 ) /*0x4dc1fd*/
  {
    NiAVObject_UpdateNiAVObject(v10, 0.0, 0); /*0x4dc207*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x148))(a1); /*0x4dc216*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4dc222*/
    {
      if ( !sub_5F0310((_DWORD *)a1, 0xFFFFFFFF) /*0x4dc245*/
        && (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x284))(a1, 0xA) > 0 )
      {
        ExtraDataList_RemoveSavedMovementData((_DWORD *)(a1 + 0x44)); /*0x4dc24a*/
      }
    }
    v11 = *(_DWORD *)(a1 + 0x40); /*0x4dc24f*/
    if ( v11 ) /*0x4dc254*/
    {
      v12 = *(_BYTE *)(v11 + 0x26); /*0x4dc256*/
      if ( v12 == 6 || v12 == 5 ) /*0x4dc25f*/
        ExtraDataList_RestoreSavedHavokData((ExtraDataList *)(a1 + 0x44), (_DWORD *)a1); /*0x4dc265*/
    }
  }
}
