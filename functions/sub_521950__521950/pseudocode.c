_DWORD *__thiscall sub_521950(_DWORD *this)
{
  int v2; // eax
  int v4; // [esp-8h] [ebp-Ch]

  *(this + 1) = 0x25;
  *this = &NiTMapBase<DFALL<IDLE_ANIM_ROOT *>,char const *,IDLE_ANIM_ROOT *>::`vftable';
  *(this + 3) = 0;
  v2 = FormHeapAlloc(0x94u);
  v4 = 4 * *(this + 1);
  *(this + 2) = v2;
  _memset(v2, 0, v4);
  *((_BYTE *)this + 0x10) = 1;
  *this = &BSTCaseInsensitiveStringMap<IDLE_ANIM_ROOT *>::`vftable';
  return this;
}
