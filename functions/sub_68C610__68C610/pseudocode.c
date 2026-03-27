double __thiscall sub_68C610(char **this, float *a2)
{
  char *v2; // edi
  float *v3; // eax
  NiDX92DBufferData *i; // esi
  float *v5; // edi
  float *v6; // eax
  float v8; // [esp+4h] [ebp-10h]
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-8h]
  float v11; // [esp+10h] [ebp-4h]
  float v12; // [esp+18h] [ebp+4h]
  float v13; // [esp+18h] [ebp+4h]

  v2 = *this;
  v8 = 0.0;
  if ( *this )
  {
    if ( a2 )
    {
      v3 = (float *)sub_6899C0(v2);
      v8 = sub_4D7E30(a2, v3) + dbl_A2FC68;
      for ( i = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v2);
            i;
            i = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(i) )
      {
        v5 = (float *)sub_6899C0(v2);
        v6 = (float *)sub_6899C0((char *)i);
        v9 = *v6 - *v5;
        v10 = v6[1] - v5[1];
        v11 = v6[2] - v5[2];
        v12 = v9 * v9 + v10 * v10 + v11 * v11;
        v13 = sqrt(v12);
        v2 = (char *)i;
        v8 = v13 + v8;
      }
    }
  }
  return v8;
}
