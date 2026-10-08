int __thiscall sub_8B0360(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx

  if ( this && (v2 = *(this + 2)) != 0 ) /*0x8b036d*/
    v3 = *(_DWORD *)(v2 + 0xC); /*0x8b036f*/
  else
    v3 = 0; /*0x8b0374*/
  if ( v3 ) /*0x8b037c*/
  {
    v4 = *(_DWORD *)(v3 + 8); /*0x8b037e*/
    if ( v4 ) /*0x8b0383*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x8b038b*/
  }
  return sub_6EC2C0(a2); /*0x8b0395*/
}
