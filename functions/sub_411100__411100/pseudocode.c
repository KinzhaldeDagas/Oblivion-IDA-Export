int __thiscall sub_411100(int this)
{
  int result; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // ecx

  result = *(unsigned __int16 *)(this + 0xB6);
  v3 = *(_DWORD *)(this + 0xDC);
  if ( (_WORD)result )
    v4 = **(_DWORD **)(this + 0xB0);
  else
    v4 = 0;
  if ( *(_DWORD *)(v3 + 0x1C) != v4 )
  {
    if ( (_WORD)result )
      v5 = **(_DWORD **)(this + 0xB0);
    else
      v5 = 0;
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 0x84))(v5, v3, 1);
    return NiAVObject_UpdateNiAVObject(*(NiAVObject **)(this + 0xDC), 0.0, 1);
  }
  return result;
}
