int __thiscall sub_8B9B20(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int v4; // edi
  int v5; // eax

  v2 = a2; /*0x8b9b21*/
  v4 = sub_7124A0(a2); /*0x8b9b30*/
  v5 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(*this + 0x74))(this, &a2); /*0x8b9b3e*/
  if ( v5 ) /*0x8b9b42*/
  {
    if ( v4 ) /*0x8b9b46*/
      *(_DWORD *)(v5 + 0x48) = *(_DWORD *)(v4 + 8); /*0x8b9b4b*/
  }
  return sub_89D6C0(this, (int)v2); /*0x8b9b56*/
}
