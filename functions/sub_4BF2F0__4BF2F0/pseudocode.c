void __thiscall sub_4BF2F0(_DWORD *this, unsigned __int8 a2, unsigned __int16 a3)
{
  signed int v3; // edi
  int v4; // eax
  int v5; // edx
  int v6; // ebp
  _DWORD *v7; // edx
  int v8; // edx
  signed int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // edi
  double v13; // st6
  int v14; // edi
  int v15; // edi
  int v16; // eax
  int v17; // edi
  double v18; // st6
  float *v19; // edi
  int v20; // eax

  if ( a2 < 4u && a3 < 8u ) /*0x4bf307*/
  {
    if ( *(this + 9) ) /*0x4bf30d*/
    {
      v3 = a3; /*0x4bf31a*/
      if ( a3 < 7u ) /*0x4bf324*/
      {
        v4 = 4 * a3; /*0x4bf330*/
        do /*0x4bf354*/
        {
          v5 = *(_DWORD *)(*(this + 9) + 4 * a2 + 0x30); /*0x4bf343*/
          v6 = *(_DWORD *)(v5 + v4 + 4); /*0x4bf346*/
          v7 = (_DWORD *)(v4 + v5); /*0x4bf34a*/
          v4 += 4; /*0x4bf34c*/
          *v7 = v6; /*0x4bf352*/
        }
        while ( v4 < 0x1C ); /*0x4bf354*/
      }
      v8 = 0; /*0x4bf360*/
      *(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * a2 + 0x30) + 0x1C) = 0; /*0x4bf362*/
      if ( *(_DWORD *)(*(this + 9) + 4 * a2 + 0x40) ) /*0x4bf368*/
      {
        do /*0x4bf42c*/
        {
          v9 = v3; /*0x4bf37e*/
          if ( 7 - a3 >= 4 ) /*0x4bf380*/
          {
            v10 = 4 * v3 + 8; /*0x4bf38c*/
            v9 = v3 + 4 * ((unsigned int)(3 - v3) >> 2) + 4; /*0x4bf393*/
            do /*0x4bf3e6*/
            {
              v11 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * a2 + 0x40) + v8); /*0x4bf39e*/
              *(float *)(v11 + v10 - 8) = *(float *)(v11 + v10 - 4); /*0x4bf3a9*/
              v12 = *(_DWORD *)(v8 + *(_DWORD *)(*(this + 9) + 4 * a2 + 0x40)); /*0x4bf3b2*/
              v13 = *(float *)(v12 + v10); /*0x4bf3b5*/
              v10 += 0x10; /*0x4bf3b8*/
              *(float *)(v12 + v10 - 0x14) = v13; /*0x4bf3be*/
              v14 = *(_DWORD *)(v8 + *(_DWORD *)(*(this + 9) + 4 * a2 + 0x40)); /*0x4bf3c9*/
              *(float *)(v14 + v10 - 0x10) = *(float *)(v14 + v10 - 0xC); /*0x4bf3d0*/
              v15 = *(_DWORD *)(v8 + *(_DWORD *)(*(this + 9) + 4 * a2 + 0x40)); /*0x4bf3db*/
              *(float *)(v15 + v10 - 0xC) = *(float *)(v15 + v10 - 8); /*0x4bf3e2*/
            }
            while ( v10 < 0x18 ); /*0x4bf3e6*/
            v3 = a3; /*0x4bf3e8*/
          }
          if ( v9 < 7 ) /*0x4bf3ef*/
          {
            v16 = 4 * v9; /*0x4bf3f1*/
            do /*0x4bf410*/
            {
              v17 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * a2 + 0x40) + v8); /*0x4bf3ff*/
              v18 = *(float *)(v17 + v16 + 4); /*0x4bf402*/
              v19 = (float *)(v16 + v17); /*0x4bf406*/
              v16 += 4; /*0x4bf408*/
              *v19 = v18; /*0x4bf40b*/
            }
            while ( v16 < 0x1C ); /*0x4bf410*/
            v3 = a3; /*0x4bf412*/
          }
          v20 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * a2 + 0x40) + v8); /*0x4bf41d*/
          v8 += 4; /*0x4bf420*/
          *(float *)(v20 + 0x1C) = 0.0; /*0x4bf423*/
        }
        while ( v8 < 0x484 ); /*0x4bf42c*/
      }
    }
  }
}
