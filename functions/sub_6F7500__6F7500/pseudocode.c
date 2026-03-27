int __thiscall sub_6F7500(_DWORD *this)
{
  unsigned __int8 **v2; // eax
  int result; // eax
  int v4; // edi

  v2 = (unsigned __int8 **)*(this + 8);
  if ( *v2 && *v2 < &(*v2)[*(_DWORD *)*(this + 0xC)] )
    return **v2;
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this);
  v4 = result;
  if ( result != 0xFFFFFFFF )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 8))(this, result);
    return v4;
  }
  return result;
}
