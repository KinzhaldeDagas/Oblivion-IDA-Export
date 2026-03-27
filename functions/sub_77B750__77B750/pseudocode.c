int __thiscall sub_77B750(_DWORD *this, unsigned __int8 a2)
{
  int result; // eax
  int v4; // eax

  if ( a2 != *((_BYTE *)this + 0x1014) )
  {
    result = *(this + 0x3FF);
    if ( *(_BYTE *)(result + 0x5C9) )
    {
      v4 = *(this + 0x3FE);
      *((_BYTE *)this + 0x1014) = a2;
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v4 + 0x134))(v4, a2);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x94))(this, *(this + 0x3F8));
    }
  }
  return result;
}
