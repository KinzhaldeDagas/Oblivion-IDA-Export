int __cdecl Cmd_Cast_::CheckOnTouch(int a1, int a2, int a3, int a4)
{
  if ( EffectItemList_HasTouchEffect((_DWORD *)(a4 + 0xC)) )
    return Cmd_Cast_::CastOnTouch();
  else
    return Cmd_Cast_::CastOnSelf();
}
