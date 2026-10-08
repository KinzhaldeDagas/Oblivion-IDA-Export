void __thiscall sub_74FC70(int this)
{
  float *v2; // ebx
  float v3; // [esp+10h] [ebp-8h] BYREF
  float v4; // [esp+14h] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 8) & 0x20) == 0 ) /*0x74fc7e*/
  {
    v2 = (float *)(this + 0x18); /*0x74fc8d*/
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 0x3C) + 0x80))( /*0x74fc95*/
      *(_DWORD *)(this + 0x3C),
      this + 0x14,
      this + 0x18);
    (*(void (__thiscall **)(_DWORD, float *, float *))(**(_DWORD **)(this + 0x48) + 0x80))( /*0x74fcac*/
      *(_DWORD *)(this + 0x48),
      &v3,
      &v4);
    if ( *(float *)(this + 0x14) > (double)v3 ) /*0x74fcbb*/
      *(float *)(this + 0x14) = v3; /*0x74fcbd*/
    if ( *v2 < (double)v4 ) /*0x74fcd0*/
      *v2 = v4; /*0x74fcd3*/
  }
}
