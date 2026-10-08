bool __cdecl sub_501040(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  int v9; // eax
  int v10; // esi
  void (__cdecl *v11)(_DWORD, _DWORD, int); // ecx
  int v12; // [esp+0h] [ebp-8h] BYREF
  UInt16 v13[2]; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v13 = 0; /*0x50106f*/
  v12 = 0; /*0x501077*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v13, &v12); /*0x50107f*/
  if ( result ) /*0x501089*/
  {
    v9 = v12; /*0x50108f*/
    v10 = *(_DWORD *)v13; /*0x501093*/
    if ( v12 < *(int *)v13 ) /*0x501099*/
    {
      v9 = *(_DWORD *)v13; /*0x50109b*/
      v12 = *(_DWORD *)v13; /*0x50109d*/
    }
    if ( *(int *)v13 < v9 + 1 ) /*0x5010a6*/
    {
      v11 = (void (__cdecl *)(_DWORD, _DWORD, int))dword_B02184; /*0x5010a8*/
      do /*0x5010d0*/
      {
        if ( v11 ) /*0x5010b2*/
        {
          v11(0, 0, v10); /*0x5010b9*/
          v9 = v12; /*0x5010bb*/
          v11 = (void (__cdecl *)(_DWORD, _DWORD, int))dword_B02184; /*0x5010bf*/
        }
        ++v10; /*0x5010c8*/
      }
      while ( v10 < v9 + 1 ); /*0x5010d0*/
    }
    return 1; /*0x5010d2*/
  }
  return result; /*0x50108b*/
}
