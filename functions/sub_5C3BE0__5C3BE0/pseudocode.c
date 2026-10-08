void __userpurge sub_5C3BE0(
        int a1@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        Tile *a7)
{
  _DWORD *v9; // ebx
  double VirtualScreenWidth; // st7
  int v11; // eax
  double VirtualScreenHeight; // st7
  int v13; // eax
  double Float; // st7
  int v15; // eax
  int v16; // eax
  int v18; // [esp+0h] [ebp-1Ch]
  float a2; // [esp+4h] [ebp-18h]
  float a2a; // [esp+4h] [ebp-18h]
  float a2b; // [esp+4h] [ebp-18h]
  float a2c; // [esp+4h] [ebp-18h]
  float a2d; // [esp+4h] [ebp-18h]
  float a2e; // [esp+4h] [ebp-18h]
  float a2f; // [esp+4h] [ebp-18h]
  int v31; // [esp+20h] [ebp+4h]
  int v33; // [esp+20h] [ebp+4h]
  int v35; // [esp+20h] [ebp+4h]
  int v36; // [esp+20h] [ebp+4h]
  int v38; // [esp+20h] [ebp+4h]

  _ESI = a1; /*0x5c3bea*/
  _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5c3bf1*/
  v9 = *(_DWORD **)(_ESI + 4 * a6 + 0x94); /*0x5c3bf7*/
  if ( v9 ) /*0x5c3c03*/
  {
    VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x5c3c09*/
    __asm /*0x5c3c0e*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v11 = Double_To_SInt32(VirtualScreenWidth); /*0x5c3c17*/
    __asm { fld     dword ptr [esi+898h] } /*0x5c3c1c*/
    v31 = v11; /*0x5c3c22*/
    __asm { fiadd   [esp+14h+arg_0] } /*0x5c3c26*/
    __asm { fstp    [esp+14h+var_8] }
    sub_588C50(v9); /*0x5c3c30*/
    __asm { fsubr   [esp+14h+var_8] } /*0x5c3c35*/
    __asm { fstp    [esp+18h+var_8] }
    Tile_GetFloat(a7, 0xFB6); /*0x5c3c48*/
    __asm { fdivr   [esp+14h+var_8] } /*0x5c3c4d*/
    __asm
    {
      fstp    [esp+18h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+18h+a2]; value
    }
    Tile_SetFloat(a7, (_DWORD *)0xFB7, a2); /*0x5c3c66*/
    __asm { fld     [esp+14h+arg_0] } /*0x5c3c6b*/
    __asm { fstp    [esp+18h+a2]; value }
    Tile_SetFloat(a7, (_DWORD *)0xFB7, a2a); /*0x5c3c7a*/
    __asm { fldz } /*0x5c3c7f*/
    __asm { fstp    [esp+18h+a2]; value }
    Tile_SetFloat(a7, (_DWORD *)0xFB7, a2b); /*0x5c3c8c*/
  }
  else if ( a6 == 0x15 ) /*0x5c3c9d*/
  {
    UI_GetVirtualScreenHeight(); /*0x5c3ca3*/
    __asm { fstp    [esp+14h+var_8] } /*0x5c3ca8*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5c3cac*/
    __asm /*0x5c3cb1*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+14h+var_8]
    }
    v13 = Double_To_SInt32(VirtualScreenHeight); /*0x5c3cbe*/
    __asm { fld     dword ptr [esi+89Ch] } /*0x5c3cc3*/
    v33 = v13; /*0x5c3ccc*/
    __asm /*0x5c3cd0*/
    {
      fiadd   [esp+14h+arg_0]
      fstp    [esp+14h+var_8]
    }
    sub_588CF0(*(_DWORD **)(_ESI + 0x34)); /*0x5c3cd8*/
    __asm { fsubr   [esp+14h+var_8] } /*0x5c3cdd*/
    __asm { fstp    [esp+18h+var_8] }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(_ESI + 0x38), 0xFB6); /*0x5c3ced*/
    __asm { fdivr   [esp+14h+var_8] } /*0x5c3cf2*/
    __asm
    {
      fstp    [esp+18h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+18h+a2]; value
    }
    Tile_SetFloat(*(Tile **)(_ESI + 0x38), (_DWORD *)0xFB7, a2c); /*0x5c3d0c*/
    __asm { fld     [esp+14h+arg_0] } /*0x5c3d11*/
    v35 = Double_To_SInt32(Float); /*0x5c3d1a*/
    __asm { fild    [esp+14h+arg_0] } /*0x5c3d1e*/
    __asm { fstp    [esp+18h+a2]; value }
    Tile_SetFloat(*(Tile **)(_ESI + 0x38), (_DWORD *)0xFB7, a2d); /*0x5c3d2e*/
    __asm { fldz } /*0x5c3d33*/
    __asm { fstp    [esp+18h+a2]; value }
    Tile_SetFloat(*(Tile **)(_ESI + 0x38), (_DWORD *)0xFB7, a2e); /*0x5c3d41*/
  }
  else if ( a6 == 2 && !*(_BYTE *)(_ESI + 0x8D0) && (_EDI->unk0C0[0x16] & 4) == 0 ) /*0x5c3d68*/
  {
    sub_5952D0((float *)_EDI); /*0x5c3d6c*/
    v36 = v15; /*0x5c3d71*/
    __asm { fild    [esp+14h+arg_0] } /*0x5c3d75*/
    __asm
    {
      fsub    dword ptr [esi+898h]
      fdiv    qword ptr ds:0A3F3F0h
      fstp    [esp+1Ch+arg_0]
      fld     [esp+1Ch+arg_0]
      fstp    [esp+1Ch+a2]; float
      fld1
      fstp    [esp+1Ch+var_1C]; int
    }
    Menu_UPdateCamera___((Menu *)_ESI, v18, a2f); /*0x5c3d9b*/
    sub_5952D0((float *)_EDI); /*0x5c3da2*/
    v38 = v16; /*0x5c3da7*/
    __asm /*0x5c3dab*/
    {
      fild    [esp+14h+arg_0]
      fsub    dword ptr [esi+898h]
      fstp    dword ptr [esi+8A0h]
    }
    *(float *)(_ESI + 0x8A0) = _ET1; /*0x5c3db5*/
  }
}
