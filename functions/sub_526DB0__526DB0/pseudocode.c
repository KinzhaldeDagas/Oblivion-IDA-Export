LONG __userpurge sub_526DB0@<eax>(
        BSExtraDataVtbl *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5)
{
  int v7; // eax
  PlayerCharacter *v8; // ecx
  NiAVObject *niNode; // esi
  ActorAnimData *SkinInfoByPerspective; // ebx
  LONG result; // eax
  int v12; // [esp+20h] [ebp+4h]

  v7 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetActiveSkinInfo)( /*0x526dc5*/
         a5,
         a4,
         a3,
         a2);
  v8 = reference; /*0x526dc7*/
  niNode = (NiAVObject *)a5->member.niNode; /*0x526dcf*/
  SkinInfoByPerspective = (ActorAnimData *)v7; /*0x526dd2*/
  v12 = 1; /*0x526dd4*/
  if ( a5 != (TESObjectREFR *)reference ) /*0x526ddc*/
    goto LABEL_7; /*0x526ddc*/
  v12 = 2; /*0x526dde*/
  while ( 1 ) /*0x526df6*/
  {
    if ( a5 == (TESObjectREFR *)v8 && v12 == 1 ) /*0x526dff*/
    {
      SkinInfoByPerspective = (ActorAnimData *)Actor_GetSkinInfoByPerspective((Actor *)v8, v8->isThirdPerson); /*0x526e1d*/
      niNode = (NiAVObject *)PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x526e24*/
    }
LABEL_7:
    sub_5268D0(a1, a2, a3, a4, a5, SkinInfoByPerspective); /*0x526e26*/
    result = sub_47BC40((ActorSkinInfo *)SkinInfoByPerspective, a2, a3, a4); /*0x526e31*/
    if ( niNode ) /*0x526e38*/
    {
      NiAVObject_InitializePropertyState(niNode); /*0x526e3c*/
      NiNode_UpdateDynamicEffectState((NiNode *)niNode); /*0x526e43*/
      niNode->vtbl->UpdateWorldBound(niNode); /*0x526e4f*/
      a4 = 0.0; /*0x526e51*/
      result = NiAVObject_UpdateNiAVObject(niNode, 0.0, 0); /*0x526e5b*/
    }
    if ( !--v12 ) /*0x526e65*/
      break; /*0x526e65*/
    v8 = reference; /*0x526df0*/
  }
  return result; /*0x526e67*/
}
