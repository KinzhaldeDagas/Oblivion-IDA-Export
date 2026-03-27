int __thiscall sub_724460(int this, float a2)
{
  int result; // eax
  int v4; // ecx

  if ( (*(_BYTE *)(this + 0xDC) & 1) == 0 )
    return (int)sub_70A310((_DWORD *)this, a2);
  if ( *(int *)(this + 0xE0) >= 0 )
  {
    sub_47C930((_DWORD *)this, a2, 1);
    result = *(_DWORD *)(this + 0xE0);
    v4 = *(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * result);
    if ( v4 )
      return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 0x4C))(LODWORD(a2));
  }
  return result;
}
