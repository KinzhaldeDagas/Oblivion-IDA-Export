unsigned __int16 *__thiscall sub_95F880(unsigned __int16 *this, int a2)
{
  int v2; // ebp
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi
  int v6; // ecx

  v2 = a2; /*0x95f882*/
  *(_DWORD *)this = &NiUnionBV::`vftable'; /*0x95f889*/
  v4 = (NiTArray_NiTexturingPropertyMap *)(this + 2); /*0x95f88f*/
  v5 = 0; /*0x95f893*/
  *((_DWORD *)this + 1) = &NiTArray<NiBoundingVolume *>::`vftable'; /*0x95f895*/
  *(this + 6) = 0; /*0x95f89b*/
  *(this + 9) = 1; /*0x95f89f*/
  *(this + 7) = 0; /*0x95f8a5*/
  *(this + 8) = 0; /*0x95f8a9*/
  *((_DWORD *)this + 2) = 0; /*0x95f8ad*/
  NiTArray_SetSize(this + 2, *(unsigned __int16 *)(v2 + 0xE)); /*0x95f8b7*/
  if ( *(this + 7) ) /*0x95f8bc*/
  {
    do /*0x95f8ed*/
    {
      v6 = *(_DWORD *)(*(_DWORD *)(v2 + 8) + 4 * v5); /*0x95f8c5*/
      if ( v6 ) /*0x95f8ca*/
      {
        a2 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x1C))(v6); /*0x95f8db*/
        NiTArray_SetAt(v4, v5, &a2); /*0x95f8df*/
      }
      ++v5; /*0x95f8e8*/
    }
    while ( v5 < *(this + 7) ); /*0x95f8ed*/
  }
  return this; /*0x95f8ef*/
}
