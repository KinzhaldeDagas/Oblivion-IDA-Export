// LoadgameMenu hover: rows with id >= 0x65 use user0 (0xFAE) as original save-list index, reposition focus, then update screenshot/metadata through 0x5AE240.
void __userpurge sub_5AE560(
        int a1@<ecx>,
        char bp0@<bpl>,
        double st0_0@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        double a10@<st0>,
        signed int a11,
        _DWORD *a12)
{
  bool v14; // zf
  double Float; // st7
  _DWORD *v16; // eax
  Tile *v17; // ecx
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  float a2b; // [esp+0h] [ebp-14h]
  float a2c; // [esp+0h] [ebp-14h]
  float a2d; // [esp+0h] [ebp-14h]
  float a2e; // [esp+0h] [ebp-14h]
  float a2f; // [esp+0h] [ebp-14h]

  if ( a12 ) /*0x5ae56d*/
  {
    if ( a11 < 0x65 ) /*0x5ae578*/
    {
      v17 = *(Tile **)(a1 + 0x2C); /*0x5ae68f*/
      if ( v17 ) /*0x5ae694*/
      {
        __asm { fld1 } /*0x5ae696*/
        __asm { fstp    [esp+14h+a2]; value }
        Tile_SetFloat(v17, (_DWORD *)0xFA1, a2f); /*0x5ae6a1*/
      }
    }
    else
    {
      sub_57DE50(4); /*0x5ae580*/
      v14 = *(_DWORD *)(a1 + 0x2C) == 0; /*0x5ae588*/
      *(_DWORD *)(a1 + 0x30) = 0; /*0x5ae58c*/
      if ( !v14 ) /*0x5ae593*/
      {
        sub_588D90(a12, a10); /*0x5ae59b*/
        __asm { fstp    qword ptr [esp+10h+a3]; a3 } /*0x5ae5a0*/
        Tile_GetFloat(*(_DWORD **)(a1 + 0x2C), 0xFBD); /*0x5ae5ac*/
        __asm { fsubr   qword ptr [esp+10h+a3] } /*0x5ae5b1*/
        __asm
        {
          fstp    [esp+14h+arg_4]
          fld     [esp+14h+arg_4]
          fstp    [esp+14h+a2]; value
        }
        Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFAB, a2); /*0x5ae5c9*/
        Tile_GetFloat(a12, 0xFCB); /*0x5ae5d5*/
        __asm { fsub    qword ptr ds:0A3D0C0h } /*0x5ae5da*/
        __asm
        {
          fstp    [esp+14h+arg_4]
          fld     [esp+14h+arg_4]
          fstp    [esp+14h+a2]; value
        }
        Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFCB, a2a); /*0x5ae5f4*/
        Tile_GetFloat(a12, 0xFCA); /*0x5ae600*/
        __asm { fsub    qword ptr ds:0A3D0C0h } /*0x5ae605*/
        __asm
        {
          fstp    [esp+14h+arg_4]
          fld     [esp+14h+arg_4]
          fstp    [esp+14h+a2]; value
        }
        Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFCA, a2b); /*0x5ae61f*/
        sub_588C50(a12); /*0x5ae626*/
        __asm { fstp    [esp+14h+a2]; value } /*0x5ae62f*/
        Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFAD, a2c); /*0x5ae637*/
        sub_588CF0(a12); /*0x5ae63e*/
        __asm { fstp    [esp+14h+a2]; value } /*0x5ae647*/
        Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFAC, a2d); /*0x5ae64f*/
        __asm { fld     dword ptr ds:0A379B4h } /*0x5ae654*/
        __asm { fstp    [esp+14h+a2]; value }
        Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFA1, a2e); /*0x5ae666*/
        *(_DWORD *)(a1 + 0x30) = a12; /*0x5ae672*/
        Float = Tile_GetFloat(a12, 0xFAE); /*0x5ae675*/
        v16 = (_DWORD *)Double_To_SInt32(Float); /*0x5ae67a*/
        LoadgameMenu_UpdateSavePreview(a1, st0_0, a4, a5, a6, a7, a8, a9, Float, v16); /*0x5ae682*/
      }
    }
  }
}
