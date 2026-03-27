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
  double v17; // st6
  float v18; // ecx
  char *m_data; // ebx
  char *v20; // eax
  unsigned __int8 v21; // bl
  int v22; // ecx
  _DWORD *v23; // eax
  double v24; // st7
  int v25; // ecx
  signed int *v26; // eax
  signed int v27; // eax
  double v28; // st7
  const char *v30; // [esp-8h] [ebp-78h]
  BSStringT v31; // [esp+14h] [ebp-5Ch] BYREF
  double v32; // [esp+1Ch] [ebp-54h]
  double v33; // [esp+24h] [ebp-4Ch]
  float v34; // [esp+2Ch] [ebp-44h]
  float v35; // [esp+30h] [ebp-40h]
  float v36; // [esp+34h] [ebp-3Ch]
  float v37; // [esp+38h] [ebp-38h]
  char *a2[8]; // [esp+3Ch] [ebp-34h] BYREF
  _DWORD v39[2]; // [esp+5Ch] [ebp-14h] BYREF
  int v40; // [esp+6Ch] [ebp-4h]
  int v41; // [esp+74h] [ebp+4h]
  int v42; // [esp+7Ch] [ebp+Ch]

  v30 = *arg0;
  v31.m_data = 0;
  v31.m_dataLen = 0;
  v31.m_bufLen = 0;
  BSStringT_Set(&v31, v30, 0);
  v12 = *a4 == 0;
  v40 = 0;
  if ( v12 )
    *a4 = 0x7FFFFFFF;
  v13 = a6;
  if ( *(float *)&a6 == 0.0 )
    v13 = 0x7FFFFFFF;
  v42 = 0;
  if ( *((_DWORD *)this + 2) == 3 )
    v42 = 6;
  sub_575610((int)a2, *a3, *a4, a5, v13, a8);
  LOBYTE(v40) = 1;
  sub_575B40((int)this, (int)this, &v31, (int)a2);
  BSStringT_Set(&v31, a2[0], 0);
  v14 = a2[3];
  *a3 = (int)a2[2];
  *a4 = (int)v14;
  v41 = 0;
  if ( a7 == 4 )
  {
    v41 = -v39[0];
  }
  else if ( a7 == 2 )
  {
    v41 = (int)sub_573D20(a2, 0) / (int)0xFFFFFFFE;
  }
  v35 = (float)v41;
  v37 = 0.0;
  v36 = 0.0;
  if ( a10 )
  {
    v15 = *(this + 0xB) - **((float **)this + 0xE);
    v37 = 0.0 - (v15 + v15 + (double)v42);
  }
  v16 = sub_574200(this, (int)a2[6], a9);
  *(float *)&v33 = 0.0;
  *((float *)&v33 + 1) = 0.0;
  v17 = v37;
  v16->members.m_localTransform.pos.x = 0.0;
  v34 = v17;
  v18 = v34;
  v16->members.m_localTransform.pos.y = 0.0;
  m_data = v31.m_data;
  v16->members.m_localTransform.pos.z = v18;
  if ( !*m_data )
    JUMPOUT(0x5769CF);
  v20 = m_data;
  v32 = v35;
  v33 = v35;
  v21 = *m_data;
  if ( *v20 == (_BYTE)a8 )
  {
    v35 = 0.0;
    if ( a7 == 4 )
    {
      v22 = 0;
      v23 = v39;
      while ( v23 )
      {
        v23 = (_DWORD *)v23[1];
        if ( ++v22 >= 1 )
        {
          if ( v23 )
          {
            a6 = -*v23;
            v24 = (double)a6;
            goto LABEL_30;
          }
          break;
        }
      }
      a6 = 1;
      v24 = (double)1;
    }
    else
    {
      if ( a7 != 2 )
      {
LABEL_31:
        v37 = v37 - ((double)v42 + **((float **)this + 0xE));
        goto LABEL_34;
      }
      v25 = 0;
      v26 = v39;
      while ( v26 )
      {
        v26 = (signed int *)v26[1];
        if ( ++v25 >= 1 )
        {
          if ( v26 )
          {
            v27 = *v26;
            goto LABEL_29;
          }
          break;
        }
      }
      v27 = 0xFFFFFFFF;
LABEL_29:
      a6 = v27 / (int)0xFFFFFFFE;
      v24 = (double)(v27 / (int)0xFFFFFFFE);
    }
LABEL_30:
    v35 = v24;
    goto LABEL_31;
  }
  v28 = v35;
  if ( v21 == 9 )
  {
    unknown_libname_14(dbl_A68950, v28);
    *(float *)&a6 = v28;
    v35 = dbl_A68950 - *(float *)&a6 + v32;
  }
LABEL_34:
  switch ( v21 )
  {
    case 0x91u:
    case 0x92u:
    case 0x93u:
    case 0x94u:
      return def_576929(v21 - 0x91, 0, a3, v42, a5, a6, a7, a8, a9, 0);
    default:
      JUMPOUT(0x576936);
  }
}
