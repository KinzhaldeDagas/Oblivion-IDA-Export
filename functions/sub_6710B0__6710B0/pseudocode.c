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

  sub_602A70((int)a1, bp0, a3, a4, a5, a6, a7);
  if ( a1->firstPersonNiNode )
  {
    TogglePOV(a1, a1->isThirdPerson == 0);
    if ( a1->DisableFading )
      RestoreCamera(a1);
  }
  ActiveEffect_Base_PostLinkAEList((_DWORD *)a1->unk1E4, (int)a1);
  unk578 = (TESObjectREFR *)a1->unk578;
  if ( unk578 )
  {
    unk57CState = a1->unk57CState;
    if ( unk57CState != 3 )
      sub_66D120((int)a1, a3, a4, *(float *)&a1->unk584, unk578, unk57CState, *(float *)&a1->unk584);
  }
  sub_6930F0();
  NightEyeEffect_SetPlayerShader_();
  sub_664320(a1);
  a2 = a1->worldFoV;
  SetCameraFOV_0(g_worldScenegraph, a2, 0.0);
  UpdateParticleShaderFOVData(a2);
}
