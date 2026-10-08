int __thiscall sub_712710(_DWORD *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int result; // eax

  for ( i = 0; i < *(this + 0x84); ++i ) /*0x712716*/
  {
    v3 = *(_DWORD *)(*(this + 0x82) + 4 * i); /*0x712726*/
    result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 0x24))(v3, this); /*0x71272f*/
  }
  return result; /*0x71273c*/
}
