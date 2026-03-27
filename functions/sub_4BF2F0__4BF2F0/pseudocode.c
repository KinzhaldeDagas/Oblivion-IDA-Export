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

  if ( a2 < 4u && a3 < 8u )
  {
    if ( *(this + 9) )
    {
      v3 = a3;
      if ( a3 < 7u )
      {
        v4 = 4 * a3;
        do
        {
          v5 = *(_DWORD *)(*(this + 9) + 4 * a2 + 0x30);
          v6 = *(_DWORD *)(v5 + v4 + 4);
          v7 = (_DWORD *)(v4 + v5);
          v4 += 4;
          *v7 = v6;
        }
        while ( v4 < 0x1C );
      }
      v8 = 0;
      *(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * a2 + 0x30) + 0x1C) = 0;
      if ( *(_DWORD *)(*(this + 9) + 4 * a2 + 0x40) )
      {
        do
        {
          v9 = v3;
          if ( 7 - a3 >= 4 )
          {
            v10 = 4 * v3 + 8;
            v9 = v3 + 4 * ((unsigned int)(3 - v3) >> 2) + 4;
            do
            {
              v11 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * a2 + 0x40) + v8);
              *(float *)(v11 + v10 - 8) = *(float *)(v11 + v10 - 4);
              v12 = *(_DWORD *)(v8 + *(_DWORD *)(*(this + 9) + 4 * a2 + 0x40));
              v13 = *(float *)(v12 + v10);
              v10 += 0x10;
              *(float *)(v12 + v10 - 0x14) = v13;
              v14 = *(_DWORD *)(v8 + *(_DWORD *)(*(this + 9) + 4 * a2 + 0x40));
              *(float *)(v14 + v10 - 0x10) = *(float *)(v14 + v10 - 0xC);
              v15 = *(_DWORD *)(v8 + *(_DWORD *)(*(this + 9) + 4 * a2 + 0x40));
              *(float *)(v15 + v10 - 0xC) = *(float *)(v15 + v10 - 8);
            }
            while ( v10 < 0x18 );
            v3 = a3;
          }
          if ( v9 < 7 )
          {
            v16 = 4 * v9;
            do
            {
              v17 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * a2 + 0x40) + v8);
              v18 = *(float *)(v17 + v16 + 4);
              v19 = (float *)(v16 + v17);
              v16 += 4;
              *v19 = v18;
            }
            while ( v16 < 0x1C );
            v3 = a3;
          }
          v20 = *(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * a2 + 0x40) + v8);
          v8 += 4;
          *(float *)(v20 + 0x1C) = 0.0;
        }
        while ( v8 < 0x484 );
      }
    }
  }
}
