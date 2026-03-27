int __thiscall sub_953E10(
        unsigned __int8 *this,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD **a6,
        const void **a7)
{
  _DWORD *v7; // edi
  int v9; // eax
  const void **v10; // esi
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int result; // eax
  int v15; // ebp
  const char **v16; // eax
  int *v17; // edi
  char v18; // cl
  char v19; // dl
  int v20; // eax
  int v21; // ecx
  int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // eax
  int v31; // ebp
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // ebp
  int v36; // eax
  int k; // ebp
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // ebp
  int v42; // ebp
  int v43; // eax
  int v44; // eax
  unsigned int v45; // eax
  int v46; // eax
  int v47; // ebp
  int v48; // eax
  int ii; // ebp
  int v50; // eax
  int v51; // eax
  int m; // ebp
  int v53; // esi
  int v54; // eax
  int v55; // eax
  int v56; // edx
  int v57; // ecx
  int v58; // esi
  int v59; // ecx
  _DWORD **v60; // [esp-8h] [ebp-25Ch]
  int v61; // [esp-8h] [ebp-25Ch]
  _DWORD **v62; // [esp-8h] [ebp-25Ch]
  char *v63; // [esp-4h] [ebp-258h]
  _DWORD *v64; // [esp+0h] [ebp-254h]
  int v65; // [esp+4h] [ebp-250h]
  int v66; // [esp+10h] [ebp-244h]
  const char *v67; // [esp+10h] [ebp-244h]
  int v68; // [esp+10h] [ebp-244h]
  _DWORD *v69; // [esp+10h] [ebp-244h]
  int v70; // [esp+10h] [ebp-244h]
  _DWORD *v71; // [esp+10h] [ebp-244h]
  _DWORD *v72; // [esp+10h] [ebp-244h]
  int v73; // [esp+10h] [ebp-244h]
  int v74; // [esp+14h] [ebp-240h]
  _DWORD *v75; // [esp+14h] [ebp-240h]
  _DWORD *v76; // [esp+14h] [ebp-240h]
  int v77; // [esp+14h] [ebp-240h]
  int v78; // [esp+14h] [ebp-240h]
  const char **v79; // [esp+18h] [ebp-23Ch]
  int v80; // [esp+18h] [ebp-23Ch]
  int v81; // [esp+18h] [ebp-23Ch]
  int i; // [esp+1Ch] [ebp-238h]
  int j; // [esp+1Ch] [ebp-238h]
  int n; // [esp+1Ch] [ebp-238h]
  _DWORD *v85; // [esp+1Ch] [ebp-238h]
  int v86; // [esp+20h] [ebp-234h]
  int v87; // [esp+20h] [ebp-234h]
  int v88; // [esp+20h] [ebp-234h]
  int v89; // [esp+20h] [ebp-234h]
  int v90; // [esp+20h] [ebp-234h]
  int v91; // [esp+24h] [ebp-230h]
  bool v92; // [esp+2Bh] [ebp-229h] BYREF
  char *v93; // [esp+2Ch] [ebp-228h]
  int v94; // [esp+30h] [ebp-224h]
  int v95; // [esp+34h] [ebp-220h]
  _DWORD v96[135]; // [esp+38h] [ebp-21Ch] BYREF

  v7 = a5;
  if ( *sub_90D380(a5, &v92) )
  {
    v9 = sub_90D1E0(a5);
    v10 = a7;
    v11 = (int)a7[8];
    v95 = v9;
    if ( a7[7] == (const void *)(v11 & 0x3FFFFFFF) )
      sub_8A6EE0(a7 + 6, 8);
    v12 = (int)a7[7];
    v13 = (int)a7[6];
    *(_DWORD *)(v13 + 8 * v12) = a6;
    *(_DWORD *)(v13 + 8 * v12 + 4) = v95;
    a7[7] = (char *)a7[7] + 1;
  }
  else
  {
    v10 = a7;
  }
  v91 = 0;
  result = sub_90D240(a5);
  if ( result > 0 )
  {
    do
    {
      v15 = sub_90D260(v7, v91);
      v16 = sub_90D2E0(a3, *(const char **)v15);
      v79 = v16;
      if ( v16 )
      {
        v17 = (int *)(a2 + *((unsigned __int16 *)v16 + 9));
        v18 = *(_BYTE *)(v15 + 0xC);
        if ( *((_BYTE *)v16 + 0xC) == v18 )
        {
          v19 = *(_BYTE *)(v15 + 0xD);
          if ( *((_BYTE *)v16 + 0xD) == v19 )
          {
            switch ( v18 )
            {
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
              case 9:
              case 0xA:
              case 0xB:
              case 0xC:
              case 0xD:
              case 0xE:
              case 0xF:
              case 0x10:
              case 0x11:
              case 0x12:
              case 0x13:
              case 0x15:
              case 0x18:
                goto LABEL_24;
              case 0x14:
                v66 = sub_953560((signed __int16 *)v15);
                v74 = sub_953560((signed __int16 *)v79);
                if ( v74 >= v66 )
                  v74 = v66;
                v20 = 0;
                for ( i = 0; v20 < v74; i = v20 )
                {
                  v21 = *(int *)((char *)v17 + v20 * *(this + 8));
                  v67 = (const char *)v21;
                  if ( v21 )
                  {
                    v22 = *(unsigned __int16 *)(v15 + 0x12) + v20 * *(this + 0xC);
                    if ( *(_BYTE *)(v15 + 0xD) == 2 )
                    {
                      v23 = sub_953130(a4);
                      v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 0x1C))(v23);
                      sub_90D920(a7, (int)a6 + v22, v24);
                      sub_8B1860(v67);
                      sub_918390((_DWORD **)a4);
                    }
                    else
                    {
                      if ( *((_BYTE *)v79 + 0xD) == 0x19 )
                      {
                        v25 = sub_90D1F0((_DWORD *)v15);
                        v21 = (int)v67;
                      }
                      else
                      {
                        v25 = 0;
                      }
                      sub_953680(a7, (int)a6 + v22, v21, v25);
                    }
                    v20 = i;
                  }
                  ++v20;
                }
                goto LABEL_23;
              case 0x16:
              case 0x17:
              case 0x1A:
                if ( v17[1] )
                {
                  switch ( v19 )
                  {
                    case 0x14:
                      v27 = sub_953130(a4);
                      v28 = *(unsigned __int16 *)(v15 + 0x12);
                      v29 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 0x1C))(v27);
                      sub_90D920(v10, (int)a6 + v28, v29);
                      v30 = v17[1];
                      v31 = 0;
                      v94 = 0;
                      v95 = 0;
                      if ( v30 > 0 )
                      {
                        do
                        {
                          v68 = sub_90D1F0(v79);
                          v32 = sub_953130(a4);
                          v33 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v32 + 0x1C))(
                                  v32,
                                  *(_DWORD *)(*v17 + 4 * v31),
                                  v68);
                          sub_953680(v10, v33, (int)v64, v65);
                          v65 = *(this + 0xC);
                          v64 = v96;
                          sub_918390(a6);
                          ++v31;
                        }
                        while ( v31 < v17[1] );
                      }
                      break;
                    case 0x19:
                      v34 = sub_953130(a4);
                      v86 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 0x1C))(v34);
                      sub_90D920(v10, (int)a6 + *(unsigned __int16 *)(v15 + 0x12), v86);
                      v69 = (_DWORD *)sub_90D1F0(v79);
                      v75 = (_DWORD *)sub_90D1F0((_DWORD *)v15);
                      v35 = 0;
                      for ( j = *v17; v35 < v17[1]; ++v35 )
                      {
                        v36 = sub_953130(v69);
                        sub_953A70(this, j + v35 * v36, v69, a4, v75);
                      }
                      for ( k = 0; k < v17[1]; ++k )
                      {
                        v60 = (_DWORD **)(v86 + k * sub_953130(v75));
                        v38 = sub_953130(v69);
                        sub_953E10(this, j + k * v38, v69, a4, v75, v60, (int *)v10);
                      }
                      break;
                    case 0x1C:
                      v39 = sub_953130(a4);
                      v70 = (*(int (__thiscall **)(int))(*(_DWORD *)v39 + 0x1C))(v39);
                      sub_90D920(v10, (int)a6 + *(unsigned __int16 *)(v15 + 0x12), v70);
                      v40 = 0;
                      v41 = 0;
                      if ( v17[1] > 0 )
                      {
                        do
                        {
                          v61 = *(this + 0xC);
                          memset(v96, 0, 0x10);
                          sub_9181D0((int)a4, (char *)v96, v61, 2);
                          ++v41;
                        }
                        while ( v41 < v17[1] );
                        v40 = 0;
                      }
                      v80 = 0;
                      if ( v17[1] > 0 )
                      {
                        while ( 1 )
                        {
                          v42 = 2 * v40 * *(this + 0xC);
                          sub_953680(v10, v70 + v42, *(_DWORD *)(*v17 + 8 * v40), *(_DWORD *)(*v17 + 8 * v40 + 4));
                          sub_953680(
                            v10,
                            v70 + v42 + *(this + 0xC),
                            *(_DWORD *)(*v17 + 8 * v80++ + 4),
                            (int)dword_BA8788);
                          if ( v80 >= v17[1] )
                            break;
                          v40 = v80;
                        }
                      }
                      break;
                    default:
                      v43 = sub_953130(a4);
                      v87 = *(unsigned __int16 *)(v15 + 0x12);
                      v44 = (*(int (__thiscall **)(int))(*(_DWORD *)v43 + 0x1C))(v43);
                      sub_90D920(v10, (int)a6 + v87, v44);
                      v63 = (char *)*v17;
                      v88 = *(unsigned __int8 *)(v15 + 0xD);
                      v45 = sub_940CF0(v15);
                      sub_9535B0(v88, v45, v17[1], (int)this, (int)a4, v63);
                      break;
                  }
                }
                goto LABEL_24;
              case 0x19:
                v85 = (_DWORD *)sub_90D1F0(v16);
                v72 = (_DWORD *)sub_90D1F0((_DWORD *)v15);
                v93 = (char *)a6 + *(unsigned __int16 *)(v15 + 0x12);
                v90 = sub_953560((signed __int16 *)v79);
                v51 = sub_953560((signed __int16 *)v15);
                v77 = v90;
                if ( v90 >= v51 )
                  v77 = v51;
                for ( m = 0; m < v77; ++m )
                {
                  v53 = (int)v17 + m * sub_953130(v85);
                  v54 = sub_953130(v72);
                  sub_953E10(this, v53, v85, a4, v72, (_DWORD **)&v93[m * v54], (int *)a7);
                }
                goto LABEL_23;
              case 0x1B:
                v71 = (_DWORD *)*v17;
                v76 = (_DWORD *)(*(int (__thiscall **)(unsigned __int8 *, int))(*(_DWORD *)this + 0xC))(this, *v17);
                if ( v76 )
                {
                  sub_953680(v10, (int)a6 + *(unsigned __int16 *)(v15 + 0x12), *v17, (int)dword_BA8788);
                  v46 = sub_953130(a4);
                  v89 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v46 + 0x1C))(v46, v64, v65);
                  sub_90D920(v10, (int)a6 + *(this + 0xC) + *(unsigned __int16 *)(v15 + 0x12), v89);
                  v47 = 0;
                  for ( n = v17[1]; v47 < v17[2]; ++v47 )
                  {
                    v48 = sub_953130(v71);
                    sub_953A70(this, n + v47 * v48, v71, a4, v76);
                  }
                  for ( ii = 0; ii < v17[2]; ++ii )
                  {
                    v62 = (_DWORD **)(v89 + ii * sub_953130(v76));
                    v50 = sub_953130(v71);
                    sub_953E10(this, n + ii * v50, v71, a4, v76, v62, (int *)v10);
                  }
                }
                goto LABEL_24;
              case 0x1C:
                v93 = (char *)sub_953560((signed __int16 *)v16);
                v55 = sub_953560((signed __int16 *)v15);
                v78 = (int)v93;
                if ( (int)v93 >= v55 )
                  v78 = v55;
                v56 = 0;
                v73 = 0;
                if ( v78 > 0 )
                {
                  v81 = 1;
                  do
                  {
                    v57 = *(this + 8);
                    v58 = *(int *)((char *)v17 + v81 * v57);
                    v59 = *(int *)((char *)v17 + 2 * v56 * v57);
                    if ( v59 )
                    {
                      if ( v58 )
                      {
                        sub_953680(a7, (int)a6 + 2 * v56 * *(this + 0xC) + *(unsigned __int16 *)(v15 + 0x12), v59, v58);
                        sub_953680(
                          a7,
                          (int)a6 + v81 * *(this + 0xC) + *(unsigned __int16 *)(v15 + 0x12),
                          v58,
                          (int)dword_BA8788);
                        v56 = v73;
                      }
                    }
                    v73 = ++v56;
                    v81 += 2;
                  }
                  while ( v56 < v78 );
                }
LABEL_23:
                v10 = a7;
LABEL_24:
                v26 = sub_953130(a4);
                sub_9536D0(0x10, v26);
                break;
              default:
                JUMPOUT(0x954588);
            }
          }
        }
        v7 = a5;
      }
      ++v91;
      result = sub_90D240(v7);
    }
    while ( v91 < result );
  }
  return result;
}
