float *__thiscall sub_88E950(float *this, int a2)
{
  float *v3; // eax
  float *v4; // ebx

  v3 = (float *)FormHeapAlloc(0x4Cu);
  v4 = v3;
  if ( v3 )
  {
    sub_88EB60(v3);
    *(_DWORD *)v4 = &bhkBlendCollisionObjectAddRotation::`vftable';
    qmemcpy(v4 + 0xA, &stru_B26AF0[0xA].unk2C, 0x24u);
  }
  else
  {
    v4 = 0;
  }
  sub_88EA90(this, v4, a2);
  qmemcpy(v4 + 0xA, this + 0xA, 0x24u);
  return v4;
}
