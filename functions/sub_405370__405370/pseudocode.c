char __userpurge sub_405370@<al>(
        _DWORD *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        signed int a6,
        signed int a7)
{
  _BYTE *v8; // eax
  float v10; // [esp+4h] [ebp-8h]
  float a7a; // [esp+14h] [ebp+8h]
  float a7b; // [esp+14h] [ebp+8h]

  if ( GetActiveWindow() != (HWND)a1[2] )
    return 0;
  if ( !InterfaceManager_IsMenuMode() )
    return 0;
  v8 = (_BYTE *)a1[8];
  if ( !v8 || (*v8 & 8) == 0 || g_bFullScreen )
    return 0;
  a7a = (double)a7 / (double)nHeight;
  v10 = a7a;
  a7b = (double)a6 / (double)nWidth;
  sub_579320(a7b, v10);
  return 1;
}
