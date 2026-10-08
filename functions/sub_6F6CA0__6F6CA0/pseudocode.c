unsigned int *__userpurge sub_6F6CA0@<eax>(unsigned int *this@<ecx>, int a2@<ebp>, unsigned int *Src, rsize_t MaxCount)
{
  unsigned int v5; // edx
  unsigned int *v6; // ebx
  unsigned int *v7; // ecx
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

  v5 = *(this + 6); /*0x6f6ca4*/
  v6 = this + 1; /*0x6f6cab*/
  if ( v5 < 0x10 ) /*0x6f6cae*/
    v7 = this + 1; /*0x6f6cb4*/
  else
    v7 = (unsigned int *)*v6; /*0x6f6cb0*/
  if ( Src >= v7 )
  {
    v8 = v5 < 0x10 ? v6 : (unsigned int *)*v6;
    if ( (unsigned int *)((char *)v8 + *(this + 5)) > Src ) /*0x6f6cd0*/
    {
      if ( v5 >= 0x10 ) /*0x6f6cd5*/
        v6 = (unsigned int *)*v6; /*0x6f6cd7*/
      *(_DWORD *)&v19[4] = MaxCount; /*0x6f6cdd*/
      return sub_6F6AF0(this, this, (char *)Src - (char *)v6, *(rsize_t *)&v19[4]); /*0x6f6cec*/
    }
  }
  v10 = *(this + 5); /*0x6f6cef*/
  *(_DWORD *)&v19[4] = a2; /*0x6f6cf5*/
  if ( 0xFFFFFFFF - v10 <= (unsigned int)MaxCount || v10 + (unsigned int)MaxCount < v10 ) /*0x6f6d05*/
    std::_String_base::_Xlen(); /*0x6f6d07*/
  if ( !(_DWORD)MaxCount ) /*0x6f6d0e*/
    return this; /*0x6f6d86*/
  v11 = MaxCount + *(this + 5); /*0x6f6d13*/
  if ( v11 == 0xFFFFFFFF ) /*0x6f6d18*/
    std::_String_base::_Xlen(); /*0x6f6d1a*/
  v12 = *(this + 6); /*0x6f6d1f*/
  if ( v12 < v11 ) /*0x6f6d24*/
  {
    *(_DWORD *)v19 = *(this + 5); /*0x6f6d29*/
    sub_4135C0(this, v11, *(rsize_t *)v19); /*0x6f6d2d*/
    v13 = v11 == 0; /*0x6f6d32*/
    goto LABEL_20; /*0x6f6d32*/
  }
  v13 = v11 == 0; /*0x6f6d42*/
  if ( v11 ) /*0x6f6d44*/
  {
LABEL_20:
    if ( !v13 ) /*0x6f6d34*/
    {
      v14 = *(this + 6); /*0x6f6d36*/
      if ( v14 < 0x10 ) /*0x6f6d3c*/
        v15 = v6; /*0x6f6d5c*/
      else
        v15 = (unsigned int *)*v6; /*0x6f6d3e*/
      v16 = *(this + 5); /*0x6f6d5e*/
      HIDWORD(v18) = Src; /*0x6f6d68*/
      LODWORD(v18) = v14 - v16; /*0x6f6d69*/
      memcpy_s((char *)v15 + v16, v18, (const void *)MaxCount, *(rsize_t *)&v19[4]); /*0x6f6d6d*/
      v17 = *(this + 6) < 0x10; /*0x6f6d75*/
      *(this + 5) = v11; /*0x6f6d79*/
      if ( !v17 ) /*0x6f6d7c*/
        v6 = (unsigned int *)*v6; /*0x6f6d7e*/
      *((_BYTE *)v6 + v11) = 0; /*0x6f6d80*/
    }
    return this; /*0x6f6d80*/
  }
  *(this + 5) = 0; /*0x6f6d49*/
  if ( v12 >= 0x10 ) /*0x6f6d4c*/
    v6 = (unsigned int *)*v6; /*0x6f6d4e*/
  *(_BYTE *)v6 = 0; /*0x6f6d55*/
  return this; /*0x6f6ce9*/
}
