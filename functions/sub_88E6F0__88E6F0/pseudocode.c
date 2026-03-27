void __thiscall sub_88E6F0(hkVector4 *this, hkVector4 *a2)
{
  hkVector4 v3; // xmm0
  __m128 *v4; // eax
  int (__stdcall ***v5)(signed int); // ebx

  *((float *)this + 0x19) = 0.0;
  *(this + 4) = stru_BA7A40;
  v3 = stru_BA7A40;
  *((float *)this + 0x18) = 0.0;
  *(this + 5) = v3;
  *((_BYTE *)this + 0x68) = 0;
  *((_BYTE *)this + 0x69) = 0;
  if ( a2 )
  {
    *(this + 2) = a2[2];
    *(this + 3) = a2[3];
    v4 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x100, 0x2E);
    v4->m128_i16[2] = 0x100;
    v5 = (int (__stdcall ***)(signed int))sub_88E560(v4, (int)a2);
    (*(void (__thiscall **)(hkVector4 *, int (__stdcall ***)(signed int)))(LODWORD(this->x) + 0x4C))(this, v5);
    sub_8BC730(v5);
    (*(void (__thiscall **)(hkVector4 *, hkVector4 *))(LODWORD(this->x) + 0x7C))(this, a2);
  }
}
