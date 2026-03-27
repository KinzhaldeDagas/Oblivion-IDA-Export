bool __cdecl sub_508860(
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
  int v10; // ecx
  bool v11; // zf
  double v12; // st7
  float v13; // [esp+10h] [ebp-10h] BYREF
  float v14; // [esp+14h] [ebp-Ch] BYREF
  float v15; // [esp+18h] [ebp-8h] BYREF
  UInt16 v16[2]; // [esp+1Ch] [ebp-4h] BYREF

  v15 = 0.0;
  v14 = 0.0;
  v13 = 0.0;
  *(_DWORD *)v16 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v16, &v15, &v14, &v13);
  if ( result )
  {
    v9 = *(_DWORD *)v16;
    v10 = 0;
    if ( *(int *)v16 <= 0 )
    {
      if ( *(int *)v16 < 0 )
      {
        v9 = -*(_DWORD *)v16;
        v10 = 1;
        *(_DWORD *)v16 = -*(_DWORD *)v16;
      }
    }
    else
    {
      v10 = 2;
    }
    if ( UseHDR )
    {
      v11 = byte_B43074 == 0;
      v12 = v15;
      dword_B2C1E4 = v10;
      if ( v11 )
      {
        flt_B431F8 = v12;
        dword_B43220 = v9;
        flt_B431E8 = v14;
        flt_B431F0 = v13;
        return 1;
      }
      else
      {
        flt_B431FC = v12;
        dword_B43224 = v9;
        flt_B431EC = v14;
        flt_B431F4 = v13;
        return 1;
      }
    }
    else
    {
      sub_7B4830(v10, v9, v15, v14, v13, dword_B06D54);
      return 1;
    }
  }
  return result;
}
