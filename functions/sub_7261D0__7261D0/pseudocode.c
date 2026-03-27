int __thiscall sub_7261D0(int this, unsigned int a2)
{
  int result; // eax
  int v4; // ecx

  result = a2;
  if ( a2 < *(unsigned __int16 *)(this + 0x26) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(this + 0x20) + 4 * a2);
    if ( v4 )
    {
      result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v4 + 8))(v4, 0, 0);
      ++*(_DWORD *)(this + 8);
    }
  }
  return result;
}
