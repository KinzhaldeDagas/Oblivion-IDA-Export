// Verified (Oblivion): walks the temp-effect RTTI chain to NiRTTI_MagicShaderHitEffect, then filters by targetReference, bWeaponEnchantment_28, bFinished and TESEffectShader pointer. It keeps one match and marks duplicate/different-shader entries finished. Fallout's analogous ProcessLists routine uses a distinct NiShader collection; Oblivion uses ActorProcessManager::extendedTempEffects.
MagicShaderHitEffect *__thiscall ActorProcessManager_FindWeaponEnchantmentShader(
        ActorProcessManager *this,
        TESObjectREFR *targetReference,
        TESEffectShader *effectShader)
{
  char v3; // al
  tListVoid *p_extendedTempEffects; // esi
  MagicShaderHitEffect *v5; // ebp
  TESObjectREFR *v6; // edi
  char v7; // bl
  int *v8; // ebx
  int v9; // esi
  void (__thiscall ***v10)(_DWORD, int); // edi
  int v11; // eax
  int v13; // [esp+10h] [ebp-4h] BYREF

  v3 = 0; /*0x679244*/
  p_extendedTempEffects = &this->extendedTempEffects; /*0x679246*/
  v13 = 0; /*0x679249*/
  v5 = 0; /*0x67924d*/
  if ( this->extendedTempEffects.node.next ) /*0x67924f*/
  {
    v6 = targetReference; /*0x679264*/
  }
  else
  {
    v6 = 0; /*0x679255*/
    v3 = 1; /*0x679259*/
    if ( !p_extendedTempEffects->node.data ) /*0x679257*/
    {
      v7 = 1; /*0x679260*/
      goto LABEL_6; /*0x679262*/
    }
  }
  v7 = 0; /*0x679268*/
LABEL_6:
  if ( (v3 & 1) != 0 ) /*0x67926c*/
  {
    if ( v6 ) /*0x679270*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->member) ) /*0x679276*/
        ((void (__thiscall *)(TESObjectREFR *, int))v6->vtbl->super.super.InitializeComponent)(v6, 1); /*0x679288*/
    }
  }
  if ( !v7 ) /*0x67928c*/
  {
    v8 = (int *)p_extendedTempEffects; /*0x679292*/
    if ( p_extendedTempEffects ) /*0x679296*/
    {
      do /*0x679324*/
      {
        v9 = *NodeVoid_GetDataAddRef(v8, &v13); // Verified (Oblivion): weapon-shader manager scan obtains a temporary AddRef of each NodeVoid data object before reading its RTTI/fields. /*0x6792ac*/
        if ( v13 ) /*0x6792b4*/
        {
          v10 = (void (__thiscall ***)(_DWORD, int))v13; /*0x6792b6*/
          if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x6792bc*/
            (**v10)(v10, 1); /*0x6792d2*/
        }
        if ( v9 ) /*0x6792d6*/
        {
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9); /*0x6792df*/
          if ( v11 ) /*0x6792e3*/
          {
            while ( (BSStringT *)v11 != &NiRTTI_MagicShaderHitEffect ) /*0x6792ea*/
            {
              v11 = *(_DWORD *)(v11 + 4); /*0x6792ec*/
              if ( !v11 ) /*0x6792f1*/
                goto LABEL_27; /*0x6792f1*/
            }
            if ( *(TESObjectREFR **)(v9 + 0x1C) == targetReference ) /*0x6792fc*/
            {                                   // Verified (Oblivion): only bWeaponEnchantment_28 entries are considered by this de-duplication helper; finished entries are skipped.
              if ( *(_BYTE *)(v9 + 0x28) ) /*0x6792fe*/
              {
                if ( !*(_BYTE *)(v9 + 0x24) ) /*0x679304*/
                {                               // Verified (Oblivion): a matching target with a different TESEffectShader, or a second duplicate, is marked bFinished so the old weapon enchantment visual will retire.
                  if ( *(TESEffectShader **)(v9 + 0x34) != effectShader || v5 ) /*0x679315*/
                    *(_BYTE *)(v9 + 0x24) = 1; /*0x67931b*/
                  else
                    v5 = (MagicShaderHitEffect *)v9; /*0x679317*/
                }
              }
            }
          }
        }
LABEL_27:
        v8 = (int *)v8[1]; /*0x67931f*/
      }
      while ( v8 ); /*0x679324*/
    }
  }
  return v5; /*0x67932a*/
}
