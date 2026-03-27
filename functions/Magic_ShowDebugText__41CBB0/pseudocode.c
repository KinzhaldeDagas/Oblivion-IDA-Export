int __usercall Magic_ShowDebugText@<eax>(
        double a1@<st1>,
        double a2@<st0>,
        TESObjectREFR *a3,
        int a4,
        signed int *a5,
        int *a6)
{
  int v7; // ebx
  double v8; // st5
  double v9; // st6
  char *Name; // eax
  float v12; // [esp+0h] [ebp-250h]
  float v13; // [esp+0h] [ebp-250h]
  float v14; // [esp+4h] [ebp-24Ch]
  float v15; // [esp+4h] [ebp-24Ch]
  int savedregs; // [esp+250h] [ebp+0h] BYREF

  v7 = *a5;
  v14 = (float)*a5;
  v8 = (double)iDebugTextLeftRightOffset;
  v12 = v8;
  InterfaceMgr_DebugTextLine((char)&savedregs, v8, a1, a2, (int)"MAGIC INFO", v12, v14, 1, 0xFFFFFFFF);
  v15 = (float)(a4 + v7);
  v9 = (double)iDebugTextLeftRightOffset;
  v13 = v9;
  Name = TESObjectREFR_GetName(a3);
  InterfaceMgr_DebugTextLine((char)&savedregs, v8, v9, a2, (int)Name, v13, v15, 1, 0xFFFFFFFF);
  return Magic_ShowDebugText_::Check_MagicCaster(a2);
}
