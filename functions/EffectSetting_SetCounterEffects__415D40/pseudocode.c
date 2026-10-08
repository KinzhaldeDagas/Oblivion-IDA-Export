int __usercall EffectSetting_SetCounterEffects@<eax>(
        _DWORD *this@<ecx>,
        char a2@<bpl>,
        int a3@<edi>,
        int a4,
        int a5,
        unsigned __int16 a6,
        int a7)
{
  void *v7; // eax

  v7 = (void *)*(this + 0x27); /*0x415d44*/
  if ( v7 ) /*0x415d4c*/
    return EffectSetting_SetCounterEffects_::DeleteOldCounters((int)this, v7, a4, a5, a6, a7); /*0x415d4d*/
  else
    return EffectSetting_SetCounterEffects_::NewCounterArray((int)this, a2, a3, a4, a5, a6, a7); /*0x415d4c*/
}
