void __usercall sub_50D4C0(
        double st5_0@<st2>,
        double a2@<st1>,
        double a3@<st0>,
        double st0_0@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        double a8@<st3>,
        ParamInfo *a1,
        UInt8 *a10,
        TESObjectREFR *a4,
        TESObjectREFR *a12,
        Script *a13,
        ScriptEventList *l,
        int a15,
        UInt32 *a16)
{
  _DWORD *sound; // esi
  char v17; // bl
  InputGlobal *v18; // ecx
  _DWORD v19[2]; // [esp+10h] [ebp-20Ch] BYREF
  char ArgList[4]; // [esp+18h] [ebp-204h] BYREF

  v19[1] = a16; /*0x50d509*/
  v19[0] = 0; /*0x50d522*/
  if ( Script_ExtractArgs(a1, a10, a16, a4, a12, a13, l, ArgList, v19) ) /*0x50d52a*/
  {
    sound = MEMORY[0xB33398]->sound; /*0x50d53f*/
    if ( sound ) /*0x50d544*/
    {
      sub_6A9B40((int)MEMORY[0xB33398]->sound); /*0x50d548*/
      sub_6A8D00(sound); /*0x50d54f*/
    }
    v17 = MEMORY[0xB42E97]; /*0x50d554*/
    v18 = (InputGlobal *)MEMORY[0xB33398]; /*0x50d55a*/
    MEMORY[0xB42E97] = 0; /*0x50d560*/
    Input_CheckScreenshotHotkey(v18, st5_0, a2, a3, st0_0, a5, a6, a7, a8); /*0x50d567*/
    sub_432860((volatile LONG *)MEMORY[0xB33A10]); /*0x50d572*/
    sub_410BA0(ArgList, v19[0] != 0, 0, 0, 0, COERCE_FLOAT(1), 0); /*0x50d58f*/
    sub_432890((volatile LONG *)MEMORY[0xB33A10]); /*0x50d59d*/
    MEMORY[0xB42E97] = v17; /*0x50d5a4*/
    if ( sound ) /*0x50d5aa*/
    {
      sub_6A9C00((int)sound); /*0x50d5ae*/
      sub_6A8D50(sound); /*0x50d5b5*/
    }
  }
}
