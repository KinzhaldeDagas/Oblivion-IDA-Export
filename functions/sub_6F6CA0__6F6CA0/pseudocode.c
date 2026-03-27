unsigned int *__userpurge sub_6F6CA0@<eax>(unsigned int *this@<ecx>, int a2@<ebp>, _BYTE *Src, rsize_t MaxCount)
{
  unsigned int v5; // edx
  unsigned int *v6; // ebx
  unsigned int v7; // ecx
  unsigned int *v8; // ecx
  unsigned int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // eax
  bool v13; // zf
  unsigned int v14; // eax
  unsigned int *v15; // edx
  int v16; // ecx
  bool v17; // cf
  rsize_t v18; // [esp-10h] [ebp-1Ch]
  _BYTE v19[12]; // [esp-8h] [ebp-14h]

  v5 = *(this + 6);
  v6 = this + 1;
  if ( v5 < 0x10 )
    v7 = (unsigned int)(this + 1);
  else
    v7 = *v6;
  if ( (unsigned int)Src >= v7 )
  {
    v8 = v5 < 0x10 ? v6 : (unsigned int *)*v6;
    if ( (char *)v8 + *(this + 5) > Src )
    {
      if ( v5 >= 0x10 )
        v6 = (unsigned int *)*v6;
      *(_DWORD *)&v19[4] = MaxCount;
      return sub_6F6AF0(this, this, Src - (_BYTE *)v6, *(rsize_t *)&v19[4]);
    }
  }
  v10 = *(this + 5);
  *(_DWORD *)&v19[4] = a2;
  if ( 0xFFFFFFFF - v10 <= (unsigned int)MaxCount || v10 + (unsigned int)MaxCount < v10 )
    std::_String_base::_Xlen();
  if ( !(_DWORD)MaxCount )
    return this;
  v11 = MaxCount + *(this + 5);
  if ( v11 == 0xFFFFFFFF )
    std::_String_base::_Xlen();
  v12 = *(this + 6);
  if ( v12 < v11 )
  {
    *(_DWORD *)v19 = *(this + 5);
    sub_4135C0(this, v11, *(rsize_t *)v19);
    v13 = v11 == 0;
    goto LABEL_20;
  }
  v13 = v11 == 0;
  if ( v11 )
  {
LABEL_20:
    if ( !v13 )
    {
      v14 = *(this + 6);
      if ( v14 < 0x10 )
        v15 = v6;
      else
        v15 = (unsigned int *)*v6;
      v16 = *(this + 5);
      HIDWORD(v18) = Src;
      LODWORD(v18) = v14 - v16;
      memcpy_s((char *)v15 + v16, v18, (const void *)MaxCount, *(rsize_t *)&v19[4]);
      v17 = *(this + 6) < 0x10;
      *(this + 5) = v11;
      if ( !v17 )
        v6 = (unsigned int *)*v6;
      *((_BYTE *)v6 + v11) = 0;
    }
    return this;
  }
  *(this + 5) = 0;
  if ( v12 >= 0x10 )
    v6 = (unsigned int *)*v6;
  *(_BYTE *)v6 = 0;
  return this;
}
