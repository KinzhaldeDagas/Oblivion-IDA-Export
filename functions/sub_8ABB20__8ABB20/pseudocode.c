int __thiscall sub_8ABB20(int this, int a2)
{
  float v3; // [esp+0h] [ebp-Ch]

  v3 = *(float *)(*(_DWORD *)(*(_DWORD *)(this + 8) + 0x74) + 8) * flt_A3D65C;
  return (*(int (__stdcall **)(int, _DWORD, int))(**(_DWORD **)(this + 0x14) + 0xC))(this + 0x70, LODWORD(v3), a2);
}
