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

  if ( a2[5] < a3 ) /*0x6f6b01*/
    std::_String_base::_Xran(); /*0x6f6b03*/
  v5 = (const void *)MaxCount; /*0x6f6b0b*/
  if ( a2[5] - a3 < (unsigned int)MaxCount ) /*0x6f6b13*/
    v5 = (const void *)(a2[5] - a3); /*0x6f6b15*/
  v6 = *(this + 5); /*0x6f6b17*/
  if ( 0xFFFFFFFF - v6 <= (unsigned int)v5 || (unsigned int)v5 + v6 < v6 ) /*0x6f6b28*/
    std::_String_base::_Xlen(); /*0x6f6b2a*/
  if ( !v5 ) /*0x6f6b31*/
    return this; /*0x6f6be3*/
  v7 = (unsigned int)v5 + *(this + 5); /*0x6f6b3a*/
  if ( v7 == 0xFFFFFFFF ) /*0x6f6b3f*/
    std::_String_base::_Xlen(); /*0x6f6b41*/
  v8 = *(this + 6); /*0x6f6b46*/
  if ( v8 < v7 ) /*0x6f6b4b*/
  {
    *(_DWORD *)v17 = *(this + 5); /*0x6f6b50*/
    sub_4135C0(this, v7, *(rsize_t *)v17); /*0x6f6b54*/
    v9 = v7 == 0; /*0x6f6b59*/
    goto LABEL_13; /*0x6f6b59*/
  }
  v9 = v7 == 0; /*0x6f6b6c*/
  if ( v7 ) /*0x6f6b6e*/
  {
LABEL_13:
    if ( !v9 ) /*0x6f6b5b*/
    {
      if ( a2[6] < 0x10u ) /*0x6f6b65*/
        v10 = a2 + 1; /*0x6f6b96*/
      else
        v10 = (_DWORD *)a2[1]; /*0x6f6b67*/
      v12 = *(this + 6); /*0x6f6b99*/
      if ( v12 < 0x10 ) /*0x6f6b9f*/
        v13 = this + 1; /*0x6f6ba6*/
      else
        v13 = (_DWORD *)*(this + 1); /*0x6f6ba1*/
      v14 = *(this + 5); /*0x6f6ba9*/
      HIDWORD(v16) = (char *)v10 + a3; /*0x6f6bb5*/
      LODWORD(v16) = v12 - v14; /*0x6f6bb6*/
      memcpy_s((char *)v13 + v14, v16, v5, *(rsize_t *)&v17[4]); /*0x6f6bba*/
      v15 = *(this + 6) < 0x10u; /*0x6f6bc2*/
      *(this + 5) = v7; /*0x6f6bc6*/
      if ( !v15 ) /*0x6f6bc9*/
      {
        *(_BYTE *)(*(this + 1) + v7) = 0; /*0x6f6bce*/
        return this; /*0x6f6bd8*/
      }
      *((_BYTE *)this + v7 + 4) = 0; /*0x6f6bde*/
    }
    return this; /*0x6f6bde*/
  }
  *(this + 5) = 0; /*0x6f6b73*/
  if ( v8 < 0x10 ) /*0x6f6b76*/
    *((_BYTE *)this + 4) = 0; /*0x6f6b8b*/
  else
    *(_BYTE *)*(this + 1) = 0; /*0x6f6b7c*/
  return this; /*0x6f6b7b*/
}
