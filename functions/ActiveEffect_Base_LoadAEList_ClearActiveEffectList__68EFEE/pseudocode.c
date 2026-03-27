int __usercall ActiveEffect_Base_LoadAEList__::ClearActiveEffectList@<eax>(
        _DWORD *a1@<ebx>,
        int a2,
        int a3,
        int a4,
        __int16 Dst,
        int a6,
        int a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  if ( a1[1] )
    return ActiveEffect_Base_LoadAEList__::ClearActiveEffectList_Loop(
             a1,
             a2,
             a3,
             a4,
             Dst,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12);
  else
    return ActiveEffect_Base_LoadAEList__::LoadActiveEffectCount(a1, a2, a3, a4, Dst, a6, a7, a8, a9, a10, a11, a12);
}
