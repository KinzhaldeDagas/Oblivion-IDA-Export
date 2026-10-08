// AchievementsNative evidence: MagicPopupMenu update/slide. State 1 advances popup background x toward this+0x50 at root user2 pixels/ms; state 3 moves back toward this+0x54 then hides. Confirms user10 is exposed popup X in inventory call path, not a right edge.
void __usercall sub_5B4080(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // edi
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // ebx
  double v9; // st7
  double v10; // st6
  double v11; // st7
  Tile *v12; // ecx
  _DWORD *v13; // ebx
  double v14; // st7
  double v15; // st6
  float a2; // [esp+0h] [ebp-1Ch]
  float v17; // [esp+10h] [ebp-Ch]
  float v18; // [esp+10h] [ebp-Ch]
  double Float; // [esp+14h] [ebp-8h]
  double v20; // [esp+14h] [ebp-8h]

  v5 = ((int (__usercall *)@<eax>(double@<st0>, double@<st1>, double@<st2>))GetTickCount)(a4, a3, st5_0); /*0x5b408e*/
  v6 = *(_DWORD *)(a1 + 0x58); /*0x5b4090*/
  if ( v6 == 1 ) /*0x5b4096*/
  {
    v7 = *(_DWORD *)(a1 + 0x24); /*0x5b409c*/
    if ( v7 == 4 || v7 == 2 ) /*0x5b40a7*/
      Menu::StartFadeIn(a1); /*0x5b40ab*/
    v8 = *(_DWORD **)(a1 + 4); /*0x5b40b3*/
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFAD); /*0x5b40c0*/
    v9 = Tile_GetFloat(v8, 0xFB0); /*0x5b40cb*/
    v10 = (double)(v5 - *(_DWORD *)(a1 + 0x5C)); /*0x5b40db*/
    if ( v5 - *(_DWORD *)(a1 + 0x5C) < 0 ) /*0x5b40df*/
      v10 = v10 + flt_A2FC78; /*0x5b40e1*/
    v17 = v9 * v10 + Float; /*0x5b40ed*/
    v11 = v17; /*0x5b40f1*/
    if ( *(float *)(a1 + 0x54) > (double)v17 ) /*0x5b40ff*/
      v11 = *(float *)(a1 + 0x54); /*0x5b410a*/
    a3 = *(float *)(a1 + 0x50); /*0x5b410e*/
    v12 = *(Tile **)(a1 + 0x28); /*0x5b4112*/
    if ( a3 <= v11 ) /*0x5b411c*/
    {
      *(_DWORD *)(a1 + 0x58) = 0; /*0x5b4120*/
      v11 = *(float *)(a1 + 0x50); /*0x5b4127*/
    }
  }
  else
  {
    if ( v6 != 3 ) /*0x5b412f*/
      goto LABEL_18; /*0x5b412f*/
    v13 = *(_DWORD **)(a1 + 4); /*0x5b4134*/
    v20 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFAD); /*0x5b4141*/
    v14 = Tile_GetFloat(v13, 0xFB0); /*0x5b414c*/
    v15 = (double)(v5 - *(_DWORD *)(a1 + 0x5C)); /*0x5b415c*/
    if ( v5 - *(_DWORD *)(a1 + 0x5C) < 0 ) /*0x5b4160*/
      v15 = v15 + flt_A2FC78; /*0x5b4162*/
    v18 = v20 - v14 * v15; /*0x5b416e*/
    v11 = v18; /*0x5b4172*/
    a3 = *(float *)(a1 + 0x54); /*0x5b4176*/
    if ( a3 >= v18 ) /*0x5b4180*/
    {
      *(_DWORD *)(a1 + 0x58) = 2; /*0x5b4186*/
      Menu::StartFadeOut((_DWORD *)a1, st5_0, a3); /*0x5b418d*/
      v11 = *(float *)(a1 + 0x54); /*0x5b4192*/
    }
    v12 = *(Tile **)(a1 + 0x28); /*0x5b4196*/
  }
  a2 = v11; /*0x5b4199*/
  Tile_SetFloat(v12, (_DWORD *)0xFAD, a2); /*0x5b41a1*/
LABEL_18:
  if ( !InterfaceManager_IsMenuMode() ) /*0x5b41a6*/
  {
    *(_DWORD *)(a1 + 0x58) = 2; /*0x5b41b1*/
    Menu::StartFadeOut((_DWORD *)a1, st5_0, a3); /*0x5b41b8*/
    Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFAD, *(float *)(a1 + 0x54)); /*0x5b41cc*/
  }
  *(_DWORD *)(a1 + 0x5C) = v5; /*0x5b41d1*/
}
