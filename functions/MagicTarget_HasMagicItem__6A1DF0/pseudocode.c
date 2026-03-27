int __thiscall MagicTarget_HasMagicItem(void *this, int a2)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  if ( v2 )
    return MagicTarget_HasMagicItem_::EffectLoopTest(v2, 0, a2, a2);
  else
    return MagicTarget_HasMagicItem_::Done(a2);
}
