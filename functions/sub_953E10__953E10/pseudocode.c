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
  unsigned int v11; // ecx
  const void *v12; // edx
  _DWORD *v13; // eax
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

  v7 = a5; /*0x953e1a*/
  if ( *sub_90D380(a5, &v92) ) /*0x953e2f*/
  {
    v9 = sub_90D1E0(a5); /*0x953e36*/
    v10 = a7; /*0x953e3b*/
    v11 = (unsigned int)a7[8]; /*0x953e42*/
    v95 = v9; /*0x953e48*/
    if ( a7[7] == (const void *)(v11 & 0x3FFFFFFF) ) /*0x953e57*/
      sub_8A6EE0(a7 + 6, 8); /*0x953e5c*/
    v12 = a7[7]; /*0x953e64*/
    v13 = a7[6]; /*0x953e67*/
    v13[2 * (_DWORD)v12] = a6; /*0x953e71*/
    v13[2 * (_DWORD)v12 + 1] = v95; /*0x953e78*/
    a7[7] = (char *)a7[7] + 1; /*0x953e7c*/
  }
  else
  {
    v10 = a7; /*0x953e81*/
  }
  v91 = 0; /*0x953e8a*/
  result = sub_90D240(a5); /*0x953e92*/
  if ( result > 0 ) /*0x953e99*/
  {
    do /*0x954033*/
    {
      v15 = sub_90D260(v7, v91); /*0x953eb3*/
      v16 = sub_90D2E0(a3, *(const char **)v15); /*0x953eb9*/
      v79 = v16; /*0x953ec0*/
      if ( v16 ) /*0x953ec4*/
      {
        v17 = (int *)(a2 + *((unsigned __int16 *)v16 + 9)); /*0x953ed8*/
        v18 = *(_BYTE *)(v15 + 0xC); /*0x953eda*/
        if ( *((_BYTE *)v16 + 0xC) == v18 ) /*0x953edf*/
        {
          v19 = *(_BYTE *)(v15 + 0xD); /*0x953ee5*/
          if ( *((_BYTE *)v16 + 0xD) == v19 ) /*0x953eeb*/
          {
            switch ( v18 ) /*0x953f05*/
            {
              case 1: /*0x953f05*/
              case 2: /*0x953f05*/
              case 3: /*0x953f05*/
              case 4: /*0x953f05*/
              case 5: /*0x953f05*/
              case 6: /*0x953f05*/
              case 7: /*0x953f05*/
              case 8: /*0x953f05*/
              case 9: /*0x953f05*/
              case 0xA: /*0x953f05*/
              case 0xB: /*0x953f05*/
              case 0xC: /*0x953f05*/
              case 0xD: /*0x953f05*/
              case 0xE: /*0x953f05*/
              case 0xF: /*0x953f05*/
              case 0x10: /*0x953f05*/
              case 0x11: /*0x953f05*/
              case 0x12: /*0x953f05*/
              case 0x13: /*0x953f05*/
              case 0x15: /*0x953f05*/
              case 0x18: /*0x953f05*/
                goto LABEL_24;
              case 0x14: /*0x953f05*/
                v66 = sub_953560((signed __int16 *)v15); /*0x953f17*/
                v74 = sub_953560((signed __int16 *)v79); /*0x953f26*/
                if ( v74 >= v66 ) /*0x953f2a*/
                  v74 = v66; /*0x953f2c*/
                v20 = 0; /*0x953f34*/
                for ( i = 0; v20 < v74; i = v20 ) /*0x953f3c*/
                {
                  v21 = *(int *)((char *)v17 + v20 * *(this + 8)); /*0x953f49*/
                  v67 = (const char *)v21; /*0x953f4e*/
                  if ( v21 ) /*0x953f52*/
                  {
                    v22 = *(unsigned __int16 *)(v15 + 0x12) + v20 * *(this + 0xC); /*0x953f63*/
                    if ( *(_BYTE *)(v15 + 0xD) == 2 ) /*0x953f69*/
                    {
                      v23 = sub_953130(a4); /*0x953f72*/
                      v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 0x1C))(v23); /*0x953f7b*/
                      sub_90D920(a7, (int)a6 + v22, v24); /*0x953f90*/
                      sub_8B1860(v67); /*0x953f9a*/
                      sub_918390((_DWORD **)a4); /*0x953fac*/
                    }
                    else
                    {
                      if ( *((_BYTE *)v79 + 0xD) == 0x19 ) /*0x953fbb*/
                      {
                        v25 = sub_90D1F0((_DWORD *)v15); /*0x953fbf*/
                        v21 = (int)v67; /*0x953fc4*/
                      }
                      else
                      {
                        v25 = 0; /*0x953fca*/
                      }
                      sub_953680(a7, (int)a6 + v22, v21, v25); /*0x953fdf*/
                    }
                    v20 = i; /*0x953fe4*/
                  }
                  ++v20; /*0x953fec*/
                }
                goto LABEL_23; /*0x953ff3*/
              case 0x16: /*0x953f05*/
              case 0x17: /*0x953f05*/
              case 0x1A: /*0x953f05*/
                if ( v17[1] ) /*0x954046*/
                {
                  switch ( v19 ) /*0x954057*/
                  {
                    case 0x14: /*0x954057*/
                      v27 = sub_953130(a4); /*0x95405d*/
                      v28 = *(unsigned __int16 *)(v15 + 0x12); /*0x954064*/
                      v29 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 0x1C))(v27); /*0x95406a*/
                      sub_90D920(v10, (int)a6 + v28, v29); /*0x95407a*/
                      v30 = v17[1]; /*0x95407f*/
                      v31 = 0; /*0x954082*/
                      v94 = 0; /*0x954086*/
                      v95 = 0; /*0x95408a*/
                      if ( v30 > 0 ) /*0x95408e*/
                      {
                        do /*0x9540e3*/
                        {
                          v68 = sub_90D1F0(v79); /*0x9540a4*/
                          v32 = sub_953130(a4); /*0x9540a8*/
                          v33 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v32 + 0x1C))( /*0x9540bc*/
                                  v32,
                                  *(_DWORD *)(*v17 + 4 * v31),
                                  v68);
                          sub_953680(v10, v33, (int)v64, v65); /*0x9540c2*/
                          v65 = *(this + 0xC); /*0x9540cb*/
                          v64 = v96; /*0x9540d0*/
                          sub_918390(a6); /*0x9540d8*/
                          ++v31; /*0x9540e0*/
                        }
                        while ( v31 < v17[1] ); /*0x9540e3*/
                      }
                      break;
                    case 0x19: /*0x954057*/
                      v34 = sub_953130(a4); /*0x9540f3*/
                      v86 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 0x1C))(v34); /*0x954107*/
                      sub_90D920(v10, (int)a6 + *(unsigned __int16 *)(v15 + 0x12), v86); /*0x954114*/
                      v69 = (_DWORD *)sub_90D1F0(v79); /*0x954124*/
                      v75 = (_DWORD *)sub_90D1F0((_DWORD *)v15); /*0x95412f*/
                      v35 = 0; /*0x954136*/
                      for ( j = *v17; v35 < v17[1]; ++v35 ) /*0x95413e*/
                      {
                        v36 = sub_953130(v69); /*0x954152*/
                        sub_953A70(this, j + v35 * v36, v69, a4, v75); /*0x954161*/
                      }
                      for ( k = 0; k < v17[1]; ++k ) /*0x954175*/
                      {
                        v60 = (_DWORD **)(v86 + k * sub_953130(v75)); /*0x95419e*/
                        v38 = sub_953130(v69); /*0x9541a6*/
                        sub_953E10(this, j + k * v38, v69, a4, v75, v60, v10); /*0x9541b5*/
                      }
                      break;
                    case 0x1C: /*0x954057*/
                      v39 = sub_953130(a4); /*0x9541d0*/
                      v70 = (*(int (__thiscall **)(int))(*(_DWORD *)v39 + 0x1C))(v39); /*0x9541dd*/
                      sub_90D920(v10, (int)a6 + *(unsigned __int16 *)(v15 + 0x12), v70); /*0x9541ef*/
                      v40 = 0; /*0x9541f7*/
                      v41 = 0; /*0x9541f9*/
                      if ( v17[1] > 0 ) /*0x9541fd*/
                      {
                        do /*0x954231*/
                        {
                          v61 = *(this + 0xC); /*0x954209*/
                          memset(v96, 0, 0x10); /*0x954216*/
                          sub_9181D0((int)a4, (char *)v96, v61, 2); /*0x954226*/
                          ++v41; /*0x95422e*/
                        }
                        while ( v41 < v17[1] ); /*0x954231*/
                        v40 = 0; /*0x954233*/
                      }
                      v80 = 0; /*0x954238*/
                      if ( v17[1] > 0 ) /*0x95423c*/
                      {
                        while ( 1 ) /*0x954267*/
                        {
                          v42 = 2 * v40 * *(this + 0xC); /*0x954267*/
                          sub_953680(v10, v70 + v42, *(_DWORD *)(*v17 + 8 * v40), *(_DWORD *)(*v17 + 8 * v40 + 4)); /*0x954270*/
                          sub_953680(v10, v70 + v42 + *(this + 0xC), *(_DWORD *)(*v17 + 8 * v80++ + 4), (int)unk_BA8788); /*0x954294*/
                          if ( v80 >= v17[1] ) /*0x9542a7*/
                            break; /*0x9542a7*/
                          v40 = v80; /*0x954244*/
                        }
                      }
                      break;
                    default:
                      v43 = sub_953130(a4); /*0x9542ae*/
                      v87 = *(unsigned __int16 *)(v15 + 0x12); /*0x9542b9*/
                      v44 = (*(int (__thiscall **)(int))(*(_DWORD *)v43 + 0x1C))(v43); /*0x9542bf*/
                      sub_90D920(v10, (int)a6 + v87, v44); /*0x9542d3*/
                      v63 = (char *)*v17; /*0x9542de*/
                      v88 = *(unsigned __int8 *)(v15 + 0xD); /*0x9542e1*/
                      v45 = sub_940CF0(v15); /*0x9542e5*/
                      sub_9535B0(v88, v45, v17[1], (int)this, (int)a4, v63); /*0x9542fb*/
                      break;
                  }
                }
                goto LABEL_24; /*0x9540e3*/
              case 0x19: /*0x953f05*/
                v85 = (_DWORD *)sub_90D1F0(v16); /*0x954410*/
                v72 = (_DWORD *)sub_90D1F0((_DWORD *)v15); /*0x954420*/
                v93 = (char *)a6 + *(unsigned __int16 *)(v15 + 0x12); /*0x95442e*/
                v90 = sub_953560((signed __int16 *)v79); /*0x954439*/
                v51 = sub_953560((signed __int16 *)v15); /*0x95443d*/
                v77 = v90; /*0x954448*/
                if ( v90 >= v51 ) /*0x95444c*/
                  v77 = v51; /*0x95444e*/
                for ( m = 0; m < v77; ++m ) /*0x95445a*/
                {
                  v53 = (int)v17 + m * sub_953130(v85); /*0x95447a*/
                  v54 = sub_953130(v72); /*0x95447c*/
                  sub_953E10(this, v53, v85, a4, v72, (_DWORD **)&v93[m * v54], a7); /*0x9544a0*/
                }
                goto LABEL_23; /*0x9544ac*/
              case 0x1B: /*0x953f05*/
                v71 = (_DWORD *)*v17; /*0x95430f*/
                v76 = (_DWORD *)(*(int (__thiscall **)(unsigned __int8 *, int))(*(_DWORD *)this + 0xC))(this, *v17); /*0x954318*/
                if ( v76 ) /*0x95431c*/
                {
                  sub_953680(v10, (int)a6 + *(unsigned __int16 *)(v15 + 0x12), *v17, (int)unk_BA8788); /*0x954338*/
                  v46 = sub_953130(a4); /*0x954344*/
                  v89 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v46 + 0x1C))(v46, v64, v65); /*0x95435c*/
                  sub_90D920(v10, (int)a6 + *(this + 0xC) + *(unsigned __int16 *)(v15 + 0x12), v89); /*0x95436b*/
                  v47 = 0; /*0x954376*/
                  for ( n = v17[1]; v47 < v17[2]; ++v47 ) /*0x95437e*/
                  {
                    v48 = sub_953130(v71); /*0x954392*/
                    sub_953A70(this, n + v47 * v48, v71, a4, v76); /*0x9543a1*/
                  }
                  for ( ii = 0; ii < v17[2]; ++ii ) /*0x9543b5*/
                  {
                    v62 = (_DWORD **)(v89 + ii * sub_953130(v76)); /*0x9543db*/
                    v50 = sub_953130(v71); /*0x9543e6*/
                    sub_953E10(this, n + ii * v50, v71, a4, v76, v62, v10); /*0x9543f5*/
                  }
                }
                goto LABEL_24; /*0x954400*/
              case 0x1C: /*0x953f05*/
                v93 = (char *)sub_953560((signed __int16 *)v16); /*0x9544bc*/
                v55 = sub_953560((signed __int16 *)v15); /*0x9544c0*/
                v78 = (int)v93; /*0x9544cb*/
                if ( (int)v93 >= v55 ) /*0x9544cf*/
                  v78 = v55; /*0x9544d1*/
                v56 = 0; /*0x9544d9*/
                v73 = 0; /*0x9544dd*/
                if ( v78 > 0 ) /*0x9544e1*/
                {
                  v81 = 1; /*0x9544e7*/
                  do /*0x95457d*/
                  {
                    v57 = *(this + 8); /*0x9544f4*/
                    v58 = *(int *)((char *)v17 + v81 * v57); /*0x9544fb*/
                    v59 = *(int *)((char *)v17 + 2 * v56 * v57); /*0x954501*/
                    if ( v59 ) /*0x954506*/
                    {
                      if ( v58 ) /*0x95450e*/
                      {
                        sub_953680(a7, (int)a6 + 2 * v56 * *(this + 0xC) + *(unsigned __int16 *)(v15 + 0x12), v59, v58); /*0x954535*/
                        sub_953680( /*0x95455e*/
                          a7,
                          (int)a6 + v81 * *(this + 0xC) + *(unsigned __int16 *)(v15 + 0x12),
                          v58,
                          (int)unk_BA8788);
                        v56 = v73; /*0x954563*/
                      }
                    }
                    v73 = ++v56; /*0x954575*/
                    v81 += 2; /*0x954579*/
                  }
                  while ( v56 < v78 ); /*0x95457d*/
                }
LABEL_23:
                v10 = a7; /*0x953ff9*/
LABEL_24:
                v26 = sub_953130(a4); /*0x954000*/
                sub_9536D0(0x10, v26); /*0x954012*/
                break; /*0x954012*/
              default:
                JUMPOUT(0x954588); /*0x954588*/
            }
          }
        }
        v7 = a5; /*0x95401a*/
      }
      ++v91; /*0x954028*/
      result = sub_90D240(v7); /*0x95402c*/
    }
    while ( v91 < result ); /*0x954033*/
  }
  return result; /*0x954039*/
}
