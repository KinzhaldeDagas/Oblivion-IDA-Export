// Verified (Oblivion): walks the temp-effect RTTI chain to NiRTTI_MagicShaderHitEffect and marks matching targetReference/TESEffectShader effects finished.
LONG __thiscall ActorProcessManager_FinishShaderEffectsForTarget(
        ActorProcessManager *this,
        TESObjectREFR *targetReference,
        TESEffectShader *effectShader)
{
  LONG result; // eax
  tListVoid *p_extendedTempEffects; // esi
  TESEffectShader *v5; // edi
  char v6; // bl
  int *v7; // ebx
  TESEffectShader *v8; // ebp
  int v9; // esi
  TESEffectShader *v10; // edi

  result = 0; /*0x678e73*/
  p_extendedTempEffects = &this->extendedTempEffects; /*0x678e78*/
  if ( this->extendedTempEffects.node.next ) /*0x678e75*/
  {
    v5 = effectShader; /*0x678e91*/
  }
  else
  {
    v5 = 0; /*0x678e82*/
    result = 1; /*0x678e86*/
    if ( !p_extendedTempEffects->node.data ) /*0x678e84*/
    {
      v6 = 1; /*0x678e8d*/
      goto LABEL_6; /*0x678e8f*/
    }
  }
  v6 = 0; /*0x678e95*/
LABEL_6:
  if ( (result & 1) != 0 ) /*0x678e99*/
  {
    if ( v5 ) /*0x678e9d*/
    {
      result = InterlockedDecrement((volatile LONG *)&v5->super.member); /*0x678ea3*/
      if ( !result ) /*0x678eab*/
        result = ((int (__thiscall *)(TESEffectShader *, int))v5->super.vtbl->super.InitializeComponent)(v5, 1); /*0x678eb5*/
    }
  }
  if ( !v6 ) /*0x678eb9*/
  {
    v7 = (int *)p_extendedTempEffects; /*0x678ebb*/
    if ( p_extendedTempEffects ) /*0x678ebf*/
    {
      v8 = effectShader; /*0x678ec2*/
      do /*0x678f37*/
      {
        v9 = *NodeVoid_GetDataAddRef(v7, (int *)&effectShader);// Verified (Oblivion): shader cleanup scan obtains a temporary AddRef for each temp-effect node and releases it after checking the effect. /*0x678ed2*/
        result = (LONG)effectShader; /*0x678ed4*/
        if ( effectShader ) /*0x678eda*/
        {
          v10 = effectShader; /*0x678edc*/
          result = InterlockedDecrement((volatile LONG *)&effectShader->super.member); /*0x678ee2*/
          if ( !result ) /*0x678eea*/
            result = ((int (__thiscall *)(TESEffectShader *, int))v10->super.vtbl->super.InitializeComponent)(v10, 1); /*0x678ef8*/
        }
        if ( v9 ) /*0x678efc*/
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9); /*0x678f05*/
          if ( result ) /*0x678f09*/
          {
            while ( (BSStringT *)result != &NiRTTI_MagicShaderHitEffect ) /*0x678f15*/
            {
              result = *(_DWORD *)(result + 4); /*0x678f17*/
              if ( !result ) /*0x678f1c*/
                goto LABEL_24; /*0x678f1c*/
            }
            if ( *(TESObjectREFR **)(v9 + 0x1C) == targetReference && *(TESEffectShader **)(v9 + 0x34) == v8 ) /*0x678f2c*/
              *(_BYTE *)(v9 + 0x24) = 1; /*0x678f2e*/
          }
        }
LABEL_24:
        v7 = (int *)v7[1]; /*0x678f32*/
      }
      while ( v7 ); /*0x678f37*/
    }
  }
  return result; /*0x678f3a*/
}
