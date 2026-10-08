// [Controller decode 2026-07-09] Updates Controls menu scrollbar drag marker from cached scroll traits.
void __userpurge ControlsMenu::UpdateScrollbarDragMarker(
        int a1@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        Tile *a7)
{
  double VirtualScreenWidth; // st7
  Tile *v10; // esi
  double Float; // st7
  double VirtualScreenHeight; // st7
  double v14; // st7
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  float a2b; // [esp+0h] [ebp-14h]
  float a2c; // [esp+0h] [ebp-14h]
  int v22; // [esp+18h] [ebp+4h]
  int v24; // [esp+18h] [ebp+4h]
  Tile *v27; // [esp+1Ch] [ebp+8h]
  Tile *v29; // [esp+1Ch] [ebp+8h]

  if ( (unsigned int)(a6 - 1) <= 0xC && a6 == 6 ) /*0x59b6fd*/
  {
    _ESI = InterfaceManager_GetSingleton(0, 1); /*0x59b70f*/
    VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x59b711*/
    __asm /*0x59b716*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [esi+20h]
    }
    v22 = Double_To_SInt32(VirtualScreenWidth); /*0x59b727*/
    __asm /*0x59b72b*/
    {
      fild    [esp+10h+arg_0]
      fstp    [esp+10h+arg_0]
    }
    sub_588C50(*(_DWORD **)(a1 + 0x38)); /*0x59b733*/
    __asm { fsubr   [esp+10h+arg_0] } /*0x59b738*/
    v10 = a7; /*0x59b73c*/
    __asm { fstp    qword ptr [esp+14h+a3] } /*0x59b747*/
    Float = Tile_GetFloat(a7, 0xFB6); /*0x59b74b*/
    __asm { fdivr   qword ptr [esp+10h+a3] } /*0x59b750*/
    __asm
    {
      fstp    [esp+14h+arg_4]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; value
    }
    Tile_SetFloat(v10, 0xFB7u, a2); /*0x59b769*/
    __asm { fld     [esp+10h+arg_4] } /*0x59b76e*/
    v27 = (Tile *)Double_To_SInt32(Float); /*0x59b777*/
    __asm { fild    [esp+10h+arg_4] } /*0x59b77b*/
LABEL_7:
    __asm { fstp    [esp+14h+a2]; value } /*0x59b825*/
    Tile_SetFloat(v10, 0xFB7u, a2b); /*0x59b830*/
    __asm { fldz } /*0x59b835*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(v10, 0xFB7u, a2c); /*0x59b842*/
    return; /*0x59b842*/
  }
  if ( (unsigned int)(a6 - 1) <= 0xC && a6 == 3 ) /*0x59b796*/
  {
    _ESI = InterfaceManager_GetSingleton(0, 1); /*0x59b7a8*/
    UI_GetVirtualScreenHeight(); /*0x59b7aa*/
    __asm { fstp    qword ptr [esp+10h+a3] } /*0x59b7af*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x59b7b3*/
    __asm /*0x59b7b8*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [esi+28h]
      fsubr   qword ptr [esp+10h+a3]
    }
    v24 = Double_To_SInt32(VirtualScreenHeight); /*0x59b7cd*/
    __asm /*0x59b7d1*/
    {
      fild    [esp+10h+arg_0]
      fstp    [esp+10h+arg_0]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x2C)); /*0x59b7d9*/
    __asm { fsubr   [esp+10h+arg_0] } /*0x59b7de*/
    v10 = a7; /*0x59b7e2*/
    __asm { fstp    qword ptr [esp+14h+a3]; a3 } /*0x59b7ed*/
    v14 = Tile_GetFloat(a7, 0xFB6); /*0x59b7f1*/
    __asm { fdivr   qword ptr [esp+10h+a3] } /*0x59b7f6*/
    __asm
    {
      fstp    [esp+14h+arg_4]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; value
    }
    Tile_SetFloat(v10, 0xFB7u, a2a); /*0x59b80f*/
    __asm { fld     [esp+10h+arg_4] } /*0x59b814*/
    v29 = (Tile *)Double_To_SInt32(v14); /*0x59b81d*/
    __asm { fild    [esp+10h+arg_4] } /*0x59b821*/
    goto LABEL_7; /*0x59b821*/
  }
}
