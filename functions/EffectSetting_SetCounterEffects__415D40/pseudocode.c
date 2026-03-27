int __thiscall EffectSetting_SetCounterEffects(_DWORD *this, int a2, int a3, unsigned __int16 a4, int a5)
{
  void *v5; // eax

  v5 = (void *)*(this + 0x27);
  if ( v5 )
    return EffectSetting_SetCounterEffects_::DeleteOldCounters((int)this, v5, a2, a3, a4, a5);
  else
    return EffectSetting_SetCounterEffects_::NewCounterArray((int)this, a2, a3, a4, a5);
}
