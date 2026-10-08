void __userpurge sub_54CDD0(int *this@<ecx>, double a2@<st2>, const char *a3)
{
  const char *v4; // eax
  char v5; // cl
  char *i; // edi
  char *v7; // eax
  char *v8; // ebp
  char *ii; // edi
  char *v10; // eax
  char *v11; // ebp
  int v12; // eax
  const char *v13; // edi
  double v14; // st7
  int v15; // eax
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
  int jj; // [esp+4Ch] [ebp-124h] BYREF
  float v50; // [esp+50h] [ebp-120h]
  float v51; // [esp+54h] [ebp-11Ch]
  int v52; // [esp+58h] [ebp-118h]
  char Str[260]; // [esp+5Ch] [ebp-114h] BYREF
  unsigned int v54; // [esp+164h] [ebp-Ch]
  unsigned int v55; // [esp+16Ch] [ebp-4h]

  sub_54EA00((int)v47, 0xFFFFFFFF, 0); /*0x54ce17*/
  v4 = a3; /*0x54ce1c*/
  v55 = 0; /*0x54ce25*/
  if ( !a3 ) /*0x54ce30*/
    goto LABEL_61; /*0x54ce30*/
  do /*0x54ce4a*/
  {
    v5 = *v4; /*0x54ce40*/
    v4[Str - a3] = *v4; /*0x54ce42*/
    ++v4; /*0x54ce45*/
  }
  while ( v5 ); /*0x54ce4a*/
  for ( i = Str; *i == 0x20; ++i ) /*0x54ce55*/
    ; /*0x54ce57*/
  v7 = strchr(i, 0x20); /*0x54ce62*/
  v8 = v7; /*0x54ce67*/
  if ( !v7 ) /*0x54ce6e*/
LABEL_61:
    JUMPOUT(0x54CF49); /*0x54cf49*/
  *v7 = 0; /*0x54ce7a*/
  if ( CRT_StricmpLocaleDispatch(i, "Clear") ) /*0x54ce7e*/
  {
    v52 = sub_54F490(i, &jj); /*0x54cfbb*/
    if ( v52 >= 0 ) /*0x54cfbf*/
    {
      switch ( jj ) /*0x54cfce*/
      {
        case 0: /*0x54cfce*/
          v45 = this + 0x37; /*0x54cfff*/
          v17 = this + 0x3B; /*0x54d003*/
          v18 = 0x10; /*0x54d009*/
          goto LABEL_30; /*0x54d00e*/
        case 1: /*0x54cfce*/
          v16 = this + 9; /*0x54cfd5*/
          v17 = this + 0xD; /*0x54cfd8*/
          v18 = 0xD; /*0x54cfdb*/
          goto LABEL_29; /*0x54cfe0*/
        case 2: /*0x54cfce*/
          v45 = this + 0x20; /*0x54cfe8*/
          v17 = this + 0x24; /*0x54cfec*/
          v18 = 0x11; /*0x54cff2*/
          goto LABEL_30; /*0x54cff7*/
        case 3: /*0x54cfce*/
          v16 = this + 0x4E; /*0x54d010*/
          v17 = this + 0x52; /*0x54d016*/
          v18 = 1; /*0x54d01c*/
LABEL_29:
          v45 = v16; /*0x54d021*/
LABEL_30:
          v46 = (int)v17; /*0x54d025*/
          if ( !v45 ) /*0x54d02e*/
            goto LABEL_36; /*0x54d02e*/
          if ( !v17 ) /*0x54d032*/
            goto LABEL_36; /*0x54d032*/
          for ( j = v8 + 1; *j == 0x20; ++j ) /*0x54d03b*/
            ; /*0x54d040*/
          v20 = strchr(j, 0x20); /*0x54d04b*/
          v21 = v20; /*0x54d050*/
          if ( !v20 ) /*0x54d059*/
            goto LABEL_36; /*0x54d059*/
          *v20 = 0; /*0x54d05c*/
          v48 = atof(j); /*0x54d064*/
          if ( v48 < 0.0 ) /*0x54d07a*/
            goto LABEL_36; /*0x54d07a*/
          if ( v48 > 1.0 ) /*0x54d099*/
            v48 = 1.0; /*0x54d09b*/
          for ( k = v21 + 1; *k == 0x20; ++k ) /*0x54d0aa*/
            ; /*0x54d0b0*/
          v23 = strchr(k, 0x20); /*0x54d0bb*/
          v24 = v23; /*0x54d0c0*/
          if ( !v23 ) /*0x54d0c7*/
            goto LABEL_36; /*0x54d0c7*/
          *v23 = 0; /*0x54d0ca*/
          v51 = atof(k); /*0x54d0d2*/
          if ( v51 < 0.0 ) /*0x54d0e4*/
            goto LABEL_36; /*0x54d0e4*/
          v25 = v24 + 1; /*0x54d0e6*/
          v26 = strchr(v25, 0x20); /*0x54d0ec*/
          v27 = v26; /*0x54d0f1*/
          if ( !v26 ) /*0x54d0f8*/
            goto LABEL_36; /*0x54d0f8*/
          *v26 = 0; /*0x54d0fb*/
          v44 = atof(v25); /*0x54d103*/
          if ( v44 < 0.0 ) /*0x54d115*/
            goto LABEL_36; /*0x54d115*/
          for ( m = v27 + 1; *m == 0x20; ++m ) /*0x54d121*/
            ; /*0x54d123*/
          v29 = strchr(m, 0x20); /*0x54d12e*/
          if ( v29 ) /*0x54d138*/
            *v29 = 0; /*0x54d13a*/
          v50 = atof(m); /*0x54d143*/
          if ( v50 >= 0.0 ) /*0x54d155*/
          {
            v30 = (float *)FormHeapAlloc(0x10u); /*0x54d15d*/
            if ( v30 ) /*0x54d167*/
            {
              v30[3] = 0.0; /*0x54d169*/
              v30[1] = 0.0; /*0x54d16c*/
              v30[2] = 0.0; /*0x54d16f*/
              *(_DWORD *)v30 = &NiTPointerList<BSFaceGenKeyframe *>::`vftable'; /*0x54d172*/
              v31 = v30; /*0x54d178*/
            }
            else
            {
              v31 = 0; /*0x54d17c*/
            }
            sub_54E560(v47, jj); /*0x54d187*/
            sub_54E860(v47, v18, 0); /*0x54d192*/
            sub_54E580((float *)v47, v51); /*0x54d1a3*/
            v32 = v48; /*0x54d1a8*/
            v33 = v52; /*0x54d1ac*/
            sub_54A3E0(v47, v52, v48); /*0x54d1b9*/
            sub_54F350((int)v47, v32, 1.0, a2, v31); /*0x54d1c3*/
            sub_54E860(v47, v18, 0); /*0x54d1ce*/
            sub_54E580((float *)v47, v44); /*0x54d1df*/
            v34 = v48; /*0x54d1e4*/
            sub_54A3E0(v47, v33, v48); /*0x54d1f1*/
            sub_54F350((int)v47, v34, 1.0, a2, v31); /*0x54d1fb*/
            v35 = 0.0; /*0x54d200*/
            if ( v50 > 0.0 ) /*0x54d20b*/
            {
              sub_54E860(v47, v18, 0); /*0x54d213*/
              sub_54E580((float *)v47, v50); /*0x54d224*/
              sub_54A3E0(v47, v33, 0.0); /*0x54d234*/
              v35 = sub_54F350((int)v47, 0.0, 1.0, a2, v31); /*0x54d23e*/
            }
            sub_54C9C0(v33, v35, v46, (BSTextureManager *)v31, (BSTextureManager *)v45); /*0x54d24e*/
            for ( n = *((_DWORD *)v31 + 1); n; n = *((_DWORD *)v31 + 1) ) /*0x54d25b*/
            {
              v37 = *(void (__thiscall ****)(_DWORD, int))(n + 8); /*0x54d260*/
              if ( v37 ) /*0x54d265*/
                (**v37)(v37, 1); /*0x54d26f*/
              sub_54A3B0((int ***)v31); /*0x54d273*/
            }
            (**(void (__thiscall ***)(float *, int))v31)(v31, 1); /*0x54d287*/
            v54 = 0xFFFFFFFF; /*0x54d289*/
          }
          else
          {
LABEL_36:
            v55 = 0xFFFFFFFF; /*0x54d07e*/
          }
          JUMPOUT(0x54CF50); /*0x54cf50*/
        default:
          goto LABEL_61;
      }
    }
    goto LABEL_61;
  }
  for ( ii = v8 + 1; *ii == 0x20; ++ii ) /*0x54ce95*/
    ; /*0x54ce97*/
  v10 = strchr(ii, 0x20); /*0x54cea2*/
  v11 = v10; /*0x54cea7*/
  if ( !v10 ) /*0x54ceae*/
    goto LABEL_61; /*0x54ceae*/
  *v10 = 0; /*0x54ceb5*/
  v12 = sub_54F440(ii); /*0x54ceb9*/
  v13 = v11 + 1; /*0x54cebe*/
  for ( jj = v12; *v13 == 0x20; ++v13 ) /*0x54cecb*/
    ; /*0x54ced0*/
  if ( strchr(v13, 0x20) ) /*0x54cedb*/
  {
    v43 = atof(v13); /*0x54ceed*/
    if ( v43 >= 0.0 ) /*0x54cf01*/
      v14 = v43; /*0x54cf1f*/
    else
      v14 = (float)0.0; /*0x54cf09*/
  }
  else
  {
    v14 = kHeadBodyNormalMatchRadius; /*0x54cf19*/
  }
  switch ( jj ) /*0x54cf2a*/
  {
    case 0: /*0x54cf2a*/
      v15 = *this; /*0x54cf8f*/
      v42 = 0; /*0x54cf91*/
      v41 = 1; /*0x54cf93*/
      v40 = 0; /*0x54cf95*/
      v39 = 0; /*0x54cf97*/
      break; /*0x54cf99*/
    case 1: /*0x54cf2a*/
      v15 = *this; /*0x54cf31*/
      v42 = 0; /*0x54cf33*/
      v41 = 0; /*0x54cf35*/
      v40 = 0; /*0x54cf37*/
      v39 = 1; /*0x54cf39*/
      break; /*0x54cf39*/
    case 2: /*0x54cf2a*/
      v15 = *this; /*0x54cf83*/
      v42 = 0; /*0x54cf85*/
      v41 = 0; /*0x54cf87*/
      v40 = 1; /*0x54cf89*/
      v39 = 0; /*0x54cf8b*/
      break; /*0x54cf8d*/
    case 3: /*0x54cf2a*/
      v15 = *this; /*0x54cf9b*/
      v42 = 1; /*0x54cf9d*/
      v41 = 0; /*0x54cf9f*/
      v40 = 0; /*0x54cfa1*/
      v39 = 0; /*0x54cfa3*/
      break; /*0x54cfa5*/
    default:
      JUMPOUT(0x54CFA7); /*0x54cfa7*/
  }
  v38 = v14; /*0x54cf44*/
  (*(void (__thiscall **)(int *, _DWORD, int, int, int, int))(v15 + 0x80))(this, LODWORD(v38), v39, v40, v41, v42); /*0x54cf47*/
  def_54CFCE(0xFFFFFFFF, (int)a3); /*0x54cf48*/
}
