_DWORD *__userpurge sub_4134E0@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ecx
  _DWORD *v9; // ebp
  _DWORD *v10; // edx
  unsigned int v11; // eax
  bool v12; // cf
  rsize_t v14; // [esp-10h] [ebp-1Ch]
  rsize_t v15; // [esp-4h] [ebp-10h]
  _DWORD *v16; // [esp+10h] [ebp+4h]

  if ( *(this + 5) < a3 )
    std::_String_base::_Xran();
  v6 = a4;
  v7 = *(this + 5) - a3;
  if ( v7 < a4 )
    v6 = *(this + 5) - a3;
  if ( v6 )
  {
    v8 = *(this + 6);
    LODWORD(v15) = a2;
    v9 = this + 1;
    if ( v8 < 0x10 )
      v16 = this + 1;
    else
      v16 = (_DWORD *)*v9;
    if ( v8 < 0x10 )
      v10 = this + 1;
    else
      v10 = (_DWORD *)*v9;
    HIDWORD(v14) = (char *)v16 + a3 + v6;
    LODWORD(v14) = v8 - a3;
    memmove_s((char *)v10 + a3, v14, (const void *)(v7 - v6), v15);
    v11 = *(this + 5) - v6;
    v12 = *(this + 6) < 0x10u;
    *(this + 5) = v11;
    if ( !v12 )
      v9 = (_DWORD *)*v9;
    *((_BYTE *)v9 + v11) = 0;
  }
  return this;
}
