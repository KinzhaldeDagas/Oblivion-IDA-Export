unsigned __int16 *__thiscall sub_95F880(unsigned __int16 *this, int a2)
{
  int v2; // ebp
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi
  int v6; // ecx

  v2 = a2;
  *(_DWORD *)this = &NiUnionBV::`vftable';
  v4 = (NiTArray_NiTexturingPropertyMap *)(this + 2);
  v5 = 0;
  *((_DWORD *)this + 1) = &NiTArray<NiBoundingVolume *>::`vftable';
  *(this + 6) = 0;
  *(this + 9) = 1;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *((_DWORD *)this + 2) = 0;
  NiTArray_SetSize(this + 2, *(unsigned __int16 *)(v2 + 0xE));
  if ( *(this + 7) )
  {
    do
    {
      v6 = *(_DWORD *)(*(_DWORD *)(v2 + 8) + 4 * v5);
      if ( v6 )
      {
        a2 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x1C))(v6);
        NiTArray_SetAt(v4, v5, &a2);
      }
      ++v5;
    }
    while ( v5 < *(this + 7) );
  }
  return this;
}
