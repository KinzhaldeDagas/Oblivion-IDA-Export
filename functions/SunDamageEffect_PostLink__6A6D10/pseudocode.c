void __thiscall SunDamageEffect_PostLink(volatile LONG ***this, int a2)
{
  float v3; // [esp+Ch] [ebp-Ch]
  float v4; // [esp+1Ch] [ebp+4h]
  float v5; // [esp+1Ch] [ebp+4h]
  float v6; // [esp+1Ch] [ebp+4h]

  ActiveEffect_Base_PostLink(this, a2);
  if ( *((_BYTE *)this + 0x10) )
  {
    if ( *((float *)this + 0xE) > 1.0 )
    {
      if ( UseHDR )
      {
        v4 = *((float *)this + 0xE) / dbl_A563D0;
        if ( v4 >= dbl_A2F928 )
          flt_B2C7A4 = v4;
        else
          flt_B2C7A4 = 1.0;
      }
      else
      {
        v5 = flt_B06D64 * *((float *)this + 0xE);
        v3 = v5;
        v6 = flt_B06D5C * *((float *)this + 0xE);
        sub_7B4830(dword_B06D3C, dword_B06D44, flt_B06D4C, v6, v3, dword_B06D54);
      }
    }
  }
}
