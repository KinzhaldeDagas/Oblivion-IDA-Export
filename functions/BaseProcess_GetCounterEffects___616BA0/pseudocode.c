void __userpurge BaseProcess_GetCounterEffects_(char ****this@<ecx>, int a2, int a3, int a4)
{
  _DWORD *v4; // ecx
  int v5; // ebx
  int v6; // edi
  _DWORD *v7; // ebp
  char **v8; // eax
  int v9; // ebp
  int v10; // esi
  char **v11; // eax

  v4 = *(_DWORD **)(a2 + 0xC); /*0x616bab*/
  v5 = v4[7]; /*0x616bae*/
  if ( !EffectItem_IsHostile(v4) || *(float *)(a2 + 0x1C) <= 0.0 && (*(_DWORD *)(v5 + 0x58) & 2) != 0 ) /*0x616bd1*/
  {
    BaseProcess_GetCounterEffects__::Done(a2); /*0x616bb8*/
  }
  else
  {
    v6 = 0; /*0x616bdc*/
    v7 = OblivionDynamicCast( /*0x616bf5*/
           *(void **)(a2 + 8),
           0,
           (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
           &AlchemyItem `RTTI Type Descriptor',
           0);
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 0x18))(*(_DWORD *)(a2 + 8)) == 5 /*0x616c0b*/
      || v7 && EffectItemList_AllEffectsHostile(v7 + 0xC) )
    {
      v8 = BaseProcess_UseCounterEffect__(this, 0x4F505543); /*0x616c7a*/
      goto LABEL_14; /*0x616c7a*/
    }
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 0x18))(*(_DWORD *)(a2 + 8)) == 1 ) /*0x616c23*/
    {
      v8 = BaseProcess_UseCounterEffect__(this, 0x49445543); /*0x616c2a*/
LABEL_14:
      BaseProcess_GetCounterEffects__::Wrapup((int)v8, a2, a3, a4); /*0x616c7f*/
      return; /*0x616c80*/
    }
    v9 = *(_DWORD *)(v5 + 0x9C); /*0x616c2c*/
    v10 = 0; /*0x616c32*/
    if ( *(__int16 *)(v5 + 0x6C) > 0 ) /*0x616c38*/
    {
      while ( !v6 ) /*0x616c42*/
      {
        v11 = BaseProcess_UseCounterEffect__(this, *(_DWORD *)(v9 + 4 * v10++)); /*0x616c4d*/
        v6 = (int)v11; /*0x616c5b*/
        if ( v10 >= *(__int16 *)(v5 + 0x6C) ) /*0x616c5d*/
        {
          *(this + 0x22) = (char ***)v11; /*0x616c63*/
          return; /*0x616c6e*/
        }
      }
    }
    BaseProcess_GetCounterEffects__::Wrapup(v6, a2, a3, a4); /*0x616c42*/
  }
}
