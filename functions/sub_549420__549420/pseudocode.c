int __thiscall sub_549420(_DWORD *this, int a2, float a3, int a4, int a5, int a6)
{
  int result; // eax
  int v8; // [esp+34h] [ebp-Ch]

  result = (*(int (__thiscall **)(_DWORD *, _DWORD, int, int, int))(*this + 0xB8))(this, LODWORD(a3), a4, a5, a6); /*0x549443*/
  if ( LOBYTE(a3) ) /*0x549447*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*(this + 0xD) + 0x10))(this + 0xD, 0.0); /*0x54945a*/
    v8 = 1; /*0x549462*/
    if ( a3 <= 0.0 ) /*0x54946d*/
      result = (*(int (__thiscall **)(_DWORD *, int))(*(this + 0xD) + 0x20))(this + 0xD, 1); /*0x54948c*/
    else
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 0xAC))(this, 1, LODWORD(a3)); /*0x54947f*/
  }
  if ( (_BYTE)a5 ) /*0x549493*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*(this + 0x24) + 0x10))(this + 0x24, 0.0, v8); /*0x5494ac*/
    v8 = 1; /*0x5494b4*/
    if ( a3 <= 0.0 ) /*0x5494bf*/
      result = (*(int (__thiscall **)(_DWORD *, int))(*(this + 0x24) + 0x20))(this + 0x24, 1); /*0x5494de*/
    else
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 0xAC))(this, 2, LODWORD(a3)); /*0x5494d1*/
  }
  if ( (_BYTE)a4 ) /*0x5494e5*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*(this + 0x3B) + 0x10))(this + 0x3B, 0.0, v8); /*0x5494fe*/
    v8 = 1; /*0x549506*/
    if ( a3 <= 0.0 ) /*0x549511*/
      result = (*(int (__thiscall **)(_DWORD *, int))(*(this + 0x3B) + 0x20))(this + 0x3B, 1); /*0x549530*/
    else
      result = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0xAC))(this, 0, LODWORD(a3)); /*0x549523*/
  }
  if ( (_BYTE)a6 ) /*0x549537*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*(this + 0x52) + 0x10))(this + 0x52, 0.0, v8); /*0x549550*/
    if ( a3 <= 0.0 ) /*0x549563*/
      return (*(int (__thiscall **)(_DWORD *, int))(*(this + 0x52) + 0x20))(this + 0x52, 1); /*0x549586*/
    else
      return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 0xAC))(this, 3, LODWORD(a3)); /*0x549575*/
  }
  return result; /*0x549577*/
}
