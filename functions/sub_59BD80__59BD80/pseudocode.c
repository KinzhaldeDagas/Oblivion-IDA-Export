void __usercall sub_59BD80(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  char **v5; // eax
  char *v6; // eax
  _DWORD *i; // ebp
  Tile *v8; // edi
  int v9; // eax
  InputGlobal *input; // ecx
  int v11; // edx
  unsigned __int8 v12; // bl
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  char *m_data; // ebx
  _DWORD *v16; // ecx
  int v17; // eax
  Tile *v18; // ecx
  double Float; // st5
  char v20; // bp
  int v21; // eax
  char v22; // bp
  int v23; // eax
  int j; // edi
  int k; // ebx
  int v26; // edi
  bool v27; // al
  int m; // edi
  int v29; // eax
  int v30; // edi
  int v31; // eax
  bool v32; // al
  char *v33; // ecx
  BSStringT v34; // [esp+20h] [ebp-18h] BYREF
  unsigned int v35; // [esp+34h] [ebp-4h]

  if ( *(_BYTE *)(a1 + 0xD4) )
  {
    v5 = *(char ***)(4 * *(_DWORD *)(a1 + 0x5C) + 0xB39548);
    if ( v5 )
      v6 = *v5;
    else
      v6 = 0;
    Tile_SetString(*(_DWORD **)(a1 + 4), (_DWORD *)0xFB3, v6);
    for ( i = *(_DWORD **)(*(_DWORD *)(a1 + 0x34) + 0x34); i; v34.m_dataLen = 0 )
    {
      v8 = (Tile *)i[2];
      i = (_DWORD *)*i;
      Tile_GetFloat(v8, 0xFA8);
      v9 = Double_To_SInt32(a3);
      input = OSGlobals->input;
      v11 = *(_DWORD *)(a1 + 0x5C);
      v12 = *((_BYTE *)&input->unk1B58[6] + 0x1D * v11 + v9);
      v34.m_data = 0;
      v34.m_dataLen = 0;
      v34.m_bufLen = 0;
      v35 = 0;
      if ( v12 != 0xFF )
      {
        if ( !v11 && v12 < 0xEEu && (v13 = *(_DWORD **)(4 * v12 + 0xB39578)) != 0
          || v11 == 1 && v12 < 9u && (v13 = *(_DWORD **)(4 * v12 + 0xB39554)) != 0 )
        {
          BSStringT_Static_Format(&v34, "%s", *v13);
          goto LABEL_23;
        }
        if ( v11 != 2 )
        {
          BSStringT_Static_Format(&v34, "%d", v12);
          goto LABEL_23;
        }
        if ( v12 < InputGlobals::GetJoystickButtonCount(input, 0) )
        {
          BSStringT_Static_Format(&v34, "%s %d", *(const char **)dword_B38EB0, v12 + 1);
          goto LABEL_23;
        }
        if ( (unsigned __int8)(v12 - 0x20) <= 7u )
        {
          v14 = *(_DWORD **)(4 * v12 + 0xB398B0);
          if ( v14 )
          {
            BSStringT_Static_Format(&v34, "%s", *v14);
            goto LABEL_23;
          }
        }
      }
      BSStringT_Set(&v34, "--", 0);
LABEL_23:
      m_data = v34.m_data;
      Tile_SetString(v8, (_DWORD *)0xFB1, v34.m_data);
      Tile_SetFloat(v8, (_DWORD *)0xFC9, fConstant_2);
      Tile_SetFloat(v8, (_DWORD *)0xFCC, flt_A6B1A0);
      Tile_SetFloat(v8, (_DWORD *)0xFCD, flt_A6B19C);
      Tile_SetFloat(v8, (_DWORD *)0xFCE, flt_A6B198);
      v35 = 0xFFFFFFFF;
      FormHeapFree((unsigned int)m_data);
      v34.m_data = 0;
      v34.m_bufLen = 0;
    }
    v16 = *(_DWORD **)(a1 + 4);
    if ( dword_B14ED0 == 1 )
    {
      Tile_SetString(v16, (_DWORD *)0xFB0, (char *)dword_B38EC0);
      Tile_SetString(*(_DWORD **)(a1 + 4), (_DWORD *)0xFB1, (char *)dword_B38EB8);
    }
    else
    {
      Tile_SetString(v16, (_DWORD *)0xFB0, (char *)dword_B38EB8);
      Tile_SetString(*(_DWORD **)(a1 + 4), (_DWORD *)0xFB1, (char *)dword_B38EC0);
    }
    if ( *(_DWORD *)(a1 + 0xD8) )
    {
      Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFC9, fConstant_2);
      Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFC9, fConstant_2);
      Tile_SetFloat(*(Tile **)(a1 + 0xD8), (_DWORD *)0xFDD, 0.0);
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB1, *(float *)(a1 + 0xDC));
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB2, *(float *)(a1 + 0xE0));
      Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFB2, fConstant_2);
      *(_DWORD *)(a1 + 0xD8) = 0;
    }
    *(_BYTE *)(a1 + 0xD4) = 0;
  }
  else
  {
    LOBYTE(v17) = InputGlobals::QueryMouseKeyState(OSGlobals->input, 0, 2u);
    if ( v17 )
      *(_BYTE *)(a1 + 0xE4) = 0;
  }
  v18 = *(Tile **)(a1 + 0xD8);
  if ( v18 )
  {
    Tile_SetFloat(v18, (_DWORD *)0xFDD, 1.0);
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0xD8), 0xFA8);
    v20 = Double_To_SInt32(a3);
    v21 = *(_DWORD *)(a1 + 0x5C);
    v22 = v20 - 0xE;
    if ( v21 )
    {
      v23 = v21 - 1;
      if ( v23 )
      {
        if ( v23 == 1 )
        {
          for ( j = 0; !*(_BYTE *)(a1 + 0xD4); ++j )
          {
            if ( j >= InputGlobals::GetJoystickButtonCount(OSGlobals->input, 0) )
              break;
            if ( InputGlobals::QueryJoystickButtonState(OSGlobals->input, 0, j, 1) )
            {
              *(_BYTE *)(a1 + 0xD4) = InputGlobal::RebindControl(OSGlobals->input, v22, 2u, j);
              sub_57DE50(0xB);
            }
          }
          for ( k = 0; !*(_BYTE *)(a1 + 0xD4); ++k )
          {
            if ( k >= (int)InputGlobals::GetJoystickPOVControlCount(OSGlobals->input, 0) )
              break;
            v26 = sub_403070((DIDEVCAPS *)OSGlobals->input, 0, k);
            v27 = v26 != 0xFFFFFFFF
               && GetTickCount() >= dword_B3B28C
               && InputGlobal::RebindControl(OSGlobals->input, v22, 2u, v26);
            *(_BYTE *)(a1 + 0xD4) = v27;
            sub_57DE50(0xB);
            if ( *(_BYTE *)(a1 + 0xD4) )
              dword_B3B28C = GetTickCount() + 0x64;
          }
          if ( InputGlobals::QueryControlState(OSGlobals->input, 0x1D, 1) )
          {
            *(_BYTE *)(a1 + 0xD4) = 1;
            InputGlobals::RebindControlMinimalChecks(OSGlobals->input, v22, 2u, 0xFFu);
            sub_57DE50(0xB);
          }
        }
      }
      else
      {
        for ( m = 0; !*(_BYTE *)(a1 + 0xD4); ++m )
        {
          if ( m >= sub_4031D0(&OSGlobals->input->flags) )
            break;
          LOBYTE(v29) = InputGlobals::QueryMouseKeyState(OSGlobals->input, m, 1u);
          if ( v29 )
          {
            sub_57DE50(0xB);
            *(_BYTE *)(a1 + 0xD4) = InputGlobal::RebindControl(OSGlobals->input, v22, 1u, m);
          }
        }
        if ( InputGlobals::QueryControlState(OSGlobals->input, 0x1D, 1) )
        {
          *(_BYTE *)(a1 + 0xD4) = 1;
          InputGlobals::RebindControlMinimalChecks(OSGlobals->input, v22, 1u, 0xFFu);
          sub_57DE50(0xB);
        }
        if ( *(_BYTE *)(a1 + 0xD4) )
        {
          if ( m == 1 )
            *(_BYTE *)(a1 + 0xE4) = 1;
        }
      }
    }
    else
    {
      v30 = 0;
      while ( 1 )
      {
        LOBYTE(v31) = InputGlobals::QueryKeyboardState(OSGlobals->input, v30, 1);
        if ( v31 )
          break;
        if ( (++v30 & 0x100) != 0 )
          return;
      }
      v32 = InputGlobal::RebindControl(OSGlobals->input, v22, 0, v30) || v30 == 1;
      *(_BYTE *)(a1 + 0xD4) = v32;
      sub_57DE50(0xB);
      if ( !*(_BYTE *)(a1 + 0xD4) )
        ShowUIMessageBox(v33, v22, Float, a2, a3, (const char *)dword_B38ED0, 0, 1, (const char *)sOk, 0);
    }
  }
}
