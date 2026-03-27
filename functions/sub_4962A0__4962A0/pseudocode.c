NiObject **__thiscall sub_4962A0(HWND *this, NiObject **a2, int *a3)
{
  NiObject **result; // eax
  int v5; // eax
  char v6; // al
  int v7; // eax
  int v8; // esi
  HWND v9; // edx
  LRESULT (__stdcall *v10)(HWND, UINT, WPARAM, LPARAM); // ebp
  const char **v11; // eax
  LRESULT v12; // eax
  int v13; // edx
  unsigned int i; // edi
  char *v15; // edx
  HWND v16; // ecx
  int j; // eax
  int v18; // edx
  HWND v19; // [esp-10h] [ebp-B4h]
  size_t v20; // [esp-4h] [ebp-A8h]
  LRESULT v21; // [esp+14h] [ebp-90h]
  LPARAM v22; // [esp+14h] [ebp-90h]
  NiObject **v23; // [esp+18h] [ebp-8Ch]
  LPARAM lParam[6]; // [esp+1Ch] [ebp-88h] BYREF
  char *v25; // [esp+34h] [ebp-70h]
  int v26; // [esp+3Ch] [ebp-68h]
  int v27; // [esp+40h] [ebp-64h]
  int v28; // [esp+48h] [ebp-5Ch]
  int v29; // [esp+50h] [ebp-54h]
  char Dest[64]; // [esp+54h] [ebp-50h] BYREF
  unsigned int v31; // [esp+A0h] [ebp-4h]

  result = a2;
  if ( a3 )
  {
    v5 = (*(int (__thiscall **)(int *))(*a3 + 4))(a3);
    if ( v5 )
    {
      while ( (char *)v5 != dword_BA7B80 )
      {
        v5 = *(_DWORD *)(v5 + 4);
        if ( !v5 )
          goto LABEL_5;
      }
      v6 = 1;
    }
    else
    {
LABEL_5:
      v6 = 0;
    }
    result = v6 != 0 ? (NiObject **)a3 : 0;
    v23 = result;
    if ( result )
    {
      v7 = FormHeapAlloc(0x10u);
      v8 = v7;
      v29 = v7;
      v31 = 0;
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
      v9 = *(this + 3);
      v10 = SendMessageA;
      v26 = 5;
      v27 = 5;
      v31 = 0xFFFFFFFF;
      lParam[1] = 0xFFFF0002;
      lParam[2] = 0x27;
      v28 = (int)a3;
      v25 = "Havok";
      lParam[0] = (LPARAM)a2;
      v21 = v10(v9, 0x1100u, 0, (LPARAM)lParam);
      v11 = (const char **)((int (__thiscall *)(NiObject **))(*v23)->members.m_uiRefCount)(v23);
      LODWORD(v20) = 0x3F;
      strncpy(Dest, *v11, v20);
      v25 = Dest;
      v26 = 0;
      v27 = 0;
      v19 = *(this + 3);
      Dest[0x3F] = 0;
      lParam[0] = v21;
      v12 = v10(v19, 0x1100u, 0, (LPARAM)lParam);
      v13 = *a3;
      lParam[0] = v12;
      v22 = v12;
      (*(void (__thiscall **)(int *, int))(v13 + 0x30))(a3, v8);
      for ( i = 0; i < *(unsigned __int16 *)(v8 + 0xA); ++i )
      {
        v15 = *(char **)(*(_DWORD *)(v8 + 4) + 4 * i);
        v16 = *(this + 3);
        v26 = 6;
        v27 = 6;
        v25 = v15;
        v10(v16, 0x1100u, 0, (LPARAM)lParam);
      }
      for ( j = 0; (unsigned __int16)j < *(_WORD *)(v8 + 0xA); *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v18) = 0 )
        v18 = (unsigned __int16)j++;
      *(_WORD *)(v8 + 0xA) = 0;
      *(_WORD *)(v8 + 0xC) = 0;
      sub_495E30(this, v22, v23[4]);
      return (NiObject **)(**(int (__thiscall ***)(int, int))v8)(v8, 1);
    }
  }
  return result;
}
