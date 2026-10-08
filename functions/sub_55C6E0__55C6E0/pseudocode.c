NiObject *__thiscall sub_55C6E0(NiObject *this, int a2, void *Src, int a4)
{
  int v5; // ecx
  int v6; // eax
  const void *v7; // ebp
  int v8; // eax
  unsigned int v9; // edx
  bool v10; // zf
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  size_t v14; // [esp-4h] [ebp-34h]
  int v15; // [esp+18h] [ebp-18h] BYREF
  int v16; // [esp+1Ch] [ebp-14h]
  char v17; // [esp+20h] [ebp-10h]
  int v18; // [esp+2Ch] [ebp-4h]

  sub_721350(this); /*0x55c70d*/
  v18 = 0; /*0x55c71a*/
  this->__vftable = (NiObjectVtbl *)&BSFaceGenBaseMorphExtraData::`vftable'; /*0x55c71e*/
  v15 = 0; /*0x55c724*/
  v16 = 0; /*0x55c728*/
  v17 = 0; /*0x55c72c*/
  if ( !a2 ) /*0x55c730*/
    goto LABEL_16; /*0x55c730*/
  v5 = *(_DWORD *)(a2 + 0xB4); /*0x55c736*/
  if ( !v5 ) /*0x55c73e*/
    goto LABEL_16; /*0x55c73e*/
  if ( NiGeometryData_LockVertexStream(v5, 1) ) /*0x55c746*/
    NiGeometryData_GetLockedVertexStream(*(_DWORD *)(a2 + 0xB4), (int)&v15); /*0x55c75a*/
  if ( v15 )
  {
    v6 = *(unsigned __int16 *)(*(_DWORD *)(a2 + 0xB4) + 8); /*0x55c76f*/
    v7 = Src; /*0x55c773*/
    *((_DWORD *)this + 5) = v6; /*0x55c77d*/
    *((_DWORD *)this + 4) = v6; /*0x55c780*/
    if ( Src ) /*0x55c783*/
    {
      if ( a4 ) /*0x55c787*/
        *((_DWORD *)this + 4) = a4 + v6; /*0x55c78b*/
    }
    v8 = FormHeapAlloc((0xC * (unsigned __int64)*((unsigned int *)this + 4)) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * *((_DWORD *)this + 4));
    v9 = 0; /*0x55c7aa*/
    v10 = *((_DWORD *)this + 5) == 0; /*0x55c7ac*/
    *((_DWORD *)this + 3) = v8; /*0x55c7af*/
    v11 = (_DWORD *)v8; /*0x55c7b2*/
    if ( !v10 ) /*0x55c7b4*/
    {
      do /*0x55c7e4*/
      {
        v12 = (_DWORD *)(v15 + v9 * v16); /*0x55c7c7*/
        ++v9; /*0x55c7cb*/
        *v11 = *v12; /*0x55c7d0*/
        v11[1] = v12[1]; /*0x55c7d5*/
        v11[2] = v12[2]; /*0x55c7db*/
        v11 += 3; /*0x55c7de*/
      }
      while ( v9 < *((_DWORD *)this + 5) ); /*0x55c7e4*/
      v7 = Src; /*0x55c7e6*/
    }
    if ( v7 ) /*0x55c7ec*/
    {
      if ( a4 ) /*0x55c7f0*/
      {
        LODWORD(v14) = 0xC * a4; /*0x55c7fc*/
        memcpy((void *)(*((_DWORD *)this + 3) + 0xC * *((_DWORD *)this + 5)), v7, v14); /*0x55c808*/
      }
    }
    NiGeometryData_UnlockVertexStream(*(_DWORD *)(a2 + 0xB4)); /*0x55c81a*/
  }
  else
  {
LABEL_16:
    *((_DWORD *)this + 3) = 0; /*0x55c821*/
    *((_DWORD *)this + 5) = 0; /*0x55c824*/
    *((_DWORD *)this + 4) = 0; /*0x55c827*/
  }
  return this; /*0x55c82c*/
}
