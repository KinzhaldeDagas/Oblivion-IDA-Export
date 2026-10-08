void __thiscall Actor_MagicTarget_PlayAbsorbShader(char *this, int a2, int a3)
{
  int AbsorbShader; // edi
  NiObject *v5; // eax
  NiObject *v6; // esi

  AbsorbShader = Magic_GetAbsorbShader(); /*0x5e0b9c*/
  v5 = (NiObject *)FormHeapAlloc(0x4Cu); /*0x5e0b9e*/
  if ( v5 ) /*0x5e0bb4*/
    v6 = MagicShaderHitEffect_constr_args2(v5, (TESObjectREFR *)(this + 0xFFFFFF98), AbsorbShader, 0.0); /*0x5e0bc8*/
  else
    v6 = 0; /*0x5e0bcc*/
  if ( ((unsigned __int8 (__thiscall *)(NiObject *))v6->__vftable[1].Load)(v6) ) /*0x5e0bdd*/
    ActorProcessManager_RegisterTempEffect((ActorProcessManager *)&qword_B3BB2C[0x75], (BSTempEffect *)v6); /*0x5e0be9*/
  else
    v6->__vftable->super.Destructor((NiRefObject *)v6, 1); /*0x5e0c0a*/
}
