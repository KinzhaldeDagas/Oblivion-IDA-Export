char *__thiscall sub_4E5730(_DWORD *this, char *a2, TESObjectREFR *a3, char a4, char **a5, _BYTE *a6)
{
  char *v7; // eax
  float v8; // ecx
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // edx
  int v12; // esi
  int v13; // eax
  float v14; // edi
  char *v15; // esi
  _DWORD *v16; // eax
  char **v17; // eax
  float *v18; // eax
  bool v19; // zf
  float *v20; // eax
  char *v21; // eax
  int v22; // esi
  char *v23; // ecx
  float *v24; // eax
  int v26; // ecx
  float *v27; // [esp-4h] [ebp-78h]
  float *v28; // [esp-4h] [ebp-78h]
  float v29; // [esp+0h] [ebp-74h]
  float v30; // [esp+0h] [ebp-74h]
  char *v31; // [esp+10h] [ebp-64h]
  unsigned int v32; // [esp+14h] [ebp-60h]
  float v33; // [esp+18h] [ebp-5Ch] BYREF
  float v34; // [esp+1Ch] [ebp-58h]
  int v35; // [esp+20h] [ebp-54h]
  int v36; // [esp+24h] [ebp-50h]
  int v37; // [esp+28h] [ebp-4Ch]
  int v38; // [esp+2Ch] [ebp-48h]
  unsigned int v39; // [esp+30h] [ebp-44h]
  unsigned int v40; // [esp+34h] [ebp-40h]
  _DWORD *v41; // [esp+38h] [ebp-3Ch]
  int v42; // [esp+3Ch] [ebp-38h]
  float v43; // [esp+40h] [ebp-34h] BYREF
  float v44; // [esp+44h] [ebp-30h]
  int v45; // [esp+48h] [ebp-2Ch]
  int v46[10]; // [esp+4Ch] [ebp-28h] BYREF

  v31 = 0;
  *a6 = 0;
  if ( a2 && a3 && *(this + 9) )
  {
    v34 = flt_A32048;
    sub_401080(v46, 8, 5, (void *(__thiscall *)(void *))sub_4E4990);
    v7 = sub_4BEF40(a2);
    v8 = *((float *)v7 + 1);
    v43 = *(float *)v7;
    v9 = *((_DWORD *)v7 + 2);
    v44 = v8;
    v45 = v9;
    v10 = (int)v43 >> 9;
    v37 = v10;
    v11 = 0xFFFFFFFF;
    v32 = 0xFFFFFFFF;
    v41 = this + 0x11;
    v38 = ((int)v44 >> 9) - 1;
    while ( 1 )
    {
      v12 = v38;
      v40 = v11 + v10;
      v39 = v11 + v10 + 0x7FFF;
      v35 = v38;
      v36 = 3;
      do
      {
        v13 = 0;
        if ( v39 <= 0xFFFD && (unsigned int)(v12 + 0x7FFF) <= 0xFFFD )
          v13 = (unsigned __int16)v12 | (v40 << 0x10);
        v33 = 0.0;
        NiTMap_GetAt(v41, v13, &v33);
        v14 = v33;
        if ( v33 != 0.0 )
        {
          do
          {
            v15 = *(char **)LODWORD(v14);
            if ( *(_DWORD *)LODWORD(v14) )
            {
              if ( !sub_67ED70(*(_BYTE **)LODWORD(v14)) )
              {
                v16 = (_DWORD *)sub_4E7DE0(v15);
                if ( v16[1] || *v16 )
                {
                  v17 = a5;
                  if ( a5 )
                  {
                    while ( *v17 != v15 )
                    {
                      v17 = (char **)v17[1];
                      if ( !v17 )
                        goto LABEL_18;
                    }
                  }
                  else
                  {
LABEL_18:
                    LOBYTE(v42) = sub_4E8040((float *)v15);
                    sub_4E8060((float *)v15, 0);
                    v33 = sub_67EDE0(a2, (int)v15, a3);
                    sub_4E8060((float *)v15, v42);
                    if ( v34 > (double)v33 )
                    {
                      v34 = v33;
                      v31 = v15;
                    }
                    if ( a4 )
                    {
                      v29 = flt_B3A448;
                      v27 = (float *)sub_4BEF40(v15);
                      v18 = (float *)sub_4BEF40(a2);
                      if ( sub_480520(v18, v27, v29) < 0 )
                        sub_4E49B0((int)v46, (int)v15, v33);
                    }
                  }
                }
              }
            }
            v14 = *(float *)(LODWORD(v14) + 4);
          }
          while ( v14 != 0.0 );
          v12 = v35;
        }
        ++v12;
        v19 = v36-- == 1;
        v35 = v12;
      }
      while ( !v19 );
      if ( (int)++v32 > 1 )
        break;
      v10 = v37;
      v11 = v32;
    }
    if ( v31 )
    {
      if ( a4 )
      {
        v30 = flt_B3A448;
        v28 = (float *)sub_4BEF40(a2);
        v20 = (float *)sub_4BEF40(v31);
        if ( sub_480520(v20, v28, v30) < 0 )
        {
          v21 = sub_4BEF40(a2);
          v43 = *(float *)v21;
          v44 = *((float *)v21 + 1);
          v45 = *((_DWORD *)v21 + 2);
          v22 = 0;
          while ( 1 )
          {
            v23 = (char *)v46[2 * v22];
            if ( !v23 )
              break;
            v24 = (float *)sub_4BEF40(v23);
            if ( sub_687C30(a3, &v43, v24) )
            {
              v26 = v46[2 * v22];
              *a6 = 1;
              return (char *)v26;
            }
            if ( ++v22 >= 5 )
              return v31;
          }
        }
      }
    }
  }
  return v31;
}
