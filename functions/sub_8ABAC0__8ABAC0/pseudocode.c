void __thiscall sub_8ABAC0(int this, _OWORD *a2, float a3)
{
  int v4; // eax
  float v5; // [esp+0h] [ebp-38h]
  _BYTE v6[32]; // [esp+18h] [ebp-20h] BYREF

  v4 = *(_DWORD *)(this + 8);
  *(_OWORD *)(this + 0xA0) = *a2;
  if ( v4 )
  {
    v5 = *(float *)(*(_DWORD *)(v4 + 0x74) + 8) * flt_A3D65C + a3;
    (*(void (__stdcall **)(int, _DWORD, _BYTE *))(**(_DWORD **)(this + 0x14) + 0xC))(this + 0x70, LODWORD(v5), v6);
    sub_8DE950((_DWORD *)this, (int)v6);
  }
}
