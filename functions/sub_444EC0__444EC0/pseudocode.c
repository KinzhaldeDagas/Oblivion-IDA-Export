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
  int v13; // edi
  int v14; // ebx
  int v16; // edx
  int v19; // [esp+10h] [ebp+4h]
  int v20; // [esp+10h] [ebp+4h]

  if ( TESDataHandler
    && !a1[0xD]
    && !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x184)
    || (SaveLoad_CurrentSavegame->flags & 0x800) != 0 )
  {
    v13 = a1[8];
    v14 = a1[9];
    if ( !a1[0x1D] )
      sub_4431F0((TES *)a1, st5_0, (char)a2, a6, result, *(TESWorldSpace **)(TESDataHandler + 0xC));
    _EAX = a11;
    if ( a11 )
    {
      __asm
      {
        fld     dword ptr [eax]
        fstp    [esp+10h+var_4]
        fld     [esp+10h+var_4]
        fistp   [esp+10h+arg_0]
      }
      a1[8] = v19 >> 0xC;
      __asm
      {
        fld     dword ptr [eax+4]
        fstp    [esp+10h+var_4]
        fld     [esp+10h+var_4]
        fistp   [esp+10h+arg_0]
      }
      a1[9] = v20 >> 0xC;
    }
    else
    {
      a1[8] = v13;
      a1[9] = v14;
    }
    v16 = a1[9];
    a1[0xA] = a1[8];
    a1[0xB] = v16;
    sub_444C70((TES *)a1, v14, (unsigned __int8)a2, a10, a9, a8, a7, st4_0, st5_0, a6, result, _EAX, a12);
    if ( !a1[0xD] )
      sub_499E40();
    if ( !sub_45A500(SaveLoad_CurrentSavegame) )
      WaterSurfaceLoop(*((float *)a1 + 0x15), result);
    return sub_537D40();
  }
  return result;
}
