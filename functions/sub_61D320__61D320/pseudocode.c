void __thiscall sub_61D320(int this)
{
  int v2; // eax
  TESObjectREFR *v3; // ecx
  bool v4; // c0
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  float v9; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)(this + 0x6C);
  if ( v2 != 0xE
    && v2 != 0x10
    && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x3C) + 0x25C))(*(_DWORD *)(this + 0x3C)) )
  {
    sub_619920(this, 4);
    if ( *(float *)(this + 0xF0) >= *(float *)(this + 0x44) - *(float *)(this + 0xEC)
      || sub_5E05B0(*(_DWORD **)(this + 0x3C)) )
    {
      v7 = *(float *)(this + 0x44);
      *(_DWORD *)(this + 0xD0) = 0x201;
      *(float *)(this + 0xEC) = v7;
      v6 = 0.0;
    }
    else
    {
      v3 = *(TESObjectREFR **)(this + 0x3C);
      *(_DWORD *)(this + 0xD0) = 0x101;
      v4 = flt_A3D65C < sub_5E5850(v3, 3);
      v5 = flt_A3D65C;
      if ( v4 )
        v5 = sub_5E5850((TESObjectREFR *)*(_DWORD *)(this + 0x3C), 3);
      v9 = v5;
      *(float *)(this + 0xEC) = *(float *)(this + 0x44);
      v6 = v9;
    }
    *(float *)(this + 0xF0) = v6;
    v8 = flt_A30634;
    *(float *)(this + 0xF4) = flt_A30634;
    *(float *)(this + 0xD4) = *(float *)(this + 0x44);
    *(float *)(this + 0xD8) = *(float *)&dword_A46C30;
    *(float *)(this + 0xDC) = v8;
  }
}
