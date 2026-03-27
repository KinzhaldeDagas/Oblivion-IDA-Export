void __thiscall sub_5A66A0(_DWORD *this)
{
  unsigned int v2; // esi
  _DWORD *v3; // edi
  unsigned int v4; // eax

  v2 = 0;
  if ( *(this + 0x21) )
  {
    v3 = this + 0x1E;
    do
    {
      v4 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v3 + 4))(this + 0x1E, v2);
      FormHeapFree(v4);
      ++v2;
    }
    while ( v2 < *(this + 0x21) );
  }
}
