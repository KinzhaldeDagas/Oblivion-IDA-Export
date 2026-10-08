// AchievementsNative evidence: default UI hit-test recursively scans visible/non-hidden target tiles, chooses highest depth, and tie-breaks list items by lower listindex; use active/mouseover tile evidence before cursor-sprite coordinate fallbacks.
// Verified correction: this is default-focus selection, NOT cursor hit testing or depth ranking. Recursively skips visible==1 subtrees, requires target==2, ranks by xdefault trait 0xFF0, and uses lower listindex 0xFAA for equal-ranked candidates. Top-level menu must be shown (1) or fading in (8). Fallout named analogue 0x824ED9A0.
Tile *__thiscall InterfaceManager::ScanForMaxFocus(InterfaceManager *this, int *maxFocus, Tile *root)
{
  Tile *v3; // ebx
  int *v4; // esi
  int v5; // ebp
  int v6; // eax
  _DWORD *v8; // edi
  Tile *v9; // eax
  Tile *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  Tile *v17; // [esp+Ch] [ebp-10h]
  int v18; // [esp+10h] [ebp-Ch] BYREF
  int v19; // [esp+14h] [ebp-8h]
  InterfaceManager *v20; // [esp+18h] [ebp-4h]

  v3 = root; /*0x57da94*/
  v4 = maxFocus; /*0x57da9c*/
  v5 = *maxFocus; /*0x57daa0*/
  v20 = this; /*0x57daa2*/
  v17 = 0; /*0x57daa6*/
  v19 = 0x7FFFFFFF; /*0x57daae*/
  *maxFocus = 0x80000000; /*0x57dab6*/
  v18 = 0x80000000; /*0x57dabc*/
  if ( !root ) /*0x57dac4*/
  {
    Menu_GetB3A708(1); /*0x57dac8*/
    v6 = sub_5877D0(); /*0x57dad2*/
    if ( !v6 ) /*0x57dad9*/
      return 0; /*0x57dad9*/
    v3 = *(Tile **)(v6 + 4); /*0x57dadb*/
    if ( (*(int (__thiscall **)(Tile *))(*(_DWORD *)v3 + 0xC))(v3) == 0x389 /*0x57db06*/
      && *(_DWORD *)(Tile_GetParentMenu(v3) + 0x24) != 1
      && *(_DWORD *)(Tile_GetParentMenu(v3) + 0x24) != 8 )
    {
      return 0; /*0x57db06*/
    }
  }
  if ( Tile_GetFloat(v3, 0xFA1) == fConstant_1 ) /*0x57db2a*/
    return 0; /*0x57db10*/
  v8 = *((_DWORD **)v3 + 0xD); /*0x57db2d*/
  if ( v8 ) /*0x57db32*/
  {
    while ( 1 ) /*0x57db3b*/
    {
      v9 = (Tile *)v8[2]; /*0x57db3b*/
      v8 = (_DWORD *)*v8; /*0x57db3d*/
      v18 = 0x80000000; /*0x57db45*/
      v10 = InterfaceManager::ScanForMaxFocus(v20, &v18, v9); /*0x57db52*/
      if ( v10 ) /*0x57db56*/
      {
        if ( v18 <= v5 ) /*0x57db5e*/
        {
          if ( v18 != v5 ) /*0x57db64*/
            goto LABEL_17; /*0x57db64*/
          v11 = sub_588B50(v10, 0xFAA); /*0x57db6d*/
          if ( !v11 ) /*0x57db74*/
            goto LABEL_17; /*0x57db74*/
          v12 = Double_To_SInt32(*(float *)(v11 + 4)); /*0x57db79*/
          if ( v12 >= v19 ) /*0x57db82*/
            goto LABEL_17; /*0x57db82*/
          v19 = v12; /*0x57db84*/
        }
        else
        {
          v5 = v18; /*0x57db60*/
        }
        v17 = v10; /*0x57db88*/
      }
LABEL_17:
      if ( !v8 ) /*0x57db8e*/
      {
        v4 = maxFocus; /*0x57db90*/
        break; /*0x57db90*/
      }
    }
  }
  if ( Tile_GetFloat(v3, 0xFC9) == fConstant_2 && Tile_GetFloat(v3, 0xFA1) != fConstant_1 ) /*0x57dbc5*/
  {
    v13 = sub_588B50(v3, 0xFF0); /*0x57dbce*/
    if ( v13 ) /*0x57dbd5*/
    {
      v14 = Double_To_SInt32(*(float *)(v13 + 4)); /*0x57dbda*/
      v18 = v14; /*0x57dbe1*/
      if ( v14 > v5 ) /*0x57dbe5*/
      {
        *v4 = v14; /*0x57dbe9*/
        return v3; /*0x57dbf7*/
      }
      if ( v14 == v5 ) /*0x57dbfa*/
      {
        v15 = sub_588B50(v3, 0xFAA); /*0x57dc03*/
        if ( v15 ) /*0x57dc0a*/
        {
          v16 = Double_To_SInt32(*(float *)(v15 + 4)); /*0x57dc0f*/
          if ( v16 < v19 ) /*0x57dc18*/
            v17 = v3; /*0x57dc1a*/
        }
      }
    }
  }
  *v4 = v5; /*0x57dc22*/
  return v17; /*0x57db08*/
}
