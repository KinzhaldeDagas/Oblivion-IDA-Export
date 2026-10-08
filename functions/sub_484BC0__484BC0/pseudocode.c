char __thiscall sub_484BC0(ExtraDataList ***this, char a2)
{
  ExtraDataList **v2; // eax
  ExtraDataList *v3; // esi

  v2 = *this; /*0x484bc0*/
  if ( *this ) /*0x484bc0*/
  {
    v3 = *v2; /*0x484bc7*/
    if ( *v2 ) /*0x484bc7*/
    {
      LOBYTE(v2) = sub_422C40(*v2); /*0x484bcf*/
      if ( (_BYTE)v2 != 0xFF ) /*0x484bd6*/
        LOBYTE(v2) = (unsigned __int8)sub_422BA0(v3, a2); /*0x484bdf*/
    }
  }
  return (char)v2; /*0x484be5*/
}
