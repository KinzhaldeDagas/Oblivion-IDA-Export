PlayerCharacter *__userpurge sub_69CFB0@<eax>(
        MobileObject *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        TESObjectREFR a6)
{
  bhkCharacterProxy *CharProxy; // ebx
  UInt32 refID; // ecx
  void *v10; // esi
  MobileObject *v11; // eax
  signed int vtbl_high; // esi
  NiAVObject *v13; // eax
  _DWORD *BhkCollisionObjectRecursive; // eax
  _DWORD *v15; // ecx
  NiAVObject *v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // ecx
  int v22; // esi
  int v23; // eax
  int v24; // eax
  UInt32 v25; // ecx
  PlayerCharacter *result; // eax

  MobilObject_PostLinkModifiedForm((int)a1, a2, a3, a4, a5, (int)a6.vtbl); /*0x69cfc0*/
  CharProxy = MobileObject_GetCharProxy(a1); /*0x69cfcc*/
  if ( CharProxy ) /*0x69cfd0*/
  {
    refID = a1[1].super.super.refID; /*0x69cfd6*/
    if ( refID && (*(int (__thiscall **)(UInt32))(*(_DWORD *)refID + 0x20))(refID) ) /*0x69cfe7*/
    {
      v10 = (void *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)a1[1].super.super.refID + 0x20))(a1[1].super.super.refID); /*0x69d003*/
      v11 = (MobileObject *)OblivionDynamicCast( /*0x69d008*/
                              v10,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                              &Actor `RTTI Type Descriptor',
                              0);
      if ( v11 ) /*0x69d012*/
      {
        vtbl_high = HIWORD(MobileObject_GetCollisionFilterInfo(v11, &a6)->vtbl); /*0x69d020*/
      }
      else
      {
        v13 = (NiAVObject *)(*(int (__thiscall **)(void *))(*(_DWORD *)v10 + 0x154))(v10); /*0x69d033*/
        BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive(v13); /*0x69d036*/
        if ( BhkCollisionObjectRecursive && (v15 = (_DWORD *)BhkCollisionObjectRecursive[4]) != 0 ) /*0x69d047*/
          vtbl_high = *((unsigned __int16 *)sub_497340(v15, &a6) + 1); /*0x69d053*/
        else
          vtbl_high = sub_531D80(); /*0x69d05e*/
      }
    }
    else
    {
      v16 = (NiAVObject *)a1->vtbl->super.GetNiNode(a1); /*0x69d06c*/
      v17 = NiAVObject_FindBhkCollisionObjectRecursive(v16); /*0x69d06f*/
      if ( v17 && (v18 = v17[4]) != 0 ) /*0x69d080*/
      {
        v19 = *(_DWORD *)(v18 + 8); /*0x69d082*/
        if ( v19 && (v20 = v19 + 0x14) != 0 ) /*0x69d08c*/
          vtbl_high = HIWORD(*(_DWORD *)(v20 + 0x1C)); /*0x69d091*/
        else
          vtbl_high = 0; /*0x69d098*/
      }
      else
      {
        vtbl_high = (unsigned __int16)(dword_B2EB3C + 1); /*0x69d0a6*/
        dword_B2EB3C = vtbl_high; /*0x69d0ac*/
        if ( !vtbl_high ) /*0x69d0b2*/
        {
          vtbl_high = 0xA; /*0x69d0b4*/
          dword_B2EB3C = 0xA; /*0x69d0b9*/
        }
      }
    }
    bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, &a6); /*0x69d0c6*/
    v21 = *((_DWORD **)CharProxy + 0xD9); /*0x69d0cf*/
    v22 = (int)a6.vtbl & 0xFFC0 | 7 | (vtbl_high << 0x10); /*0x69d0e0*/
    if ( v21 ) /*0x69d0e4*/
    {
      v23 = v21[2]; /*0x69d0e6*/
      if ( v23 ) /*0x69d0eb*/
      {
        v24 = v23 + 0x14; /*0x69d0ed*/
        if ( v24 ) /*0x69d0f0*/
          *(_DWORD *)(v24 + 0x1C) = v22; /*0x69d0f2*/
      }
      (*(void (__thiscall **)(_DWORD *))(*v21 + 0x80))(v21); /*0x69d0fd*/
    }
  }
  v25 = a1[1].super.super.refID; /*0x69d100*/
  if ( v25 ) /*0x69d107*/
    result = (PlayerCharacter *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v25 + 0x20))(v25); /*0x69d10e*/
  else
    result = 0; /*0x69d112*/
  if ( result != reference ) /*0x69d11a*/
    MEMORY[0xB3C0D0] = flt_B37ED0[0x92] + MEMORY[0xB3C0D0]; /*0x69d128*/
  return result; /*0x69d12e*/
}
