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

  LOBYTE(v3) = LOBYTE(a2);
  if ( LOBYTE(a2) < 4u && LOWORD(a3) < 8u )
  {
    if ( *(this + 9) )
    {
      v4 = LOBYTE(a2);
      v5 = *(this + 9);
      v6 = 4 * LOWORD(a3);
      v7 = *(_DWORD *)(v5 + 4 * LOBYTE(a2) + 0x20);
      *(_DWORD *)(v5 + 4 * LOBYTE(a2) + 0x20) = *(_DWORD *)(v6 + *(_DWORD *)(v5 + 4 * LOBYTE(a2) + 0x30));
      *(_DWORD *)(v6 + *(_DWORD *)(*(this + 9) + 4 * LOBYTE(a2) + 0x30)) = v7;
      v3 = *(this + 9);
      if ( *(_DWORD *)(v3 + 4 * LOBYTE(a2) + 0x40) )
      {
        v8 = 0.0;
        v9 = 0;
        v10 = 1.0;
        while ( 1 )
        {
          v12 = v10;
          v13 = v8;
          v14 = v12;
          v15 = 0;
          v18 = v13;
          do
          {
            v20 = v13;
            if ( (unsigned __int16)v9 < 0x121u )
            {
              v16 = *(this + 9);
              if ( v16 )
              {
                if ( *(_DWORD *)(v16 + 4 * v4 + 0x40) )
                  v20 = *(float *)(*(_DWORD *)(*(_DWORD *)(v16 + 4 * v4 + 0x40) + 4 * (unsigned __int16)v9)
                                 + 4 * (unsigned __int16)v15);
              }
            }
            ++v15;
            v18 = v20 + v18;
          }
          while ( v15 < 8 );
          v19 = v14 - v18;
          if ( v13 > v19 )
            v19 = v13;
          v3 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * v4 + 0x40) + 4 * v9++);
          *(float *)(v6 + v3) = v19;
          if ( v9 >= 0x121 )
            break;
          v11 = v13;
          v10 = v14;
          v8 = v11;
        }
      }
    }
  }
  return v3;
}
