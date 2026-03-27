char ****__thiscall BaseProcess_GetCounterEffects_(char ****this, int a2)
{
  _DWORD *v2; // ecx
  int v3; // ebx
  char **v4; // edi
  _DWORD *v5; // ebp
  int v6; // ebp
  int v7; // esi
  char **v8; // eax

  v2 = *(_DWORD **)(a2 + 0xC);
  v3 = v2[7];
  if ( !EffectItem_IsHostile(v2) || *(float *)(a2 + 0x1C) <= 0.0 && (*(_DWORD *)(v3 + 0x58) & 2) != 0 )
    return (char ****)BaseProcess_GetCounterEffects__::Done(a2);
  v4 = 0;
  v5 = OblivionDynamicCast(
         *(void **)(a2 + 8),
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &AlchemyItem `RTTI Type Descriptor',
         0);
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 0x18))(*(_DWORD *)(a2 + 8)) == 5
    || v5 && (unsigned __int8)EffectItemList_AllEffectsHostile(v5 + 0xC) )
  {
    BaseProcess_UseCounterEffect__(this, 0x4F505543);
  }
  else if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 0x18))(*(_DWORD *)(a2 + 8)) == 1 )
  {
    BaseProcess_UseCounterEffect__(this, 0x49445543);
  }
  else
  {
    v6 = *(_DWORD *)(v3 + 0x9C);
    v7 = 0;
    if ( *(__int16 *)(v3 + 0x6C) > 0 )
    {
      while ( !v4 )
      {
        v8 = BaseProcess_UseCounterEffect__(this, *(_DWORD *)(v6 + 4 * v7++));
        v4 = v8;
        if ( v7 >= *(__int16 *)(v3 + 0x6C) )
        {
          *(this + 0x22) = (char ***)v4;
          return this;
        }
      }
    }
  }
  return (char ****)BaseProcess_GetCounterEffects__::Wrapup(a2);
}
