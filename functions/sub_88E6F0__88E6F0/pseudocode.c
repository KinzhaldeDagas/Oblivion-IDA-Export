void __thiscall sub_88E6F0(hkVector4 *this, hkVector4 *a2)
{
  hkVector4 v3; // xmm0
  __m128 *v4; // eax
  int (__thiscall ***v5)(int (__stdcall ***)(signed int), int); // ebx

  *((float *)this + 0x19) = 0.0; /*0x88e723*/
  *(this + 4) = unk_BA7A40; /*0x88e731*/
  v3 = unk_BA7A40; /*0x88e735*/
  *((float *)this + 0x18) = 0.0; /*0x88e73c*/
  *(this + 5) = v3; /*0x88e73f*/
  *((_BYTE *)this + 0x68) = 0; /*0x88e743*/
  *((_BYTE *)this + 0x69) = 0; /*0x88e746*/
  if ( a2 ) /*0x88e749*/
  {
    *(this + 2) = a2[2]; /*0x88e74f*/
    *(this + 3) = a2[3]; /*0x88e757*/
    v4 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x100, 0x2E); /*0x88e76d*/
    v4->m128_i16[2] = 0x100; /*0x88e76f*/
    v5 = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))sub_88E560(v4, (int)a2); /*0x88e785*/
    (*(void (__thiscall **)(hkVector4 *, int (__thiscall ***)(int (__stdcall ***)(signed int), int)))(LODWORD(this->x) + 0x4C))( /*0x88e797*/
      this,
      v5);
    sub_8BC730(v5); /*0x88e79b*/
    (*(void (__thiscall **)(hkVector4 *, hkVector4 *))(LODWORD(this->x) + 0x7C))(this, a2); /*0x88e7a8*/
  }
}
