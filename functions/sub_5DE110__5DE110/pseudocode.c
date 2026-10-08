void __userpurge sub_5DE110(
        int a1@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        Tile *a7)
{
  int v8; // esi
  bool v9; // al
  InterfaceManager *Singleton; // eax
  _DWORD *v11; // ebx
  double VirtualScreenHeight; // st7
  Tile *v14; // esi
  double Float; // st7
  double VirtualScreenWidth; // st7
  float a2; // [esp+0h] [ebp-18h]
  float a2a; // [esp+0h] [ebp-18h]
  float a2b; // [esp+0h] [ebp-18h]
  int v24; // [esp+1Ch] [ebp+4h]
  int v26; // [esp+1Ch] [ebp+4h]
  Tile *v29; // [esp+20h] [ebp+8h]

  if ( (unsigned int)(a6 - 1) > 0x2F ) /*0x5de121*/
  {
    v8 = 0x30; /*0x5de15c*/
    v9 = 0; /*0x5de161*/
  }
  else
  {
    v8 = a6 - 1; /*0x5de123*/
    v9 = a6 == 6 /*0x5de165*/
      || a6 == 0xD
      || a6 == 0xF
      || a6 == 0x11
      || a6 == 0x13
      || a6 == 0x17
      || a6 == 0x1D
      || a6 == 0x21
      || a6 == 0x23
      || a6 == 0x25;
  }
  if ( v8 == 2 || v9 ) /*0x5de16e*/
  {
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5de179*/
    v11 = *(_DWORD **)(a1 + 4 * v8 + 0x24); /*0x5de17e*/
    _EDI = Singleton; /*0x5de188*/
    if ( v8 == 2 ) /*0x5de18a*/
    {
      UI_GetVirtualScreenHeight(); /*0x5de18c*/
      __asm { fstp    [esp+14h+var_8] } /*0x5de191*/
      VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5de195*/
      __asm /*0x5de19a*/
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+28h]
        fsubr   [esp+14h+var_8]
      }
      v24 = Double_To_SInt32(VirtualScreenHeight); /*0x5de1ac*/
      __asm { fild    [esp+14h+arg_0] } /*0x5de1b0*/
      __asm { fstp    [esp+14h+arg_0] }
      sub_588CF0(v11); /*0x5de1ba*/
      __asm { fsubr   [esp+14h+arg_0] } /*0x5de1bf*/
      v14 = a7; /*0x5de1c3*/
      __asm { fstp    [esp+18h+var_8] } /*0x5de1ce*/
      Float = Tile_GetFloat(a7, 0xFB6); /*0x5de1d2*/
      __asm { fdivr   [esp+14h+var_8] } /*0x5de1d7*/
    }
    else
    {
      VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x5de1dd*/
      __asm /*0x5de1e2*/
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+20h]
      }
      v26 = Double_To_SInt32(VirtualScreenWidth); /*0x5de1f0*/
      __asm { fild    [esp+14h+arg_0] } /*0x5de1f4*/
      __asm { fstp    [esp+14h+arg_0] }
      sub_588C50(v11); /*0x5de1fe*/
      __asm { fsubr   [esp+14h+arg_0] } /*0x5de203*/
      v14 = a7; /*0x5de207*/
      __asm { fstp    [esp+18h+var_8] } /*0x5de212*/
      Float = Tile_GetFloat(a7, 0xFB6); /*0x5de216*/
      __asm { fdivr   [esp+14h+var_8] } /*0x5de21b*/
    }
    __asm /*0x5de220*/
    {
      fstp    [esp+18h+var_8]
      fld     dword ptr ds:0A6B1F0h
    }
    __asm { fstp    [esp+18h+a2]; value }
    Tile_SetFloat(v14, 0xFB7u, a2); /*0x5de234*/
    __asm /*0x5de239*/
    {
      fld     [esp+14h+var_8]
      fstp    [esp+14h+arg_4]
      fld     [esp+14h+arg_4]
    }
    v29 = (Tile *)Double_To_SInt32(Float); /*0x5de24a*/
    __asm { fild    [esp+14h+arg_4] } /*0x5de24e*/
    __asm { fstp    [esp+18h+a2]; value }
    Tile_SetFloat(v14, 0xFB7u, a2a); /*0x5de25d*/
    __asm { fldz } /*0x5de262*/
    __asm { fstp    [esp+18h+a2]; value }
    Tile_SetFloat(v14, 0xFB7u, a2b); /*0x5de26f*/
  }
}
