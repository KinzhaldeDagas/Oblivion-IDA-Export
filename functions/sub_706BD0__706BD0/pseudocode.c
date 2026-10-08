bool __thiscall sub_706BD0(_WORD *this, int a2)
{
  __int16 v3; // ax
  __int16 v4; // cx
  bool result; // al

  result = 0; /*0x706c13*/
  if ( sub_6D7E00((NiTriBasedGeomData *)this, a2) ) /*0x706bd9*/
  {
    if ( ((*((_BYTE *)this + 0x18) ^ *(_BYTE *)(a2 + 0x18)) & 1) == 0 ) /*0x706bea*/
    {
      v3 = *(_WORD *)(a2 + 0x18); /*0x706bec*/
      v4 = *(this + 0xC); /*0x706bf0*/
      if ( ((((unsigned __int8)v4 >> 1) ^ ((unsigned __int8)v3 >> 1)) & 1) == 0 /*0x706c09*/
        && (((unsigned __int8)v4 ^ (unsigned __int8)v3) & 0x3C) == 0 )
      {
        return 1; /*0x706be0*/
      }
    }
  }
  return result; /*0x706c0b*/
}
