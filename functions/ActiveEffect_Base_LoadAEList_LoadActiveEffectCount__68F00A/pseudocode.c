int __usercall ActiveEffect_Base_LoadAEList__::LoadActiveEffectCount@<eax>(
        _DWORD *a1@<ebx>,
        int a2,
        int a3,
        int a4,
        int Dst,
        int a6,
        int a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  *a1 = 0; /*0x68f010*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 2u); /*0x68f01d*/
  if ( !(_WORD)Dst ) /*0x68f029*/
    JUMPOUT(0x68F09B); /*0x68f09b*/
  return ActiveEffect_Base_LoadAEList__::LoadActiveEffects_Loop(a2, a3, a4, Dst, a6, a7, a8, a9, a10, a11, a12);
}
