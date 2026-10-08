// Verified: allocates BuildStorage0x14, parses supplied buffer/length when buffer nonnull; otherwise loads file and expands include/source files. Tracks line counter for diagnostics and item construction. Emits lexical pairs to0x58D2F0. Full token grammar and malformed-input cleanup remain Unknown beyond examined branches.
OblivionTileBuildStorage *__cdecl Tile::ParseFile(const char *path, const char *buffer, unsigned int length)
{
  OblivionTileBuildStorage *v3; // eax
  int v4; // esi
  unsigned int *v5; // ebp
  char v6; // bl
  int v7; // edi
  unsigned int *XML_LoadSrcFiles; // eax
  unsigned int v9; // edx
  unsigned int i; // ebp
  char v11; // al
  OblivionTileTemplate *v12; // eax
  OblivionTileTemplate *CurrentTemplate; // eax
  OblivionTileTemplate *v14; // eax
  OblivionTileTemplate *v15; // eax
  OblivionTileTemplate *v16; // eax
  unsigned int j; // eax
  OblivionTileTemplate *v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v22; // [esp-10h] [ebp-10DCh]
  unsigned int v23; // [esp-8h] [ebp-10D4h]
  bool v24; // [esp-4h] [ebp-10D0h]
  char v25; // [esp+17h] [ebp-10B5h]
  unsigned int sourceLine; // [esp+18h] [ebp-10B4h]
  bool v27; // [esp+1Fh] [ebp-10ADh]
  const char *v28; // [esp+20h] [ebp-10ACh]
  OblivionTileBuildStorage *v29; // [esp+24h] [ebp-10A8h]
  unsigned int v30; // [esp+2Ch] [ebp-10A0h]
  unsigned int v31; // [esp+30h] [ebp-109Ch]
  int command; // [esp+38h] [ebp-1094h]
  char Src[128]; // [esp+3Ch] [ebp-1090h] BYREF
  char text[4096]; // [esp+BCh] [ebp-1010h] BYREF
  unsigned int v36; // [esp+10C8h] [ebp-4h]

  v3 = (OblivionTileBuildStorage *)FormHeapAlloc(0x14u); /*0x58dc1c*/
  v4 = 0; /*0x58dc28*/
  v36 = 0; /*0x58dc2c*/
  if ( v3 ) /*0x58dc33*/
    v29 = Tile::BuildStorage::Initialize(v3); /*0x58dc3c*/
  else
    v29 = 0; /*0x58dc42*/
  v5 = 0; /*0x58dc4d*/
  v36 = 0xFFFFFFFF; /*0x58dc51*/
  v31 = 0; /*0x58dc5c*/
  if ( buffer ) /*0x58dc60*/
  {
    v28 = buffer; /*0x58dc62*/
  }
  else
  {
    v5 = (unsigned int *)sub_585220((char *)path, 0); /*0x58dc7a*/
    v31 = (unsigned int)v5; /*0x58dc85*/
    v28 = (const char *)v5[1]; /*0x58dc89*/
    length = *v5; /*0x58dc8d*/
  }
  v6 = 0; /*0x58dc91*/
  v7 = 0; /*0x58dc93*/
  text[0] = 0; /*0x58dc97*/
  command = 0; /*0x58dc9f*/
  v27 = 0; /*0x58dca3*/
  v25 = 0; /*0x58dca7*/
  sourceLine = 1; /*0x58dcab*/
  v30 = 0; /*0x58dcb3*/
  if ( v5 ) /*0x58dcb7*/
  {
    XML_LoadSrcFiles = (unsigned int *)LoadXML_LoadSrcFiles((int *)v5, 1); /*0x58dcbc*/
    v30 = (unsigned int)XML_LoadSrcFiles; /*0x58dcc6*/
    if ( XML_LoadSrcFiles == v5 ) /*0x58dcca*/
    {
      v30 = 0; /*0x58dcdb*/
    }
    else
    {
      v28 = (const char *)XML_LoadSrcFiles[1]; /*0x58dcd1*/
      length = *XML_LoadSrcFiles; /*0x58dcd5*/
    }
  }
  v9 = length; /*0x58dcdf*/
  for ( i = 0; i < length; ++i )
  {
    v11 = v28[i]; /*0x58dcf4*/
    if ( v11 == 0xA ) /*0x58dcf9*/
      ++sourceLine; /*0x58dcfb*/
    switch ( v7 )
    {
      case 0:
        if ( v11 == 0x3C ) /*0x58dd06*/
        {
          if ( i + 3 < v9 && v28[i + 1] == 0x21 && v28[i + 2] == 0x2D && v28[i + 3] == 0x2D ) /*0x58dd26*/
          {
            v6 = 0; /*0x58dd28*/
            v7 = 4; /*0x58dd2a*/
          }
          else
          {
            v7 = 1; /*0x58dd34*/
            Src[0] = 0; /*0x58dd39*/
            v25 = 0; /*0x58dd3e*/
            v4 = 0; /*0x58dd43*/
          }
        }
        break; /*0x58dd2f*/
      case 1:
        if ( Src[0] || v11 != 0x2F )
        {
          if ( v11 == 0x3E || i + 1 < v9 && v11 == 0x2F && v28[i + 1] == 0x3E )
          {
            if ( Src[0] )
            {
              CurrentTemplate = Tile::BuildStorage::GetCurrentTemplate(v29); /*0x58de13*/
              if ( v25 ) /*0x58de01*/
                Tile::TileTemplate::AddPair(CurrentTemplate, 0xFu, Src, sourceLine, 0); /*0x58de1a*/
              else
                Tile::TileTemplate::AddPair(CurrentTemplate, 0xAu, Src, sourceLine, 0); /*0x58de38*/
            }
            else if ( !v6 )
            {
              PrintError("XML ERROR: %s -- in file '%s' on line %i.", "Empty tag name", path, sourceLine);
              unk_B3B0A0 = 1; /*0x58e27a*/
              return 0; /*0x58e283*/
            }
            v4 = 0; /*0x58de4d*/
            v7 = (v28[i] != 0x2F) + 2; /*0x58de59*/
            v6 = 0; /*0x58de5b*/
          }
          else
          {
            if ( (unsigned __int8)v11 > 0x20u ) /*0x58dd88*/
            {
              if ( v6 ) /*0x58ddd1*/
              {
                --i; /*0x58ddd3*/
                v7 = 5; /*0x58ddd6*/
                v6 = 0; /*0x58dddb*/
              }
              else
              {
                Src[v4++] = v11; /*0x58dde2*/
                Src[v4] = 0; /*0x58dde9*/
              }
              break; /*0x58dddd*/
            }
            if ( Src[0] ) /*0x58dd8f*/
            {
              if ( v25 ) /*0x58dd9c*/
                v22 = 0xF; /*0x58dda8*/
              else
                v22 = 0xA; /*0x58ddb6*/
              v12 = Tile::BuildStorage::GetCurrentTemplate(v29); /*0x58ddbc*/
              Tile::TileTemplate::AddPair(v12, v22, Src, sourceLine, 0); /*0x58ddc3*/
              v4 = 0; /*0x58ddc8*/
              goto LABEL_110; /*0x58ddca*/
            }
          }
        }
        else
        {
          v25 = 1; /*0x58dd5e*/
        }
        break;
      case 4:
        if ( i + 2 < v9 && v11 == 0x2D && v28[i + 1] == 0x2D && v28[i + 2] == 0x3E ) /*0x58de8e*/
        {
          i += 2; /*0x58de94*/
          v7 = 3; /*0x58de96*/
          v6 = 0; /*0x58de9b*/
        }
        break; /*0x58de9d*/
      case 5:
        if ( v11 == 0x3E || i + 1 < v9 && v11 == 0x2F && v28[i + 1] == 0x3E )
        {
          PrintError("XML ERROR: %s -- in file '%s' on line %i.", "Attribute with no value", path, sourceLine);
          unk_B3B0A0 = 1; /*0x58e2f2*/
          return 0; /*0x58e2fb*/
        }
        if ( v11 == 0x3D )
        {
          if ( !text[0] )
          {
            PrintError("XML ERROR: %s -- in file '%s' on line %i.", "Missing attribute name", path, sourceLine);
            unk_B3B0A0 = 1; /*0x58e2a1*/
            return 0; /*0x58e2aa*/
          }
          v4 = 0; /*0x58deef*/
          command = TileStringToStringID((unsigned __int8 *)text); /*0x58def1*/
          text[0] = 0; /*0x58def5*/
          v7 = 6; /*0x58defd*/
          v6 = 0; /*0x58df02*/
        }
        else
        {
          if ( (unsigned __int8)v11 > 0x20u )
          {
            if ( v6 )
            {
              PrintError(
                "XML ERROR: %s -- in file '%s' on line %i.",
                "Unexpected word after attribute name",
                path,
                sourceLine);
              unk_B3B0A0 = 1; /*0x58e2c8*/
              return 0; /*0x58e2d1*/
            }
LABEL_63:
            text[v4++] = v11; /*0x58df46*/
            text[v4] = 0; /*0x58df56*/
            if ( v4 > 0x1000 ) /*0x58df5e*/
              PrintError("XML Read buffer too small!"); /*0x58df69*/
            break; /*0x58df71*/
          }
          if ( text[0] ) /*0x58df15*/
          {
            command = TileStringToStringID((unsigned __int8 *)text); /*0x58df2b*/
            text[0] = 0; /*0x58df2f*/
            v4 = 0; /*0x58df37*/
LABEL_110:
            v6 = 1; /*0x58e1c9*/
          }
        }
        break;
      case 6:
        if ( v11 == 0x22 )
        {
          v27 = !v27; /*0x58df8b*/
        }
        else
        {
          if ( v27 ) /*0x58df99*/
            goto LABEL_63; /*0x58df99*/
          if ( v11 == 0x3E || i + 1 < v9 && v11 == 0x2F && v28[i + 1] == 0x3E )
          {
            if ( text[0] )
            {
              v15 = Tile::BuildStorage::GetCurrentTemplate(v29); /*0x58e033*/
              Tile::TileTemplate::AddPair(v15, command, text, sourceLine, 0); /*0x58e03a*/
            }
            else if ( !v6 )
            {
              PrintError("XML ERROR: %s -- in file '%s' on line %i.", "Missing attribute's value", path, sourceLine);
              unk_B3B0A0 = 1; /*0x58e31c*/
              return 0; /*0x58e325*/
            }
            v4 = 0; /*0x58e04f*/
            text[0] = 0; /*0x58e051*/
            v7 = (v28[i] != 0x2F) + 2; /*0x58e063*/
            v6 = 0; /*0x58e065*/
          }
          else if ( (unsigned __int8)v11 > 0x20u ) /*0x58dfb7*/
          {
            if ( !v6 ) /*0x58dffc*/
              goto LABEL_63; /*0x58dffc*/
            --i; /*0x58e002*/
            v7 = 5; /*0x58e005*/
            v6 = 0; /*0x58e00a*/
          }
          else if ( text[0] ) /*0x58dfc1*/
          {
            v14 = Tile::BuildStorage::GetCurrentTemplate(v29); /*0x58dfdf*/
            Tile::TileTemplate::AddPair(v14, command, text, sourceLine, 0); /*0x58dfe6*/
            text[0] = 0; /*0x58dfeb*/
            v4 = 0; /*0x58dff3*/
            goto LABEL_110; /*0x58dff5*/
          }
        }
        break;
      case 2:
        if ( v11 != 0x3E )
        {
          PrintError(
            "XML ERROR: %s -- in file '%s' on line %i.",
            "Close-tag marker '/' not followed by end-of-tag marker '>'",
            path,
            sourceLine);
          unk_B3B0A0 = 1; /*0x58e346*/
          return 0; /*0x58e34f*/
        }
        v16 = Tile::BuildStorage::GetCurrentTemplate(v29); /*0x58e08b*/
        Tile::TileTemplate::AddPair(v16, 0xFu, Src, sourceLine, 0); /*0x58e092*/
        v7 = 3; /*0x58e097*/
        Src[0] = 0; /*0x58e09c*/
        break;
      case 3:
        if ( v11 == 0x3C )
        {
          if ( i + 3 >= v9 || v28[i + 1] != 0x21 || v28[i + 2] != 0x2D || v28[i + 3] != 0x2D ) /*0x58e0d1*/
          {
            if ( text[0] ) /*0x58e0e7*/
            {
              for ( j = strlen(text) - 1; (unsigned __int8)text[j] <= 0x20u; --j ) /*0x58e0fe*/
                ; /*0x58e10b*/
              text[j + 1] = 0; /*0x58e110*/
              if ( text[0] == 0x26 ) /*0x58e121*/
              {
                v24 = 0; /*0x58e127*/
                v23 = sourceLine; /*0x58e129*/
                goto LABEL_100; /*0x58e132*/
              }
              if ( text[0] ) /*0x58e136*/
              {
                v24 = 1; /*0x58e13c*/
                v23 = sourceLine; /*0x58e13e*/
LABEL_100:
                v18 = Tile::BuildStorage::GetCurrentTemplate(v29); /*0x58e147*/
                Tile::TileTemplate::AddPair(v18, 0xBB9u, text, v23, v24); /*0x58e157*/
              }
            }
            v4 = 0; /*0x58e15c*/
            v6 = 0; /*0x58e15e*/
            text[0] = 0; /*0x58e160*/
            v25 = 0; /*0x58e168*/
            v7 = 1; /*0x58e16c*/
            Src[0] = 0; /*0x58e171*/
            break; /*0x58e175*/
          }
          v6 = 0; /*0x58e0d3*/
          v7 = 4; /*0x58e0d5*/
        }
        else
        {
          if ( i + 1 < v9 && v11 == 0x2F && v28[i + 1] == 0x3E )
          {
            PrintError(
              "XML ERROR: %s -- in file '%s' on line %i.",
              "Unballanced close-tag marker pair '/>' found",
              path,
              sourceLine);
            unk_B3B0A0 = 1; /*0x58e370*/
            return 0; /*0x58e379*/
          }
          if ( v11 == 0x3E )
          {
            PrintError(
              "XML ERROR: %s -- in file '%s' on line %i.",
              "Unballanced end-of-tag marker '>' found",
              path,
              sourceLine);
            unk_B3B0A0 = 1; /*0x58e39a*/
            return 0; /*0x58e3a1*/
          }
          if ( (unsigned __int8)v11 > 0x20u || v6 == 1 ) /*0x58e1a0*/
          {
            text[v4++] = v11; /*0x58e1a2*/
            text[v4] = 0; /*0x58e1b2*/
            if ( v4 > 0x1000 ) /*0x58e1ba*/
              PrintError("XML Read buffer too small!"); /*0x58e1c1*/
            goto LABEL_110; /*0x58e1c1*/
          }
        }
        break;
    }
    v9 = length; /*0x58e1cb*/
  }
  if ( v30 ) /*0x58e1e0*/
  {
    v19 = *(_DWORD *)(v30 + 4); /*0x58e1e2*/
    if ( v19 ) /*0x58e1e7*/
      FormHeapFree(v19); /*0x58e1ea*/
    *(_DWORD *)(v30 + 4) = 0; /*0x58e1f7*/
    FormHeapFree(v30); /*0x58e1fe*/
  }
  if ( v31 ) /*0x58e20c*/
  {
    v20 = *(_DWORD *)(v31 + 4); /*0x58e20e*/
    if ( v20 ) /*0x58e213*/
      FormHeapFree(v20); /*0x58e216*/
    *(_DWORD *)(v31 + 4) = 0; /*0x58e223*/
    FormHeapFree(v31); /*0x58e22a*/
  }
  return v29; /*0x58e236*/
}
