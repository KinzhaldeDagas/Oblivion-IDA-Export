int __userpurge MagicItem_GetFXEffect_::CheckPOSN@<eax>(_DWORD *a1@<esi>, int a2)
{
  if ( (*(int (**)(void))(*a1 + 0x18))() == 5
    || (*(int (__thiscall **)(_DWORD *))(*a1 + 0x18))(a1) == 7
    && (unsigned __int8)EffectItemList_AllEffectsHostile(a1 + 3) )
  {
    return MagicItem_GetFXEffect_::Return_POSN(a2);
  }
  else
  {
    return MagicItem_GetFXEffect_::CheckDISE(a2);
  }
}
