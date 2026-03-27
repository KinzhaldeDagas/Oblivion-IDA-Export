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

  sound = (float *)OSGlobals->sound;
  Float = Tile_GetFloat((_DWORD *)*(this + 0xA), 0xFB5);
  v13 = Double_To_SInt32(Float);
  v4 = Tile_GetFloat((_DWORD *)*(this + 0x10), 0xFB5);
  v20 = Double_To_SInt32(v4);
  v5 = Tile_GetFloat((_DWORD *)*(this + 0xC), 0xFB5);
  v22 = Double_To_SInt32(v5);
  v6 = Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFB5);
  v18 = Double_To_SInt32(v6);
  v7 = Tile_GetFloat((_DWORD *)*(this + 0x12), 0xFB5);
  v15 = Double_To_SInt32(v7);
  v8 = 0;
  v14 = (float)v13;
  v9 = fCostant_100;
  if ( v14 != sound[0x2E] * v9 )
  {
    v8 = 1;
    sound[0x2E] = v14 / v9;
  }
  v16 = (float)v15;
  v10 = sub_6A8E00(sound);
  v11 = fCostant_100;
  if ( v16 == v10 * v11 )
  {
    v12 = v11;
  }
  else
  {
    v17 = v16 / v11;
    SoundManager_SetMusicVolume((int)sound, v17, 1);
    v12 = fCostant_100;
    v8 = 1;
  }
  v19 = (float)v18;
  if ( v19 != sound[0x31] * v12 )
  {
    v8 = 1;
    sound[0x31] = v19 / v12;
  }
  v21 = (float)v20;
  if ( v21 != sound[0x2F] * v12 )
  {
    v8 = 1;
    sound[0x2F] = v21 / v12;
  }
  v23 = (float)v22;
  if ( v23 == sound[0x30] * v12 )
  {
    if ( v8 )
      sub_6AA280((int)sound);
  }
  else
  {
    sound[0x30] = v23 / v12;
    sub_6AA280((int)sound);
  }
}
