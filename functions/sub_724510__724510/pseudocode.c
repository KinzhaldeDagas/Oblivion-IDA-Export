int __thiscall sub_724510(_WORD *this)
{
  unsigned int i; // edi
  int v3; // ebx
  NiTransform v5; // [esp+14h] [ebp-34h] BYREF

  for ( i = 0; i < (unsigned __int16)*(this + 0x5B); ++i ) /*0x724519*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * i); /*0x724529*/
    if ( v3 ) /*0x72452e*/
    {
      if ( *(_DWORD *)(*((_DWORD *)this + 0x3C) + 4 * i) != *((_DWORD *)this + 0x3A) ) /*0x724545*/
      {
        NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x76), i, (_DWORD *)this + 0x3A); /*0x72454f*/
        (*(void (__thiscall **)(int, _DWORD, bool))(*(_DWORD *)v3 + 0x60))( /*0x724575*/
          v3,
          *((float *)this + 0x39),
          (*(_BYTE *)(this + 0x6E) & 2) != 0);
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x50))(v3); /*0x72457e*/
    }
  }
  sub_718A80((float *)this + 0x19, &v5); /*0x724597*/
  return NiBound_TransformInto((float *)this + 0x33, (NiPoint3 *)(this + 0x10), &v5); /*0x7245b0*/
}
