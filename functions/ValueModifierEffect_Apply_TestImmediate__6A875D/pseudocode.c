int __usercall ValueModifierEffect_Apply_::TestImmediate@<eax>(_DWORD *a1@<esi>, float a2)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)a1[3];
  if ( (*(_DWORD *)(v2[7] + 0x58) & 2) == 0
    && (EffectItem_GetDuration(v2) || (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable(a1)) )
  {
    return ValueModifierEffect_Apply_::Wrapup();
  }
  else
  {
    return ValueModifierEffect_Apply_::ApplyImmediately(a2);
  }
}
