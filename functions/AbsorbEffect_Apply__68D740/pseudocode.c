int __thiscall AbsorbEffect_Apply(float *this)
{
  float v3; // [esp+0h] [ebp-4h]

  ValueModifierEffect_Apply(this, v3);
  if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 0x1C) + 0x58) & 2) != 0 || 0.0 == *(this + 7) )
    return AbsorbEffect_Apply_::ApplyOppositeToCaster();
  else
    return AbsorbEffect_Apply_::CasterAttributeWarning();
}
