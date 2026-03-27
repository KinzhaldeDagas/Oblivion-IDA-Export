int __thiscall sub_8F0B20(int this, int a2, float a3, int a4)
{
  float v5; // [esp+0h] [ebp-Ch]

  v5 = a3 + *(float *)(this + 0x14);
  return (*(int (__stdcall **)(int, _DWORD, int))(**(_DWORD **)(this + 0x10) + 0xC))(a2, LODWORD(v5), a4);
}
