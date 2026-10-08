__int16 __thiscall sub_6FB3B0(Unk128 *this, float a2)
{
  float v2; // edi
  void (__cdecl *v4)(int, UInt16 *, int, int *, int); // edx
  void (__cdecl *v5)(int, UInt8 *, int, int *, int); // eax
  int v6; // edi
  void (__cdecl *v7)(int, float *, int, int *, int); // eax
  __int16 result; // ax
  int v9; // [esp-24h] [ebp-38h]
  int v10; // [esp-10h] [ebp-24h]
  int v11; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x6fb3b4*/
  sub_709430((char *)this, SLODWORD(a2)); /*0x6fb3bb*/
  v4 = *(void (__cdecl **)(int, UInt16 *, int, int *, int))(*(_DWORD *)(LODWORD(v2) + 0x21C) + 4); /*0x6fb3c6*/
  v10 = *(_DWORD *)(LODWORD(v2) + 0x21C); /*0x6fb3d6*/
  v11 = 2; /*0x6fb3d7*/
  v4(v10, &this->unkC, 2, &v11, 1); /*0x6fb3df*/
  v9 = *(_DWORD *)(LODWORD(v2) + 0x21C); /*0x6fb3f4*/
  v5 = *(void (__cdecl **)(int, UInt8 *, int, int *, int))(v9 + 4); /*0x6fb3f5*/
  v11 = 1; /*0x6fb3f8*/
  v5(v9, &this->unkE, 1, &v11, 1); /*0x6fb400*/
  v6 = *(_DWORD *)(LODWORD(v2) + 0x21C); /*0x6fb402*/
  v7 = *(void (__cdecl **)(int, float *, int, int *, int))(v6 + 4); /*0x6fb408*/
  v11 = 1; /*0x6fb41a*/
  v7(v6, &a2, 1, &v11, 1); /*0x6fb422*/
  result = this->unkC; /*0x6fb424*/
  if ( result < 0 ) /*0x6fb42d*/
  {
    LODWORD(a2) = result; /*0x6fb432*/
    a2 = (double)result / dbl_A2FC70; /*0x6fb443*/
    return sub_6FAEE0(this, a2); /*0x6fb44e*/
  }
  return result; /*0x6fb453*/
}
