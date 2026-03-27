int __thiscall sub_575870(float **this, float a2, int a3, float a4, double a5, double a6, int a7)
{
  BSStringT *v7; // ebp
  unsigned int v8; // eax
  int v10; // ebx
  double v11; // st6
  unsigned int v12; // esi
  unsigned int Len; // eax
  int result; // eax
  NiAVObject *v15; // eax
  NiAVObject *v16; // ebp
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
  int v32; // [esp+24h] [ebp-14h]
  float v33; // [esp+28h] [ebp-10h]
  float v34; // [esp+2Ch] [ebp-Ch]
  float v35; // [esp+30h] [ebp-8h]
  float v36; // [esp+34h] [ebp-4h]

  v7 = (BSStringT *)LODWORD(a5);
  LOWORD(v8) = *(_WORD *)(LODWORD(a5) + 4);
  if ( (_WORD)v8 == 0xFFFF )
    v8 = strlen(*(const char **)LODWORD(a5));
  else
    v8 = (unsigned __int16)v8;
  if ( !v8 || !*(this + 0xE) )
    return 0;
  v10 = *(_DWORD *)LODWORD(a5);
  *(float *)&v27 = (float)(int)*(_DWORD *)HIDWORD(a5);
  sub_573C10(v10, &v27, &v28, LODWORD(a6), 0);
  v30 = *(float *)&v27 + a2;
  v32 = a3;
  v31 = a4;
  if ( (_BYTE)a7 )
  {
    v11 = (*(this + 0xE))[0x214] - **(this + 0xE);
    *(float *)&v32 = *(float *)&a3 - (v11 + v11);
  }
  v12 = 0;
  Len = BSStringT_GetLen(v7);
  if ( !Len )
    return 0;
  do
  {
    if ( !*(_BYTE *)((v10 != 0 ? v12 : 0) + v10) )
      break;
    ++v12;
  }
  while ( v12 < Len );
  if ( !v12 )
    return 0;
  v15 = sub_574200(this, v12, (_DWORD *)HIDWORD(a6));
  *(float *)&v28 = a2;
  v16 = v15;
  *((float *)&v28 + 1) = a4;
  v17 = a4;
  v18 = *(float *)&v32;
  v15->members.m_localTransform.pos.x = a2;
  v19 = (_DWORD *)HIDWORD(a5);
  v29 = v18;
  v20 = v29;
  v16->members.m_localTransform.pos.y = v17;
  v33 = 0.0;
  v16->members.m_localTransform.pos.z = v20;
  v34 = 0.0;
  v21 = (char **)LODWORD(a5);
  v35 = 1.0;
  *v19 = 0;
  v36 = 1.0;
  v22 = *v21;
  v23 = **v21 == 0;
  a7 = 0;
  if ( v23 )
    JUMPOUT(0x575B02);
  v24 = v30;
  v28 = v30;
  v27 = v30;
  v25 = *v22;
  if ( *v22 == 9 )
  {
    unknown_libname_14(dbl_A68950, v24);
    a4 = v24;
    v30 = dbl_A68950 - a4 + v28;
  }
  else if ( v25 == 0xA )
  {
    a4 = (float)(int)*(_DWORD *)HIDWORD(a5);
    sub_573C10(v22, &a4, &a3, LODWORD(a6), 1);
    v26 = *(this + 0xE);
    v30 = a4;
    *(float *)&v32 = *(float *)&v32 - *v26;
  }
  switch ( v25 )
  {
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
      result = def_575A58(0, a3, SLODWORD(a4), a5, a6, a7);
      break;
    default:
      JUMPOUT(0x575A65);
  }
  return result;
}
