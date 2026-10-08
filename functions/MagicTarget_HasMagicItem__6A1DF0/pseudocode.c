void __thiscall MagicTarget_HasMagicItem(void *this, int a2)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this); /*0x6a1df7*/
  if ( v2 ) /*0x6a1dfd*/
    MagicTarget_HasMagicItem_::EffectLoopTest(v2, 0, a2, a2); /*0x6a1e01*/
  else
    MagicTarget_HasMagicItem_::Done(a2); /*0x6a1dfd*/
}
