bool __userpurge sub_6588C0@<al>(float *a1@<ecx>, double a2@<st1>, double st7_0@<st0>, TESChildCELL *a4, int a5)
{
  bool v7; // bl
  float v9; // [esp+8h] [ebp-4h]

  TimeGlobals_GetGameHour(&TimeGlobals);
  v9 = st7_0;
  if ( !(_BYTE)a5 )
  {
    if ( *((_DWORD *)a1 + 2) )
    {
      st7_0 = v9;
      if ( *((_DWORD *)a1 + 0x24) == Double_To_SInt32(v9) )
        return 0;
    }
  }
  v7 = sub_649340(a1, a5, a2, st7_0, a4, a5);
  *((_DWORD *)a1 + 0x24) = Double_To_SInt32(v9);
  return v7;
}
