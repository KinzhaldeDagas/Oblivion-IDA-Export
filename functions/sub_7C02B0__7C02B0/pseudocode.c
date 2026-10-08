int __thiscall sub_7C02B0(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int result; // eax

  v2 = this + 0x35; /*0x7c02b5*/
  v3 = 0xD; /*0x7c02bb*/
  do /*0x7c02d5*/
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x94))(this, *v2++); /*0x7c02cd*/
    --v3; /*0x7c02d2*/
  }
  while ( v3 ); /*0x7c02d5*/
  return result; /*0x7c02d7*/
}
