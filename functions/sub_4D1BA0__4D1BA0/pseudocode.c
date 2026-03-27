char __thiscall sub_4D1BA0(_DWORD *this, int a2, float *a3, float *a4, float a5, char a6)
{
  char result; // al
  bool v10; // bl
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  float *v20; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  char v27; // [esp+1Dh] [ebp-7h]
  bool v28; // [esp+1Eh] [ebp-6h]
  bool v29; // [esp+1Fh] [ebp-5h]
  int v31; // [esp+30h] [ebp+Ch]
  char v32; // [esp+38h] [ebp+14h]

  result = 0;
  v27 = 0;
  if ( a2 )
  {
    if ( a6 )
    {
      v32 = (a6 & 4) != 0;
      v10 = (a6 & 2) != 0;
      v28 = (a6 & 8) != 0;
      v29 = (a6 & 0x10) != 0;
      if ( (a6 & 1) != 0 )
      {
        v11 = *(this + 0x15);
        if ( v11 && *(_WORD *)(v11 + 0xB6) )
          v12 = **(_DWORD **)(v11 + 0xB0);
        else
          v12 = 0;
        if ( sub_481890(a2, a3, a4, a5, v12, 0) )
          v27 = 1;
      }
      if ( v10 )
      {
        v13 = *(this + 0x15);
        if ( v13 && *(_WORD *)(v13 + 0xB6) > 1u )
          v14 = *(_DWORD *)(*(_DWORD *)(v13 + 0xB0) + 4);
        else
          v14 = 0;
        if ( sub_481890(a2, a3, a4, a5, v14, 0) )
          v27 = 1;
      }
      if ( v32 || v28 || v29 )
      {
        v15 = 2;
        v16 = 8;
        v31 = 5;
        do
        {
          if ( v32 )
          {
            v17 = *(this + 0x15);
            if ( v17
              && *(unsigned __int16 *)(v17 + 0xB6) > v15
              && (v18 = *(_DWORD *)(v16 + *(_DWORD *)(v17 + 0xB0))) != 0
              && *(_WORD *)(v18 + 0xB6) )
            {
              v19 = **(_DWORD **)(v18 + 0xB0);
            }
            else
            {
              v19 = 0;
            }
            v20 = a3;
            if ( sub_481890(a2, a3, a4, a5, v19, 0) )
              v27 = 1;
          }
          else
          {
            v20 = a3;
          }
          if ( v28 )
          {
            v21 = *(this + 0x15);
            if ( v21
              && *(unsigned __int16 *)(v21 + 0xB6) > v15
              && (v22 = *(_DWORD *)(v16 + *(_DWORD *)(v21 + 0xB0))) != 0
              && *(_WORD *)(v22 + 0xB6) > 2u )
            {
              v23 = *(_DWORD *)(*(_DWORD *)(v22 + 0xB0) + 8);
            }
            else
            {
              v23 = 0;
            }
            if ( sub_481890(a2, v20, a4, a5, v23, 0) )
              v27 = 1;
          }
          if ( v29 )
          {
            v24 = *(this + 0x15);
            if ( v24
              && *(unsigned __int16 *)(v24 + 0xB6) > v15
              && (v25 = *(_DWORD *)(v16 + *(_DWORD *)(v24 + 0xB0))) != 0
              && *(_WORD *)(v25 + 0xB6) > 3u )
            {
              v26 = *(_DWORD *)(*(_DWORD *)(v25 + 0xB0) + 0xC);
            }
            else
            {
              v26 = 0;
            }
            if ( sub_481890(a2, v20, a4, a5, v26, 0) )
              v27 = 1;
          }
          v16 += 4;
          ++v15;
          --v31;
        }
        while ( v31 );
      }
      return v27;
    }
  }
  return result;
}
