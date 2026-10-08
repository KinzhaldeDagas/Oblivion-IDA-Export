// Creates or reuses a __TempBlendSequence__ for the current pose, then transitions from that temporary pose to the requested destination sequence through 0x6C9D30. ActorAnimData_PlaySequence uses this for player/camera-visible roots when a normal cross-fade cannot be used.
char __thiscall NiControllerManager_BlendFromPose(
        int **this,
        NiControllerSequence *a2,
        float a3,
        float a4,
        NiD3DPass *a5,
        int a6)
{
  NiControllerSequence *TempBlendSequence; // eax

  TempBlendSequence = (NiControllerSequence *)NiControllerManager_GetOrCreateTempBlendSequence(this, (int)a2, a6); /*0x6c5c7b*/
  return sub_6C9D30(TempBlendSequence, a2, a4, a3, a5, 1.0, 1.0, 0); /*0x6c5cad*/
}
