void __thiscall sub_8ABA40(int this, _OWORD *a2)
{
  int v3; // edx
  float v4; // [esp+0h] [ebp-38h]
  _BYTE v5[32]; // [esp+18h] [ebp-20h] BYREF

  *(_OWORD *)(this + 0x70) = *a2;
  *(_OWORD *)(this + 0x80) = a2[1];
  *(_OWORD *)(this + 0x90) = a2[2];
  *(_OWORD *)(this + 0xA0) = a2[3];
  v3 = *(_DWORD *)(this + 8);
  if ( v3 )
  {
    v4 = *(float *)(*(_DWORD *)(v3 + 0x74) + 8) * flt_A3D65C;
    (*(void (__stdcall **)(_OWORD *, _DWORD, _BYTE *))(**(_DWORD **)(this + 0x14) + 0xC))(a2, LODWORD(v4), v5);
    sub_8DE950((_DWORD *)this, (int)v5);
  }
}
