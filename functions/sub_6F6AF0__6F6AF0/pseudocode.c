_DWORD *__userpurge sub_6F6AF0@<eax>(_DWORD *this@<ecx>, _DWORD *a2, unsigned int a3, rsize_t MaxCount)
{
  const void *v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  bool v9; // zf
  _DWORD *v10; // ebp
  unsigned int v12; // eax
  _DWORD *v13; // edx
  int v14; // ecx
  bool v15; // cf
  rsize_t v16; // [esp-Ch] [ebp-1Ch]
  _BYTE v17[12]; // [esp-4h] [ebp-14h]

  if ( a2[5] < a3 )
    std::_String_base::_Xran();
  v5 = (const void *)MaxCount;
  if ( a2[5] - a3 < (unsigned int)MaxCount )
    v5 = (const void *)(a2[5] - a3);
  v6 = *(this + 5);
  if ( 0xFFFFFFFF - v6 <= (unsigned int)v5 || (unsigned int)v5 + v6 < v6 )
    std::_String_base::_Xlen();
  if ( !v5 )
    return this;
  v7 = (unsigned int)v5 + *(this + 5);
  if ( v7 == 0xFFFFFFFF )
    std::_String_base::_Xlen();
  v8 = *(this + 6);
  if ( v8 < v7 )
  {
    *(_DWORD *)v17 = *(this + 5);
    sub_4135C0(this, v7, *(rsize_t *)v17);
    v9 = v7 == 0;
    goto LABEL_13;
  }
  v9 = v7 == 0;
  if ( v7 )
  {
LABEL_13:
    if ( !v9 )
    {
      if ( a2[6] < 0x10u )
        v10 = a2 + 1;
      else
        v10 = (_DWORD *)a2[1];
      v12 = *(this + 6);
      if ( v12 < 0x10 )
        v13 = this + 1;
      else
        v13 = (_DWORD *)*(this + 1);
      v14 = *(this + 5);
      HIDWORD(v16) = (char *)v10 + a3;
      LODWORD(v16) = v12 - v14;
      memcpy_s((char *)v13 + v14, v16, v5, *(rsize_t *)&v17[4]);
      v15 = *(this + 6) < 0x10u;
      *(this + 5) = v7;
      if ( !v15 )
      {
        *(_BYTE *)(*(this + 1) + v7) = 0;
        return this;
      }
      *((_BYTE *)this + v7 + 4) = 0;
    }
    return this;
  }
  *(this + 5) = 0;
  if ( v8 < 0x10 )
    *((_BYTE *)this + 4) = 0;
  else
    *(_BYTE *)*(this + 1) = 0;
  return this;
}
