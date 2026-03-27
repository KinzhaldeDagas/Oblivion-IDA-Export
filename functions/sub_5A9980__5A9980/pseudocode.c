double __thiscall sub_5A9980(float *this, char *arg0, int *a3, int a4, float a5)
{
  double v9; // st7
  double result; // st7
  int v11; // eax
  double v12; // st5
  int v13; // kr00_4
  double v14; // st4
  float a2; // [esp+4h] [ebp-10h]
  float v16; // [esp+24h] [ebp+10h]
  float v17; // [esp+24h] [ebp+10h]

  if ( arg0 )
  {
    if ( *((_DWORD *)this + 9) == 2 )
    {
      sub_584820((int)this);
    }
    else if ( *((_DWORD *)this + 9) == 4 )
    {
      sub_584390((int)this);
    }
    if ( a4 == 2 )
    {
      sub_5A95C0((int)this, arg0, a5, 0, 0);
    }
    else
    {
      Tile_SetString(*((_DWORD **)this + 0xA), (_DWORD *)0xFDE, arg0);
      v9 = fConstant_2;
      Tile_SetFloat(*((Tile **)this + 0xA), (_DWORD *)0xFA1, fConstant_2);
      result = sub_5A47B0(v9);
      a2 = (float)v11;
      Tile_SetFloat(*((Tile **)this + 0xA), (_DWORD *)0xFAF, a2);
      v12 = fConstant_2;
      if ( a3 )
      {
        if ( v12 >= a5 )
        {
          *(this + 0xF) = (double)(unsigned __int16)sub_6B7340(a3) / dbl_A2FC70;
          v12 = fConstant_2;
        }
      }
      if ( v12 > a5 && v12 > *(this + 0xF) )
      {
        v13 = strlen(arg0);
        v14 = (double)v13;
        if ( v13 < 0 )
          v14 = v14 + flt_A2FC78;
        v16 = v14 * flt_B394F8;
        if ( flt_B394F0 >= (double)v16 )
        {
          v16 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B394F0);
          v12 = fConstant_2;
        }
        *(this + 0xF) = v16;
      }
      if ( v12 < *(this + 0xF) )
        v12 = *(this + 0xF);
      v17 = v12;
      *((_DWORD *)this + 0x10) = a3;
      *(this + 0xF) = v17;
      *((_BYTE *)this + 0x38) = 2;
    }
  }
  return result;
}
