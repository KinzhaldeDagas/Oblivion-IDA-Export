_DWORD *__thiscall sub_67AF60(_DWORD *this)
{
  _DWORD v3[5]; // [esp-4h] [ebp-24h] BYREF
  _DWORD *v4; // [esp+10h] [ebp-10h]
  int v5; // [esp+1Ch] [ebp-4h]

  v3[4] = this;
  sub_67B240(this);
  v5 = 2;
  sub_67B240(this + 3);
  sub_67B240(this + 6);
  v4 = v3;
  sub_532DF0(this + 0x10, 0);
  LOBYTE(v5) = 3;
  v4 = v3;
  sub_532DF0(this + 0x12, 0);
  *(this + 0x14) = 0;
  *(this + 0x15) = 0;
  *(this + 0x16) = 0;
  *(this + 0x17) = 0;
  LOBYTE(v5) = 4;
  *(this + 0x18) = 0;
  *(this + 0x19) = 0;
  sub_67B240(this + 0x1A);
  LOBYTE(v5) = 5;
  sub_677DD0(this + 0x1F, 2u, 0x25, 0xC);
  *((_BYTE *)this + 0x99) = 1;
  *((_BYTE *)this + 0x98) = 1;
  *((_BYTE *)this + 0xA0) = 1;
  *((_BYTE *)this + 0xA1) = 1;
  *((_BYTE *)this + 0xA2) = 1;
  *((_BYTE *)this + 0xA3) = 1;
  *((_BYTE *)this + 0xA4) = 1;
  *((_BYTE *)this + 0x9A) = 0;
  *(this + 0x27) = 0;
  *(this + 0x1D) = 0;
  *(this + 0xA) = 0;
  *((_BYTE *)this + 0xA5) = 0;
  *((_BYTE *)this + 0xA6) = 0;
  *((float *)this + 0x2B) = flt_B37D58;
  *(this + 0x2A) = 0;
  return this;
}
