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

  v11 = flt_A47E78 * a6; /*0x89a5fb*/
  v12 = 0x20 * a1 + a4 + 0x1A4; /*0x89a5fd*/
  v13 = fConstant_1; /*0x89a601*/
  *(_DWORD *)(v12 + 0x10) = (unsigned __int64)((double)*(int *)(a4 + 0x26C) * flt_A43328 * flt_A96D00); /*0x89a607*/
  v14 = v13 / v11; /*0x89a60a*/
  *(float *)(v12 + 8) = fConstant_1 - 0.40000001 * v14 * a6 * *(float *)(a4 + 0x270) * flt_A96CFC; /*0x89a626*/
  *(float *)v12 = v14; /*0x89a629*/
  *(float *)(v12 + 4) = fConstant_1 / (v11 * a5); /*0x89a633*/
  if ( *(float *)&SrcStr >= 0.40000001 ) /*0x89a645*/
    *(_DWORD *)(0x20 * a1 + a4 + 0x1B0) = 0x7D7FFFFF; /*0x89a65c*/
  else
    *(float *)(0x20 * a1 + a4 + 0x1B0) = *(float *)(a4 + 0x270) / 0.40000001 * flt_A96CFC; /*0x89a657*/
  if ( a11 + 1 >= 6 ) /*0x89a66f*/
  {
    v15 = *(_DWORD *)(a3 + 0x60); /*0x89a675*/
    *(_DWORD *)(a4 + 0x60) = v15; /*0x89a67e*/
    if ( (_RTL_CRITICAL_SECTION_0 *)v15 != a2 && *(_WORD *)(v15 + 4) != (_WORD)a2 ) /*0x89a687*/
      ++*(_WORD *)(v15 + 6); /*0x89a689*/
    v16 = *(_BYTE *)(a3 + 0x96); /*0x89a68d*/
    *(_BYTE *)(a4 + 0xA4) = v16; /*0x89a693*/
    v17 = *(_BYTE *)(a3 + 0x94); /*0x89a699*/
    *(_BYTE *)(a4 + 0xA5) = v17; /*0x89a6a3*/
    if ( v16 == (_BYTE)a2 && v17 != (_BYTE)a2 ) /*0x89a6ad*/
      *(_BYTE *)(a4 + 0xA5) = (_BYTE)a2; /*0x89a6af*/
    *(_OWORD *)(a4 + 0x280) = *(_OWORD *)(a3 + 0x30); /*0x89a6bf*/
    *(_OWORD *)(a4 + 0x290) = *(_OWORD *)(a3 + 0x40); /*0x89a6cc*/
    *(_DWORD *)(a4 + 0x2A0) = *(_DWORD *)(a3 + 0x64); /*0x89a6d2*/
    *(_DWORD *)(a4 + 0x64) = off_B2FC80(a4 + 0x280, a4 + 0x290, *(_DWORD *)(a3 + 0x64)); /*0x89a6e4*/
    v18 = *(_DWORD *)(a3 + 0x20); /*0x89a6e7*/
    *(_DWORD *)(a4 + 0x2A4) = v18; /*0x89a6ea*/
    *(_DWORD *)(a4 + 0x2A8) = v18 / 2; /*0x89a6f8*/
    v19 = (_RTL_CRITICAL_SECTION_0 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x89a70d*/
                                       unk_BA7D98,
                                       0x104,
                                       0x24);
    if ( v19 == a2 ) /*0x89a712*/
      v20 = 0; /*0x89a71d*/
    else
      v20 = sub_8D8450(v19); /*0x89a716*/
    *(_DWORD *)(a4 + 0x68) = v20; /*0x89a71f*/
    v21 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 8, 0x1E); /*0x89a72e*/
    *(_WORD *)(v21 + 4) = 8; /*0x89a731*/
    *(_WORD *)(v21 + 6) = 1; /*0x89a737*/
    *(_DWORD *)v21 = &off_A96AA4; /*0x89a73d*/
    *(_DWORD *)(a4 + 0x6C) = v21; /*0x89a743*/
    v22 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC, 0x1E); /*0x89a752*/
    v22[2] = 0xC; /*0x89a758*/
    v23 = sub_8E0980(v22, a4); /*0x89a75e*/
    v24 = *(_DWORD *)(a4 + 0x68); /*0x89a763*/
    *(_DWORD *)(a4 + 0x70) = v23; /*0x89a766*/
    *(_DWORD *)(v24 + 0x28) = *(_DWORD *)(a4 + 0x6C); /*0x89a76c*/
    *(_DWORD *)(*(_DWORD *)(a4 + 0x68) + 0x44) = *(_DWORD *)(a4 + 0x6C); /*0x89a775*/
    *(_DWORD *)(*(_DWORD *)(a4 + 0x68) + 0x48) = *(_DWORD *)(a4 + 0x6C); /*0x89a77e*/
    *(_DWORD *)(*(_DWORD *)(a4 + 0x68) + 0x24) = *(_DWORD *)(a4 + 0x70); /*0x89a787*/
    v25 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC, 0x1F); /*0x89a796*/
    v25[2] = 0xC; /*0x89a79c*/
    v43 = sub_8DBB90(v25, a4); /*0x89a7af*/
    v26 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x1C28, 0x24); /*0x89a7ba*/
    *(_WORD *)(v26 + 4) = 0x1C28; /*0x89a7c9*/
    *(_DWORD *)(a4 + 0x7C) = sub_8DAC20((char *)v26, (int)sub_8E0970, (int)v43); /*0x89a7d8*/
    if ( v43[2] != (_WORD)a2 && --v43[3] == (_WORD)a2 ) /*0x89a7e9*/
      (**(void (__thiscall ***)(_WORD *, int))v43)(v43, 1); /*0x89a7ef*/
    v27 = *(_DWORD *)(a3 + 0x54); /*0x89a7f1*/
    if ( (_RTL_CRITICAL_SECTION_0 *)v27 == a2 ) /*0x89a7f6*/
    {
      v28 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x89a804*/
      *(_WORD *)(v28 + 4) = 0x18; /*0x89a807*/
      *(_WORD *)(v28 + 6) = 1; /*0x89a80d*/
      *(_DWORD *)(v28 + 8) = &hkCollidableCollidableFilter::`vftable'; /*0x89a813*/
      *(_DWORD *)(v28 + 0xC) = &hkShapeCollectionFilter::`vftable'; /*0x89a81a*/
      *(_DWORD *)(v28 + 0x10) = &hkRayShapeCollectionFilter::`vftable'; /*0x89a821*/
      *(_DWORD *)(v28 + 0x14) = &hkRayCollidableFilter::`vftable'; /*0x89a828*/
      *(_DWORD *)v28 = &off_A96B78; /*0x89a82f*/
      *(_DWORD *)(v28 + 8) = &off_A96B64; /*0x89a835*/
      *(_DWORD *)(v28 + 0xC) = &off_A96B70; /*0x89a83c*/
      *(_DWORD *)(v28 + 0x10) = &off_A96B68; /*0x89a843*/
      *(_DWORD *)(v28 + 0x14) = &off_A96B64; /*0x89a84a*/
      *(_DWORD *)(a4 + 0x78) = v28; /*0x89a851*/
    }
    else
    {
      *(_DWORD *)(a4 + 0x78) = v27; /*0x89a856*/
      if ( *(_WORD *)(v27 + 4) != (_WORD)a2 ) /*0x89a85d*/
        ++*(_WORD *)(v27 + 6); /*0x89a85f*/
    }
    v29 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x2C, 0x1C); /*0x89a86f*/
    v30 = *(_DWORD *)(a4 + 0x7C); /*0x89a872*/
    *(_DWORD *)(a4 + 0x74) = v29; /*0x89a875*/
    *v29 = v30; /*0x89a878*/
    v29[2] = *(_DWORD *)(a3 + 0x50); /*0x89a87d*/
    v31 = *(_RTL_CRITICAL_SECTION_0 **)(a4 + 0x78); /*0x89a880*/
    v44 = v29; /*0x89a885*/
    if ( v31 == a2 ) /*0x89a889*/
      p_OwningThread = 0; /*0x89a890*/
    else
      p_OwningThread = &v31->OwningThread; /*0x89a88b*/
    v29[1] = p_OwningThread; /*0x89a892*/
    v33 = (_RTL_CRITICAL_SECTION_0 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x89a8a1*/
                                       unk_BA7D98,
                                       8,
                                       0x1C);
    if ( v33 == a2 ) /*0x89a8a6*/
    {
      v34 = 0; /*0x89a8b9*/
    }
    else
    {
      v33->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)0x3C23D70A; /*0x89a8a8*/
      v33->LockCount = 0x14; /*0x89a8ae*/
      v34 = v33; /*0x89a8b5*/
    }
    v44[8] = v34; /*0x89a8bf*/
    *(_BYTE *)(a4 + 0x2AC) = *(_BYTE *)(a3 + 0x68); /*0x89a8c5*/
    *(_DWORD *)v44[8] = *(_DWORD *)(a3 + 0x7C); /*0x89a8d1*/
    *(_DWORD *)(v44[8] + 4) = *(_DWORD *)(a3 + 0x80); /*0x89a8dc*/
    *((_BYTE *)v44 + 0xC) = (_BYTE)a2; /*0x89a8df*/
    v44[0xA] = *v44 + 0x1A50; /*0x89a8ea*/
    sub_8993F0(a4, *(char **)(a4 + 0x7C)); /*0x89a8f3*/
    if ( (*(_BYTE *)(a3 + 0x95) != (unsigned __int8)*(_DWORD *)(a4 + 0xB4)) != (_BYTE)a2 ) /*0x89a90e*/
    {
      v35 = *(_RTL_CRITICAL_SECTION_0 **)(a4 + 8); /*0x89a914*/
      if ( v35 != a2 ) /*0x89a919*/
        ((void (__thiscall *)(_RTL_CRITICAL_SECTION_0 *, int))v35->DebugInfo->Type)(v35, 1); /*0x89a91f*/
      v36 = *(char *)(a3 + 0x95); /*0x89a921*/
      *(_DWORD *)(a4 + 0xB4) = v36; /*0x89a928*/
      switch ( v36 ) /*0x89a938*/
      {
        case 1: /*0x89a938*/
          v37 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC, 0x12); /*0x89a94b*/
          *(_WORD *)(v37 + 4) = 0xC; /*0x89a94e*/
          *(_WORD *)(v37 + 6) = 1; /*0x89a954*/
          *(_DWORD *)v37 = &off_A96AF0; /*0x89a95a*/
          break; /*0x89a960*/
        case 2: /*0x89a938*/
          v39 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC, 0x12); /*0x89a992*/
          *(_WORD *)(v39 + 4) = 0xC; /*0x89a995*/
          *(_WORD *)(v39 + 6) = 1; /*0x89a99b*/
          *(_DWORD *)v39 = &off_A96B1C; /*0x89a9a1*/
          break; /*0x89a9a7*/
        case 3: /*0x89a938*/
          v38 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x12); /*0x89a971*/
          v38[2] = 0x10; /*0x89a976*/
          sub_8E0950(v38); /*0x89a97c*/
          break; /*0x89a981*/
        case 4: /*0x89a938*/
          JUMPOUT(0x89AAA8); /*0x89aaa8*/
        case 5: /*0x89a938*/
        case 6: /*0x89a938*/
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x28, 0x12); /*0x89a9b8*/
          JUMPOUT(0x89AAB8); /*0x89aab8*/
        case 7: /*0x89a938*/
          v45 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x2C, 0x12); /*0x89a9eb*/
          *(_WORD *)(v45 + 4) = 0x2C; /*0x89a9ef*/
          sub_8D3330((_WORD *)v45, 1); /*0x89a9f5*/
          *(_DWORD *)v45 = &off_A96A74; /*0x89a9fe*/
          *(_DWORD *)(v45 + 0x28) = a2; /*0x89aa04*/
          break; /*0x89aa07*/
        case 8: /*0x89a938*/
          v46 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x2C, 0x12); /*0x89aa1f*/
          *(_WORD *)(v46 + 4) = 0x2C; /*0x89aa23*/
          sub_8D3330((_WORD *)v46, 1); /*0x89aa29*/
          *(_DWORD *)v46 = &off_A96A74; /*0x89aa32*/
          *(_DWORD *)(v46 + 0x28) = 1; /*0x89aa38*/
          break; /*0x89aa3f*/
        case 9: /*0x89a938*/
          v40 = (_RTL_CRITICAL_SECTION_0 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x89aa50*/
                                             unk_BA7D98,
                                             0x18,
                                             0x12);
          v47 = v40; /*0x89aa55*/
          if ( v40 == a2 ) /*0x89aa59*/
          {
            v41 = 0; /*0x89aa6d*/
          }
          else
          {
            InitializeCriticalSectionAndSpinCount(v40, 0xFA0); /*0x89aa61*/
            v41 = v47; /*0x89aa67*/
          }
          *(_DWORD *)(a4 + 0xA0) = v41; /*0x89aa6f*/
          v42 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x200, 0x12); /*0x89aa84*/
          v42[2] = 0x200; /*0x89aa8a*/
          sub_8E0300(v42, a4); /*0x89aa90*/
          break; /*0x89aa95*/
        default:
          JUMPOUT(0x89AA97); /*0x89aa97*/
      }
      JUMPOUT(0x89AAC5); /*0x89aac5*/
    }
    JUMPOUT(0x89AAC8); /*0x89aac8*/
  }
  JUMPOUT(0x89A55B); /*0x89a55b*/
}
