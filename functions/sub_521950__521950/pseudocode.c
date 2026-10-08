_DWORD *__thiscall sub_521950(_DWORD *this)
{
  int v2; // eax
  unsigned int v4; // [esp-8h] [ebp-Ch]

  *(this + 1) = 0x25; /*0x52195a*/
  *this = &NiTMapBase<DFALL<IDLE_ANIM_ROOT *>,char const *,IDLE_ANIM_ROOT *>::`vftable'; /*0x521967*/
  *(this + 3) = 0; /*0x52196d*/
  v2 = FormHeapAlloc(0x94u); /*0x521979*/
  v4 = 4 * *(this + 1); /*0x521985*/
  *(this + 2) = v2; /*0x521989*/
  _memset(v2, 0, v4); /*0x52198c*/
  *((_BYTE *)this + 0x10) = 1; /*0x521994*/
  *this = &BSTCaseInsensitiveStringMap<IDLE_ANIM_ROOT *>::`vftable'; /*0x521998*/
  return this; /*0x5219a0*/
}
