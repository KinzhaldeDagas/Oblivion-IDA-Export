int __usercall InterfaceMgr_DebugTextLine@<eax>(
        char a1@<bpl>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char *a5,
        float a6,
        float a7,
        int a8,
        int a9)
{
  float *v9; // eax
  float v11; // [esp+10h] [ebp-8h]

  if ( !InterfaceManager_GetSingleton(0, 1) || !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  v11 = flt_A30634;
  v9 = sub_571F90(1);
  return sub_5723E0((char *)v9, a1, a2, a3, a4, a5, a6, a7, a8, a9, v11, 0);
}
