BSStringT *__thiscall sub_571C50(BSStringT *this, int arg0, char *a2, int a4, int a5)
{
  sub_721350(this);
  this->m_data = (char *)&DebugTextExtraData::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_WORD *)this + 0xA) = 0;
  *((_WORD *)this + 0xB) = 0;
  *((_DWORD *)this + 3) = arg0;
  BSStringT_Set(this + 2, a2, 0);
  *((_DWORD *)this + 6) = a4;
  *((_DWORD *)this + 7) = a5;
  return this;
}
