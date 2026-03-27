int __thiscall NiTMap_Clear(_DWORD *this)
{
  unsigned int v2; // ebx
  int result; // eax
  int v4; // ecx
  _DWORD *v5; // edi

  v2 = 0;
  if ( *(this + 1) )
  {
    do
    {
      for ( result = *(this + 2); *(_DWORD *)(result + 4 * v2); result = *(this + 2) )
      {
        v4 = *(this + 2);
        v5 = *(_DWORD **)(v4 + 4 * v2);
        *(_DWORD *)(v4 + 4 * v2) = *v5;
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x10))(this, v5);
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x18))(this, v5);
      }
      ++v2;
    }
    while ( v2 < *(this + 1) );
    *(this + 3) = 0;
  }
  else
  {
    *(this + 3) = 0;
  }
  return result;
}
