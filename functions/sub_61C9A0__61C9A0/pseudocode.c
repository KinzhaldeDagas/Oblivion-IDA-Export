void __thiscall sub_61C9A0(float *this, _DWORD **a2)
{
  double v3; // st7
  int v4; // eax
  int v5; // eax
  int v6; // eax
  bool v7; // c0
  double v8; // st7
  float v9; // [esp+8h] [ebp-4h]
  float v10; // [esp+8h] [ebp-4h]

  sub_5E02B0(*((_DWORD ***)this + 0xF));
  v3 = flt_A30634;
  v4 = *((_DWORD *)this + 0x1B);
  if ( v4 != 0xC )
  {
    if ( v4 == 4 )
      *(this + 0x33) = flt_A30634;
    if ( v4 == 6 )
      *(this + 0x4B) = 0.0;
    if ( v4 == 4 )
    {
      v9 = flt_B36F70;
      *(this + 0x3B) = *(this + 0x11);
      *(this + 0x3C) = v9;
      *(this + 0x3D) = v3;
    }
    v5 = *((_DWORD *)this + 0x1B);
    if ( v5 != 4 && v5 != 7 && v5 != 9 && v5 != 8 && v5 != 0xC )
      *((_BYTE *)this + 0x191) = 1;
  }
  v6 = *((_DWORD *)this + 0xF);
  *((_DWORD *)this + 0x1B) = 0xC;
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v6 + 0x58) + 0x2C4))(*(_DWORD *)(v6 + 0x58), 0x101, 1);
  v7 = flt_A3D65C < sub_5E5850((TESObjectREFR *)*((_DWORD *)this + 0xF), 3);
  v8 = flt_A3D65C;
  if ( v7 )
    v8 = sub_5E5850((TESObjectREFR *)*((_DWORD *)this + 0xF), 3);
  v10 = v8;
  *(this + 0x3B) = *(this + 0x11);
  *(this + 0x3C) = v10;
  *(this + 0x3D) = flt_A30634;
  *((_DWORD *)this + 0x47) = a2;
}
