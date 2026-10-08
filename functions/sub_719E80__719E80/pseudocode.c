bool __thiscall sub_719E80(NiTriBasedGeomData *this, int a2)
{
  int v2; // ebx
  bool result; // al
  unsigned __int16 v5; // di
  unsigned int v6; // ecx
  _WORD *v7; // eax
  int v8; // ebx
  unsigned __int16 v9; // ax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  _WORD *v12; // eax
  int v13; // ebx

  v2 = a2; /*0x719e81*/
  result = sub_732E10(this, a2); /*0x719e89*/
  if ( result ) /*0x719e90*/
  {
    v5 = *((_WORD *)this + 0x22); /*0x719e98*/
    if ( v5 != *(_WORD *)(a2 + 0x44) ) /*0x719ea0*/
      return 0; /*0x719ea7*/
    v6 = 0; /*0x719ead*/
    if ( v5 ) /*0x719eb2*/
    {
      v7 = *((_WORD **)this + 0x12); /*0x719eb4*/
      v8 = *(_DWORD *)(a2 + 0x48) - (_DWORD)v7; /*0x719eba*/
      while ( *v7 == *(_WORD *)((char *)v7 + v8) ) /*0x719ec7*/
      {
        ++v6; /*0x719ec9*/
        ++v7; /*0x719ecc*/
        if ( v6 >= v5 ) /*0x719ed1*/
        {
          v2 = a2; /*0x719ed3*/
          goto LABEL_9; /*0x719ed3*/
        }
      }
    }
    else
    {
LABEL_9:
      v9 = this->members.m_usTriangles + 2 * v5; /*0x719ed7*/
      v10 = 0; /*0x719ede*/
      v11 = v9; /*0x719ee0*/
      if ( !v9 ) /*0x719ee5*/
        return 1; /*0x719f09*/
      v12 = *((_WORD **)this + 0x13); /*0x719ee7*/
      v13 = *(_DWORD *)(v2 + 0x4C) - (_DWORD)v12; /*0x719eed*/
      while ( *v12 == *(_WORD *)((char *)v12 + v13) ) /*0x719ef7*/
      {
        ++v10; /*0x719ef9*/
        ++v12; /*0x719efc*/
        if ( v10 >= v11 ) /*0x719f01*/
          return 1; /*0x719f01*/
      }
    }
    return 0; /*0x719f0f*/
  }
  return result; /*0x719e92*/
}
