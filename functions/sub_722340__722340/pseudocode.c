int __thiscall sub_722340(int this)
{
  int result; // eax
  double v2; // st7
  float v3; // [esp+4h] [ebp-10h]
  float v4; // [esp+4h] [ebp-10h]
  float v5; // [esp+4h] [ebp-10h]
  float v6; // [esp+8h] [ebp-Ch]
  float v7; // [esp+Ch] [ebp-8h]
  float v8; // [esp+10h] [ebp-4h]

  if ( *(_WORD *)(this + 0xB8) )
  {
    v6 = *(float *)(this + 0x20) - *(float *)(this + 0x88);
    v7 = *(float *)(this + 0x24) - *(float *)(this + 0x8C);
    v8 = *(float *)(this + 0x28) - *(float *)(this + 0x90);
    v3 = v7 * v7 + v6 * v6 + v8 * v8;
    v4 = sqrt(v3);
    result = *(_DWORD *)(this + 0x88);
    v2 = v4 + *(float *)(this + 0x2C);
    *(_DWORD *)(this + 0x20) = result;
    *(_DWORD *)(this + 0x24) = *(_DWORD *)(this + 0x8C);
    v5 = v2;
    *(_DWORD *)(this + 0x28) = *(_DWORD *)(this + 0x90);
    *(float *)(this + 0x2C) = v5;
  }
  return result;
}
