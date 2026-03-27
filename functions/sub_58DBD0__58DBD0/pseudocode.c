int *__cdecl sub_58DBD0(char *Str, int a2, unsigned int a3)
{
  int *v3; // eax
  int v4; // esi
  int *v5; // ebp
  char v6; // bl
  int v7; // edi
  unsigned int *XML_LoadSrcFiles; // eax
  unsigned int v9; // edx
  unsigned int i; // ebp
  char v11; // al
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  unsigned int j; // eax
  _DWORD *v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v22; // [esp-10h] [ebp-10DCh]
  int v23; // [esp-8h] [ebp-10D4h]
  char v24; // [esp-4h] [ebp-10D0h]
  char v25; // [esp+17h] [ebp-10B5h]
  int v26; // [esp+18h] [ebp-10B4h]
  bool v27; // [esp+1Fh] [ebp-10ADh]
  int v28; // [esp+20h] [ebp-10ACh]
  int *v29; // [esp+24h] [ebp-10A8h]
  unsigned int v30; // [esp+2Ch] [ebp-10A0h]
  unsigned int v31; // [esp+30h] [ebp-109Ch]
  char *v33; // [esp+38h] [ebp-1094h]
  char Src[128]; // [esp+3Ch] [ebp-1090h] BYREF
  char v35[4096]; // [esp+BCh] [ebp-1010h] BYREF
  unsigned int v36; // [esp+10C8h] [ebp-4h]

  v3 = (int *)FormHeapAlloc(0x14u);
  v4 = 0;
  v36 = 0;
  if ( v3 )
    v29 = sub_58CD30(v3);
  else
    v29 = 0;
  v5 = 0;
  v36 = 0xFFFFFFFF;
  v31 = 0;
  if ( a2 )
  {
    v28 = a2;
  }
  else
  {
    v5 = (int *)sub_585220(Str, 0);
    v31 = (unsigned int)v5;
    v28 = v5[1];
    a3 = *v5;
  }
  v6 = 0;
  v7 = 0;
  v35[0] = 0;
  v33 = 0;
  v27 = 0;
  v25 = 0;
  v26 = 1;
  v30 = 0;
  if ( v5 )
  {
    XML_LoadSrcFiles = (unsigned int *)LoadXML_LoadSrcFiles(v5, 1);
    v30 = (unsigned int)XML_LoadSrcFiles;
    if ( XML_LoadSrcFiles == (unsigned int *)v5 )
    {
      v30 = 0;
    }
    else
    {
      v28 = XML_LoadSrcFiles[1];
      a3 = *XML_LoadSrcFiles;
    }
  }
  v9 = a3;
  for ( i = 0; i < a3; ++i )
  {
    v11 = *(_BYTE *)(v28 + i);
    if ( v11 == 0xA )
      ++v26;
    switch ( v7 )
    {
      case 0:
        if ( v11 == 0x3C )
        {
          if ( i + 3 < v9
            && *(_BYTE *)(v28 + i + 1) == 0x21
            && *(_BYTE *)(v28 + i + 2) == 0x2D
            && *(_BYTE *)(v28 + i + 3) == 0x2D )
          {
            v6 = 0;
            v7 = 4;
          }
          else
          {
            v7 = 1;
            Src[0] = 0;
            v25 = 0;
            v4 = 0;
          }
        }
        break;
      case 1:
        if ( Src[0] || v11 != 0x2F )
        {
          if ( v11 == 0x3E || i + 1 < v9 && v11 == 0x2F && *(_BYTE *)(v28 + i + 1) == 0x3E )
          {
            if ( Src[0] )
            {
              v13 = (_DWORD *)sub_588A60(v29);
              if ( v25 )
                sub_58D2F0(v13, (char *)0xF, Src, v26, 0);
              else
                sub_58D2F0(v13, (char *)0xA, Src, v26, 0);
            }
            else if ( !v6 )
            {
              PrintError("XML ERROR: %s -- in file '%s' on line %i.", "Empty tag name", Str, v26);
              byte_B3B0A0 = 1;
              return 0;
            }
            v4 = 0;
            v7 = (*(_BYTE *)(v28 + i) != 0x2F) + 2;
            v6 = 0;
          }
          else
          {
            if ( (unsigned __int8)v11 > 0x20u )
            {
              if ( v6 )
              {
                --i;
                v7 = 5;
                v6 = 0;
              }
              else
              {
                Src[v4++] = v11;
                Src[v4] = 0;
              }
              break;
            }
            if ( Src[0] )
            {
              if ( v25 )
                v22 = 0xF;
              else
                v22 = 0xA;
              v12 = (_DWORD *)sub_588A60(v29);
              sub_58D2F0(v12, (char *)v22, Src, v26, 0);
              v4 = 0;
              goto LABEL_110;
            }
          }
        }
        else
        {
          v25 = 1;
        }
        break;
      case 4:
        if ( i + 2 < v9 && v11 == 0x2D && *(_BYTE *)(v28 + i + 1) == 0x2D && *(_BYTE *)(v28 + i + 2) == 0x3E )
        {
          i += 2;
          v7 = 3;
          v6 = 0;
        }
        break;
      case 5:
        if ( v11 == 0x3E || i + 1 < v9 && v11 == 0x2F && *(_BYTE *)(v28 + i + 1) == 0x3E )
        {
          PrintError("XML ERROR: %s -- in file '%s' on line %i.", "Attribute with no value", Str, v26);
          byte_B3B0A0 = 1;
          return 0;
        }
        if ( v11 == 0x3D )
        {
          if ( !v35[0] )
          {
            PrintError("XML ERROR: %s -- in file '%s' on line %i.", "Missing attribute name", Str, v26);
            byte_B3B0A0 = 1;
            return 0;
          }
          v4 = 0;
          v33 = (char *)TileStringToStringID((unsigned __int8 *)v35);
          v35[0] = 0;
          v7 = 6;
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v11 > 0x20u )
          {
            if ( v6 )
            {
              PrintError("XML ERROR: %s -- in file '%s' on line %i.", "Unexpected word after attribute name", Str, v26);
              byte_B3B0A0 = 1;
              return 0;
            }
LABEL_63:
            v35[v4++] = v11;
            v35[v4] = 0;
            if ( v4 > 0x1000 )
              PrintError("XML Read buffer too small!");
            break;
          }
          if ( v35[0] )
          {
            v33 = (char *)TileStringToStringID((unsigned __int8 *)v35);
            v35[0] = 0;
            v4 = 0;
LABEL_110:
            v6 = 1;
          }
        }
        break;
      case 6:
        if ( v11 == 0x22 )
        {
          v27 = !v27;
        }
        else
        {
          if ( v27 )
            goto LABEL_63;
          if ( v11 == 0x3E || i + 1 < v9 && v11 == 0x2F && *(_BYTE *)(v28 + i + 1) == 0x3E )
          {
            if ( v35[0] )
            {
              v15 = (_DWORD *)sub_588A60(v29);
              sub_58D2F0(v15, v33, v35, v26, 0);
            }
            else if ( !v6 )
            {
              PrintError("XML ERROR: %s -- in file '%s' on line %i.", "Missing attribute's value", Str, v26);
              byte_B3B0A0 = 1;
              return 0;
            }
            v4 = 0;
            v35[0] = 0;
            v7 = (*(_BYTE *)(v28 + i) != 0x2F) + 2;
            v6 = 0;
          }
          else if ( (unsigned __int8)v11 > 0x20u )
          {
            if ( !v6 )
              goto LABEL_63;
            --i;
            v7 = 5;
            v6 = 0;
          }
          else if ( v35[0] )
          {
            v14 = (_DWORD *)sub_588A60(v29);
            sub_58D2F0(v14, v33, v35, v26, 0);
            v35[0] = 0;
            v4 = 0;
            goto LABEL_110;
          }
        }
        break;
      case 2:
        if ( v11 != 0x3E )
        {
          PrintError(
            "XML ERROR: %s -- in file '%s' on line %i.",
            "Close-tag marker '/' not followed by end-of-tag marker '>'",
            Str,
            v26);
          byte_B3B0A0 = 1;
          return 0;
        }
        v16 = (_DWORD *)sub_588A60(v29);
        sub_58D2F0(v16, (char *)0xF, Src, v26, 0);
        v7 = 3;
        Src[0] = 0;
        break;
      case 3:
        if ( v11 == 0x3C )
        {
          if ( i + 3 >= v9
            || *(_BYTE *)(v28 + i + 1) != 0x21
            || *(_BYTE *)(v28 + i + 2) != 0x2D
            || *(_BYTE *)(v28 + i + 3) != 0x2D )
          {
            if ( v35[0] )
            {
              for ( j = strlen(v35) - 1; (unsigned __int8)v35[j] <= 0x20u; --j )
                ;
              v35[j + 1] = 0;
              if ( v35[0] == 0x26 )
              {
                v24 = 0;
                v23 = v26;
                goto LABEL_100;
              }
              if ( v35[0] )
              {
                v24 = 1;
                v23 = v26;
LABEL_100:
                v18 = (_DWORD *)sub_588A60(v29);
                sub_58D2F0(v18, (char *)0xBB9, v35, v23, v24);
              }
            }
            v4 = 0;
            v6 = 0;
            v35[0] = 0;
            v25 = 0;
            v7 = 1;
            Src[0] = 0;
            break;
          }
          v6 = 0;
          v7 = 4;
        }
        else
        {
          if ( i + 1 < v9 && v11 == 0x2F && *(_BYTE *)(v28 + i + 1) == 0x3E )
          {
            PrintError(
              "XML ERROR: %s -- in file '%s' on line %i.",
              "Unballanced close-tag marker pair '/>' found",
              Str,
              v26);
            byte_B3B0A0 = 1;
            return 0;
          }
          if ( v11 == 0x3E )
          {
            PrintError("XML ERROR: %s -- in file '%s' on line %i.", "Unballanced end-of-tag marker '>' found", Str, v26);
            byte_B3B0A0 = 1;
            return 0;
          }
          if ( (unsigned __int8)v11 > 0x20u || v6 == 1 )
          {
            v35[v4++] = v11;
            v35[v4] = 0;
            if ( v4 > 0x1000 )
              PrintError("XML Read buffer too small!");
            goto LABEL_110;
          }
        }
        break;
    }
    v9 = a3;
  }
  if ( v30 )
  {
    v19 = *(_DWORD *)(v30 + 4);
    if ( v19 )
      FormHeapFree(v19);
    *(_DWORD *)(v30 + 4) = 0;
    FormHeapFree(v30);
  }
  if ( v31 )
  {
    v20 = *(_DWORD *)(v31 + 4);
    if ( v20 )
      FormHeapFree(v20);
    *(_DWORD *)(v31 + 4) = 0;
    FormHeapFree(v31);
  }
  return v29;
}
