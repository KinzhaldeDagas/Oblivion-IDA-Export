int __thiscall sub_7E8B80(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int result; // eax

  v2 = this + 0x1F;
  v3 = 3;
  do
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x94))(this, *v2++);
    --v3;
  }
  while ( v3 );
  return result;
}
