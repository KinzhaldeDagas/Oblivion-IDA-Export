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

  if ( GetActiveWindow() != (HWND)a1[2] ) /*0x40537c*/
    return 0; /*0x40537c*/
  if ( !InterfaceManager_IsMenuMode() ) /*0x40537e*/
    return 0; /*0x40537e*/
  v8 = (_BYTE *)a1[8]; /*0x405387*/
  if ( !v8 || (*v8 & 8) == 0 || g_bFullScreen ) /*0x40539a*/
    return 0; /*0x4053d8*/
  a7a = (double)a7 / (double)nHeight; /*0x4053a9*/
  v10 = a7a; /*0x4053b1*/
  a7b = (double)a6 / (double)nWidth; /*0x4053bf*/
  sub_579320(a7b, v10); /*0x4053ca*/
  return 1; /*0x4053d4*/
}
