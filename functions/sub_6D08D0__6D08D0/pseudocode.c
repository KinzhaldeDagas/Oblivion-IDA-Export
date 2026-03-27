int __thiscall sub_6D08D0(_DWORD *this, int a2)
{
  unsigned __int16 v3; // di
  int result; // eax
  int v5; // ecx

  sub_715E40(this, a2);
  v3 = 0;
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x74))(this);
  if ( (_WORD)result )
  {
    do
    {
      v5 = *(_DWORD *)(*(this + 0x15) + 4 * v3);
      if ( v5 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x38))(v5, a2);
      ++v3;
      result = (*(int (__thiscall **)(_DWORD *))(*this + 0x74))(this);
    }
    while ( v3 < (unsigned __int16)result );
  }
  return result;
}
