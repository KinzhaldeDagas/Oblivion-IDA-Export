unsigned __int16 __thiscall sub_7598C0(unsigned __int16 *this)
{
  unsigned __int16 v2; // cx
  unsigned __int16 result; // ax
  int v4; // edi
  unsigned __int16 v5; // cx

  v2 = *(this + 0x24); /*0x7598c3*/
  result = *(this + 0x33); /*0x7598c7*/
  if ( v2 >= result ) /*0x7598cf*/
  {
    result = v2 + *(this + 0x32); /*0x75991f*/
    *(this + 0x24) = result; /*0x759922*/
  }
  else
  {
    v4 = v2; /*0x7598d1*/
    *(this + 0x24) = result + *(this + 0x32); /*0x7598de*/
    do /*0x7598ff*/
    {
      if ( *(this + 0x24) <= *(this + 0x33) ) /*0x7598ec*/
        break; /*0x7598ec*/
      result = (*(int (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)this + 0x58))(this, v4++); /*0x7598f6*/
    }
    while ( (unsigned __int16)v4 < *(this + 0x33) ); /*0x7598ff*/
    if ( (unsigned __int16)v4 < *(this + 0x33) ) /*0x759905*/
    {
      *(this + 0x24) = v4; /*0x759907*/
      *(this + 0x32) = 0; /*0x75990f*/
      *(this + 0x33) = v4; /*0x759915*/
      return result; /*0x75991a*/
    }
  }
  v5 = *(this + 0x24); /*0x759926*/
  *(this + 0x32) = 0; /*0x75992b*/
  *(this + 0x33) = v5; /*0x759931*/
  return result; /*0x75990e*/
}
