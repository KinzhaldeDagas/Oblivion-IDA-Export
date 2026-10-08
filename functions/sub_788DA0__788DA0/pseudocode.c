// 2026-05-24 SpeedTreeOBSE stock post-load pass: stock user-data parser for top-level 19000. Copies counted 19002 string into CSpeedTreeRT+0x68 until 19001. Compatibility parser should preserve this family byte-exact.
void __thiscall CSpeedTreeRT__ParseUserData(OB_CSpeedTreeRT_010201A0 *this, OB_CTreeFileAccess_010201A0 *file)
{
  OB_CTreeFileAccess_010201A0 *v3; // esi
  int Dword_010201A0; // eax
  int v5; // edx
  char *String_010201A0; // eax
  bool v7; // cf
  const char *v8; // ebp
  unsigned int v9; // kr00_4
  void *v10; // edi
  _BYTE outSmallString[4]; // [esp+14h] [ebp-28h] BYREF
  unsigned int v12; // [esp+18h] [ebp-24h]
  int v13; // [esp+28h] [ebp-14h]
  unsigned int v14; // [esp+2Ch] [ebp-10h]
  unsigned int v15; // [esp+38h] [ebp-4h]

  v3 = file; /*0x788dc9*/
  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file);// SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: 19000 user-data loop reads dword tokens until 19001; token 19002 reads a counted string, other dwords are ignored. Immediate 19001 is not an accepted empty block in this path. /*0x788dcf*/
  do /*0x788e6b*/
  {
    if ( Dword_010201A0 == 0x4A3A ) /*0x788dd9*/
    {
      String_010201A0 = (char *)OB_CTreeFileAccess_ReadString_010201A0(v3, v5, outSmallString); /*0x788de6*/
      v7 = *((_DWORD *)String_010201A0 + 6) < 0x10u; /*0x788deb*/
      v15 = 0; /*0x788def*/
      if ( v7 ) /*0x788df7*/
        v8 = String_010201A0 + 4; /*0x788dfe*/
      else
        v8 = *((const char **)String_010201A0 + 1); /*0x788df9*/
      v9 = strlen(v8); /*0x788e03*/
      v10 = (void *)FormHeapAlloc(v9 + 1); /*0x788e1b*/
      memcpy(v10, v8, v9 + 1); /*0x788e1f*/
      v7 = v14 < 0x10; /*0x788e27*/
      this->userDataString = (char *)v10; /*0x788e2c*/
      v15 = 0xFFFFFFFF; /*0x788e2f*/
      if ( !v7 ) /*0x788e37*/
        FormHeapFree(v12); /*0x788e3e*/
      v3 = file; /*0x788e46*/
      v14 = 0xF; /*0x788e4a*/
      v13 = 0; /*0x788e52*/
      LOBYTE(v12) = 0; /*0x788e5a*/
    }
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(v3); /*0x788e61*/
  }
  while ( Dword_010201A0 != 0x4A39 ); /*0x788e6b*/
}
