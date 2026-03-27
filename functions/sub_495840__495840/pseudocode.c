unsigned int __thiscall sub_495840(HWND *this, LPARAM a2, int a3)
{
  unsigned int result; // eax
  int v4; // eax
  char v5; // al
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // esi
  LRESULT (__stdcall *v9)(HWND, UINT, WPARAM, LPARAM); // ebp
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // edx
  const char **v14; // eax
  unsigned int j; // edi
  int k; // eax
  int v17; // ecx
  HWND v18; // [esp-10h] [ebp-B8h]
  HWND v19; // [esp-10h] [ebp-B8h]
  HWND v20; // [esp-10h] [ebp-B8h]
  size_t v21; // [esp-4h] [ebp-ACh]
  unsigned int i; // [esp+14h] [ebp-94h]
  unsigned int v24; // [esp+1Ch] [ebp-8Ch]
  LRESULT v25; // [esp+20h] [ebp-88h]
  LPARAM lParam[6]; // [esp+24h] [ebp-84h] BYREF
  char *v27; // [esp+3Ch] [ebp-6Ch]
  int v28; // [esp+44h] [ebp-64h]
  int v29; // [esp+48h] [ebp-60h]
  int v30; // [esp+50h] [ebp-58h]
  char Dest[64]; // [esp+58h] [ebp-50h] BYREF
  unsigned int v32; // [esp+A4h] [ebp-4h]

  result = a2;
  if ( a3 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
    if ( v4 )
    {
      while ( (char *)v4 != dword_B40864 )
      {
        v4 = *(_DWORD *)(v4 + 4);
        if ( !v4 )
          goto LABEL_5;
      }
      v5 = 1;
    }
    else
    {
LABEL_5:
      v5 = 0;
    }
    result = v5 != 0 ? a3 : 0;
    v6 = result;
    v24 = result;
    if ( result )
    {
      v7 = FormHeapAlloc(0x10u);
      v8 = v7;
      v32 = 0;
      if ( v7 )
      {
        *(_WORD *)(v7 + 0xA) = 0;
        *(_WORD *)(v7 + 0xC) = 0;
        *(_DWORD *)v7 = &NiTArray<char *>::`vftable';
        *(_WORD *)(v7 + 8) = 0x80;
        *(_WORD *)(v7 + 0xE) = 0x80;
        *(_DWORD *)(v7 + 4) = FormHeapAlloc(0x200u);
      }
      else
      {
        v8 = 0;
      }
      v9 = SendMessageA;
      v28 = 5;
      v29 = 5;
      lParam[0] = a2;
      v18 = *(this + 3);
      v32 = 0xFFFFFFFF;
      lParam[1] = 0xFFFF0002;
      lParam[2] = 0x27;
      v30 = a3;
      v27 = "Modifiers";
      v25 = v9(v18, 0x1100u, 0, (LPARAM)lParam);
      result = *(_DWORD *)(v6 + 0xD0);
      for ( i = 0; i < result; ++i )
      {
        v10 = *(_DWORD **)(v6 + 0xC8);
        v11 = 0;
        if ( v10 )
        {
          while ( 1 )
          {
            v12 = v10[2];
            v10 = (_DWORD *)*v10;
            v13 = v11++;
            if ( v13 == i )
              break;
            if ( !v10 )
              goto LABEL_23;
          }
          if ( v12 )
          {
            v14 = (const char **)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12);
            LODWORD(v21) = 0x3F;
            strncpy(Dest, *v14, v21);
            v27 = Dest;
            lParam[0] = v25;
            v19 = *(this + 3);
            Dest[0x3F] = 0;
            v28 = 0;
            v29 = 0;
            lParam[0] = v9(v19, 0x1100u, 0, (LPARAM)lParam);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 0x30))(v12, v8);
            for ( j = 0; j < *(unsigned __int16 *)(v8 + 0xA); ++j )
            {
              v27 = *(char **)(*(_DWORD *)(v8 + 4) + 4 * j);
              v20 = *(this + 3);
              v28 = 6;
              v29 = 6;
              v9(v20, 0x1100u, 0, (LPARAM)lParam);
            }
            for ( k = 0; (unsigned __int16)k < *(_WORD *)(v8 + 0xA); *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v17) = 0 )
              v17 = (unsigned __int16)k++;
            *(_WORD *)(v8 + 0xA) = 0;
            *(_WORD *)(v8 + 0xC) = 0;
          }
          v6 = v24;
        }
LABEL_23:
        result = *(_DWORD *)(v6 + 0xD0);
      }
      if ( v8 )
        return (**(unsigned int (__thiscall ***)(int, int))v8)(v8, 1);
    }
  }
  return result;
}
