void __userpurge sub_6710B0(
        PlayerCharacter *a1@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  TESObjectREFR *unk578; // eax
  UInt32 unk57CState; // ecx
  float a2; // [esp+14h] [ebp+8h]

  sub_602A70((int)a1, bp0, a3, a4, a5, a6, a7); /*0x6710bf*/
  if ( a1->firstPersonNiNode ) /*0x6710c4*/
  {
    TogglePOV(a1, a1->isThirdPerson == 0); /*0x6710da*/
    if ( a1->DisableFading ) /*0x6710df*/
      RestoreCamera(a1); /*0x6710ea*/
  }
  ActiveEffect_Base_PostLinkAEList((EffectNode *)a1->unk1E4, (TESObjectREFR *)a1); /*0x6710f7*/
  unk578 = (TESObjectREFR *)a1->unk578; /*0x6710fc*/
  if ( unk578 ) /*0x671107*/
  {
    unk57CState = a1->unk57CState; /*0x671109*/
    if ( unk57CState != 3 ) /*0x671112*/
      sub_66D120((int)a1, a3, a4, *(float *)&a1->unk584, unk578, unk57CState, *(float *)&a1->unk584); /*0x671122*/
  }
  sub_6930F0(); /*0x671127*/
  NightEyeEffect_SetPlayerShader_(); /*0x67112c*/
  sub_664320(a1); /*0x671133*/
  a2 = a1->worldFoV; /*0x67114f*/
  SetCameraFOV_0((SceneGraph *)g_WorldSceneReceiverRoot, a2, 0.0); /*0x671156*/
  UpdateParticleShaderFOVData(a2); /*0x671163*/
}
