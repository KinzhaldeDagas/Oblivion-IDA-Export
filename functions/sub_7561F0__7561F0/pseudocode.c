char *__thiscall sub_7561F0(
        char *this,
        float a2,
        char a3,
        char a4,
        int a5,
        int a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  double v15; // st7

  sub_75ECB0((NiObject *)this, a2, a3, a4, a5); /*0x75620e*/
  *((float *)this + 0xC) = a7; /*0x75621b*/
  *((float *)this + 0xD) = a8; /*0x75622a*/
  v15 = kHeadBodyNormalMatchRadius; /*0x75622d*/
  *((_DWORD *)this + 0xE) = a9; /*0x756233*/
  *((float *)this + 0x14) = v15; /*0x75623a*/
  *((float *)this + 0x15) = v15; /*0x75623d*/
  *((_DWORD *)this + 0xB) = a6; /*0x756240*/
  *((_DWORD *)this + 0xF) = a10; /*0x75624d*/
  *((_DWORD *)this + 0x11) = a12; /*0x756254*/
  *((_DWORD *)this + 0x10) = a11; /*0x756257*/
  *((_DWORD *)this + 0x12) = a13; /*0x75625e*/
  *(_DWORD *)this = &NiPSysPlanarCollider::`vftable'; /*0x756269*/
  *((_DWORD *)this + 0x13) = a14; /*0x75626f*/
  sub_716DE0((float *)this + 0x16, (int)&g_zeroNiPoint3, 0.0); /*0x756272*/
  *((_DWORD *)this + 0x1A) = LODWORD(g_zeroNiPoint3.x); /*0x75627d*/
  *((_DWORD *)this + 0x1B) = LODWORD(g_zeroNiPoint3.y); /*0x756286*/
  *((_DWORD *)this + 0x1C) = LODWORD(g_zeroNiPoint3.z); /*0x75628e*/
  qmemcpy(this + 0x74, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x75629e*/
  sub_718A50((float *)this + 0x26); /*0x7562a6*/
  sub_718A50((float *)this + 0x33); /*0x7562b1*/
  return this; /*0x7562bb*/
}
