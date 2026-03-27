int __userpurge sub_458ED0@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESObjectREFR *a5,
        AnimSequenceSingle *a6,
        int a7)
{
  Actor *v9; // ecx
  ActorAnimData *AnimData; // eax
  void **v11; // eax
  void *v12; // esi
  int v13; // eax
  unsigned __int16 *v14; // eax
  unsigned __int16 v15; // bx
  int result; // eax
  PowerListEntry *v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]
  AnimSequenceSingle *v20; // [esp+24h] [ebp+8h]

  v9 = (Actor *)TESDataHandler_g_PlayerRef;
  if ( a5 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
  {
    if ( a6 )
      AnimData = (ActorAnimData *)Player_GetAnimData(v9, 0);
    else
      AnimData = (ActorAnimData *)Player_GetAnimData(v9, 1);
  }
  else
  {
    AnimData = a5->vtbl->GetAnimData(a5);
  }
  v20 = (AnimSequenceSingle *)AnimData;
  v11 = (void **)OblivionDynamicCast(
                   a5,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &MobileObject `RTTI Type Descriptor',
                   0);
  v12 = 0;
  v18 = 0xFFFFFFFF;
  v17 = 0;
  if ( v11 )
  {
    if ( a6 )
    {
      v12 = OblivionDynamicCast(
              v11[0x16],
              0,
              (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
              &HighProcess `RTTI Type Descriptor',
              0);
      if ( v12 )
      {
        v18 = (*(int (__thiscall **)(void *))(*(_DWORD *)v12 + 0x2D0))(v12);
        v17 = (PowerListEntry *)(*(int (__thiscall **)(void *))(*(_DWORD *)v12 + 0x2D4))(v12);
      }
    }
  }
  v13 = *(this + 5);
  *(this + 5) = a7;
  v19 = v13;
  v14 = (unsigned __int16 *)SaveLoad_CurrentSavegame->unk000[5];
  v15 = *v14;
  SaveLoad_CurrentSavegame->unk000[5] = (UInt32)(v14 + 1);
  if ( v20 )
    sub_475590(v20, st5_0, st6_0, st7_0, (int)a5);
  result = v15;
  if ( v15 + a7 + 2 != *(this + 5) )
    result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
               dword_B34D90,
               "LoadAnimations() call did not properly empty buffer.");
  *(this + 5) = v19;
  if ( v12 )
  {
    if ( v17 )
      v17 = sub_4706E0((ActorAnimData *)v20, (char)((_BYTE)v17 - 5));
    return (*(int (__thiscall **)(void *, int, PowerListEntry *))(*(_DWORD *)v12 + 0x2D8))(v12, v18, v17);
  }
  return result;
}
