char __cdecl sub_509490(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  OSGlobals *v8; // eax
  int *v9; // eax
  int *v10; // esi
  UInt16 v12[2]; // [esp+4h] [ebp-4h] BYREF

  v8 = OSGlobals;
  *(_DWORD *)v12 = 0;
  if ( v8->sound )
  {
    if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12) )
    {
      OSGLobals_PlaySound(*(_DWORD *)(*(_DWORD *)v12 + 0xC), 0x101, 0);
      v10 = v9;
      if ( v9 )
      {
        sub_6B7190(v9, 0);
        sub_6B73E0(v10);
        FormHeapFree((unsigned int)v10);
      }
    }
  }
  return 1;
}
