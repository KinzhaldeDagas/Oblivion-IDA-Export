int __thiscall sub_7C02B0(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int result; // eax

  v2 = this + 0x35;
  v3 = 0xD;
  do
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x94))(this, *v2++);
    --v3;
  }
  while ( v3 );
  return result;
}
