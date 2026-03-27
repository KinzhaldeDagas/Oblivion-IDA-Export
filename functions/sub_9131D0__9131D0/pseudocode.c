int __thiscall sub_9131D0(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int result; // eax

  v2 = *(this + 0x11);
  v3 = 0;
  *this = (int)&off_A9CD6C;
  if ( v2 > 0 )
  {
    do
    {
      v4 = *(_DWORD *)(*(this + 0x10) + 4 * v3);
      if ( *(_WORD *)(v4 + 4) )
      {
        if ( !--*(_WORD *)(v4 + 6) )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
      ++v3;
    }
    while ( v3 < *(this + 0x11) );
  }
  result = sub_9130B0(this + 3);
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
