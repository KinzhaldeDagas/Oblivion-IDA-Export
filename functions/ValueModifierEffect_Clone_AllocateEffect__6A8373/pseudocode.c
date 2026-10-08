void __thiscall ValueModifierEffect_Clone_::AllocateEffect(void *this)
{
  ActiveEffect *v2; // eax
  int v3; // edi
  int v4; // eax

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x6a8377*/
  v3 = 0; /*0x6a8383*/
  if ( v2 ) /*0x6a838b*/
  {
    ValueModifierEffect_constr(v2, *((MagicCaster **)this + 9), *((MagicItem **)this + 2), *((EffectItem **)this + 3)); /*0x6a839b*/
    v3 = v4; /*0x6a83a0*/
  }
  (*(void (__cdecl **)(int))(*(_DWORD *)this + 0x2C))(v3); /*0x6a83b2*/
  ValueModifierEffect_Clone_::Epilogue(); /*0x6a83b5*/
}
