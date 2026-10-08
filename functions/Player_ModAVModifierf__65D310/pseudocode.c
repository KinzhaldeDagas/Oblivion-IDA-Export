void __thiscall Player_ModAVModifierf(float *this, int a2, int a3, float a4, int a5)
{
  if ( a2 ) /*0x65d31b*/
  {
    if ( a2 == 1 ) /*0x65d324*/
    {
      Player_ModAVModifierf_::ModForcedCurAV((int)this, 1, a3, a4, a5); /*0x65d324*/
    }
    else
    {
      if ( a2 != 2 ) /*0x65d32d*/
        JUMPOUT(0x65D470); /*0x65d470*/
      Player_ModAVModifierf_::ModCurAV(this, 2, a3, a4, a5); /*0x65d32e*/
    }
  }
  else
  {
    Player_ModAVModifierf_::ModMaxAV((int)this, 0, a3, a4, a5); /*0x65d31b*/
  }
}
