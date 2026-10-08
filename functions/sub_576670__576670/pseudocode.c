int __thiscall sub_576670(
        float *this,
        const char **arg0,
        int *a3,
        int *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        char a10)
{
  bool v12; // zf
  int v13; // eax
  char *v14; // eax
  double v15; // st7
  NiAVObject *v16; // eax
  int v17; // ebp
  double v18; // st6
  float v19; // ecx
  char *m_data; // ebx
  char *v21; // eax
  char v22; // bl
  int v23; // ecx
  _DWORD *v24; // eax
  double v25; // st7
  int v26; // ecx
  signed int *v27; // eax
  signed int v28; // eax
  double v29; // st7
  int result; // eax
  const char *v31; // [esp-8h] [ebp-78h]
  BSStringT v32; // [esp+14h] [ebp-5Ch] BYREF
  double v33; // [esp+1Ch] [ebp-54h]
  double v34; // [esp+24h] [ebp-4Ch]
  float v35; // [esp+2Ch] [ebp-44h]
  float v36; // [esp+30h] [ebp-40h]
  float v37; // [esp+34h] [ebp-3Ch]
  float v38; // [esp+38h] [ebp-38h]
  char *a2[8]; // [esp+3Ch] [ebp-34h] BYREF
  _DWORD v40[2]; // [esp+5Ch] [ebp-14h] BYREF
  int v41; // [esp+6Ch] [ebp-4h]
  int v42; // [esp+74h] [ebp+4h]
  int v43; // [esp+7Ch] [ebp+Ch]

  v31 = *arg0; /*0x5766a2*/
  v32.m_data = 0; /*0x5766a7*/
  v32.m_dataLen = 0; /*0x5766ab*/
  v32.m_bufLen = 0; /*0x5766b0*/
  BSStringT_Set(&v32, v31, 0); /*0x5766b5*/
  v12 = *a4 == 0; /*0x5766be*/
  v41 = 0; /*0x5766c0*/
  if ( v12 ) /*0x5766c4*/
    *a4 = 0x7FFFFFFF; /*0x5766c6*/
  v13 = a6; /*0x5766cc*/
  if ( *(float *)&a6 == 0.0 ) /*0x5766d5*/
    v13 = 0x7FFFFFFF; /*0x5766d7*/
  v43 = 0; /*0x5766e0*/
  if ( *((_DWORD *)this + 2) == 3 ) /*0x5766e4*/
    v43 = 6; /*0x5766e6*/
  sub_575610((int)a2, *a3, *a4, a5, v13, a8); /*0x57670e*/
  LOBYTE(v41) = 1; /*0x57671f*/
  sub_575B40((int)this, (int)this, &v32, (int)a2); /*0x576724*/
  BSStringT_Set(&v32, a2[0], 0); /*0x576733*/
  v14 = a2[3]; /*0x57673c*/
  *a3 = (int)a2[2]; /*0x576740*/
  *a4 = (int)v14; /*0x576743*/
  v42 = 0; /*0x576751*/
  if ( a7 == 4 ) /*0x576755*/
  {
    v42 = -v40[0]; /*0x57675d*/
  }
  else if ( a7 == 2 ) /*0x576766*/
  {
    v42 = (int)sub_573D20(a2, 0) / (int)0xFFFFFFFE; /*0x576779*/
  }
  v36 = (float)v42; /*0x576789*/
  v38 = 0.0; /*0x57678f*/
  v37 = 0.0; /*0x576793*/
  if ( a10 ) /*0x576797*/
  {
    v15 = *(this + 0xB) - **((float **)this + 0xE); /*0x57679f*/
    v38 = 0.0 - (v15 + v15 + (double)v43); /*0x5767ab*/
  }
  v16 = sub_574200(this, (int)a2[6], a9); /*0x5767be*/
  *(float *)&v34 = 0.0; /*0x5767c5*/
  v17 = (int)v16; /*0x5767c9*/
  *((float *)&v34 + 1) = 0.0; /*0x5767cf*/
  v18 = v38; /*0x5767d3*/
  v16->members.m_localTransform.pos.x = 0.0; /*0x5767db*/
  v35 = v18; /*0x5767de*/
  v19 = v35; /*0x5767e2*/
  v16->members.m_localTransform.pos.y = 0.0; /*0x5767e6*/
  m_data = v32.m_data; /*0x5767f4*/
  v16->members.m_localTransform.pos.z = v19; /*0x5767f8*/
  if ( !*m_data ) /*0x5767fe*/
    JUMPOUT(0x5769CF); /*0x5769cf*/
  v21 = m_data; /*0x576808*/
  v33 = v36; /*0x57680c*/
  v34 = v36; /*0x576810*/
  v22 = *m_data; /*0x57681a*/
  if ( *v21 == (_BYTE)a8 ) /*0x576823*/
  {
    v36 = 0.0; /*0x576835*/
    if ( a7 == 4 ) /*0x57683c*/
    {
      v23 = 0; /*0x57683e*/
      v24 = v40; /*0x576842*/
      while ( v24 ) /*0x57684a*/
      {
        v24 = (_DWORD *)v24[1]; /*0x57684c*/
        if ( ++v23 >= 1 ) /*0x576854*/
        {
          if ( v24 ) /*0x576858*/
          {
            a6 = -*v24; /*0x57685e*/
            v25 = (double)a6; /*0x576865*/
            goto LABEL_30; /*0x57686c*/
          }
          break; /*0x576858*/
        }
      }
      a6 = 1; /*0x57686e*/
      v25 = (double)1; /*0x57687a*/
    }
    else
    {
      if ( a7 != 2 ) /*0x576886*/
      {
LABEL_31:
        v38 = v38 - ((double)v43 + **((float **)this + 0xE)); /*0x5768c4*/
        goto LABEL_34; /*0x5768d7*/
      }
      v26 = 0; /*0x576888*/
      v27 = v40; /*0x57688c*/
      while ( v27 ) /*0x576894*/
      {
        v27 = (signed int *)v27[1]; /*0x576896*/
        if ( ++v26 >= 1 ) /*0x57689e*/
        {
          if ( v27 ) /*0x5768a2*/
          {
            v28 = *v27; /*0x5768a4*/
            goto LABEL_29; /*0x5768a6*/
          }
          break; /*0x5768a2*/
        }
      }
      v28 = 0xFFFFFFFF; /*0x5768a8*/
LABEL_29:
      a6 = v28 / (int)0xFFFFFFFE; /*0x5768ab*/
      v25 = (double)(v28 / (int)0xFFFFFFFE); /*0x5768b9*/
    }
LABEL_30:
    v36 = v25; /*0x5768c0*/
    goto LABEL_31; /*0x5768c0*/
  }
  v29 = v36; /*0x5768dc*/
  if ( v22 == 9 ) /*0x5768de*/
  {
    unknown_libname_14(dbl_A68950, v29); /*0x5768e6*/
    *(float *)&a6 = v29; /*0x5768eb*/
    v36 = dbl_A68950 - *(float *)&a6 + v33; /*0x576911*/
  }
LABEL_34:
  switch ( v22 ) /*0x576929*/
  {
    case 0x91: /*0x576929*/
    case 0x92: /*0x576929*/
      result = def_576929(0x27u, v17, (int)this, 0, a3, v43, a5, a6, a7, a8, a9, 0); /*0x576932*/
      break; /*0x576932*/
    case 0x93: /*0x576929*/
    case 0x94: /*0x576929*/
      result = def_576929(0x22u, v17, (int)this, 0, a3, v43, a5, a6, a7, a8, a9, 0); /*0x576935*/
      break; /*0x576935*/
    default:
      JUMPOUT(0x576936); /*0x576936*/
  }
  return result;
}
