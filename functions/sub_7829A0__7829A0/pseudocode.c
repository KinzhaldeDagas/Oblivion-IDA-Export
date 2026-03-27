int __thiscall sub_7829A0(_DWORD *this, unsigned int a2, _DWORD *a3, _DWORD *a4, char a5, char a6)
{
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // ecx

  if ( *(this + 2) < a2 )
  {
    v7 = *(this + 4);
    if ( v7 )
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 8))(*(this + 4));
    *(this + 4) = 0;
    v8 = a2;
    if ( (a2 & 0xF) != 0 )
      v8 = (a2 & 0xFFFFFFF0) + 0x20;
    *(this + 2) = v8;
  }
  if ( !*(this + 4) )
  {
    v9 = 0x208;
    if ( a6 )
      v9 = 0x218;
    if ( (*(int (__stdcall **)(_DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)*(this + 3) + 0x68))(
           *(this + 3),
           *(this + 2),
           v9,
           *(this + 1),
           0,
           this + 4,
           0) >= 0 )
      *(this + 5) = 0;
  }
  if ( a5 || (v10 = *(this + 5), *(this + 2) - v10 < a2) )
  {
    v11 = a3;
    v12 = a4;
    *a3 = 0;
    *(this + 5) = a2;
    *a4 = 0x2000;
  }
  else
  {
    v11 = a3;
    *a3 = v10;
    v12 = a4;
    *(this + 5) += a2;
    *a4 = 0x1000;
  }
  if ( !*v11 )
    *v12 = 0x2000;
  return *(this + 4);
}
