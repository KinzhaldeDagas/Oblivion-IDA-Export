void __userpurge sub_58CF40(double a1@<st0>, int a2)
{
  _DWORD *v4; // ecx
  int v5; // ebp
  _DWORD *v6; // ebx
  float *v7; // esi
  float v8; // eax
  _DWORD *v9; // esi
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  double v13; // st4
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  char *v16; // esi
  unsigned int *PropertyByCode; // eax
  unsigned int *v18; // eax
  double v19; // st4
  float *v20; // eax
  Tile *v21; // edi
  int v22; // eax
  int v23; // eax
  BSStringT v24; // [esp+0h] [ebp-20h] BYREF
  int v25; // [esp+18h] [ebp-8h]
  float v26; // [esp+1Ch] [ebp-4h]
  _DWORD *v27; // [esp+24h] [ebp+4h]

  v4 = *(_DWORD **)(a2 + 0x10);
  v5 = 0;
  v6 = 0;
  v25 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      v7 = (float *)v4[2];
      v8 = *v7;
      v27 = (_DWORD *)*v4;
      if ( *(_DWORD *)v7 == 0x28 )
      {
        v5 = *((_DWORD *)v7 + 4);
        if ( !v25 )
          v25 = *((_DWORD *)v7 + 4);
        byte_B3B0A1 = 1;
      }
      else
      {
        switch ( LODWORD(v8) )
        {
          case 0x2D:
            byte_B3B0A1 = 0;
            v9 = *(_DWORD **)(v5 + 0x18);
            while ( v9 )
            {
              v10 = v9[2];
              v9 = (_DWORD *)*v9;
              if ( *(_WORD *)(v10 + 0x18) != 0xFA2 )
                DoActionEnumeration((float *)v10, 1);
            }
            v5 = *(_DWORD *)(v5 + 0x10);
            break;
          case 0x32:
            if ( v5 )
            {
              if ( 0.0 == v7[1]
                && ((LOWORD(v11) = *((_WORD *)v7 + 6), (_WORD)v11 != 0xFFFF)
                  ? (v11 = (unsigned __int16)v11)
                  : (v11 = strlen(*((const char **)v7 + 2))),
                    v11)
                || (v12 = *((_DWORD *)v7 + 4), v12 == 0xFDE)
                || v12 == 0xFE6 )
              {
                v15 = *((_DWORD **)v7 + 4);
                if ( v15 == (_DWORD *)0xBBA )
                {
                  v26 = COERCE_FLOAT(&v24);
                  v24.m_data = 0;
                  *(_DWORD *)&v24.m_dataLen = 0;
                  BSStringT_Set(&v24, *((const char **)v7 + 2), 0);
                  sub_58A020((BSStringT *)v5, v24.m_data, *(int *)&v24.m_dataLen);
                }
                else
                {
                  v16 = *((char **)v7 + 2);
                  if ( v15 == (_DWORD *)0xFE6 )
                  {
                    PropertyByCode = Tile_GetPropertyByCode_((_DWORD *)v5, (_DWORD *)0xFE6);
                    if ( PropertyByCode )
                      sub_58CA50(PropertyByCode, v16);
                    *(_DWORD *)(v5 + 0x2C) |= 0x20u;
                  }
                  else
                  {
                    v18 = Tile_GetPropertyByCode_((_DWORD *)v5, v15);
                    if ( v18 )
                      sub_58CA50(v18, v16);
                  }
                }
              }
              else
              {
                v13 = v7[1];
                *(float *)&v24.m_dataLen = v7[4];
                v26 = v13;
                v14 = Tile_GetPropertyByCode_((_DWORD *)v5, *(_DWORD **)&v24.m_dataLen);
                if ( v14 )
                  Tile_Property_SetFloatValue_((int)v14, v26);
              }
            }
            else
            {
              PrintError("Trait defined outside of any tile.");
            }
            break;
          case 0x1E:
            v6 = (_DWORD *)Double_To_SInt32(a1);
            break;
          case 0x23:
            v6 = 0;
            break;
          case 0x37:
            if ( v6 )
            {
              v19 = v7[1];
              *(float *)&v24.m_dataLen = v7[4];
              v26 = v19;
              *(float *)&v24.m_data = v26;
              v20 = (float *)Tile_GetPropertyByCode_((_DWORD *)v5, v6);
              sub_58CBE0(v20, *(float *)&v24.m_data, *(int *)&v24.m_dataLen);
            }
            else
            {
              PrintError("Action defined outside of any trait.");
            }
            break;
          case 0x3C:
            if ( v6 )
            {
              v21 = sub_58B800((_DWORD *)v5, *((unsigned __int8 **)v7 + 2));
              if ( v21 )
              {
                *(float *)&v24.m_dataLen = v7[4];
                v22 = Double_To_SInt32(a1);
                sub_58CF10((_DWORD *)v5, v6, v21, v22, *(int *)&v24.m_dataLen);
              }
            }
            else
            {
              PrintError("Action link defined outside of any trait.");
            }
            break;
          case 0x14:
            if ( !v6 )
            {
              PrintError("Action begun outside of any trait.");
              break;
            }
            *(_DWORD *)&v24.m_dataLen = 0xA;
            goto LABEL_54;
          case 0x19:
            if ( v6 )
            {
              *(_DWORD *)&v24.m_dataLen = 0xF;
LABEL_54:
              v23 = Double_To_SInt32(a1);
              sub_58CEF0((_DWORD *)v5, v6, v23, *(int *)&v24.m_dataLen);
              break;
            }
            PrintError("Action ended outside of any trait.");
            break;
          default:
            break;
        }
      }
      if ( !v27 )
        return;
      v4 = v27;
    }
  }
}
