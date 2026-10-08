void __thiscall TelekinesisEffect_Remove(float *this, int a2, float a3)
{
  sub_6A7830(this); /*0x6a7e73*/
  ActorProcessManager_FinishShaderEffectsForTarget( /*0x6a7e8b*/
    (ActorProcessManager *)&qword_B3BB2C[0x75],
    *((TESObjectREFR **)this + 0x12),
    *(TESEffectShader **)(*(_DWORD *)(*((_DWORD *)this + 3) + 0x1C) + 0x78));
  ValueModifierEffect_Remove(this, a2, a3); /*0x6a7e93*/
}
