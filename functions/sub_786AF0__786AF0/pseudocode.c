void __thiscall sub_786AF0(float *this, int a2)
{
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // esi
  const char *v6; // esi
  const char *v7; // esi
  const char *v8; // eax
  const char *v9; // esi
  int v10; // eax
  const char *v11; // esi
  const char *v12; // esi
  const char *v13; // esi
  const char *v14; // esi
  int v15; // [esp+14h] [ebp-120h]
  int v16; // [esp+18h] [ebp-11Ch]
  float v17[2]; // [esp+1Ch] [ebp-118h] BYREF
  float v18[2]; // [esp+24h] [ebp-110h] BYREF
  char String[260]; // [esp+2Ch] [ebp-108h] BYREF

  if ( *(_DWORD *)(a2 + 0x18) < 0x10u )
    v3 = (const char *)(a2 + 4);
  else
    v3 = *(const char **)(a2 + 4);
  v4 = sub_783E20(v3, String);
  if ( !strcmp(String, "BezierSpline") )
  {
    v5 = sub_783E20(v4, String);
    *this = atof(String);
    v6 = sub_783E20(v5, String);
    *(this + 1) = atof(String);
    v7 = sub_783E20(v6, String);
    *(this + 2) = atof(String);
    v8 = sub_783E20(v7, String);
    if ( String[0] == 0x7B )
    {
      v9 = sub_783E20(v8, String);
      v10 = j__atol(String);
      if ( v10 > 0 )
      {
        v15 = v10;
        do
        {
          v11 = sub_783E20(v9, String);
          v18[0] = atof(String);
          v12 = sub_783E20(v11, String);
          v18[1] = atof(String);
          v13 = sub_783E20(v12, String);
          v17[0] = atof(String);
          v14 = sub_783E20(v13, String);
          v17[1] = atof(String);
          v9 = sub_783E20(v14, String);
          *(float *)&v16 = atof(String);
          sub_7860D0((unsigned int *)this, v18, v17, v16);
          --v15;
        }
        while ( v15 );
      }
    }
  }
}
