int __userpurge sub_4BD990@<eax>(_DWORD *a1@<ecx>, double a2@<st1>, double a3@<st0>, int a4, int *a5, signed int *a6)
{
  int v7; // edi
  int v8; // ecx
  unsigned __int8 v9; // al
  int v10; // esi
  int v11; // eax
  double v12; // st5
  double v13; // st6
  double v14; // st7
  int result; // eax
  signed int *v16; // ecx
  float v17; // [esp+4h] [ebp-1F8h]
  float v18; // [esp+4h] [ebp-1F8h]
  float v19; // [esp+4h] [ebp-1F8h]
  float v20; // [esp+8h] [ebp-1F4h]
  float v21; // [esp+8h] [ebp-1F4h]
  float v22; // [esp+8h] [ebp-1F4h]
  int v24; // [esp+2Ch] [ebp-1D0h]
  int v25; // [esp+30h] [ebp-1CCh] BYREF
  int v26; // [esp+34h] [ebp-1C8h]
  int v27; // [esp+38h] [ebp-1C4h]
  int v28; // [esp+3Ch] [ebp-1C0h]
  signed int *v29; // [esp+40h] [ebp-1BCh]
  int v30; // [esp+44h] [ebp-1B8h]
  _DWORD v31[3]; // [esp+48h] [ebp-1B4h] BYREF
  char v32; // [esp+54h] [ebp-1A8h]
  int v33; // [esp+58h] [ebp-1A4h] BYREF
  char v34[400]; // [esp+5Ch] [ebp-1A0h] BYREF
  int v35; // [esp+1F8h] [ebp-4h]

  v7 = *a6; /*0x4bd9d9*/
  v8 = *a5; /*0x4bd9e1*/
  v29 = a6; /*0x4bd9e4*/
  v30 = v8; /*0x4bd9ea*/
  v26 = 0; /*0x4bd9f2*/
  v27 = 0; /*0x4bd9f6*/
  v28 = 0; /*0x4bd9fa*/
  v31[0] = &LockFreeMap<unsigned int,NiPointer<DistantLODLoaderTask>>::LockFreeMapIterator::`vftable'; /*0x4bd9fe*/
  v31[1] = 0; /*0x4bda06*/
  v31[2] = 0; /*0x4bda0a*/
  v32 = 0; /*0x4bda0e*/
  v35 = 0; /*0x4bda12*/
  do /*0x4bdaa4*/
  {
    v25 = 0; /*0x4bda19*/
    LOBYTE(v35) = 1; /*0x4bda32*/
    v9 = sub_642D90(a1, (int)v31, &v33, &v25, 1); /*0x4bda3a*/
    v10 = v25; /*0x4bda41*/
    if ( v9 ) /*0x4bda45*/
    {
      v11 = 0; /*0x4bda57*/
      while ( *(_DWORD *)(4 * v11 + 0xA45A58) != (unsigned __int8)BYTE2(*(_DWORD *)(v25 + 0x10)) ) /*0x4bda67*/
      {
        if ( ++v11 >= 3 ) /*0x4bda6f*/
          goto LABEL_8; /*0x4bda6f*/
      }
      ++*(&v26 + v11); /*0x4bda73*/
    }
LABEL_8:
    LOBYTE(v35) = 0; /*0x4bda7c*/
    if ( v10 ) /*0x4bda85*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 8)) ) /*0x4bda8b*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x4bda9d*/
    }
  }
  while ( (v32 & 2) == 0 ); /*0x4bdaa4*/
  _sprintf(v34, "High LOD to load: %d", v26);
  v20 = (float)v7; /*0x4bdad7*/
  v12 = (double)(0x500 - iDebugTextLeftRightOffset); /*0x4bdadf*/
  v17 = v12; /*0x4bdae7*/
  InterfaceMgr_DebugTextLine((char)a5, v12, a2, a3, v34, v17, v20, 3, 0xFFFFFFFF); /*0x4bdaeb*/
  _sprintf(v34, "Mid LOD to load: %d", v27);
  v21 = (float)(a4 + v7); /*0x4bdb2a*/
  v13 = (double)(0x500 - iDebugTextLeftRightOffset); /*0x4bdb32*/
  v18 = v13; /*0x4bdb3a*/
  InterfaceMgr_DebugTextLine((char)a5, v12, v13, a3, v34, v18, v21, 3, 0xFFFFFFFF); /*0x4bdb3e*/
  v24 = a4 + a4 + v7; /*0x4bdb54*/
  _sprintf(v34, "Low LOD to load: %d", v28);
  v22 = (float)v24; /*0x4bdb76*/
  v14 = (double)(0x500 - iDebugTextLeftRightOffset); /*0x4bdb7e*/
  v19 = v14; /*0x4bdb86*/
  InterfaceMgr_DebugTextLine((char)a5, v12, v13, v14, v34, v19, v22, 3, 0xFFFFFFFF); /*0x4bdb8a*/
  result = v30; /*0x4bdb8f*/
  v16 = v29; /*0x4bdb93*/
  *a5 = v30; /*0x4bdb9c*/
  *v16 = a4 + v24; /*0x4bdb9f*/
  return result; /*0x4bdba1*/
}
