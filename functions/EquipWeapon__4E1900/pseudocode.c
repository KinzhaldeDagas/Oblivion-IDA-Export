// Equips the supplied form on this reference. The native ABI has one stack argument: the weapon/form pointer.
void __thiscall EquipWeapon(TESObjectREFR *this, TESForm *weapon)
{
  double v2; // st7
  TESObjectREFR *v3; // ebp
  ActorSkinInfo *SkinInfoByPerspective; // edi
  TESObjectREFR *v5; // esi
  int v6; // eax
  const char *v7; // eax
  NiObjectNET *CloneAndAttachModel3D; // eax
  NiObjectNET *v9; // edi
  TESObjectREFRVtbl *vtbl; // ebp
  void (__thiscall *v11)(BaseFormComponent *); // edi
  int v12; // eax
  TESObjectREFRVtbl *v13; // edi
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // ebx
  ActorAnimData *AnimDataByPerspective; // eax
  void (__thiscall *v16)(BaseFormComponent *); // ebx
  ActorAnimData *AnimData; // eax
  int v18; // [esp-8h] [ebp-38h]
  BSStringT Src; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v21; // [esp+2Ch] [ebp-4h]
  int v22; // [esp+38h] [ebp+8h]

  v3 = this; /*0x4e1927*/
  if ( this->member.niNode ) /*0x4e192d*/
  {
    SkinInfoByPerspective = this->vtbl->GetActiveSkinInfo(this); /*0x4e1943*/
    v5 = 0; /*0x4e1950*/
    if ( v3->vtbl->IsActor(v3) ) /*0x4e1952*/
      v5 = v3; /*0x4e1958*/
    if ( v3 == (TESObjectREFR *)reference ) /*0x4e1964*/
    {
      if ( SkinInfoByPerspective ) /*0x4e1968*/
        ActorSkinInfo_SetEquippedWeapon3D(SkinInfoByPerspective, weapon); /*0x4e196d*/
      SkinInfoByPerspective = Actor_GetSkinInfoByPerspective((Actor *)reference, reference->isThirdPerson); /*0x4e198c*/
    }
    if ( SkinInfoByPerspective ) /*0x4e1990*/
    {
      ActorSkinInfo_SetEquippedWeapon3D(SkinInfoByPerspective, weapon); /*0x4e1995*/
    }
    else if ( weapon ) /*0x4e19a1*/
    {
      if ( weapon != (TESForm *)0xFFFFFFD0 ) /*0x4e19ac*/
      {
        v6 = 9; /*0x4e19b9*/
        if ( LOBYTE(weapon[6].vtbl) == 5 ) /*0x4e19be*/
          v6 = 0xE; /*0x4e19c0*/
        v18 = v6; /*0x4e19c8*/
        v7 = (const char *)((int (__thiscall *)(TESForm *))weapon[2].vtbl->Unk_05)(&weapon[2]); /*0x4e19ce*/
        CloneAndAttachModel3D = (NiObjectNET *)Actor_LoadCloneAndAttachModel3D(v7, v18, v3, 0); /*0x4e19d1*/
        v9 = CloneAndAttachModel3D; /*0x4e19e0*/
        if ( LOBYTE(weapon[6].vtbl) == 5 ) /*0x4e19e2*/
        {
          NiObjectNET_SetName(CloneAndAttachModel3D, aBow); /*0x4e19eb*/
        }
        else
        {
          Src.m_data = 0; /*0x4e19f4*/
          Src.m_dataLen = 0; /*0x4e19f8*/
          Src.m_bufLen = 0; /*0x4e19fd*/
          v21 = 0; /*0x4e1a02*/
          BSStringT_Static_Format(&Src, "%s (%08X)", *(const char **)off_B065AC, weapon->member.refID); /*0x4e1a1a*/
          NiObjectNET_SetName(v9, Src.m_data); /*0x4e1a29*/
          v21 = 0xFFFFFFFF; /*0x4e1a33*/
          FormHeapFree((unsigned int)Src.m_data); /*0x4e1a3b*/
        }
        if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x4e1a49*/
        {
          if ( !Actor_IsWeaponOut(v5) /*0x4e1a6e*/
            && !(*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v5[1].vtbl->super.super.InitializeComponent + 0x49))(
                  v5[1].vtbl,
                  0) )
          {
            (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v5[1].vtbl->super.super.InitializeComponent + 0xC2))( /*0x4e1a86*/
              v5[1].vtbl,
              1);
          }
          vtbl = v5[1].vtbl; /*0x4e1a88*/
          v11 = (void (__thiscall *)(BaseFormComponent *))((char *)vtbl->super.super.InitializeComponent + 0x150); /*0x4e1a99*/
          v12 = ((int (__thiscall *)(TESObjectREFR *, TESObjectREFR *))v5->vtbl->GetAnimData)(v5, v5); /*0x4e1a9f*/
          (*(void (__thiscall **)(TESObjectREFRVtbl *, int, _DWORD, int))v11)(vtbl, v22, 0, v12); /*0x4e1aad*/
          v3 = this; /*0x4e1aaf*/
        }
      }
    }
    if ( v5 ) /*0x4e1ab5*/
    {
      if ( LOBYTE(weapon[6].vtbl) == 5 ) /*0x4e1abe*/
        sub_5E13D0(v5, 1); /*0x4e1ac4*/
      v13 = v5[1].vtbl; /*0x4e1ac9*/
      if ( v13 ) /*0x4e1ace*/
      {
        if ( LOBYTE(weapon[6].vtbl) == 5 ) /*0x4e1ad7*/
        {
          if ( v3 == (TESObjectREFR *)reference ) /*0x4e1ae1*/
          {
            InitializeComponent = v13->super.super.InitializeComponent; /*0x4e1ae3*/
            AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x4e1ae7*/
            (*((void (__thiscall **)(TESObjectREFRVtbl *, ActorAnimData *))InitializeComponent + 0x45))( /*0x4e1af5*/
              v13,
              AnimDataByPerspective);
          }
          v16 = v13->super.super.InitializeComponent; /*0x4e1af7*/
          AnimData = TESObjectREFR_GetAnimData(v3); /*0x4e1afb*/
          (*((void (__thiscall **)(TESObjectREFRVtbl *, ActorAnimData *))v16 + 0x45))(v13, AnimData); /*0x4e1b09*/
        }
      }
      sub_5EA1A0((int)v5, (int)v3, (_DWORD *)v3->member.niNode); /*0x4e1b11*/
      sub_5EE1B0((Actor *)v5, v2); /*0x4e1b18*/
    }
  }
}
