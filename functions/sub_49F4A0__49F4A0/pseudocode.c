double __thiscall sub_49F4A0(int this, float a2)
{
  float v3; // [esp+Ch] [ebp+4h]

  if ( (unsigned int)(*(_DWORD *)(this + 0x44) - 1) > 2 )
    return 0.0;
  v3 = *(float *)(this + 0x48) + a2;
  return sub_6C5FC0(this, v3, 1);
}
