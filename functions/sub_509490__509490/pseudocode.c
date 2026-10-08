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
  int *sound; // esi
  int *v10; // eax
  int *v11; // esi
  UInt16 v13[2]; // [esp+4h] [ebp-4h] BYREF

  v8 = MEMORY[0xB33398]; /*0x509491*/
  *(_DWORD *)v13 = 0; /*0x509497*/
  sound = (int *)v8->sound; /*0x50949f*/
  if ( sound ) /*0x5094a4*/
  {
    if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v13) ) /*0x5094ce*/
    {
      v10 = OSGLobals_PlaySound(sound, *(void **)(*(_DWORD *)v13 + 0xC), 0x101, 0); /*0x5094eb*/
      v11 = v10; /*0x5094f0*/
      if ( v10 ) /*0x5094f4*/
      {
        sub_6B7190(v10, 0); /*0x5094fa*/
        sub_6B73E0(v11); /*0x509501*/
        FormHeapFree((unsigned int)v11); /*0x509507*/
      }
    }
  }
  return 1; /*0x509511*/
}
