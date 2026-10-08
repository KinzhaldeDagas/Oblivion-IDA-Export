void __thiscall MagicShaderHitEffect::~MagicShaderHitEffect(MagicShaderHitEffect *this)
{
  void *unknown_48; // eax
  TESObjectREFR *targetReference; // eax
  NiNode *NodeByPerspective; // eax
  NiNode *v5; // eax
  volatile LONG *unknown_40; // eax
  volatile LONG *unknown_3C; // edi
  LONG (__stdcall *v8)(volatile LONG *); // ebp
  NiAVObject *v9; // ecx
  volatile LONG *v10; // edi
  volatile LONG *v11; // edi
  _DWORD *unknown_34; // edx
  TESObjectREFR *v13; // eax
  unsigned int **sound; // ecx
  int v15; // edx
  const char *v16; // eax
  void *v17; // edx
  unsigned int v18; // eax
  const char *v19; // eax
  volatile LONG *v20; // edi
  volatile LONG *v21; // edi
  volatile LONG *v22; // edi
  char v23[260]; // [esp+28h] [ebp-114h] BYREF
  int v24; // [esp+138h] [ebp-4h]

  this->super.super.vtable = (BSTempEffectVtbl *)&MagicShaderHitEffect::`vftable'; /*0x6a0b01*/
  unknown_48 = this->textureEffectData_48; /*0x6a0b07*/
  v24 = 3; /*0x6a0b0e*/
  if ( unknown_48 ) /*0x6a0b19*/
  {
    targetReference = this->super.targetReference; /*0x6a0b1b*/
    if ( targetReference == (TESObjectREFR *)reference ) /*0x6a0b26*/
    {
      NodeByPerspective = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x6a0b2a*/
      if ( NodeByPerspective ) /*0x6a0b31*/
        TESEffectShader_RemoveTextureEffectFromScenegraph(NodeByPerspective, (int)this->textureEffectData_48);// Verified (Oblivion): MagicShaderHitEffect destructor invokes TESEffectShader_RemoveTextureEffectFromScenegraph before releasing textureEffectData_48, ensuring matching scenegraph properties no longer retain the effect's object. /*0x6a0b3b*/
      v5 = PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x6a0b47*/
    }
    else
    {
      if ( !targetReference ) /*0x6a0b50*/
        goto LABEL_10; /*0x6a0b50*/
      v5 = targetReference->vtbl->GetNiNode(this->super.targetReference); /*0x6a0b5c*/
    }
    if ( v5 ) /*0x6a0b60*/
      TESEffectShader_RemoveTextureEffectFromScenegraph(v5, (int)this->textureEffectData_48); /*0x6a0b6a*/
  }
LABEL_10:
  unknown_40 = (volatile LONG *)this->attachedNode_40;// Verified (Oblivion): shader field +0x40 is detached from its parent and released as a reference-counted NiAVObject/NiNode. /*0x6a0b6f*/
  if ( unknown_40 ) /*0x6a0b74*/
    NiProperty_DetachFromActorScenegraphs(unknown_40, (int)this->shaderProperty_3C);// Verified (Oblivion): shaderProperty_3C is detached from actor scenegraphs and released during destruction. /*0x6a0b7e*/
  unknown_3C = (volatile LONG *)this->shaderProperty_3C;// Verified (Oblivion): shaderProperty_3C is a ParticleShaderProperty* (subtype ID 0xE), detached from the target's scenegraph and reference-count released during destruction. /*0x6a0b83*/
  v8 = InterlockedDecrement; /*0x6a0b88*/
  if ( unknown_3C ) /*0x6a0b8e*/
  {
    if ( !v8(unknown_3C + 1) ) /*0x6a0b94*/
      (**(void (__thiscall ***)(void *, int))unknown_3C)((void *)unknown_3C, 1); /*0x6a0ba6*/
    this->shaderProperty_3C = 0; /*0x6a0ba8*/
  }
  v9 = (NiAVObject *)this->attachedNode_40; /*0x6a0bab*/
  if ( v9 ) /*0x6a0bb0*/
    NiAVObject_SetParentAndDetachFromOld(v9, 0); /*0x6a0bb3*/
  v10 = (volatile LONG *)this->attachedNode_40; /*0x6a0bb8*/
  if ( v10 ) /*0x6a0bbd*/
  {
    if ( !v8(v10 + 1) ) /*0x6a0bc3*/
      (**(void (__thiscall ***)(void *, int))v10)((void *)v10, 1); /*0x6a0bd5*/
    this->attachedNode_40 = 0; /*0x6a0bd7*/
  }
  v11 = (volatile LONG *)this->textureEffectData_48;// Verified (Oblivion): textureEffectData_48 is detached from target nodes and reference-count released during destruction. /*0x6a0bda*/
  if ( v11 ) /*0x6a0bdf*/
  {
    if ( !v8(v11 + 1) ) /*0x6a0be5*/
      (**(void (__thiscall ***)(void *, int))v11)((void *)v11, 1); /*0x6a0bf7*/
    this->textureEffectData_48 = 0; /*0x6a0bf9*/
  }
  unknown_34 = this->effectShader_34;           // Verified (Oblivion): effectShader_34 is TESEffectShader*. The field is assigned from EffectSetting::effectShader at +0x78, compared to the Life Detected shader singleton, and consumed by shader-property construction/update paths. /*0x6a0bfc*/
  if ( unknown_34 ) /*0x6a0c01*/
  {
    v13 = this->super.targetReference; /*0x6a0c07*/
    sound = (unsigned int **)MEMORY[0xB33398]->sound; /*0x6a0c12*/
    if ( v13 ) /*0x6a0c15*/
    {
      if ( sound ) /*0x6a0c19*/
      {
        v15 = unknown_34[3]; /*0x6a0c1b*/
        if ( v15 == 0x852FE || v15 == 0x84A51 ) /*0x6a0c2c*/
          SoundManager_StopRefLoopingSoundsWithFade(sound, (LONG)v13, 1.0); /*0x6a0c35*/
      }
    }
    v16 = *((const char **)this->effectShader_34 + 0x42); /*0x6a0c43*/
    if ( !v16 ) /*0x6a0c47*/
      v16 = EmptyString; /*0x6a0c49*/
    _sprintf(v23, "%s\\%s", "Textures", v16); /*0x6a0c5e*/
    sub_440420(v23, 0); /*0x6a0c72*/
    v17 = this->effectShader_34; /*0x6a0c77*/
    LOWORD(v18) = *((_WORD *)v17 + 0x80); /*0x6a0c7a*/
    if ( (_WORD)v18 == 0xFFFF ) /*0x6a0c85*/
      v18 = strlen(*((const char **)v17 + 0x3F)); /*0x6a0c8d*/
    else
      v18 = (unsigned __int16)v18; /*0x6a0c9d*/
    if ( v18 ) /*0x6a0ca2*/
    {
      v19 = *((const char **)v17 + 0x3F); /*0x6a0ca4*/
      if ( !v19 ) /*0x6a0cac*/
        v19 = EmptyString; /*0x6a0cae*/
      _sprintf(v23, "%s\\%s", "Textures", v19); /*0x6a0cc3*/
      sub_440420(v23, 0); /*0x6a0cd7*/
    }
  }
  v20 = (volatile LONG *)this->textureEffectData_48; /*0x6a0cdc*/
  LOBYTE(v24) = 2; /*0x6a0ce1*/
  if ( v20 ) /*0x6a0ce9*/
  {
    if ( !v8(v20 + 1) ) /*0x6a0cef*/
      (**(void (__thiscall ***)(void *, int))v20)((void *)v20, 1); /*0x6a0d01*/
  }
  v21 = (volatile LONG *)this->attachedNode_40; /*0x6a0d03*/
  LOBYTE(v24) = 1; /*0x6a0d08*/
  if ( v21 ) /*0x6a0d10*/
  {
    if ( !v8(v21 + 1) ) /*0x6a0d16*/
      (**(void (__thiscall ***)(void *, int))v21)((void *)v21, 1); /*0x6a0d28*/
  }
  v22 = (volatile LONG *)this->shaderProperty_3C; /*0x6a0d2a*/
  LOBYTE(v24) = 0; /*0x6a0d2f*/
  if ( v22 ) /*0x6a0d36*/
  {
    if ( !v8(v22 + 1) ) /*0x6a0d3c*/
      (**(void (__thiscall ***)(void *, int))v22)((void *)v22, 1); /*0x6a0d4e*/
  }
  v24 = 0xFFFFFFFF; /*0x6a0d52*/
  MagicHitEffect_destr(this); /*0x6a0d5d*/
}
