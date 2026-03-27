int __thiscall sub_54CDD0(int *this, const char *a2)
{
  const char *v3; // eax
  char v4; // cl
  char *i; // edi
  char *v6; // eax
  char *v7; // ebp
  char *ii; // edi
  char *v9; // eax
  char *v10; // ebp
  unsigned int v11; // eax
  const char *v12; // edi
  double v13; // st7
  int v14; // eax
  int *v16; // ecx
  int *v17; // esi
  unsigned int v18; // ebx
  const char *j; // esi
  char *v20; // eax
  char *v21; // edi
  const char *k; // esi
  char *v23; // eax
  char *v24; // edi
  const char *v25; // edi
  char *v26; // eax
  char *v27; // esi
  const char *m; // esi
  char *v29; // eax
  float *v30; // eax
  float *v31; // esi
  double v32; // st7
  int v33; // edi
  double v34; // st7
  double v35; // st7
  int n; // eax
  void (__thiscall ***v37)(_DWORD, int); // eax
  float v38; // [esp+0h] [ebp-170h]
  int v39; // [esp+4h] [ebp-16Ch]
  int v40; // [esp+8h] [ebp-168h]
  int v41; // [esp+Ch] [ebp-164h]
  int v42; // [esp+10h] [ebp-160h]
  float v43; // [esp+28h] [ebp-148h]
  float v44; // [esp+28h] [ebp-148h]
  int *v45; // [esp+2Ch] [ebp-144h]
  int v46; // [esp+30h] [ebp-140h]
  unsigned int v47[5]; // [esp+34h] [ebp-13Ch] BYREF
  float v48; // [esp+48h] [ebp-128h]
  unsigned int jj; // [esp+4Ch] [ebp-124h] BYREF
  float v50; // [esp+50h] [ebp-120h]
  float v51; // [esp+54h] [ebp-11Ch]
  int v52; // [esp+58h] [ebp-118h]
  char Str[260]; // [esp+5Ch] [ebp-114h] BYREF
  unsigned int v54; // [esp+164h] [ebp-Ch]
  unsigned int v55; // [esp+16Ch] [ebp-4h]

  sub_54EA00((int)v47, 0xFFFFFFFF, 0);
  v3 = a2;
  v55 = 0;
  if ( !a2 )
    goto LABEL_61;
  do
  {
    v4 = *v3;
    v3[Str - a2] = *v3;
    ++v3;
  }
  while ( v4 );
  for ( i = Str; *i == 0x20; ++i )
    ;
  v6 = strchr(i, 0x20);
  v7 = v6;
  if ( !v6 )
LABEL_61:
    JUMPOUT(0x54CF49);
  *v6 = 0;
  if ( _strcmp(i, "Clear") )
  {
    v52 = sub_54F490(i, &jj);
    if ( v52 >= 0 )
    {
      switch ( jj )
      {
        case 0u:
          v45 = this + 0x37;
          v17 = this + 0x3B;
          v18 = 0x10;
          goto LABEL_30;
        case 1u:
          v16 = this + 9;
          v17 = this + 0xD;
          v18 = 0xD;
          goto LABEL_29;
        case 2u:
          v45 = this + 0x20;
          v17 = this + 0x24;
          v18 = 0x11;
          goto LABEL_30;
        case 3u:
          v16 = this + 0x4E;
          v17 = this + 0x52;
          v18 = 1;
LABEL_29:
          v45 = v16;
LABEL_30:
          v46 = (int)v17;
          if ( !v45 )
            goto LABEL_36;
          if ( !v17 )
            goto LABEL_36;
          for ( j = v7 + 1; *j == 0x20; ++j )
            ;
          v20 = strchr(j, 0x20);
          v21 = v20;
          if ( !v20 )
            goto LABEL_36;
          *v20 = 0;
          v48 = atof(j);
          if ( v48 < 0.0 )
            goto LABEL_36;
          if ( v48 > 1.0 )
            v48 = 1.0;
          for ( k = v21 + 1; *k == 0x20; ++k )
            ;
          v23 = strchr(k, 0x20);
          v24 = v23;
          if ( !v23 )
            goto LABEL_36;
          *v23 = 0;
          v51 = atof(k);
          if ( v51 < 0.0 )
            goto LABEL_36;
          v25 = v24 + 1;
          v26 = strchr(v25, 0x20);
          v27 = v26;
          if ( !v26 )
            goto LABEL_36;
          *v26 = 0;
          v44 = atof(v25);
          if ( v44 < 0.0 )
            goto LABEL_36;
          for ( m = v27 + 1; *m == 0x20; ++m )
            ;
          v29 = strchr(m, 0x20);
          if ( v29 )
            *v29 = 0;
          v50 = atof(m);
          if ( v50 >= 0.0 )
          {
            v30 = (float *)FormHeapAlloc(0x10u);
            if ( v30 )
            {
              v30[3] = 0.0;
              v30[1] = 0.0;
              v30[2] = 0.0;
              *(_DWORD *)v30 = &NiTPointerList<BSFaceGenKeyframe *>::`vftable';
              v31 = v30;
            }
            else
            {
              v31 = 0;
            }
            sub_54E560(v47, jj);
            sub_54E860(v47, v18, 0);
            sub_54E580((float *)v47, v51);
            v32 = v48;
            v33 = v52;
            sub_54A3E0(v47, v52, v48);
            sub_54F350((int)v47, v32, v31);
            sub_54E860(v47, v18, 0);
            sub_54E580((float *)v47, v44);
            v34 = v48;
            sub_54A3E0(v47, v33, v48);
            sub_54F350((int)v47, v34, v31);
            v35 = 0.0;
            if ( v50 > 0.0 )
            {
              sub_54E860(v47, v18, 0);
              sub_54E580((float *)v47, v50);
              v35 = 0.0;
              sub_54A3E0(v47, v33, 0.0);
              sub_54F350((int)v47, 0.0, v31);
            }
            sub_54C9C0(v33, v35, v46, (BSTextureManager *)v31, (BSTextureManager *)v45);
            for ( n = *((_DWORD *)v31 + 1); n; n = *((_DWORD *)v31 + 1) )
            {
              v37 = *(void (__thiscall ****)(_DWORD, int))(n + 8);
              if ( v37 )
                (**v37)(v37, 1);
              sub_54A3B0((int **)v31);
            }
            (**(void (__thiscall ***)(float *, int))v31)(v31, 1);
            v54 = 0xFFFFFFFF;
          }
          else
          {
LABEL_36:
            v55 = 0xFFFFFFFF;
          }
          JUMPOUT(0x54CF50);
        default:
          goto LABEL_61;
      }
    }
    goto LABEL_61;
  }
  for ( ii = v7 + 1; *ii == 0x20; ++ii )
    ;
  v9 = strchr(ii, 0x20);
  v10 = v9;
  if ( !v9 )
    goto LABEL_61;
  *v9 = 0;
  v11 = sub_54F440(ii);
  v12 = v10 + 1;
  for ( jj = v11; *v12 == 0x20; ++v12 )
    ;
  if ( strchr(v12, 0x20) )
  {
    v43 = atof(v12);
    if ( v43 >= 0.0 )
      v13 = v43;
    else
      v13 = (float)0.0;
  }
  else
  {
    v13 = flt_A3D65C;
  }
  switch ( jj )
  {
    case 0u:
      v14 = *this;
      v42 = 0;
      v41 = 1;
      v40 = 0;
      v39 = 0;
      break;
    case 1u:
      v14 = *this;
      v42 = 0;
      v41 = 0;
      v40 = 0;
      v39 = 1;
      break;
    case 2u:
      v14 = *this;
      v42 = 0;
      v41 = 0;
      v40 = 1;
      v39 = 0;
      break;
    case 3u:
      v14 = *this;
      v42 = 1;
      v41 = 0;
      v40 = 0;
      v39 = 0;
      break;
    default:
      JUMPOUT(0x54CFA7);
  }
  v38 = v13;
  (*(void (__thiscall **)(int *, _DWORD, int, int, int, int))(v14 + 0x80))(this, LODWORD(v38), v39, v40, v41, v42);
  return def_54CFCE(a2);
}
