float *__thiscall sub_5B0830(float *this)
{
  int v2; // ebp
  float *v3; // esi
  int v4; // ecx
  char v5; // al
  double v6; // st6
  double v7; // st7
  double v8; // st5
  double v9; // st6
  double v10; // st7
  int *v11; // ecx
  double v12; // st6
  float *result; // eax
  float v14; // [esp+10h] [ebp-Ch]
  float v15; // [esp+10h] [ebp-Ch]
  float v16; // [esp+10h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-8h]
  float v18; // [esp+18h] [ebp-4h]
  float v19; // [esp+18h] [ebp-4h]

  v2 = 0x64;
  if ( (unsigned int)(*((_DWORD *)this + 0x10) - *((_DWORD *)this + 0x11)) <= 0x64 )
    v2 = *((_DWORD *)this + 0x10) - *((_DWORD *)this + 0x11);
  v3 = this + 0x20;
  v17 = 5;
  do
  {
    if ( *((_BYTE *)v3 + 0x14) == 1 )
    {
      if ( *((_BYTE *)v3 + 0x15) )
      {
        v12 = (double)v2;
        if ( v2 < 0 )
          v12 = v12 + flt_A2FC78;
        v19 = v3[2] * v12 + v3[0xFFFFFFFF];
        v3[0xFFFFFFFF] = v19;
        if ( *(this + 0x1E) < (double)v19 )
          v3[0xFFFFFFFF] = *(this + 0x1E);
      }
      else
      {
        v4 = *(_DWORD *)v3;
        if ( *(_DWORD *)v3 == 0xFFFFFFFF )
        {
          v5 = *((_BYTE *)v3 + 0x16);
          if ( v5 == 1 )
          {
            v6 = flt_A6C8B8;
            v7 = 0.0;
            v14 = flt_A6C8B8;
          }
          else
          {
            v8 = (double)v2;
            if ( v2 < 0 )
              v8 = v8 + flt_A2FC78;
            v14 = v8;
            v6 = flt_A6C8B8;
            v7 = 0.0;
          }
          v15 = v3[4] - v3[3] * v14;
          v18 = v15;
          v3[4] = v15;
          if ( v5 != 1 )
          {
            v6 = (double)v2;
            if ( v2 < 0 )
              v6 = v6 + flt_A2FC78;
          }
          v16 = v6;
          v9 = *(this + 0x1E);
          *((_BYTE *)v3 + 0x16) = 0;
          v3[0xFFFFFFFF] = v9 * v18 * v16 + v3[0xFFFFFFFF];
        }
        else
        {
          v7 = 0.0;
        }
        if ( *(this + 0x1E) >= (double)v3[0xFFFFFFFF] )
        {
          if ( v7 >= v3[0xFFFFFFFF] )
          {
            v11 = *((int **)v3 + 8);
            if ( v11 )
            {
              if ( sub_6B7260(v11) )
                sub_6B7240(*((int **)v3 + 8));
              v7 = 0.0;
            }
            v3[0xFFFFFFFF] = v7;
            *((_BYTE *)v3 + 0x14) = 0;
            v3[4] = v7;
          }
        }
        else
        {
          if ( v4 == 0xFFFFFFFF )
          {
            v3[4] = v7;
            *(_DWORD *)v3 = Seed;
            sub_5AFD50("UILockClickNow");
          }
          if ( Seed - *(_DWORD *)v3 > *((_DWORD *)v3 + 1) )
          {
            v10 = *(this + 0x1E);
            *v3 = NAN;
            v3[0xFFFFFFFF] = v10;
          }
        }
      }
    }
    else if ( !*((_BYTE *)v3 + 0x15) )
    {
      v3[4] = 0.0;
    }
    result = (float *)OblivionDynamicCast(
                        *((void **)v3 + 7),
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                        &Tile3D `RTTI Type Descriptor',
                        0);
    if ( result )
      result[0x16] = v3[0xFFFFFFFF];
    v3 += 0xA;
    --v17;
  }
  while ( v17 );
  return result;
}
