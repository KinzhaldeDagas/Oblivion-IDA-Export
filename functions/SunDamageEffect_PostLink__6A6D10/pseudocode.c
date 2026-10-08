void __thiscall SunDamageEffect_PostLink(volatile LONG ***this, TESObjectREFR *linkContext)
{
  float v3; // [esp+Ch] [ebp-Ch]
  float linkContexta; // [esp+1Ch] [ebp+4h]
  float linkContextb; // [esp+1Ch] [ebp+4h]
  float linkContextc; // [esp+1Ch] [ebp+4h]

  ActiveEffect_Base_PostLink((ActiveEffect *)this, linkContext); /*0x6a6d18*/
  if ( *((_BYTE *)this + 0x10) ) /*0x6a6d1d*/
  {
    if ( *((float *)this + 0xE) > 1.0 ) /*0x6a6d31*/
    {
      if ( OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x6a6d37*/
      {
        linkContexta = *((float *)this + 0xE) / kFaceGenVariationScale1_5; /*0x6a6d49*/
        if ( linkContexta >= dbl_A2F928 ) /*0x6a6d5c*/
          flt_B2C7A4 = linkContexta; /*0x6a6d6d*/
        else
          flt_B2C7A4 = 1.0; /*0x6a6d61*/
      }
      else
      {
        linkContextb = flt_B06D64 * *((float *)this + 0xE); /*0x6a6d96*/
        v3 = linkContextb; /*0x6a6d9e*/
        linkContextc = flt_B06D5C * *((float *)this + 0xE); /*0x6a6dab*/
        sub_7B4830(dword_B06D3C, dword_B06D44, flt_B06D4C, linkContextc, v3, dword_B06D54); /*0x6a6dc2*/
      }
    }
  }
}
