void __thiscall sub_5DA8C0(int this, char *arg0, int a3, int a4)
{
  Tile *v7; // eax
  double v8; // st4
  Tile *v9; // esi
  double v10; // st7
  float a2; // [esp+0h] [ebp-8h]
  float a2a; // [esp+0h] [ebp-8h]

  v7 = Menu::RenderTemplate((Menu *)this, *(Tile **)(this + 0x4C), "stat_misc_template", 0); /*0x5da8cc*/
  v8 = (double)a4; /*0x5da8d1*/
  v9 = v7; /*0x5da8db*/
  if ( a4 < 0 ) /*0x5da8dd*/
    v8 = v8 + flt_A2FC78; /*0x5da8df*/
  a2 = v8; /*0x5da8e6*/
  Tile_SetFloat(v7, 0xFAAu, a2); /*0x5da8f0*/
  Tile_SetString(v9, (_DWORD *)0xFAF, arg0); /*0x5da901*/
  v10 = (double)a3; /*0x5da906*/
  if ( a3 < 0 ) /*0x5da910*/
    v10 = v10 + flt_A2FC78; /*0x5da912*/
  a2a = v10; /*0x5da919*/
  Tile_SetFloat(v9, 0xFB0u, a2a); /*0x5da923*/
}
