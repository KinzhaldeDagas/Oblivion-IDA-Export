_DWORD *__userpurge sub_414500@<eax>(_DWORD *this@<ecx>, int a2@<edi>, _BYTE *Src, rsize_t MaxCount)
{
  unsigned int v5; // ecx
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  unsigned int v10; // eax
  bool v11; // zf
  unsigned int v12; // ecx
  _DWORD *v13; // eax
  bool v14; // cf
  _BYTE v15[12]; // [esp-8h] [ebp-14h]

  v5 = *(this + 6);
  v6 = this + 1;
  if ( v5 < 0x10 )
    v7 = this + 1;
  else
    v7 = (_DWORD *)*v6;
  if ( Src >= (_BYTE *)v7 )
  {
    v8 = v5 < 0x10 ? this + 1 : (_DWORD *)*v6;
    if ( (char *)v8 + *(this + 5) > Src )
    {
      if ( v5 >= 0x10 )
        v6 = (_DWORD *)*v6;
      return sub_414420((int)this, this, Src - (_BYTE *)v6, MaxCount);
    }
  }
  *(_DWORD *)&v15[4] = a2;
  if ( (_DWORD)MaxCount == 0xFFFFFFFF )
    std::_String_base::_Xlen();
  v10 = *(this + 6);
  if ( v10 < (unsigned int)MaxCount )
  {
    *(_DWORD *)v15 = *(this + 5);
    sub_4135C0(this, MaxCount, *(rsize_t *)v15);
    v11 = (_DWORD)MaxCount == 0;
LABEL_16:
    if ( !v11 )
    {
      v12 = *(this + 6);
      if ( v12 < 0x10 )
        v13 = this + 1;
      else
        v13 = (_DWORD *)*v6;
      memcpy_s(v13, __PAIR64__((unsigned int)Src, v12), (const void *)MaxCount, *(rsize_t *)&v15[4]);
      v14 = *(this + 6) < 0x10u;
      *(this + 5) = MaxCount;
      if ( !v14 )
        v6 = (_DWORD *)*v6;
      *((_BYTE *)v6 + MaxCount) = 0;
    }
    return this;
  }
  v11 = (_DWORD)MaxCount == 0;
  if ( (_DWORD)MaxCount )
    goto LABEL_16;
  *(this + 5) = 0;
  if ( v10 >= 0x10 )
    v6 = (_DWORD *)*v6;
  *(_BYTE *)v6 = 0;
  return this;
}
