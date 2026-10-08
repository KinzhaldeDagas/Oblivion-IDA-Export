// CFrondEngine profile setter. Replaces CFrondEngine+0x30, destructing/freeing the old 0x5C profile object when the pointer differs.
void __thiscall OB_CFrondEngine_SetProfile_010201A0(void *this, void *profile)
{
  void *v3; // esi

  v3 = *((void **)this + 0xC); /*0x799eb9*/
  if ( v3 != profile ) /*0x799ebe*/
  {
    if ( v3 ) /*0x799ec2*/
    {
      OB_StBezierSpline_Dtor_010201A0(*((OB_stBezierSpline_010201A0 **)this + 0xC)); /*0x799ec6*/
      FormHeapFree((unsigned int)v3); /*0x799ecc*/
    }
    *((_DWORD *)this + 0xC) = profile; /*0x799ed4*/
  }
}
