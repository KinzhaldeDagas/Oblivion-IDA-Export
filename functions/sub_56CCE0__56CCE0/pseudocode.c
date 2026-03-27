bool __thiscall sub_56CCE0(int this, float a2)
{
  bool result; // al
  float v4; // [esp+Ch] [ebp+4h]

  if ( *(_BYTE *)(this + 0x28) )
    return 0;
  result = sub_56BC70((float *)this, a2);
  v4 = *(float *)(this + 0x10) / *(float *)(this + 8);
  *(float *)(*(_DWORD *)(this + 0x18) + 0x40) = v4;
  return result;
}
