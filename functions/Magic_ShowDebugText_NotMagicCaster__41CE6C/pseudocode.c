int __usercall Magic_ShowDebugText_::NotMagicCaster@<eax>(
        char a1@<bpl>,
        double a2@<st2>,
        double a3@<st1>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  double v9; // st7
  float v11; // [esp+0h] [ebp-10h]
  float v12; // [esp+4h] [ebp-Ch]

  v12 = (float)a9;
  v9 = (double)iDebugTextLeftRightOffset;
  v11 = v9;
  InterfaceMgr_DebugTextLine(a1, a2, a3, v9, (int)"Current ref is not a MagicCaster.", v11, v12, 1, 0xFFFFFFFF);
  return Magic_ShowDebugText_::Check_MagicTarget(a4, a5, a6, a7, a8, a9);
}
