int __thiscall sub_8DBE10(_DWORD *this)
{
  int v2; // eax
  int result; // eax

  v2 = *(this + 0x13); /*0x8dbe13*/
  *this = &off_A9A430; /*0x8dbe18*/
  if ( v2 ) /*0x8dbe1e*/
    sub_8CB4E0(*(this + 2), (int)(this + 0x1D), 1); /*0x8dbe2a*/
  *(this + 0x21) = 0; /*0x8dbe35*/
  *(this + 0x22) = 0; /*0x8dbe3f*/
  *(this + 0x20) = 0; /*0x8dbe49*/
  sub_8D98E0((int (__stdcall ****)(signed int))this + 0x1D); /*0x8dbe53*/
  result = sub_8DBCE0(this + 4); /*0x8dbe5b*/
  *this = &hkBaseObject::`vftable'; /*0x8dbe60*/
  return result; /*0x8dbe66*/
}
