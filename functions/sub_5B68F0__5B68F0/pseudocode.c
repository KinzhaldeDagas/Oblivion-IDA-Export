void __userpurge sub_5B68F0(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double VirtualScreenWidth; // st7
  double VirtualScreenHeight; // st7
  int v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v15; // ecx
  int v19; // [esp+10h] [ebp+4h]
  int v20; // [esp+10h] [ebp+4h]

  if ( a6 == 0x29 || a6 == 0x2D || a7 && *(_DWORD *)(a7 + 0x10) == *(_DWORD *)(a1 + 0x58) ) /*0x5b6916*/
  {
    _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5b6929*/
    VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x5b692b*/
    __asm /*0x5b6930*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v19 = Double_To_SInt32(VirtualScreenWidth); /*0x5b693e*/
    __asm /*0x5b6942*/
    {
      fild    [esp+10h+arg_0]
      fstp    dword ptr [esi+88h]
    }
    *(float *)(a1 + 0x88) = _ET1; /*0x5b6946*/
    UI_GetVirtualScreenHeight(); /*0x5b694c*/
    __asm { fstp    [esp+10h+var_8] } /*0x5b6951*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5b6955*/
    __asm /*0x5b695a*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+10h+var_8]
    }
    v12 = Double_To_SInt32(VirtualScreenHeight); /*0x5b6967*/
    v13 = *(_DWORD **)(a1 + 0x58); /*0x5b696c*/
    v20 = v12; /*0x5b696f*/
    __asm { fild    [esp+10h+arg_0] } /*0x5b6973*/
    __asm { fstp    dword ptr [esi+8Ch] }
    *(float *)(a1 + 0x8C) = _ET1; /*0x5b697c*/
    Tile_GetFloat(v13, 0xFDA); /*0x5b6982*/
    v15 = *(_DWORD **)(a1 + 0x58); /*0x5b6987*/
    __asm { fstp    dword ptr [esi+0E4h] } /*0x5b698a*/
    *(float *)(a1 + 0xE4) = _ET1; /*0x5b698a*/
    Tile_GetFloat(v15, 0xFD9); /*0x5b6995*/
    __asm { fstp    dword ptr [esi+0E8h] } /*0x5b699a*/
    *(float *)(a1 + 0xE8) = _ET1; /*0x5b699a*/
  }
}
