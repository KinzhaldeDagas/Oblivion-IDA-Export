int __thiscall sub_7C59E0(int this)
{
  int v1; // eax

  v1 = *(_DWORD *)(this + 0xE0);
  if ( v1 < 0 || v1 >= *(unsigned __int16 *)(this + 0xB6) )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * v1);
}
