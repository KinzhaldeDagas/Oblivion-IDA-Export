int __usercall Magic_ShowDebugText_::NotMagicTarget@<eax>(
        char a1@<bpl>,
        double a2@<st1>,
        double a3@<st0>,
        int a4@<ebx>,
        int a5@<esi>,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        int a10,
        _DWORD *a11)
{
  double v11; // st5
  float v13; // [esp+0h] [ebp-10h]
  float v14; // [esp+4h] [ebp-Ch]

  v14 = (float)(int)a11; /*0x41d168*/
  v11 = (double)iDebugTextLeftRightOffset; /*0x41d16c*/
  v13 = v11; /*0x41d172*/
  InterfaceMgr_DebugTextLine(a1, v11, a2, a3, "Current ref is not a MagicTarget.", v13, v14, 1, 0xFFFFFFFF); /*0x41d17a*/
  return Magic_ShowDebugText_::Done(a5 + a4, a6, a7, a8, a9, a10, a11);
}
