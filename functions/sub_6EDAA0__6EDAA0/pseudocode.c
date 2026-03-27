_DWORD *__userpurge sub_6EDAA0@<eax>(_DWORD *this@<ecx>, int a2@<edi>, unsigned int a3, char a4)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  bool v7; // zf
  bool v8; // cf
  rsize_t v10; // [esp-8h] [ebp-10h]

  if ( 0xFFFFFFFF - *(this + 5) <= a3 )
    std::_String_base::_Xlen();
  if ( !a3 )
    return this;
  HIDWORD(v10) = a2;
  v5 = a3 + *(this + 5);
  if ( v5 == 0xFFFFFFFF )
    std::_String_base::_Xlen();
  v6 = *(this + 6);
  if ( v6 < v5 )
  {
    LODWORD(v10) = *(this + 5);
    sub_4135C0(this, v5, v10);
    v7 = v5 == 0;
    goto LABEL_8;
  }
  v7 = v5 == 0;
  if ( v5 )
  {
LABEL_8:
    if ( !v7 )
    {
      sub_6EDA10(this, *(this + 5), a3, a4);
      v8 = *(this + 6) < 0x10u;
      *(this + 5) = v5;
      if ( !v8 )
      {
        *(_BYTE *)(*(this + 1) + v5) = 0;
        return this;
      }
      *((_BYTE *)this + v5 + 4) = 0;
    }
    return this;
  }
  *(this + 5) = 0;
  if ( v6 < 0x10 )
    *((_BYTE *)this + 4) = 0;
  else
    *(_BYTE *)*(this + 1) = 0;
  return this;
}
