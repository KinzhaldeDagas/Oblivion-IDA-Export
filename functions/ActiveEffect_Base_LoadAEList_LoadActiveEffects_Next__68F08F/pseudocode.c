// positive sp value has been detected, the output may be wrong!
int __usercall ActiveEffect_Base_LoadAEList__::LoadActiveEffects_Next@<eax>(
        int a1@<ebp>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  TESSaveLoad *v12; // ecx
  UInt32 *v13; // edi
  UInt32 v14; // esi
  TESForm *v15; // ecx
  UInt32 v16; // eax
  const char *v17; // eax
  const char *v19; // eax
  UInt32 v20; // edx
  int v21; // [esp-2Ch] [ebp-2Ch]
  int v22; // [esp-2Ch] [ebp-2Ch]
  int v23; // [esp-28h] [ebp-28h]
  int v24; // [esp-28h] [ebp-28h]
  unsigned __int16 v25; // [esp-14h] [ebp-14h]
  unsigned __int16 v26; // [esp-10h] [ebp-10h]
  int v27; // [esp-Ch] [ebp-Ch]

  if ( a1 + 1 < v25 )
    return ActiveEffect_Base_LoadAEList__::LoadActiveEffects_Loop(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( !sub_45A170() )
    return ActiveEffect_Base_LoadAEList__::Done();
  v12 = SaveLoad_CurrentSavegame;
  v13 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
  v14 = SaveLoad_CurrentSavegame->unk000[5];
  if ( !v13 )
  {
    v20 = v26 + v27;
    if ( v14 > v20 )
      return PrintError(
               "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
               v14 - v26 - v27,
               ".\\Magic\\ActiveEffect.cpp",
               0x39F,
               LOBYTE(v12[1].createdObjectList.next));
    if ( v14 < v20 )
      PrintError(
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
        v27 + v26 - v14,
        ".\\Magic\\ActiveEffect.cpp",
        0x39F,
        LOBYTE(v12[1].createdObjectList.next));
    return ActiveEffect_Base_LoadAEList__::Done();
  }
  v15 = TESForm_LookupByFormID(*v13);
  v16 = v27 + v26;
  if ( v14 <= v16 )
  {
    if ( v14 >= v16 )
    {
      return ((int (__fastcall *)(TESForm *))ActiveEffect_Base_LoadAEList__::Done)(v15);
    }
    else
    {
      v19 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)(
                            v15,
                            *((unsigned __int8 *)v13 + 9),
                            *(UInt32 *)((char *)v13 + 5));
      return PrintError(
               "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with versi"
               "on %i and flags %08X",
               v27 + v26 - v14,
               ".\\Magic\\ActiveEffect.cpp",
               0x39F,
               *v13,
               v19,
               v22,
               v24);
    }
  }
  else
  {
    v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)(
                          v15,
                          *((unsigned __int8 *)v13 + 9),
                          *(UInt32 *)((char *)v13 + 5));
    return PrintError(
             "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
             "%i and flags %08X",
             v14 - v26 - v27,
             ".\\Magic\\ActiveEffect.cpp",
             0x39F,
             *v13,
             v17,
             v21,
             v23);
  }
}
