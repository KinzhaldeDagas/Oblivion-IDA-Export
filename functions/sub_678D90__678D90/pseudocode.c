// Verified (Oblivion): walks the temp-effect RTTI chain to NiRTTI_MagicHitEffect; for matching targetReference, calls the hit-effect detach virtual and marks the effect finished.
LONG __thiscall ActorProcessManager_FinishHitEffectsForTarget(
        ActorProcessManager *this,
        TESObjectREFR *targetReference)
{
  LONG result; // eax
  tListVoid *p_extendedTempEffects; // esi
  TESObjectREFR *v4; // edi
  char v5; // bl
  int *v6; // ebp
  TESObjectREFR *v7; // ebx
  int v8; // esi
  TESObjectREFR *v9; // edi

  result = 0; /*0x678d93*/
  p_extendedTempEffects = &this->extendedTempEffects; /*0x678d98*/
  if ( this->extendedTempEffects.node.next ) /*0x678d95*/
  {
    v4 = targetReference; /*0x678db1*/
  }
  else
  {
    v4 = 0; /*0x678da2*/
    result = 1; /*0x678da6*/
    if ( !p_extendedTempEffects->node.data ) /*0x678da4*/
    {
      v5 = 1; /*0x678dad*/
      goto LABEL_6; /*0x678daf*/
    }
  }
  v5 = 0; /*0x678db5*/
LABEL_6:
  if ( (result & 1) != 0 ) /*0x678db9*/
  {
    if ( v4 ) /*0x678dbd*/
    {
      result = InterlockedDecrement((volatile LONG *)&v4->member); /*0x678dc3*/
      if ( !result ) /*0x678dcb*/
        result = ((int (__thiscall *)(TESObjectREFR *, int))v4->vtbl->super.super.InitializeComponent)(v4, 1); /*0x678dd5*/
    }
  }
  if ( !v5 ) /*0x678dd9*/
  {
    v6 = (int *)p_extendedTempEffects; /*0x678ddc*/
    if ( p_extendedTempEffects ) /*0x678de0*/
    {
      v7 = targetReference; /*0x678de2*/
      do /*0x678e57*/
      {
        v8 = *NodeVoid_GetDataAddRef(v6, (int *)&targetReference); /*0x678df2*/
        result = (LONG)targetReference; /*0x678df4*/
        if ( targetReference ) /*0x678dfa*/
        {
          v9 = targetReference; /*0x678dfc*/
          result = InterlockedDecrement((volatile LONG *)&targetReference->member); /*0x678e02*/
          if ( !result ) /*0x678e0a*/
            result = ((int (__thiscall *)(TESObjectREFR *, int))v9->vtbl->super.super.InitializeComponent)(v9, 1); /*0x678e18*/
        }
        if ( v8 ) /*0x678e1c*/
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x678e25*/
          if ( result ) /*0x678e29*/
          {
            while ( (BSStringT *)result != &NiRTTI_MagicHitEffect ) /*0x678e35*/
            {
              result = *(_DWORD *)(result + 4); /*0x678e37*/
              if ( !result ) /*0x678e3c*/
                goto LABEL_23; /*0x678e3c*/
            }
            if ( *(TESObjectREFR **)(v8 + 0x1C) == v7 ) /*0x678e43*/
            {
              result = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x6C))(v8); /*0x678e4c*/
              *(_BYTE *)(v8 + 0x24) = 1; /*0x678e4e*/
            }
          }
        }
LABEL_23:
        v6 = (int *)v6[1]; /*0x678e52*/
      }
      while ( v6 ); /*0x678e57*/
    }
  }
  return result; /*0x678e5a*/
}
