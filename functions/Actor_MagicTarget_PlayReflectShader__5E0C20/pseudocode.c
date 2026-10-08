void __thiscall Actor_MagicTarget_PlayReflectShader(char *this, int a2, int a3)
{
  int ReflectShader; // edi
  NiObject *v5; // eax
  NiObject *v6; // esi

  ReflectShader = Magic_GetReflectShader(); /*0x5e0c4c*/
  v5 = (NiObject *)FormHeapAlloc(0x4Cu); /*0x5e0c4e*/
  if ( v5 ) /*0x5e0c64*/
    v6 = MagicShaderHitEffect_constr_args2(v5, (TESObjectREFR *)(this + 0xFFFFFF98), ReflectShader, 0.0); /*0x5e0c78*/
  else
    v6 = 0; /*0x5e0c7c*/
  if ( ((unsigned __int8 (__thiscall *)(NiObject *))v6->__vftable[1].Load)(v6) ) /*0x5e0c8d*/
    ActorProcessManager_RegisterTempEffect((ActorProcessManager *)&qword_B3BB2C[0x75], (BSTempEffect *)v6); /*0x5e0c99*/
  else
    v6->__vftable->super.Destructor((NiRefObject *)v6, 1); /*0x5e0cba*/
}
