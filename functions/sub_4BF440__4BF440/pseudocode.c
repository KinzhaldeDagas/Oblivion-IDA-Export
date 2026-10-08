char __thiscall sub_4BF440(_DWORD *this, float a2, float a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // edi
  int v7; // esi
  double v8; // st7
  int v9; // ebx
  double v10; // st6
  double v11; // rt0
  double v12; // rt1
  double v13; // st6
  double v14; // st7
  unsigned int v15; // ebp
  int v16; // eax
  float v18; // [esp+8h] [ebp+4h]
  float v19; // [esp+8h] [ebp+4h]
  float v20; // [esp+Ch] [ebp+8h]

  LOBYTE(v3) = LOBYTE(a2); /*0x4bf441*/
  if ( LOBYTE(a2) < 4u && LOWORD(a3) < 8u ) /*0x4bf457*/
  {
    if ( *(this + 9) ) /*0x4bf45d*/
    {
      v4 = LOBYTE(a2); /*0x4bf467*/
      v5 = *(this + 9); /*0x4bf46a*/
      v6 = 4 * LOWORD(a3); /*0x4bf477*/
      v7 = *(_DWORD *)(v5 + 4 * LOBYTE(a2) + 0x20); /*0x4bf47d*/
      *(_DWORD *)(v5 + 4 * LOBYTE(a2) + 0x20) = *(_DWORD *)(v6 + *(_DWORD *)(v5 + 4 * LOBYTE(a2) + 0x30)); /*0x4bf481*/
      *(_DWORD *)(v6 + *(_DWORD *)(*(this + 9) + 4 * LOBYTE(a2) + 0x30)) = v7; /*0x4bf48c*/
      v3 = *(this + 9); /*0x4bf48f*/
      if ( *(_DWORD *)(v3 + 4 * LOBYTE(a2) + 0x40) ) /*0x4bf492*/
      {
        v8 = 0.0; /*0x4bf4a1*/
        v9 = 0; /*0x4bf4a3*/
        v10 = 1.0; /*0x4bf4a5*/
        while ( 1 ) /*0x4bf4ac*/
        {
          v12 = v10; /*0x4bf4ac*/
          v13 = v8; /*0x4bf4ac*/
          v14 = v12; /*0x4bf4ac*/
          v15 = 0; /*0x4bf4ae*/
          v18 = v13; /*0x4bf4b0*/
          do /*0x4bf4ff*/
          {
            v20 = v13; /*0x4bf4b7*/
            if ( (unsigned __int16)v9 < 0x121u ) /*0x4bf4c0*/
            {
              v16 = *(this + 9); /*0x4bf4cb*/
              if ( v16 ) /*0x4bf4d0*/
              {
                if ( *(_DWORD *)(v16 + 4 * v4 + 0x40) ) /*0x4bf4d2*/
                  v20 = *(float *)(*(_DWORD *)(*(_DWORD *)(v16 + 4 * v4 + 0x40) + 4 * (unsigned __int16)v9) /*0x4bf4e9*/
                                 + 4 * (unsigned __int16)v15);
              }
            }
            ++v15; /*0x4bf4f1*/
            v18 = v20 + v18; /*0x4bf4fb*/
          }
          while ( v15 < 8 ); /*0x4bf4ff*/
          v19 = v14 - v18; /*0x4bf507*/
          if ( v13 > v19 ) /*0x4bf514*/
            v19 = v13; /*0x4bf516*/
          v3 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * v4 + 0x40) + 4 * v9++); /*0x4bf525*/
          *(float *)(v6 + v3) = v19; /*0x4bf52f*/
          if ( v9 >= 0x121 ) /*0x4bf538*/
            break; /*0x4bf538*/
          v11 = v13; /*0x4bf4aa*/
          v10 = v14; /*0x4bf4aa*/
          v8 = v11; /*0x4bf4aa*/
        }
      }
    }
  }
  return v3; /*0x4bf547*/
}
