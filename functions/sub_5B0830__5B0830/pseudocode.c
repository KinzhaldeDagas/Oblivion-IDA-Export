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
  UInt32 *v11; // ecx
  double v12; // st6
  float *result; // eax
  float v14; // [esp+10h] [ebp-Ch]
  float v15; // [esp+10h] [ebp-Ch]
  float v16; // [esp+10h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-8h]
  float v18; // [esp+18h] [ebp-4h]
  float v19; // [esp+18h] [ebp-4h]

  v2 = 0x64; /*0x5b083f*/
  if ( (unsigned int)(*((_DWORD *)this + 0x10) - *((_DWORD *)this + 0x11)) <= 0x64 ) /*0x5b0847*/
    v2 = *((_DWORD *)this + 0x10) - *((_DWORD *)this + 0x11); /*0x5b0849*/
  v3 = this + 0x20; /*0x5b084b*/
  v17 = 5; /*0x5b0851*/
  do /*0x5b09f2*/
  {
    if ( *((_BYTE *)v3 + 0x14) == 1 ) /*0x5b086c*/
    {
      if ( *((_BYTE *)v3 + 0x15) ) /*0x5b0872*/
      {
        v12 = (double)v2; /*0x5b098a*/
        if ( v2 < 0 ) /*0x5b098e*/
          v12 = v12 + flt_A2FC78; /*0x5b0990*/
        v19 = v3[2] * v12 + v3[0xFFFFFFFF]; /*0x5b099b*/
        v3[0xFFFFFFFF] = v19; /*0x5b09a3*/
        if ( *(this + 0x1E) < (double)v19 ) /*0x5b09b0*/
          v3[0xFFFFFFFF] = *(this + 0x1E); /*0x5b09b5*/
      }
      else
      {
        v4 = *(_DWORD *)v3; /*0x5b087b*/
        if ( *(_DWORD *)v3 == 0xFFFFFFFF ) /*0x5b0880*/
        {
          v5 = *((_BYTE *)v3 + 0x16); /*0x5b0882*/
          if ( v5 == 1 ) /*0x5b0887*/
          {
            v6 = flt_A6C8B8; /*0x5b0889*/
            v7 = 0.0; /*0x5b0889*/
            v14 = flt_A6C8B8; /*0x5b088b*/
          }
          else
          {
            v8 = (double)v2; /*0x5b0899*/
            if ( v2 < 0 ) /*0x5b089d*/
              v8 = v8 + flt_A2FC78; /*0x5b089f*/
            v14 = v8; /*0x5b08a5*/
            v6 = flt_A6C8B8; /*0x5b08a9*/
            v7 = 0.0; /*0x5b08a9*/
          }
          v15 = v3[4] - v3[3] * v14; /*0x5b08b9*/
          v18 = v15; /*0x5b08c1*/
          v3[4] = v15; /*0x5b08c5*/
          if ( v5 != 1 ) /*0x5b08c8*/
          {
            v6 = (double)v2; /*0x5b08d4*/
            if ( v2 < 0 ) /*0x5b08d8*/
              v6 = v6 + flt_A2FC78; /*0x5b08da*/
          }
          v16 = v6; /*0x5b08e0*/
          v9 = *(this + 0x1E); /*0x5b08e4*/
          *((_BYTE *)v3 + 0x16) = 0; /*0x5b08e7*/
          v3[0xFFFFFFFF] = v9 * v18 * v16 + v3[0xFFFFFFFF]; /*0x5b08f5*/
        }
        else
        {
          v7 = 0.0; /*0x5b08fa*/
        }
        if ( *(this + 0x1E) >= (double)v3[0xFFFFFFFF] ) /*0x5b0909*/
        {
          if ( v7 >= v3[0xFFFFFFFF] ) /*0x5b0952*/
          {
            v11 = *((UInt32 **)v3 + 8); /*0x5b0954*/
            if ( v11 ) /*0x5b0959*/
            {
              if ( SoundHandle::IsPlaying(v11) ) /*0x5b095d*/
                sub_6B7240(*((int **)v3 + 8)); /*0x5b0969*/
              v7 = 0.0; /*0x5b096e*/
            }
            v3[0xFFFFFFFF] = v7; /*0x5b0970*/
            *((_BYTE *)v3 + 0x14) = 0; /*0x5b0973*/
            v3[4] = v7; /*0x5b0976*/
          }
        }
        else
        {
          if ( v4 == 0xFFFFFFFF ) /*0x5b090e*/
          {
            v3[4] = v7; /*0x5b0910*/
            *v3 = *(float *)&MEMORY[0xB33E90][0x10]; /*0x5b0919*/
            sub_5AFD50("UILockClickNow"); /*0x5b0922*/
          }
          if ( (unsigned int)(*(_DWORD *)&MEMORY[0xB33E90][0x10] - *(_DWORD *)v3) > *((_DWORD *)v3 + 1) ) /*0x5b0936*/
          {
            v10 = *(this + 0x1E); /*0x5b093c*/
            *v3 = NAN; /*0x5b093f*/
            v3[0xFFFFFFFF] = v10; /*0x5b0945*/
          }
        }
      }
    }
    else if ( !*((_BYTE *)v3 + 0x15) ) /*0x5b09ba*/
    {
      v3[4] = 0.0; /*0x5b09c1*/
    }
    result = (float *)OblivionDynamicCast( /*0x5b09d8*/
                        *((void **)v3 + 7),
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                        &Tile3D `RTTI Type Descriptor',
                        0);
    if ( result ) /*0x5b09e2*/
      result[0x16] = v3[0xFFFFFFFF]; /*0x5b09e7*/
    v3 += 0xA; /*0x5b09ea*/
    --v17; /*0x5b09ed*/
  }
  while ( v17 ); /*0x5b09f2*/
  return result; /*0x5b09f8*/
}
