void __userpurge sub_5B69B0(
        float *a1@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double VirtualScreenHeight; // st7
  double Float; // st7
  double v12; // st7
  int v13; // eax
  int v14; // eax
  double v15; // st7
  int v17; // eax
  double VirtualScreenWidth; // st7
  int v21; // eax
  double v22; // st7
  int v23; // eax
  Tile *v24; // ebx
  double v25; // st7
  double v27; // st7
  float v29; // [esp+8h] [ebp-1Ch]
  float value; // [esp+Ch] [ebp-18h]
  float valuea; // [esp+Ch] [ebp-18h]
  float valueb; // [esp+Ch] [ebp-18h]
  float a2; // [esp+10h] [ebp-14h]
  float a2a; // [esp+10h] [ebp-14h]
  float a2b; // [esp+10h] [ebp-14h]
  int v42; // [esp+28h] [ebp+4h]
  int v45; // [esp+28h] [ebp+4h]
  int v46; // [esp+28h] [ebp+4h]
  int v47; // [esp+28h] [ebp+4h]
  int v49; // [esp+28h] [ebp+4h]
  int v50; // [esp+28h] [ebp+4h]
  int v51; // [esp+28h] [ebp+4h]
  int v52; // [esp+28h] [ebp+4h]
  int v55; // [esp+28h] [ebp+4h]
  int v56; // [esp+28h] [ebp+4h]

  _ESI = a1; /*0x5b69b4*/
  if ( a6 == 0xC ) /*0x5b69be*/
  {
    _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5b69d0*/
    UI_GetVirtualScreenHeight(); /*0x5b69d2*/
    __asm { fstp    qword ptr [esp+10h+a3] } /*0x5b69d7*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5b69db*/
    __asm /*0x5b69e0*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+10h+a3]
    }
    v42 = Double_To_SInt32(VirtualScreenHeight); /*0x5b69f5*/
    __asm /*0x5b69f9*/
    {
      fild    [esp+10h+arg_0]
      fstp    [esp+10h+arg_0]
    }
    sub_588CF0(*((_DWORD **)_ESI + 0x10)); /*0x5b6a01*/
    __asm { fsubr   [esp+10h+arg_0] } /*0x5b6a06*/
    __asm { fstp    qword ptr [esp+14h+a3]; a3 }
    Tile_GetFloat(*((_DWORD **)_ESI + 0x11), 0xFB6); /*0x5b6a16*/
    __asm { fdivr   qword ptr [esp+10h+a3] } /*0x5b6a1b*/
    __asm
    {
      fstp    [esp+14h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; value
    }
    Tile_SetFloat(*((Tile **)_ESI + 0x11), 0xFB7u, a2); /*0x5b6a35*/
    __asm { fld     [esp+10h+arg_0] } /*0x5b6a3a*/
    __asm { fstp    qword ptr [esp+10h+a3] }
    Float = Tile_GetFloat((_DWORD *)*((_DWORD *)_ESI + 0x10), 0xFB1); /*0x5b6a4a*/
    __asm { fdivr   qword ptr [esp+10h+a3] } /*0x5b6a4f*/
    v45 = Double_To_SInt32(Float); /*0x5b6a58*/
    __asm { fild    [esp+10h+arg_0] } /*0x5b6a5c*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*((Tile **)_ESI + 0x11), 0xFB7u, a2a); /*0x5b6a6c*/
    __asm { fldz } /*0x5b6a71*/
    __asm { fstp    [esp+14h+a2]; value }
    Tile_SetFloat(*((Tile **)_ESI + 0x11), 0xFB7u, a2b); /*0x5b6a7f*/
  }
  else if ( a6 == 0x29 || a7 && *(_DWORD *)(a7 + 0x10) == *((_DWORD *)a1 + 0x16) ) /*0x5b6aa3*/
  {
    (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 0x14))(a1, a6, a7); /*0x5b6b78*/
    _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5b6b86*/
    VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x5b6b88*/
    __asm /*0x5b6b8d*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v21 = Double_To_SInt32(VirtualScreenWidth); /*0x5b6b96*/
    __asm { fld     dword ptr [esi+88h] } /*0x5b6b9b*/
    v51 = v21; /*0x5b6ba1*/
    __asm /*0x5b6ba5*/
    {
      fisub   [esp+14h+arg_0]
      fstp    [esp+14h+arg_4]
    }
    UI_GetVirtualScreenHeight(); /*0x5b6bad*/
    __asm { fstp    qword ptr [esp+14h+a3] } /*0x5b6bb2*/
    v22 = UI_GetVirtualScreenHeight(); /*0x5b6bb6*/
    __asm /*0x5b6bbb*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+14h+a3]
    }
    v23 = Double_To_SInt32(v22); /*0x5b6bc8*/
    __asm { fld     dword ptr [esi+8Ch] } /*0x5b6bcd*/
    v24 = *((Tile **)_ESI + 0x16); /*0x5b6bd3*/
    v52 = v23; /*0x5b6bd6*/
    __asm { fisub   [esp+14h+arg_0] } /*0x5b6bda*/
    __asm { fstp    [esp+18h+a3] }
    Tile_GetFloat(v24, 0xFBA); /*0x5b6be9*/
    __asm { fadd    [esp+14h+arg_4] } /*0x5b6bee*/
    __asm
    {
      fstp    [esp+18h+arg_0]
      fld     [esp+18h+arg_0]
      fstp    [esp+18h+value]; value
    }
    Tile_SetFloat(v24, 0xFB8u, valuea); /*0x5b6c05*/
    Tile_GetFloat(v24, 0xFBB); /*0x5b6c11*/
    __asm { fadd    [esp+14h+a3] } /*0x5b6c16*/
    __asm
    {
      fstp    [esp+18h+arg_0]
      fld     [esp+18h+arg_0]
      fstp    [esp+18h+value]; value
    }
    Tile_SetFloat(v24, 0xFB9u, valueb); /*0x5b6c2d*/
    v25 = UI_GetVirtualScreenWidth(); /*0x5b6c32*/
    __asm /*0x5b6c37*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v55 = Double_To_SInt32(v25); /*0x5b6c45*/
    __asm /*0x5b6c49*/
    {
      fild    [esp+14h+arg_0]
      fstp    dword ptr [esi+88h]
    }
    _ESI[0x22] = _ET1; /*0x5b6c4d*/
    UI_GetVirtualScreenHeight(); /*0x5b6c53*/
    __asm { fstp    qword ptr [esp+14h+a3] } /*0x5b6c58*/
    v27 = UI_GetVirtualScreenHeight(); /*0x5b6c5c*/
    __asm /*0x5b6c61*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+14h+a3]
    }
    v56 = Double_To_SInt32(v27); /*0x5b6c73*/
    __asm { fild    [esp+14h+arg_0] } /*0x5b6c77*/
    __asm { fstp    dword ptr [esi+8Ch] }
    _ESI[0x23] = _ET1; /*0x5b6c7c*/
  }
  else if ( a6 == 0x2D ) /*0x5b6aac*/
  {
    (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 0x14))(a1, 0x2D, a7); /*0x5b6abb*/
    _EDI = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5b6ac9*/
    v12 = UI_GetVirtualScreenWidth(); /*0x5b6acb*/
    __asm /*0x5b6ad0*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v13 = Double_To_SInt32(v12); /*0x5b6ad9*/
    __asm { fld     dword ptr [esi+88h] } /*0x5b6ade*/
    v46 = v13; /*0x5b6ae4*/
    __asm { fisub   [esp+10h+arg_0] } /*0x5b6ae8*/
    __asm
    {
      fstp    [esp+10h+arg_4]
      fld     dword ptr [esi+8Ch]
      fstp    qword ptr [esp+10h+a3]
    }
    sub_593020(_EDI); /*0x5b6afc*/
    v47 = v14; /*0x5b6b01*/
    __asm { fild    [esp+10h+arg_0] } /*0x5b6b05*/
    __asm
    {
      fsubr   qword ptr [esp+1Ch+a3]
      fstp    [esp+1Ch+arg_0]
      fld     [esp+1Ch+arg_0]
      fchs
      fstp    [esp+1Ch+value]; float
      fld     [esp+1Ch+arg_4]
      fchs
      fstp    [esp+1Ch+var_1C]; float
    }
    sub_5B67F0((Tile **)_ESI, v29, value, 0.0); /*0x5b6b2b*/
    v15 = UI_GetVirtualScreenWidth(); /*0x5b6b30*/
    __asm /*0x5b6b35*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v49 = Double_To_SInt32(v15); /*0x5b6b43*/
    __asm { fild    [esp+10h+arg_0] } /*0x5b6b47*/
    __asm { fstp    dword ptr [esi+88h] }
    _ESI[0x22] = _ET1; /*0x5b6b4d*/
    sub_593020(_EDI); /*0x5b6b53*/
    v50 = v17; /*0x5b6b58*/
    __asm { fild    [esp+10h+arg_0] } /*0x5b6b5c*/
    __asm { fstp    dword ptr [esi+8Ch] }
    _ESI[0x23] = _ET1; /*0x5b6b61*/
  }
}
