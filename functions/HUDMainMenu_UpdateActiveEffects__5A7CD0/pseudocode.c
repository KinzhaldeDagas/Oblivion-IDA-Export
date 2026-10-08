void __usercall HUDMainMenu_UpdateActiveEffects(
        _DWORD *this@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        float a7,
        _DWORD *a8)
{
  if ( !a4 || 0.0 == *(float *)(a4 + 0x1C) || (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable((_DWORD *)a4) ) /*0x5a7d09*/
  {
    HUDMainMenu_UpdateActiveEffects_::Done(a4, a5); /*0x5a7cf1*/
  }
  else
  {
    if ( !*(this + 0x21) ) /*0x5a7d20*/
      JUMPOUT(0x5A7D82); /*0x5a7d82*/
    HUDMainMenu_UpdateActiveEffects_::CheckForDuplicateLoop( /*0x5a7d2a*/
      a4,
      (int)this,
      0,
      0.0,
      a2,
      a3,
      a4,
      *(float *)&a5,
      a6,
      a7,
      a8);
  }
}
