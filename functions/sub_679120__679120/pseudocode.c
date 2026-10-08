// Verified (Oblivion): walks each temp effect's GetType/parent RTTI chain to NiRTTI_MagicShaderHitEffect, filters by target, unfinished state and clear bWeaponEnchantment_28, and selects the smallest BSTempEffect::elapsedSeconds. A prior candidate with TESEffectShader::Data.cFlags bit 0 can be displaced by one without it. The exact meaning of bit 0 remains Unknown.
MagicShaderHitEffect *__thiscall ActorProcessManager_FindTargetNonWeaponShaderHitEffect(
        ActorProcessManager *this,
        TESObjectREFR *targetReference)
{
  char v2; // al
  tListVoid *p_extendedTempEffects; // esi
  int v4; // ebp
  TESObjectREFR *v5; // edi
  char v6; // bl
  int *v7; // ebx
  int v8; // esi
  void (__thiscall ***v9)(_DWORD, int); // edi
  int v10; // eax
  float v12; // [esp+Ch] [ebp-8h]
  int v13; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x679125*/
  v13 = 0; /*0x679128*/
  p_extendedTempEffects = &this->extendedTempEffects; /*0x679132*/
  v12 = flt_A32048; /*0x679135*/
  v4 = 0; /*0x679139*/
  if ( this->extendedTempEffects.node.next ) /*0x67913b*/
  {
    v5 = targetReference; /*0x679150*/
  }
  else
  {
    v5 = 0; /*0x679141*/
    v2 = 1; /*0x679145*/
    if ( !p_extendedTempEffects->node.data ) /*0x679143*/
    {
      v6 = 1; /*0x67914c*/
      goto LABEL_6; /*0x67914e*/
    }
  }
  v6 = 0; /*0x679154*/
LABEL_6:
  if ( (v2 & 1) != 0 ) /*0x679158*/
  {
    if ( v5 ) /*0x67915c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v5->member) ) /*0x679162*/
        ((void (__thiscall *)(TESObjectREFR *, int))v5->vtbl->super.super.InitializeComponent)(v5, 1); /*0x679174*/
    }
  }
  if ( !v6 ) /*0x679178*/
  {
    v7 = (int *)p_extendedTempEffects; /*0x67917e*/
    if ( p_extendedTempEffects ) /*0x679182*/
    {
      do /*0x67922d*/
      {
        v8 = *NodeVoid_GetDataAddRef(v7, &v13); // Verified (Oblivion): temp-effect iteration calls NodeVoid_GetDataAddRef before inspecting each effect, then decrements the returned temporary ref after the visit. /*0x679194*/
        if ( v13 ) /*0x67919c*/
        {
          v9 = (void (__thiscall ***)(_DWORD, int))v13; /*0x67919e*/
          if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x6791a4*/
            (**v9)(v9, 1); /*0x6791ba*/
        }
        if ( v8 ) /*0x6791be*/
        {
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x6791c7*/
          if ( v10 ) /*0x6791cb*/
          {
            while ( (BSStringT *)v10 != &NiRTTI_MagicShaderHitEffect ) /*0x6791d5*/
            {
              v10 = *(_DWORD *)(v10 + 4); /*0x6791d7*/
              if ( !v10 ) /*0x6791dc*/
                goto LABEL_27; /*0x6791dc*/
            }
            if ( *(TESObjectREFR **)(v8 + 0x1C) == targetReference /*0x679216*/
              && !*(_BYTE *)(v8 + 0x28)         // Verified (Oblivion): candidate target must match and bWeaponEnchantment_28 must be clear; lower BSTempEffect::elapsedSeconds is preferred. A previous candidate with TESEffectShader::Data.cFlags bit 0 is displaced by a candidate without that bit. Semantic name of bit 0 remains Unknown.
              && (v12 > (double)*(float *)(v8 + 0x10)
               || v4
               && TESEffectShader_HasFlagBits(*(_BYTE **)(v4 + 0x34), 1u)
               && !TESEffectShader_HasFlagBits(*(_BYTE **)(v8 + 0x34), 1u)) )
            {
              v4 = v8; /*0x679222*/
              v12 = *(float *)(v8 + 0x10); /*0x679224*/
            }
          }
        }
LABEL_27:
        v7 = (int *)v7[1]; /*0x679228*/
      }
      while ( v7 ); /*0x67922d*/
    }
  }
  return (MagicShaderHitEffect *)v4; /*0x679234*/
}
