int __userpurge MagicItem_GetFXEffect_::CheckPOSN@<eax>(_DWORD *a1@<esi>, int a2, int a3, int a4, int a5)
{
  if ( (*(int (**)(void))(*a1 + 0x18))() == 5 /*0x419b55*/
    || (*(int (__thiscall **)(_DWORD *))(*a1 + 0x18))(a1) == 7
    && (unsigned __int8)EffectItemList_AllEffectsHostile(a1 + 3) )
  {
    return MagicItem_GetFXEffect_::Return_POSN(a2); /*0x419b3e*/
  }
  else
  {
    return MagicItem_GetFXEffect_::CheckDISE(a1, a2, a3, a4, a5); /*0x419b5d*/
  }
}
