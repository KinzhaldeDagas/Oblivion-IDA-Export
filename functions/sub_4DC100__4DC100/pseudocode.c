void __usercall sub_4DC100(int a1@<ecx>, double a2@<st0>, double a3@<st2>, double a4@<st1>, char a5@<bpl>)
{
  int v6; // ecx
  bool v7; // bl
  int v8; // eax
  signed int v9; // eax
  NiAVObject *v10; // ecx
  int v11; // eax
  char v12; // al

  v6 = *(_DWORD *)(a1 + 0x1C);
  v7 = 0;
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 0xF4))(v6) )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) )
        v7 = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) != 0x1A;
    }
  }
  if ( (!*(_DWORD *)(a1 + 0x3C) || (*(_DWORD *)(a1 + 8) & 0x80000) != 0) && !sub_4354F0(ModelLoaderPtr, a1) )
  {
    v8 = *(_DWORD *)(a1 + 8);
    if ( (v8 & 0x20) == 0 && !v7 )
    {
      if ( (v8 & 0x800) != 0 )
      {
        if ( !sub_45A500(SaveLoad_CurrentSavegame) )
        {
          sub_4F9EC0(a2, a3, a4, a1, (_BYTE *)(a1 + 0x44));
          Script_AddEventToExtraScript(a1, a1 + 0x44, 0x1000);
        }
      }
      else
      {
        if ( (*(unsigned __int8 (__usercall **)@<al>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x190))(
               a1,
               a2,
               a4,
               a3) )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x1A4))(a1);
          sub_674E10(&ActorProcessManager_ptr, (TESForm *)a1);
        }
        v9 = sub_440C80(TES, *(TESObjectCELL **)(a1 + 0x40), 0);
        sub_438060((_DWORD **)ModelLoaderPtr, a5, a3, a4, a2, (TESObjectREFR *)a1, v9);
      }
    }
  }
  sub_4D9310((char *)a1, 1);
  v10 = *(NiAVObject **)(a1 + 0x3C);
  if ( v10 )
  {
    NiAVObject_UpdateNiAVObject(v10, 0.0, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x148))(a1);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
    {
      if ( !sub_5F0310((_DWORD *)a1, 0xFFFFFFFF)
        && (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x284))(a1, 0xA) > 0 )
      {
        sub_4212E0((_DWORD *)(a1 + 0x44));
      }
    }
    v11 = *(_DWORD *)(a1 + 0x40);
    if ( v11 )
    {
      v12 = *(_BYTE *)(v11 + 0x26);
      if ( v12 == 6 || v12 == 5 )
        ExtraDataList_RestoreSavedHavokData((ExtraDataList *)(a1 + 0x44), (_DWORD *)a1);
    }
  }
}
