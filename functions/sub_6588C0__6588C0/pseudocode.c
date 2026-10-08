bool __userpurge sub_6588C0@<al>(float *a1@<ecx>, double a2@<st1>, double st7_0@<st0>, TESChildCELL *a4, int a5)
{
  bool v6; // bl
  float v8; // [esp+8h] [ebp-4h]

  TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x6588ca*/
  v8 = st7_0; /*0x6588cf*/
  if ( !(_BYTE)a5 ) /*0x6588d9*/
  {
    if ( *((_DWORD *)a1 + 2) ) /*0x6588db*/
    {
      st7_0 = v8; /*0x6588e1*/
      if ( *((_DWORD *)a1 + 0x24) == Double_To_SInt32(v8) ) /*0x6588f0*/
        return 0; /*0x658919*/
    }
  }
  v6 = sub_649340(a1, a5, a2, st7_0, a4, a5); /*0x658903*/
  *((_DWORD *)a1 + 0x24) = Double_To_SInt32(v8); /*0x65890a*/
  return v6; /*0x658910*/
}
