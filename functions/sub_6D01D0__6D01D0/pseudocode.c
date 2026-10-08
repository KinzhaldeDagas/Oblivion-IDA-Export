void __thiscall sub_6D01D0(NiTriBasedGeomData *this, _DWORD **a2)
{
  _DWORD **v2; // ebx
  unsigned __int16 v4; // bp
  int v5; // ecx
  int *v6; // eax
  char v7; // al
  _DWORD **i; // [esp+Ch] [ebp-4h]

  v2 = a2; /*0x6d01d2*/
  sub_715E40(this, (int)a2); /*0x6d01db*/
  NiTMap_GetAt(*v2, (int)this, &a2); /*0x6d01e8*/
  v4 = 0; /*0x6d01f1*/
  for ( i = a2; v4 < *((_WORD *)this + 0x22); ++v4 )
  {
    v5 = 0x30 * v4 + *(_DWORD *)&this->members.super.m_bVertexStreamLocked; /*0x6d020c*/
    (*(void (__thiscall **)(int, _DWORD **))(*(_DWORD *)v5 + 0x38))(v5, v2); /*0x6d0215*/
    v6 = (int *)(*(_DWORD *)&this->members.m_usTriangles + 4 * v4); /*0x6d021e*/
    if ( *v6 )
    {
      v7 = NiTMap_GetAt(*v2, *v6, &a2); /*0x6d022d*/
      i[0x10][v4] = v7 != 0 ? a2 : 0;
    }
  }
}
