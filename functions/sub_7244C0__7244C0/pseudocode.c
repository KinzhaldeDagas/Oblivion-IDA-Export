signed int __thiscall sub_7244C0(int this)
{
  signed int result; // eax
  int v2; // edx
  _DWORD *v3; // eax
  _DWORD *v4; // ecx

  if ( (*(_BYTE *)(this + 0xDC) & 1) == 0 )
    return sub_70A360((NiNode *)this);
  result = *(_DWORD *)(this + 0xE0);
  if ( result >= 0 && (result = *(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * result)) != 0 )
  {
    v2 = *(_DWORD *)(result + 0x20);
    v3 = (_DWORD *)(result + 0x20);
    v4 = (_DWORD *)(this + 0x20);
    *v4 = v2;
    v4[1] = v3[1];
    v4[2] = v3[2];
    result = v3[3];
    v4[3] = result;
  }
  else
  {
    *(float *)(this + 0x2C) = 0.0;
  }
  return result;
}
