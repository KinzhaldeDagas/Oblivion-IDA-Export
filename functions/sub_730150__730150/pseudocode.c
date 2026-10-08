NiObject *sub_730150()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x14u); /*0x730174*/
  v1 = v0; /*0x730179*/
  if ( !v0 ) /*0x73018c*/
    return 0; /*0x7301bc*/
  sub_721350(v0); /*0x730190*/
  v1->__vftable = (NiObjectVtbl *)&NiFloatsExtraData::`vftable'; /*0x730195*/
  v1[2].__vftable = 0; /*0x73019b*/
  v1[1].members.m_uiRefCount = 0; /*0x7301a2*/
  return v1; /*0x7301ab*/
}
