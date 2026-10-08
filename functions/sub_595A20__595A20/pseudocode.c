void __thiscall sub_595A20(_DWORD *this)
{
  float *sound; // edi
  double Float; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  char v8; // bl
  double v9; // st6
  double v10; // st7
  double v11; // st6
  double v12; // st7
  int v13; // [esp+14h] [ebp-14h]
  float v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+18h] [ebp-10h]
  float v16; // [esp+18h] [ebp-10h]
  float v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+1Ch] [ebp-Ch]
  float v19; // [esp+1Ch] [ebp-Ch]
  int v20; // [esp+20h] [ebp-8h]
  float v21; // [esp+20h] [ebp-8h]
  int v22; // [esp+24h] [ebp-4h]
  float v23; // [esp+24h] [ebp-4h]

  sound = (float *)MEMORY[0xB33398]->sound; /*0x595a2b*/
  Float = Tile_GetFloat((_DWORD *)*(this + 0xA), 0xFB5); /*0x595a38*/
  v13 = Double_To_SInt32(Float); /*0x595a4a*/
  v4 = Tile_GetFloat((_DWORD *)*(this + 0x10), 0xFB5); /*0x595a4e*/
  v20 = Double_To_SInt32(v4); /*0x595a60*/
  v5 = Tile_GetFloat((_DWORD *)*(this + 0xC), 0xFB5); /*0x595a64*/
  v22 = Double_To_SInt32(v5); /*0x595a76*/
  v6 = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB5); /*0x595a7a*/
  v18 = Double_To_SInt32(v6); /*0x595a8c*/
  v7 = Tile_GetFloat((_DWORD *)*(this + 0x12), 0xFB5); /*0x595a90*/
  v15 = Double_To_SInt32(v7); /*0x595a9e*/
  v8 = 0; /*0x595aa2*/
  v14 = (float)v13; /*0x595aa4*/
  v9 = fCostant_100; /*0x595aae*/
  if ( v14 != sound[0x2E] * v9 ) /*0x595ac5*/
  {
    v8 = 1; /*0x595ac9*/
    sound[0x2E] = v14 / v9; /*0x595acb*/
  }
  v16 = (float)v15; /*0x595add*/
  v10 = sub_6A8E00(sound); /*0x595ae1*/
  v11 = fCostant_100; /*0x595ae6*/
  if ( v16 == v10 * v11 ) /*0x595afd*/
  {
    v12 = v11; /*0x595b20*/
  }
  else
  {
    v17 = v16 / v11; /*0x595b06*/
    SoundManager_SetMusicVolume((int)sound, v17, 1); /*0x595b11*/
    v12 = fCostant_100; /*0x595b16*/
    v8 = 1; /*0x595b1c*/
  }
  v19 = (float)v18; /*0x595b26*/
  if ( v19 != sound[0x31] * v12 ) /*0x595b41*/
  {
    v8 = 1; /*0x595b45*/
    sound[0x31] = v19 / v12; /*0x595b47*/
  }
  v21 = (float)v20; /*0x595b55*/
  if ( v21 != sound[0x2F] * v12 ) /*0x595b70*/
  {
    v8 = 1; /*0x595b74*/
    sound[0x2F] = v21 / v12; /*0x595b76*/
  }
  v23 = (float)v22; /*0x595b84*/
  if ( v23 == sound[0x30] * v12 ) /*0x595b9f*/
  {
    if ( v8 ) /*0x595bbc*/
      sub_6AA280((int)sound); /*0x595bc6*/
  }
  else
  {
    sound[0x30] = v23 / v12; /*0x595ba5*/
    sub_6AA280((int)sound); /*0x595bb1*/
  }
}
