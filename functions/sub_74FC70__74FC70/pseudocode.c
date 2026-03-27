void __thiscall sub_74FC70(int this)
{
  float *v2; // ebx
  float v3; // [esp+10h] [ebp-8h] BYREF
  float v4; // [esp+14h] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 8) & 0x20) == 0 )
  {
    v2 = (float *)(this + 0x18);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 0x3C) + 0x80))(
      *(_DWORD *)(this + 0x3C),
      this + 0x14,
      this + 0x18);
    (*(void (__thiscall **)(_DWORD, float *, float *))(**(_DWORD **)(this + 0x48) + 0x80))(
      *(_DWORD *)(this + 0x48),
      &v3,
      &v4);
    if ( *(float *)(this + 0x14) > (double)v3 )
      *(float *)(this + 0x14) = v3;
    if ( *v2 < (double)v4 )
      *v2 = v4;
  }
}
