double __userpurge sub_444EC0@<st0>(
        _DWORD *a1@<ecx>,
        TESObjectREFR *a2@<ebp>,
        double result@<st0>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double a6@<st1>,
        double a7@<st4>,
        double a8@<st5>,
        double a9@<st6>,
        double a10@<st7>,
        float *a11,
        char a12)
{
  MobileObject *v13; // edi
  unsigned int v14; // ebx
  int v16; // edx
  int v19; // [esp+10h] [ebp+4h]
  int v20; // [esp+10h] [ebp+4h]

  if ( g_TESDataHandler /*0x444efd*/
    && !a1[0xD]
    && !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x184)
    || (g_TESSaveLoadGame->flags & 0x800) != 0 )
  {
    v13 = (MobileObject *)a1[8]; /*0x444f07*/
    v14 = a1[9]; /*0x444f0b*/
    if ( !a1[0x1D] ) /*0x444f03*/
      sub_4431F0((TES *)a1, st5_0, a6, result, (TESWorldSpace *)g_TESDataHandler->worldspaceList.item); /*0x444f16*/
    _EAX = a11; /*0x444f1b*/
    if ( a11 ) /*0x444f21*/
    {
      __asm /*0x444f23*/
      {
        fld     dword ptr [eax]
        fstp    [esp+10h+var_4]
        fld     [esp+10h+var_4]
        fistp   [esp+10h+arg_0]
      }
      a1[8] = v19 >> 0xC; /*0x444f38*/
      __asm /*0x444f3b*/
      {
        fld     dword ptr [eax+4]
        fstp    [esp+10h+var_4]
        fld     [esp+10h+var_4]
        fistp   [esp+10h+arg_0]
      }
      a1[9] = v20 >> 0xC; /*0x444f51*/
    }
    else
    {
      a1[8] = v13; /*0x444f56*/
      a1[9] = v14; /*0x444f59*/
    }
    v16 = a1[9]; /*0x444f5f*/
    a1[0xA] = a1[8]; /*0x444f62*/
    a1[0xB] = v16; /*0x444f6d*/
    sub_444C70((TES *)a1, v14, a2, a10, a9, a8, a7, st4_0, st5_0, a6, result, v13, _EAX, a12); /*0x444f70*/
    if ( !a1[0xD] ) /*0x444f75*/
      sub_499E40(); /*0x444f7c*/
    if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x444f87*/
      result = WaterSurfaceLoop(*((float *)a1 + 0x15), result); /*0x444f93*/
    sub_537D40(); /*0x444f98*/
  }
  return result; /*0x444f9d*/
}
