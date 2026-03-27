void __userpurge def_89A565(
        int a1@<eax>,
        _RTL_CRITICAL_SECTION_0 *a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        double a5@<st1>,
        double a6@<st0>,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  double v11; // st5
  int v12; // ecx
  double v13; // st4
  double v14; // st4
  int v15; // eax
  char v16; // dl
  char v17; // al
  int v18; // eax
  _RTL_CRITICAL_SECTION_0 *v19; // eax
  _DWORD *v20; // eax
  int v21; // eax
  _WORD *v22; // eax
  _WORD *v23; // eax
  int v24; // ecx
  _WORD *v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // ecx
  _RTL_CRITICAL_SECTION_0 *v31; // ecx
  HANDLE *p_OwningThread; // ecx
  _RTL_CRITICAL_SECTION_0 *v33; // eax
  _RTL_CRITICAL_SECTION_0 *v34; // ecx
  _RTL_CRITICAL_SECTION_0 *v35; // ecx
  int v36; // eax
  int v37; // eax
  _WORD *v38; // eax
  int v39; // eax
  _RTL_CRITICAL_SECTION_0 *v40; // eax
  _RTL_CRITICAL_SECTION_0 *v41; // eax
  _WORD *v42; // eax
  _WORD *v43; // [esp+44h] [ebp+14h]
  _DWORD *v44; // [esp+48h] [ebp+18h]
  int v45; // [esp+48h] [ebp+18h]
  int v46; // [esp+48h] [ebp+18h]
  _RTL_CRITICAL_SECTION_0 *v47; // [esp+48h] [ebp+18h]

  v11 = flt_A47E78 * a6;
  v12 = 0x20 * a1 + a4 + 0x1A4;
  v13 = fConstant_1;
  *(_DWORD *)(v12 + 0x10) = (unsigned __int64)((double)*(int *)(a4 + 0x26C) * flt_A43328 * flt_A96D00);
  v14 = v13 / v11;
  *(float *)(v12 + 8) = fConstant_1 - 0.40000001 * v14 * a6 * *(float *)(a4 + 0x270) * flt_A96CFC;
  *(float *)v12 = v14;
  *(float *)(v12 + 4) = fConstant_1 / (v11 * a5);
  if ( *(float *)&SrcStr >= 0.40000001 )
    *(_DWORD *)(0x20 * a1 + a4 + 0x1B0) = 0x7D7FFFFF;
  else
    *(float *)(0x20 * a1 + a4 + 0x1B0) = *(float *)(a4 + 0x270) / 0.40000001 * flt_A96CFC;
  if ( a11 + 1 >= 6 )
  {
    v15 = *(_DWORD *)(a3 + 0x60);
    *(_DWORD *)(a4 + 0x60) = v15;
    if ( (_RTL_CRITICAL_SECTION_0 *)v15 != a2 && *(_WORD *)(v15 + 4) != (_WORD)a2 )
      ++*(_WORD *)(v15 + 6);
    v16 = *(_BYTE *)(a3 + 0x96);
    *(_BYTE *)(a4 + 0xA4) = v16;
    v17 = *(_BYTE *)(a3 + 0x94);
    *(_BYTE *)(a4 + 0xA5) = v17;
    if ( v16 == (_BYTE)a2 && v17 != (_BYTE)a2 )
      *(_BYTE *)(a4 + 0xA5) = (_BYTE)a2;
    *(_OWORD *)(a4 + 0x280) = *(_OWORD *)(a3 + 0x30);
    *(_OWORD *)(a4 + 0x290) = *(_OWORD *)(a3 + 0x40);
    *(_DWORD *)(a4 + 0x2A0) = *(_DWORD *)(a3 + 0x64);
    *(_DWORD *)(a4 + 0x64) = off_B2FC80(a4 + 0x280, a4 + 0x290, *(_DWORD *)(a3 + 0x64));
    v18 = *(_DWORD *)(a3 + 0x20);
    *(_DWORD *)(a4 + 0x2A4) = v18;
    *(_DWORD *)(a4 + 0x2A8) = v18 / 2;
    v19 = (_RTL_CRITICAL_SECTION_0 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                                       dword_BA7D98,
                                       0x104,
                                       0x24);
    if ( v19 == a2 )
      v20 = 0;
    else
      v20 = sub_8D8450(v19);
    *(_DWORD *)(a4 + 0x68) = v20;
    v21 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 8, 0x1E);
    *(_WORD *)(v21 + 4) = 8;
    *(_WORD *)(v21 + 6) = 1;
    *(_DWORD *)v21 = &off_A96AA4;
    *(_DWORD *)(a4 + 0x6C) = v21;
    v22 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC, 0x1E);
    v22[2] = 0xC;
    v23 = sub_8E0980(v22, a4);
    v24 = *(_DWORD *)(a4 + 0x68);
    *(_DWORD *)(a4 + 0x70) = v23;
    *(_DWORD *)(v24 + 0x28) = *(_DWORD *)(a4 + 0x6C);
    *(_DWORD *)(*(_DWORD *)(a4 + 0x68) + 0x44) = *(_DWORD *)(a4 + 0x6C);
    *(_DWORD *)(*(_DWORD *)(a4 + 0x68) + 0x48) = *(_DWORD *)(a4 + 0x6C);
    *(_DWORD *)(*(_DWORD *)(a4 + 0x68) + 0x24) = *(_DWORD *)(a4 + 0x70);
    v25 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC, 0x1F);
    v25[2] = 0xC;
    v43 = sub_8DBB90(v25, a4);
    v26 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x1C28, 0x24);
    *(_WORD *)(v26 + 4) = 0x1C28;
    *(_DWORD *)(a4 + 0x7C) = sub_8DAC20((char *)v26, (int)sub_8E0970, (int)v43);
    if ( v43[2] != (_WORD)a2 && --v43[3] == (_WORD)a2 )
      (**(void (__thiscall ***)(_WORD *, int))v43)(v43, 1);
    v27 = *(_DWORD *)(a3 + 0x54);
    if ( (_RTL_CRITICAL_SECTION_0 *)v27 == a2 )
    {
      v28 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
      *(_WORD *)(v28 + 4) = 0x18;
      *(_WORD *)(v28 + 6) = 1;
      *(_DWORD *)(v28 + 8) = &hkCollidableCollidableFilter::`vftable';
      *(_DWORD *)(v28 + 0xC) = &hkShapeCollectionFilter::`vftable';
      *(_DWORD *)(v28 + 0x10) = &hkRayShapeCollectionFilter::`vftable';
      *(_DWORD *)(v28 + 0x14) = &hkRayCollidableFilter::`vftable';
      *(_DWORD *)v28 = &off_A96B78;
      *(_DWORD *)(v28 + 8) = &off_A96B64;
      *(_DWORD *)(v28 + 0xC) = &off_A96B70;
      *(_DWORD *)(v28 + 0x10) = &off_A96B68;
      *(_DWORD *)(v28 + 0x14) = &off_A96B64;
      *(_DWORD *)(a4 + 0x78) = v28;
    }
    else
    {
      *(_DWORD *)(a4 + 0x78) = v27;
      if ( *(_WORD *)(v27 + 4) != (_WORD)a2 )
        ++*(_WORD *)(v27 + 6);
    }
    v29 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x2C, 0x1C);
    v30 = *(_DWORD *)(a4 + 0x7C);
    *(_DWORD *)(a4 + 0x74) = v29;
    *v29 = v30;
    v29[2] = *(_DWORD *)(a3 + 0x50);
    v31 = *(_RTL_CRITICAL_SECTION_0 **)(a4 + 0x78);
    v44 = v29;
    if ( v31 == a2 )
      p_OwningThread = 0;
    else
      p_OwningThread = &v31->OwningThread;
    v29[1] = p_OwningThread;
    v33 = (_RTL_CRITICAL_SECTION_0 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                                       dword_BA7D98,
                                       8,
                                       0x1C);
    if ( v33 == a2 )
    {
      v34 = 0;
    }
    else
    {
      v33->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)0x3C23D70A;
      v33->LockCount = 0x14;
      v34 = v33;
    }
    v44[8] = v34;
    *(_BYTE *)(a4 + 0x2AC) = *(_BYTE *)(a3 + 0x68);
    *(_DWORD *)v44[8] = *(_DWORD *)(a3 + 0x7C);
    *(_DWORD *)(v44[8] + 4) = *(_DWORD *)(a3 + 0x80);
    *((_BYTE *)v44 + 0xC) = (_BYTE)a2;
    v44[0xA] = *v44 + 0x1A50;
    sub_8993F0(a4, *(char **)(a4 + 0x7C));
    if ( (*(_BYTE *)(a3 + 0x95) != (unsigned __int8)*(_DWORD *)(a4 + 0xB4)) != (_BYTE)a2 )
    {
      v35 = *(_RTL_CRITICAL_SECTION_0 **)(a4 + 8);
      if ( v35 != a2 )
        ((void (__thiscall *)(_RTL_CRITICAL_SECTION_0 *, int))v35->DebugInfo->Type)(v35, 1);
      v36 = *(char *)(a3 + 0x95);
      *(_DWORD *)(a4 + 0xB4) = v36;
      switch ( v36 )
      {
        case 1:
          v37 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC, 0x12);
          *(_WORD *)(v37 + 4) = 0xC;
          *(_WORD *)(v37 + 6) = 1;
          *(_DWORD *)v37 = &off_A96AF0;
          break;
        case 2:
          v39 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC, 0x12);
          *(_WORD *)(v39 + 4) = 0xC;
          *(_WORD *)(v39 + 6) = 1;
          *(_DWORD *)v39 = &off_A96B1C;
          break;
        case 3:
          v38 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                           dword_BA7D98,
                           0x10,
                           0x12);
          v38[2] = 0x10;
          sub_8E0950(v38);
          break;
        case 4:
          JUMPOUT(0x89AAA8);
        case 5:
        case 6:
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x28, 0x12);
          JUMPOUT(0x89AAB8);
        case 7:
          v45 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x2C, 0x12);
          *(_WORD *)(v45 + 4) = 0x2C;
          sub_8D3330((_WORD *)v45, 1);
          *(_DWORD *)v45 = &off_A96A74;
          *(_DWORD *)(v45 + 0x28) = a2;
          break;
        case 8:
          v46 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x2C, 0x12);
          *(_WORD *)(v46 + 4) = 0x2C;
          sub_8D3330((_WORD *)v46, 1);
          *(_DWORD *)v46 = &off_A96A74;
          *(_DWORD *)(v46 + 0x28) = 1;
          break;
        case 9:
          v40 = (_RTL_CRITICAL_SECTION_0 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                                             dword_BA7D98,
                                             0x18,
                                             0x12);
          v47 = v40;
          if ( v40 == a2 )
          {
            v41 = 0;
          }
          else
          {
            InitializeCriticalSectionAndSpinCount(v40, 0xFA0);
            v41 = v47;
          }
          *(_DWORD *)(a4 + 0xA0) = v41;
          v42 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                           dword_BA7D98,
                           0x200,
                           0x12);
          v42[2] = 0x200;
          sub_8E0300(v42, a4);
          break;
        default:
          JUMPOUT(0x89AA97);
      }
      JUMPOUT(0x89AAC5);
    }
    JUMPOUT(0x89AAC8);
  }
  JUMPOUT(0x89A55B);
}
