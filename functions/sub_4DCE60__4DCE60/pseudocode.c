void __userpurge sub_4DCE60(
        TESObjectREFR *a1@<ecx>,
        double a2@<st0>,
        double st5_0@<st2>,
        double a4@<st1>,
        int a5@<ebp>,
        _DWORD *firstPerson,
        char a7)
{
  ActorSkinInfo *v8; // eax
  PlayerCharacter *v9; // ecx
  ActorSkinInfo *SkinInfoByPerspective; // edi
  int v11; // ebx

  if ( a1->member.niNode ) /*0x4dce63*/
  {
    v8 = a1->vtbl->GetActiveSkinInfo(a1); /*0x4dce78*/
    v9 = reference; /*0x4dce7a*/
    SkinInfoByPerspective = v8; /*0x4dce82*/
    v11 = 1; /*0x4dce84*/
    if ( a1 == (TESObjectREFR *)reference ) /*0x4dce89*/
      v11 = 2; /*0x4dce8b*/
    while ( 1 ) /*0x4dce9c*/
    {
      if ( a1 == (TESObjectREFR *)v9 && v11 == 1 ) /*0x4dcea3*/
        SkinInfoByPerspective = Actor_GetSkinInfoByPerspective((Actor *)v9, v9->isThirdPerson); /*0x4dceb9*/
      if ( SkinInfoByPerspective ) /*0x4dcebd*/
        sub_47A640((int)SkinInfoByPerspective, st5_0, a4, a2, firstPerson, a7); /*0x4dcec7*/
      else
        PrintError("Creatures are not allowed to wear rings."); /*0x4dced3*/
      if ( !--v11 ) /*0x4dcede*/
        break; /*0x4dcede*/
      v9 = reference; /*0x4dce96*/
    }
    if ( a1->vtbl->IsActor(a1) ) /*0x4dceea*/
    {
      sub_5EA1A0((int)a1, a5, (_DWORD *)a1->member.niNode); /*0x4dcef9*/
      sub_5EE1B0((Actor *)a1, a2); /*0x4dcf00*/
    }
  }
}
