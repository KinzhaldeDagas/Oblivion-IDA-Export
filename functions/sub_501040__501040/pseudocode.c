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

  *(_DWORD *)v13 = 0;
  v12 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v13, &v12);
  if ( result )
  {
    v9 = v12;
    v10 = *(_DWORD *)v13;
    if ( v12 < *(int *)v13 )
    {
      v9 = *(_DWORD *)v13;
      v12 = *(_DWORD *)v13;
    }
    if ( *(int *)v13 < v9 + 1 )
    {
      v11 = (void (__cdecl *)(_DWORD, _DWORD, int))dword_B02184;
      do
      {
        if ( v11 )
        {
          v11(0, 0, v10);
          v9 = v12;
          v11 = (void (__cdecl *)(_DWORD, _DWORD, int))dword_B02184;
        }
        ++v10;
      }
      while ( v10 < v9 + 1 );
    }
    return 1;
  }
  return result;
}
