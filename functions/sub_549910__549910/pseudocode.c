int __thiscall sub_549910(_BYTE *this, int a2)
{
  unsigned int v3; // esi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  int v5; // eax
  int v6; // eax
  int result; // eax

  if ( *(this + 0x1DA) ) /*0x549935*/
    return (*(int (**)(void))(*(_DWORD *)this + 0xD4))(); /*0x549935*/
  v3 = 0; /*0x549942*/
  if ( !a2 ) /*0x549946*/
    return (*(int (**)(void))(*(_DWORD *)this + 0xD4))(); /*0x549946*/
  v4 = *((void (__thiscall ****)(_DWORD, int))this + 3); /*0x549948*/
  if ( v4 ) /*0x54994d*/
    (**v4)(v4, 1); /*0x549955*/
  v5 = FormHeapAlloc(0x14u); /*0x549959*/
  v6 = v5 ? sub_54EA00(v5, 1, 0xDu) : 0;
  *((_DWORD *)this + 3) = v6; /*0x549984*/
  do /*0x54999f*/
  {
    (*(void (__stdcall **)(unsigned int, _DWORD))(**((_DWORD **)this + 3) + 0x4C))(v3, *(float *)(a2 + 4 * v3)); /*0x549997*/
    ++v3; /*0x549999*/
  }
  while ( v3 < 0xD ); /*0x54999f*/
  result = (*(int (__thiscall **)(_BYTE *, _DWORD))(*((_DWORD *)this + 4) + 0x2C))(this + 0x10, *((_DWORD *)this + 3)); /*0x5499ae*/
  if ( !(_BYTE)result ) /*0x5499b2*/
    return (*(int (**)(void))(*(_DWORD *)this + 0xD4))(); /*0x5499be*/
  return result; /*0x5499c0*/
}
