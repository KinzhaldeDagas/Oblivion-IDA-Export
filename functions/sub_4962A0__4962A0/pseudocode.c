NiObject **__thiscall sub_4962A0(HWND *this, NiObject **a2, int *a3)
{
  NiObject **result; // eax
  NiRTTI *v5; // eax
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
  int *v28; // [esp+48h] [ebp-5Ch]
  int v29; // [esp+50h] [ebp-54h]
  char Dest[64]; // [esp+54h] [ebp-50h] BYREF
  unsigned int v31; // [esp+A0h] [ebp-4h]

  result = a2; /*0x4962e4*/
  if ( a3 )
  {
    v5 = (NiRTTI *)(*(int (__thiscall **)(int *))(*a3 + 4))(a3); /*0x4962fe*/
    if ( v5 ) /*0x496302*/
    {
      while ( v5 != &stru_BA7B80 ) /*0x496309*/
      {
        v5 = v5->parent; /*0x49630b*/
        if ( !v5 ) /*0x496310*/
          goto LABEL_5; /*0x496310*/
      }
      v6 = 1; /*0x496380*/
    }
    else
    {
LABEL_5:
      v6 = 0; /*0x496312*/
    }
    result = v6 != 0 ? (NiObject **)a3 : 0;
    v23 = result; /*0x49631a*/
    if ( result ) /*0x49631e*/
    {
      v7 = FormHeapAlloc(0x10u); /*0x496326*/
      v8 = v7; /*0x49632b*/
      v29 = v7; /*0x496330*/
      v31 = 0; /*0x496336*/
      if ( v7 ) /*0x496341*/
      {
        *(_WORD *)(v7 + 0xA) = 0; /*0x49634a*/
        *(_WORD *)(v7 + 0xC) = 0; /*0x49634e*/
        *(_DWORD *)v7 = &NiTArray<char *>::`vftable'; /*0x496360*/
        *(_WORD *)(v7 + 8) = 0x80; /*0x496366*/
        *(_WORD *)(v7 + 0xE) = 0x80; /*0x49636a*/
        *(_DWORD *)(v7 + 4) = FormHeapAlloc(0x200u); /*0x49637b*/
      }
      else
      {
        v8 = 0; /*0x496384*/
      }
      v9 = *(this + 3); /*0x496386*/
      v10 = SendMessageA; /*0x496389*/
      v26 = 5; /*0x49639b*/
      v27 = 5; /*0x49639f*/
      v31 = 0xFFFFFFFF; /*0x4963ad*/
      lParam[1] = 0xFFFF0002; /*0x4963b8*/
      lParam[2] = 0x27; /*0x4963c0*/
      v28 = a3; /*0x4963c8*/
      v25 = "Havok"; /*0x4963cc*/
      lParam[0] = (LPARAM)a2; /*0x4963d4*/
      v21 = v10(v9, 0x1100u, 0, (LPARAM)lParam); /*0x4963de*/
      v11 = (const char **)((int (__thiscall *)(NiObject **))(*v23)->members.m_uiRefCount)(v23); /*0x4963e7*/
      LODWORD(v20) = 0x3F; /*0x4963eb*/
      strncpy(Dest, *v11, v20); /*0x4963f3*/
      v25 = Dest; /*0x496403*/
      v26 = 0; /*0x49640f*/
      v27 = 0; /*0x496413*/
      v19 = *(this + 3); /*0x49641f*/
      Dest[0x3F] = 0; /*0x496420*/
      lParam[0] = v21; /*0x496428*/
      v12 = v10(v19, 0x1100u, 0, (LPARAM)lParam); /*0x49642c*/
      v13 = *a3; /*0x49642e*/
      lParam[0] = v12; /*0x496430*/
      v22 = v12; /*0x496434*/
      (*(void (__thiscall **)(int *, int))(v13 + 0x30))(a3, v8); /*0x49643e*/
      for ( i = 0; i < *(unsigned __int16 *)(v8 + 0xA); ++i ) /*0x496442*/
      {
        v15 = *(char **)(*(_DWORD *)(v8 + 4) + 4 * i); /*0x49644b*/
        v16 = *(this + 3); /*0x49644e*/
        v26 = 6; /*0x496456*/
        v27 = 6; /*0x49645a*/
        v25 = v15; /*0x49646b*/
        v10(v16, 0x1100u, 0, (LPARAM)lParam); /*0x49646f*/
      }
      for ( j = 0; (unsigned __int16)j < *(_WORD *)(v8 + 0xA); *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v18) = 0 ) /*0x496480*/
        v18 = (unsigned __int16)j++; /*0x496489*/
      *(_WORD *)(v8 + 0xA) = 0; /*0x4964a0*/
      *(_WORD *)(v8 + 0xC) = 0; /*0x4964a4*/
      sub_495E30(this, v22, v23[4]); /*0x4964af*/
      return (**(NiObject **(__thiscall ***)(int, int))v8)(v8, 1); /*0x4964bc*/
    }
  }
  return result; /*0x4964be*/
}
