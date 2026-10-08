BSFaceGenAnimationData *__thiscall BSFaceGenAnimationData::BSFaceGenAnimationData(BSFaceGenAnimationData *this)
{
  float z; // edx

  sub_721350((NiObject *)this); /*0x54cb1a*/
  *(_DWORD *)this = &BSFaceGenAnimationData::`vftable'; /*0x54cb2c*/
  sub_54EA00((int)this + 0x10, 1, 0xDu); /*0x54cb32*/
  *((_DWORD *)this + 0xC) = 0; /*0x54cb3c*/
  *((_DWORD *)this + 0xA) = 0; /*0x54cb3f*/
  *((_DWORD *)this + 0xB) = 0; /*0x54cb42*/
  *((_DWORD *)this + 9) = &NiTPointerList<BSFaceGenKeyframe *>::`vftable'; /*0x54cb45*/
  sub_54EA00((int)this + 0x34, 1, 0xDu); /*0x54cb54*/
  sub_54EA00((int)this + 0x48, 1, 0xDu); /*0x54cb65*/
  *((_DWORD *)this + 0x1A) = 0; /*0x54cb6a*/
  *((_DWORD *)this + 0x18) = 0; /*0x54cb6d*/
  *((_DWORD *)this + 0x19) = 0; /*0x54cb70*/
  *((_DWORD *)this + 0x17) = &NiTPointerList<BSFaceGenKeyframe *>::`vftable'; /*0x54cb73*/
  sub_54EA00((int)this + 0x6C, 2, 0x11u); /*0x54cb82*/
  *((_DWORD *)this + 0x23) = 0; /*0x54cb87*/
  *((_DWORD *)this + 0x21) = 0; /*0x54cb8d*/
  *((_DWORD *)this + 0x22) = 0; /*0x54cb93*/
  *((_DWORD *)this + 0x20) = &NiTPointerList<BSFaceGenKeyframe *>::`vftable'; /*0x54cb99*/
  sub_54EA00((int)this + 0x90, 2, 0x11u); /*0x54cbae*/
  sub_54EA00((int)this + 0xA4, 2, 0x11u); /*0x54cbc2*/
  *((_DWORD *)this + 0x31) = 0; /*0x54cbc7*/
  *((_DWORD *)this + 0x2F) = 0; /*0x54cbcd*/
  *((_DWORD *)this + 0x30) = 0; /*0x54cbd3*/
  *((_DWORD *)this + 0x2E) = &NiTPointerList<BSFaceGenKeyframe *>::`vftable'; /*0x54cbd9*/
  sub_54EA00((int)this + 0xC8, 0, 0x10u); /*0x54cbed*/
  *((_DWORD *)this + 0x3A) = 0; /*0x54cbf2*/
  *((_DWORD *)this + 0x38) = 0; /*0x54cbf8*/
  *((_DWORD *)this + 0x39) = 0; /*0x54cbfe*/
  *((_DWORD *)this + 0x37) = &NiTPointerList<BSFaceGenKeyframe *>::`vftable'; /*0x54cc04*/
  sub_54EA00((int)this + 0xEC, 0, 0x10u); /*0x54cc18*/
  sub_54EA00((int)this + 0x100, 0, 0x10u); /*0x54cc2b*/
  *((_DWORD *)this + 0x48) = 0; /*0x54cc30*/
  *((_DWORD *)this + 0x46) = 0; /*0x54cc36*/
  *((_DWORD *)this + 0x47) = 0; /*0x54cc3c*/
  *((_DWORD *)this + 0x45) = &NiTPointerList<BSFaceGenKeyframe *>::`vftable'; /*0x54cc42*/
  sub_54EA00((int)this + 0x124, 3, 1u); /*0x54cc57*/
  *((_DWORD *)this + 0x51) = 0; /*0x54cc5c*/
  *((_DWORD *)this + 0x4F) = 0; /*0x54cc62*/
  *((_DWORD *)this + 0x50) = 0; /*0x54cc68*/
  *((_DWORD *)this + 0x4E) = &NiTPointerList<BSFaceGenKeyframe *>::`vftable'; /*0x54cc6e*/
  sub_54EA00((int)this + 0x148, 3, 1u); /*0x54cc83*/
  sub_54EA00((int)this + 0x15C, 3, 1u); /*0x54cc97*/
  *((_DWORD *)this + 3) = 0; /*0x54cc9e*/
  *((_DWORD *)this + 0x5C) = LODWORD(g_zeroNiPoint3.x); /*0x54cca6*/
  *((_DWORD *)this + 0x5D) = LODWORD(g_zeroNiPoint3.y); /*0x54ccb2*/
  z = g_zeroNiPoint3.z; /*0x54ccb8*/
  *((float *)this + 0x77) = 0.0; /*0x54ccbe*/
  *((float *)this + 0x71) = 0.0; /*0x54ccc4*/
  *((float *)this + 0x5E) = z; /*0x54ccca*/
  *((float *)this + 0x72) = 0.0; /*0x54ccd0*/
  *((_BYTE *)this + 0x1D7) = 0; /*0x54ccd6*/
  *((float *)this + 0x63) = 0.0; /*0x54ccdc*/
  *((_BYTE *)this + 0x1D4) = 0; /*0x54cce2*/
  *((float *)this + 0x64) = 0.0; /*0x54cce8*/
  *((_BYTE *)this + 0x1D8) = 0; /*0x54ccee*/
  *((float *)this + 0x61) = 0.0; /*0x54ccf4*/
  *((_BYTE *)this + 0x1DA) = 0; /*0x54ccfa*/
  *((float *)this + 0x62) = 0.0; /*0x54cd00*/
  *((_BYTE *)this + 0x1DB) = 0; /*0x54cd06*/
  *((float *)this + 0x5F) = 0.0; /*0x54cd0c*/
  *((_DWORD *)this + 0x70) = 0; /*0x54cd12*/
  *((float *)this + 0x60) = 0.0; /*0x54cd18*/
  *((_DWORD *)this + 0x65) = 0; /*0x54cd1e*/
  *((float *)this + 0x67) = 0.0; /*0x54cd24*/
  *((_BYTE *)this + 0x198) = 1; /*0x54cd2a*/
  *((float *)this + 0x68) = 0.0; /*0x54cd31*/
  *((_BYTE *)this + 0x1D5) = 1; /*0x54cd37*/
  *((float *)this + 0x69) = 0.0; /*0x54cd3e*/
  *((_BYTE *)this + 0x1D9) = 0; /*0x54cd44*/
  *((float *)this + 0x6A) = 0.0; /*0x54cd4a*/
  *((float *)this + 0x6B) = 0.0; /*0x54cd50*/
  *((float *)this + 0x6C) = 0.0; /*0x54cd56*/
  *((float *)this + 0x6D) = 0.0; /*0x54cd5c*/
  *((float *)this + 0x6E) = 0.0; /*0x54cd62*/
  *((float *)this + 0x6F) = 0.0; /*0x54cd68*/
  *((_DWORD *)this + 0x5C) = LODWORD(g_zeroNiPoint3.x); /*0x54cd73*/
  *((_DWORD *)this + 0x5D) = LODWORD(g_zeroNiPoint3.y); /*0x54cd7f*/
  *((_DWORD *)this + 0x5E) = LODWORD(g_zeroNiPoint3.z); /*0x54cd8b*/
  return this; /*0x54cd93*/
}
