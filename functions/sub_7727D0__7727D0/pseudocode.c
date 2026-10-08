//
// DX11 state-group audit 2026-10-01: searches NoSaveHead+8 first, then SavedHead+10; first matching state ID wins. savePrevious output byte is written only on success. Verified Node layout state+0/value+4/next+8/previous+C and group counts+4/+C. Added neutral prefix types; Unknown00 is not decoded and group prefix is not a full-size claim.
OblivionRenderStateEntry *__thiscall NiD3DRenderStateGroup_FindRenderStateEntry(
        OblivionRenderStateGroupPrefix *this,
        unsigned int state,
        unsigned __int8 *savePrevious)
{
  OblivionRenderStateEntry *result; // eax

  result = this->NoSaveHead08; /*0x7727d0*/
  if ( result ) /*0x7727d9*/
  {
    while ( result->State00 != state ) /*0x7727e2*/
    {
      result = result->Next08; /*0x7727e4*/
      if ( !result ) /*0x7727e9*/
        goto LABEL_4; /*0x7727e9*/
    }
    *savePrevious = 0; /*0x772806*/
  }
  else
  {
LABEL_4:
    result = this->SavedHead10; /*0x7727eb*/
    if ( result ) /*0x7727f0*/
    {
      while ( result->State00 != state ) /*0x7727f4*/
      {
        result = result->Next08; /*0x7727f6*/
        if ( !result ) /*0x7727fb*/
          return 0; /*0x7727fb*/
      }
      *savePrevious = 1; /*0x772810*/
    }
    else
    {
      return 0; /*0x7727fd*/
    }
  }
  return result; /*0x7727ff*/
}
