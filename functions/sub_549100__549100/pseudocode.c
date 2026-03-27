void __thiscall sub_549100(_DWORD *this, float a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v8; // edi
  void (__thiscall *v9)(_DWORD *, _DWORD); // edx
  _DWORD *v10; // esi

  (*(void (__thiscall **)(_DWORD *, _DWORD, int, int, int, int, int))(*this + 0x7C))(
    this,
    LODWORD(a2),
    a3,
    a4,
    a5,
    a6,
    a7);
  (*(void (__thiscall **)(_DWORD *, _DWORD, int, int, int, int))(*this + 0x80))(this, LODWORD(a2), a3, a4, a5, a6);
  if ( 0.0 == a2 )
  {
    if ( (_BYTE)a3 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*(this + 0x12) + 0x10))(this + 0x12, 0.0);
      (*(void (__thiscall **)(_DWORD *, int))(*(this + 0x12) + 0x20))(this + 0x12, 1);
    }
    if ( (_BYTE)a5 )
    {
      v8 = this + 0x29;
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*(this + 0x29) + 0x10))(this + 0x29, 0.0);
      (*(void (__thiscall **)(_DWORD *, int))(*(this + 0x29) + 0x20))(this + 0x29, 1);
      if ( (_BYTE)a7 )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v8 + 0x4C))(this + 0x29, 0, 1.0);
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v8 + 0x4C))(this + 0x29, 1, 1.0);
      }
    }
    if ( (_BYTE)a4 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*(this + 0x40) + 0x10))(this + 0x40, 0.0);
      (*(void (__thiscall **)(_DWORD *, int))(*(this + 0x40) + 0x20))(this + 0x40, 1);
    }
    if ( (_BYTE)a6 )
    {
      v9 = *(void (__thiscall **)(_DWORD *, _DWORD))(*(this + 0x57) + 0x10);
      v10 = this + 0x57;
      v9(v10, 0.0);
      (*(void (__thiscall **)(_DWORD *, int))(*v10 + 0x20))(v10, 1);
    }
  }
}
