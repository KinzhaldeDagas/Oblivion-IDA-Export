signed int __thiscall sub_723930(_WORD *this)
{
  signed int v2; // edi
  int v3; // ebx
  signed int result; // eax

  v2 = 0;
  if ( *(this + 0x5B) )
  {
    do
    {
      v3 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * v2);
      if ( v3 )
      {
        if ( *(_DWORD *)(*((_DWORD *)this + 0x3C) + 4 * v2) != *((_DWORD *)this + 0x3A) )
        {
          NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x76), v2, (_DWORD *)this + 0x3A);
          (*(void (__thiscall **)(int, _DWORD, bool))(*(_DWORD *)v3 + 0x60))(
            v3,
            *((float *)this + 0x39),
            (*(_BYTE *)(this + 0x6E) & 2) != 0);
        }
      }
      result = (unsigned __int16)*(this + 0x5B);
      ++v2;
    }
    while ( v2 < result );
  }
  return result;
}
