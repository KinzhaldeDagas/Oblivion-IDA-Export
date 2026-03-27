int __usercall Magic_ShowDebugText_::NotMagicTarget@<eax>(
        char a1@<bpl>,
        double a2@<st1>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        signed int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21)
{
  double v22; // st5
  float v24; // [esp+0h] [ebp-10h]
  float v25; // [esp+4h] [ebp-Ch]

  v25 = (float)a9;
  v22 = (double)iDebugTextLeftRightOffset;
  v24 = v22;
  InterfaceMgr_DebugTextLine(a1, v22, a2, a3, (int)"Current ref is not a MagicTarget.", v24, v25, 1, 0xFFFFFFFF);
  return Magic_ShowDebugText_::Done(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
}
