int __thiscall sub_549910(_BYTE *this, int a2)
{
  unsigned int v3; // esi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  int v5; // eax
  int v6; // eax
  int result; // eax

  if ( *(this + 0x1DA) )
    return (*(int (**)(void))(*(_DWORD *)this + 0xD4))();
  v3 = 0;
  if ( !a2 )
    return (*(int (**)(void))(*(_DWORD *)this + 0xD4))();
  v4 = *((void (__thiscall ****)(_DWORD, int))this + 3);
  if ( v4 )
    (**v4)(v4, 1);
  v5 = FormHeapAlloc(0x14u);
  v6 = v5 ? sub_54EA00(v5, 1, 0xDu) : 0;
  *((_DWORD *)this + 3) = v6;
  do
  {
    (*(void (__stdcall **)(unsigned int, _DWORD))(**((_DWORD **)this + 3) + 0x4C))(v3, *(float *)(a2 + 4 * v3));
    ++v3;
  }
  while ( v3 < 0xD );
  result = (*(int (__thiscall **)(_BYTE *, _DWORD))(*((_DWORD *)this + 4) + 0x2C))(this + 0x10, *((_DWORD *)this + 3));
  if ( !(_BYTE)result )
    return (*(int (**)(void))(*(_DWORD *)this + 0xD4))();
  return result;
}
