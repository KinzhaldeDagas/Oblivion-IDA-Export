int __thiscall sub_6A90A0(int this, __int16 a2)
{
  float v3; // [esp+0h] [ebp-4h]

  v3 = *(float *)(this + 0x3C); /*0x6a90a9*/
  *(_WORD *)(this + 0x44) = a2; /*0x6a90ac*/
  return sub_6B6F20((float *)this, v3); /*0x6a90b5*/
}
