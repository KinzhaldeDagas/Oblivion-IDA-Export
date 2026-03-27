void __usercall sub_50D4C0(
        double st5_0@<st2>,
        double a2@<st1>,
        double a3@<st0>,
        ParamInfo *a1,
        UInt8 *a5,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a11)
{
  _DWORD *sound; // esi
  char v12; // bl
  InputGlobal *v13; // ecx
  _DWORD v14[2]; // [esp+10h] [ebp-20Ch] BYREF
  char ArgList[4]; // [esp+18h] [ebp-204h] BYREF

  v14[1] = a11;
  v14[0] = 0;
  if ( Script_ExtractArgs(a1, a5, a11, a4, a7, a8, l, ArgList, v14) )
  {
    sound = OSGlobals->sound;
    if ( sound )
    {
      sub_6A9B40((int)OSGlobals->sound);
      sub_6A8D00(sound);
    }
    v12 = OcclusionCullngBool;
    v13 = (InputGlobal *)OSGlobals;
    OcclusionCullngBool = 0;
    sub_40D4D0(v13, st5_0, a2, a3);
    sub_432860((volatile LONG *)ioManager);
    sub_410BA0(ArgList, v14[0] != 0, 0, 0, 0, COERCE_FLOAT(1), 0);
    sub_432890((volatile LONG *)ioManager);
    OcclusionCullngBool = v12;
    if ( sound )
    {
      sub_6A9C00((int)sound);
      sub_6A8D50(sound);
    }
  }
}
