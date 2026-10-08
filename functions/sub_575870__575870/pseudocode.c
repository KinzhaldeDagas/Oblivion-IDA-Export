int __thiscall sub_575870(float **this, float a2, float a3, float a4, double a5, double a6, int a7)
{
  BSStringT *v7; // ebp
  unsigned int v8; // eax
  int v10; // ebx
  double v11; // st6
  unsigned int v12; // esi
  unsigned int Len; // eax
  int result; // eax
  NiAVObject *v15; // eax
  int v16; // ebp
  float v17; // ecx
  double v18; // st7
  _DWORD *v19; // eax
  float v20; // edx
  char **v21; // edx
  char *v22; // eax
  bool v23; // zf
  double v24; // st7
  char v25; // bl
  float *v26; // edx
  double v27; // [esp+8h] [ebp-30h] BYREF
  double v28; // [esp+10h] [ebp-28h] BYREF
  float v29; // [esp+18h] [ebp-20h]
  float v30; // [esp+1Ch] [ebp-1Ch]
  float v31; // [esp+20h] [ebp-18h]
  float v32; // [esp+24h] [ebp-14h]
  float v33; // [esp+28h] [ebp-10h]
  float v34; // [esp+2Ch] [ebp-Ch]
  float v35; // [esp+30h] [ebp-8h]
  float v36; // [esp+34h] [ebp-4h]

  v7 = (BSStringT *)LODWORD(a5); /*0x575874*/
  LOWORD(v8) = *(_WORD *)(LODWORD(a5) + 4); /*0x575878*/
  if ( (_WORD)v8 == 0xFFFF ) /*0x575883*/
    v8 = strlen(*(const char **)LODWORD(a5)); /*0x575899*/
  else
    v8 = (unsigned __int16)v8; /*0x57589d*/
  if ( !v8 || !*(this + 0xE) ) /*0x5758a8*/
    return 0; /*0x575b26*/
  v10 = *(_DWORD *)LODWORD(a5); /*0x5758bd*/
  *(float *)&v27 = (float)(int)*(_DWORD *)HIDWORD(a5); /*0x5758c3*/
  sub_573C10(v10, &v27, &v28, LODWORD(a6), 0); /*0x5758d4*/
  v30 = *(float *)&v27 + a2; /*0x5758e6*/
  v32 = a3; /*0x5758ee*/
  v31 = a4; /*0x5758f6*/
  if ( (_BYTE)a7 ) /*0x5758fa*/
  {
    v11 = (*(this + 0xE))[0x214] - **(this + 0xE); /*0x575905*/
    v32 = a3 - (v11 + v11); /*0x57590b*/
  }
  v12 = 0; /*0x575916*/
  Len = BSStringT_GetLen(v7); /*0x575918*/
  if ( !Len ) /*0x57591f*/
    return 0; /*0x57591f*/
  do
  {
    if ( !*(_BYTE *)((v10 != 0 ? v12 : 0) + v10) )
      break; /*0x57592d*/
    ++v12; /*0x57592f*/
  }
  while ( v12 < Len );
  if ( !v12 ) /*0x575938*/
    return 0; /*0x57593d*/
  v15 = sub_574200(this, v12, (_DWORD *)HIDWORD(a6)); /*0x57594e*/
  *(float *)&v28 = a2; /*0x575957*/
  v16 = (int)v15; /*0x57595b*/
  *((float *)&v28 + 1) = a4; /*0x575965*/
  v17 = a4; /*0x575969*/
  v18 = v32; /*0x57596d*/
  v15->members.m_localTransform.pos.x = a2; /*0x575971*/
  v19 = (_DWORD *)HIDWORD(a5); /*0x575974*/
  v29 = v18; /*0x575978*/
  v20 = v29; /*0x57597e*/
  *(float *)(v16 + 0x58) = v17; /*0x575982*/
  v33 = 0.0; /*0x575985*/
  *(float *)(v16 + 0x5C) = v20; /*0x575989*/
  v34 = 0.0; /*0x57598c*/
  v21 = (char **)LODWORD(a5); /*0x575992*/
  v35 = 1.0; /*0x575998*/
  *v19 = 0; /*0x57599c*/
  v36 = 1.0; /*0x57599e*/
  v22 = *v21; /*0x5759a2*/
  v23 = **v21 == 0; /*0x5759a6*/
  a7 = 0; /*0x5759ac*/
  if ( v23 ) /*0x5759b0*/
    JUMPOUT(0x575B02); /*0x575b02*/
  v24 = v30; /*0x5759b6*/
  v28 = v30; /*0x5759bc*/
  v27 = v30; /*0x5759c0*/
  v25 = *v22; /*0x5759d0*/
  if ( *v22 == 9 ) /*0x5759e2*/
  {
    unknown_libname_14(dbl_A68950, v24); /*0x575a2d*/
    a4 = v24; /*0x575a32*/
    v30 = dbl_A68950 - a4 + v28; /*0x575a44*/
  }
  else if ( v25 == 0xA ) /*0x5759e9*/
  {
    a4 = (float)(int)*(_DWORD *)HIDWORD(a5); /*0x5759fa*/
    sub_573C10(v22, &a4, &a3, LODWORD(a6), 1); /*0x575a0b*/
    v26 = *(this + 0xE); /*0x575a14*/
    v30 = a4; /*0x575a17*/
    v32 = v32 - *v26; /*0x575a21*/
  }
  switch ( v25 ) /*0x575a58*/
  {
    case 0x91: /*0x575a58*/
    case 0x92: /*0x575a58*/
      result = def_575A58(0x27u, v16, (int)this, 0, 0, SLODWORD(a3), SLODWORD(a4), a5, a6, a7); /*0x575a61*/
      break; /*0x575a61*/
    case 0x93: /*0x575a58*/
    case 0x94: /*0x575a58*/
      result = def_575A58(0x22u, v16, (int)this, 0, 0, SLODWORD(a3), SLODWORD(a4), a5, a6, a7); /*0x575a64*/
      break; /*0x575a64*/
    default:
      JUMPOUT(0x575A65); /*0x575a65*/
  }
  return result; /*0x57593c*/
}
