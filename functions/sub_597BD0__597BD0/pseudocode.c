void __userpurge sub_597BD0(
        int a1@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double VirtualScreenHeight; // st7
  int v10; // eax
  double Float; // st7
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  float a2b; // [esp+0h] [ebp-14h]
  int v18; // [esp+18h] [ebp+4h]
  int v20; // [esp+18h] [ebp+4h]

  _ESI = a1; /*0x597bd9*/
  if ( a6 == 0xC ) /*0x597bdb*/
  {
    _EDI = InterfaceManager_GetSingleton(0, 1); /*0x597bee*/
    UI_GetVirtualScreenHeight(); /*0x597bf0*/
    __asm { fstp    qword ptr [esp+10h+a3] } /*0x597bf5*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x597bf9*/
    __asm /*0x597bfe*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+10h+a3]
    }
    v10 = Double_To_SInt32(VirtualScreenHeight); /*0x597c0b*/
    __asm { fld     dword ptr [esi+50h] } /*0x597c10*/
    v18 = v10; /*0x597c16*/
    __asm /*0x597c1a*/
    {
      fiadd   [esp+10h+arg_0]
      fstp    qword ptr [esp+10h+a3]
    }
    sub_588CF0(*(_DWORD **)(_ESI + 0x28)); /*0x597c22*/
    __asm { fsubr   qword ptr [esp+10h+a3] } /*0x597c27*/
    __asm { fstp    qword ptr [esp+14h+a3]; a3 }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(_ESI + 0x2C), 0xFB6); /*0x597c37*/
    __asm { fdivr   qword ptr [esp+10h+a3] } /*0x597c3c*/
    __asm
    {
      fstp    [esp+14h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; value
    }
    Tile_SetFloat(*(Tile **)(_ESI + 0x2C), 0xFB7u, a2); /*0x597c56*/
    __asm { fld     [esp+10h+arg_0] } /*0x597c5b*/
    v20 = Double_To_SInt32(Float); /*0x597c64*/
    __asm { fild    [esp+10h+arg_0] } /*0x597c68*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*(Tile **)(_ESI + 0x2C), 0xFB7u, a2a); /*0x597c78*/
    __asm { fldz } /*0x597c7d*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*(Tile **)(_ESI + 0x2C), 0xFB7u, a2b); /*0x597c8b*/
  }
}
