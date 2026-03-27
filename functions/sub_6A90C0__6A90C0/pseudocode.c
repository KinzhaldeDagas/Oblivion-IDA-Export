int __thiscall sub_6A90C0(int this, __int16 a2)
{
  float v3; // [esp+0h] [ebp-4h]

  v3 = *(float *)(this + 0x3C);
  *(_WORD *)(this + 0x46) = a2;
  return sub_6B6F20((float *)this, v3);
}
