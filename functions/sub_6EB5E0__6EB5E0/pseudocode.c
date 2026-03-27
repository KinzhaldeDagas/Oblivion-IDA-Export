char __thiscall sub_6EB5E0(_BYTE *this, float a2, int a3, _BYTE *a4)
{
  double v4; // st7
  unsigned __int8 v6; // bl
  int v7; // ebp
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  _BYTE *v12; // edx
  _BYTE *v14; // eax
  char v15; // [esp+1Fh] [ebp-Dh]
  float v16; // [esp+20h] [ebp-Ch]
  float v17; // [esp+24h] [ebp-8h]
  float v18; // [esp+28h] [ebp-4h]

  v4 = 0.0;
  v17 = 0.0;
  v6 = 0;
  v16 = 1.0;
  v15 = 0;
  if ( !*(this + 0xD) )
    goto LABEL_20;
  v7 = a3;
  while ( 1 )
  {
    v8 = *((_DWORD *)this + 5);
    v9 = 0x18 * v6;
    v10 = *(_DWORD *)(v8 + v9);
    v11 = v8 + v9;
    if ( v10 )
    {
      if ( v4 < *(float *)(v11 + 8) )
      {
        v18 = a2;
        if ( v4 == *(float *)(v11 + 8) )
          goto LABEL_11;
        if ( (*(this + 0xC) & 1) != 0 )
          v18 = *(float *)(v11 + 0x14);
        if ( flt_A79F00 == v18 )
        {
LABEL_11:
          v16 = v16 - *(float *)(v11 + 8);
        }
        else if ( (*(unsigned __int8 (__stdcall **)(float, int, int *))(*(_DWORD *)v10 + 0x60))(
                    COERCE_FLOAT(LODWORD(v18)),
                    v7,
                    &a3) )
        {
          v15 = 1;
          v17 = *(float *)(*((_DWORD *)this + 5) + v9 + 8) * (double)(unsigned __int8)a3 + v17;
        }
        else
        {
          v16 = v16 - *(float *)(*((_DWORD *)this + 5) + v9 + 8);
        }
      }
    }
    if ( ++v6 >= *(this + 0xD) )
      break;
    v4 = 0.0;
  }
  if ( v15 )
  {
    *(float *)&a3 = v17 / v16;
    if ( *(float *)&a3 >= (double)flt_A3D65C )
    {
      v14 = a4;
      *(this + 0x30) = 1;
      *v14 = 1;
    }
    else
    {
      v12 = a4;
      *(this + 0x30) = 0;
      *v12 = 0;
    }
    return 1;
  }
  else
  {
LABEL_20:
    *a4 = 0;
    *(this + 0x30) = byte_A7C6AC;
    return 0;
  }
}
