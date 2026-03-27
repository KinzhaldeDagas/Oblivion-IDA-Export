int __thiscall sub_549420(_DWORD *this, int a2, float a3, int a4, int a5, int a6)
{
  int result; // eax
  int v8; // [esp+34h] [ebp-Ch]

  result = (*(int (__thiscall **)(_DWORD *, _DWORD, int, int, int))(*this + 0xB8))(this, LODWORD(a3), a4, a5, a6);
  if ( LOBYTE(a3) )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*(this + 0xD) + 0x10))(this + 0xD, 0.0);
    v8 = 1;
    if ( a3 <= 0.0 )
      result = (*(int (__thiscall **)(_DWORD *, int))(*(this + 0xD) + 0x20))(this + 0xD, 1);
    else
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 0xAC))(this, 1, LODWORD(a3));
  }
  if ( (_BYTE)a5 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*(this + 0x24) + 0x10))(this + 0x24, 0.0, v8);
    v8 = 1;
    if ( a3 <= 0.0 )
      result = (*(int (__thiscall **)(_DWORD *, int))(*(this + 0x24) + 0x20))(this + 0x24, 1);
    else
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 0xAC))(this, 2, LODWORD(a3));
  }
  if ( (_BYTE)a4 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*(this + 0x3B) + 0x10))(this + 0x3B, 0.0, v8);
    v8 = 1;
    if ( a3 <= 0.0 )
      result = (*(int (__thiscall **)(_DWORD *, int))(*(this + 0x3B) + 0x20))(this + 0x3B, 1);
    else
      result = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0xAC))(this, 0, LODWORD(a3));
  }
  if ( (_BYTE)a6 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*(this + 0x52) + 0x10))(this + 0x52, 0.0, v8);
    if ( a3 <= 0.0 )
      return (*(int (__thiscall **)(_DWORD *, int))(*(this + 0x52) + 0x20))(this + 0x52, 1);
    else
      return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 0xAC))(this, 3, LODWORD(a3));
  }
  return result;
}
