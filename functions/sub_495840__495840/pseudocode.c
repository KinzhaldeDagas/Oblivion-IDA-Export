unsigned int __thiscall sub_495840(HWND *this, LPARAM a2, int a3)
{
  unsigned int result; // eax
  NiRTTI *v4; // eax
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

  result = a2; /*0x495884*/
  if ( a3 )
  {
    v4 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3); /*0x4958a0*/
    if ( v4 ) /*0x4958a4*/
    {
      while ( v4 != &stru_B40864 ) /*0x4958ab*/
      {
        v4 = v4->parent; /*0x4958ad*/
        if ( !v4 ) /*0x4958b2*/
          goto LABEL_5; /*0x4958b2*/
      }
      v5 = 1; /*0x495924*/
    }
    else
    {
LABEL_5:
      v5 = 0; /*0x4958b4*/
    }
    result = v5 != 0 ? a3 : 0;
    v6 = result; /*0x4958bc*/
    v24 = result; /*0x4958be*/
    if ( result ) /*0x4958c2*/
    {
      v7 = FormHeapAlloc(0x10u); /*0x4958ca*/
      v8 = v7; /*0x4958cf*/
      v32 = 0; /*0x4958da*/
      if ( v7 ) /*0x4958e5*/
      {
        *(_WORD *)(v7 + 0xA) = 0; /*0x4958ee*/
        *(_WORD *)(v7 + 0xC) = 0; /*0x4958f2*/
        *(_DWORD *)v7 = &NiTArray<char *>::`vftable'; /*0x495904*/
        *(_WORD *)(v7 + 8) = 0x80; /*0x49590a*/
        *(_WORD *)(v7 + 0xE) = 0x80; /*0x49590e*/
        *(_DWORD *)(v7 + 4) = FormHeapAlloc(0x200u); /*0x49591f*/
      }
      else
      {
        v8 = 0; /*0x495928*/
      }
      v9 = SendMessageA; /*0x49592e*/
      v28 = 5; /*0x49593e*/
      v29 = 5; /*0x495942*/
      lParam[0] = a2; /*0x49594c*/
      v18 = *(this + 3); /*0x495958*/
      v32 = 0xFFFFFFFF; /*0x495959*/
      lParam[1] = 0xFFFF0002; /*0x495964*/
      lParam[2] = 0x27; /*0x49596c*/
      v30 = a3; /*0x495974*/
      v27 = "Modifiers"; /*0x495978*/
      v25 = v9(v18, 0x1100u, 0, (LPARAM)lParam); /*0x495982*/
      result = *(_DWORD *)(v6 + 0xD0); /*0x495986*/
      for ( i = 0; i < result; ++i ) /*0x495994*/
      {
        v10 = *(_DWORD **)(v6 + 0xC8); /*0x4959a2*/
        v11 = 0; /*0x4959a8*/
        if ( v10 ) /*0x4959ac*/
        {
          while ( 1 ) /*0x4959b2*/
          {
            v12 = v10[2]; /*0x4959b2*/
            v10 = (_DWORD *)*v10; /*0x4959b8*/
            v13 = v11++; /*0x4959ba*/
            if ( v13 == i ) /*0x4959c3*/
              break; /*0x4959c3*/
            if ( !v10 ) /*0x4959c7*/
              goto LABEL_23; /*0x4959c7*/
          }
          if ( v12 ) /*0x4959d2*/
          {
            v14 = (const char **)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12); /*0x4959df*/
            LODWORD(v21) = 0x3F; /*0x4959e3*/
            strncpy(Dest, *v14, v21); /*0x4959eb*/
            v27 = Dest; /*0x495a00*/
            lParam[0] = v25; /*0x495a09*/
            v19 = *(this + 3); /*0x495a15*/
            Dest[0x3F] = 0; /*0x495a16*/
            v28 = 0; /*0x495a1d*/
            v29 = 0; /*0x495a21*/
            lParam[0] = v9(v19, 0x1100u, 0, (LPARAM)lParam); /*0x495a27*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 0x30))(v12, v8); /*0x495a33*/
            for ( j = 0; j < *(unsigned __int16 *)(v8 + 0xA); ++j ) /*0x495a37*/
            {
              v27 = *(char **)(*(_DWORD *)(v8 + 4) + 4 * j); /*0x495a53*/
              v20 = *(this + 3); /*0x495a5f*/
              v28 = 6; /*0x495a60*/
              v29 = 6; /*0x495a64*/
              v9(v20, 0x1100u, 0, (LPARAM)lParam); /*0x495a68*/
            }
            for ( k = 0; (unsigned __int16)k < *(_WORD *)(v8 + 0xA); *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v17) = 0 ) /*0x495a79*/
              v17 = (unsigned __int16)k++; /*0x495a83*/
            *(_WORD *)(v8 + 0xA) = 0; /*0x495a92*/
            *(_WORD *)(v8 + 0xC) = 0; /*0x495a96*/
          }
          v6 = v24; /*0x495a9a*/
        }
LABEL_23:
        result = *(_DWORD *)(v6 + 0xD0); /*0x495a9e*/
      }
      if ( v8 ) /*0x495ab9*/
        return (**(unsigned int (__thiscall ***)(int, int))v8)(v8, 1); /*0x495ac3*/
    }
  }
  return result; /*0x495ac5*/
}
