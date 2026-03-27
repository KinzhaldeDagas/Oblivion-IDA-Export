int __thiscall sub_712710(_DWORD *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int result; // eax

  for ( i = 0; i < *(this + 0x84); ++i )
  {
    v3 = *(_DWORD *)(*(this + 0x82) + 4 * i);
    result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 0x24))(v3, this);
  }
  return result;
}
