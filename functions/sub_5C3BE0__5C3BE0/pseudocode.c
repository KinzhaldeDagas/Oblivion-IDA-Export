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
  double v10; // st7
  int v11; // eax
  double v12; // st7
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

  _ESI = a1;
  _EDI = InterfaceManager_GetSingleton(0, 1);
  v9 = *(_DWORD **)(_ESI + 4 * a6 + 0x94);
  if ( v9 )
  {
    v10 = sub_57D7A0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v11 = Double_To_SInt32(v10);
    __asm { fld     dword ptr [esi+898h] }
    v31 = v11;
    __asm { fiadd   [esp+14h+arg_0] }
    __asm { fstp    [esp+14h+var_8] }
    sub_588C50(v9);
    __asm { fsubr   [esp+14h+var_8] }
    __asm { fstp    [esp+18h+var_8] }
    Tile_GetFloat(a7, 0xFB6);
    __asm { fdivr   [esp+14h+var_8] }
    __asm
    {
      fstp    [esp+18h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+18h+a2]; a3
    }
    Tile_SetFloat(a7, (_DWORD *)0xFB7, a2);
    __asm { fld     [esp+14h+arg_0] }
    __asm { fstp    [esp+18h+a2]; a3 }
    Tile_SetFloat(a7, (_DWORD *)0xFB7, a2a);
    __asm { fldz }
    __asm { fstp    [esp+18h+a2]; a3 }
    Tile_SetFloat(a7, (_DWORD *)0xFB7, a2b);
  }
  else if ( a6 == 0x15 )
  {
    sub_57D7F0();
    __asm { fstp    [esp+14h+var_8] }
    v12 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+14h+var_8]
    }
    v13 = Double_To_SInt32(v12);
    __asm { fld     dword ptr [esi+89Ch] }
    v33 = v13;
    __asm
    {
      fiadd   [esp+14h+arg_0]
      fstp    [esp+14h+var_8]
    }
    sub_588CF0(*(_DWORD **)(_ESI + 0x34));
    __asm { fsubr   [esp+14h+var_8] }
    __asm { fstp    [esp+18h+var_8] }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(_ESI + 0x38), 0xFB6);
    __asm { fdivr   [esp+14h+var_8] }
    __asm
    {
      fstp    [esp+18h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+18h+a2]; a3
    }
    Tile_SetFloat(*(Tile **)(_ESI + 0x38), (_DWORD *)0xFB7, a2c);
    __asm { fld     [esp+14h+arg_0] }
    v35 = Double_To_SInt32(Float);
    __asm { fild    [esp+14h+arg_0] }
    __asm { fstp    [esp+18h+a2]; a3 }
    Tile_SetFloat(*(Tile **)(_ESI + 0x38), (_DWORD *)0xFB7, a2d);
    __asm { fldz }
    __asm { fstp    [esp+18h+a2]; a3 }
    Tile_SetFloat(*(Tile **)(_ESI + 0x38), (_DWORD *)0xFB7, a2e);
  }
  else if ( a6 == 2 && !*(_BYTE *)(_ESI + 0x8D0) && (_EDI->unk0C0[0x16] & 4) == 0 )
  {
    sub_5952D0((float *)_EDI);
    v36 = v15;
    __asm { fild    [esp+14h+arg_0] }
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
    Menu_UPdateCamera___((Menu *)_ESI, v18, a2f);
    sub_5952D0((float *)_EDI);
    v38 = v16;
    __asm
    {
      fild    [esp+14h+arg_0]
      fsub    dword ptr [esi+898h]
      fstp    dword ptr [esi+8A0h]
    }
    *(float *)(_ESI + 0x8A0) = _ET1;
  }
}
