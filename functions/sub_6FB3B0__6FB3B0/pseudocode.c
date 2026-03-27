UInt16 __thiscall sub_6FB3B0(Unk128 *this, float a2)
{
  float v2; // edi
  void (__cdecl *v4)(int, UInt16 *, int, int *, int); // edx
  void (__cdecl *v5)(int, UInt8 *, int, int *, int); // eax
  int v6; // edi
  void (__cdecl *v7)(int, float *, int, int *, int); // eax
  UInt16 result; // ax
  int v9; // [esp-24h] [ebp-38h]
  int v10; // [esp-10h] [ebp-24h]
  int v11; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  sub_709430((char *)this, SLODWORD(a2));
  v4 = *(void (__cdecl **)(int, UInt16 *, int, int *, int))(*(_DWORD *)(LODWORD(v2) + 0x21C) + 4);
  v10 = *(_DWORD *)(LODWORD(v2) + 0x21C);
  v11 = 2;
  v4(v10, &this->unkC, 2, &v11, 1);
  v9 = *(_DWORD *)(LODWORD(v2) + 0x21C);
  v5 = *(void (__cdecl **)(int, UInt8 *, int, int *, int))(v9 + 4);
  v11 = 1;
  v5(v9, &this->unkE, 1, &v11, 1);
  v6 = *(_DWORD *)(LODWORD(v2) + 0x21C);
  v7 = *(void (__cdecl **)(int, float *, int, int *, int))(v6 + 4);
  v11 = 1;
  v7(v6, &a2, 1, &v11, 1);
  result = this->unkC;
  if ( (__int16)result < 0 )
  {
    LODWORD(a2) = (__int16)result;
    a2 = (double)(__int16)result / dbl_A2FC70;
    return sub_6FAEE0(this, a2);
  }
  return result;
}
