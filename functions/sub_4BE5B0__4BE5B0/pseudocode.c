signed int *__userpurge sub_4BE5B0@<eax>(
        _DWORD *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int *a7,
        signed int **a8)
{
  int v8; // edi
  int v10; // eax
  double v11; // st7
  int v12; // edi
  unsigned __int8 v13; // al
  int v14; // ebp
  _DWORD *v15; // esi
  int v16; // ecx
  const char *v17; // eax
  signed int *result; // eax
  float v19; // [esp+0h] [ebp-1ECh]
  float v20; // [esp+0h] [ebp-1ECh]
  float v21; // [esp+4h] [ebp-1E8h]
  float v22; // [esp+4h] [ebp-1E8h]
  int v23; // [esp+24h] [ebp-1C8h]
  int v24; // [esp+24h] [ebp-1C8h]
  signed int *v25; // [esp+28h] [ebp-1C4h]
  int v26; // [esp+34h] [ebp-1B8h] BYREF
  _DWORD v27[3]; // [esp+38h] [ebp-1B4h] BYREF
  char v28; // [esp+44h] [ebp-1A8h]
  int v29; // [esp+48h] [ebp-1A4h] BYREF
  char v30[400]; // [esp+4Ch] [ebp-1A0h] BYREF
  int v31; // [esp+1E8h] [ebp-4h]

  v8 = *a7; /*0x4be5f2*/
  v25 = *a8; /*0x4be609*/
  v23 = *a7; /*0x4be612*/
  v10 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x38))( /*0x4be616*/
          a1,
          a5,
          a4,
          a3);
  _sprintf(v30, "Exteriors to load: %d", v10);
  v21 = (float)v23; /*0x4be636*/
  v11 = (double)iDebugTextLeftRightOffset; /*0x4be63e*/
  v19 = v11; /*0x4be644*/
  InterfaceMgr_DebugTextLine(a2, a3, a4, v11, v30, v19, v21, 1, 0xFFFFFFFF); /*0x4be648*/
  v12 = a6 + v8; /*0x4be64d*/
  v24 = v12; /*0x4be659*/
  v27[0] = &LockFreeMap<unsigned int,NiPointer<ExteriorCellLoaderTask>>::LockFreeMapIterator::`vftable'; /*0x4be65d*/
  v27[1] = 0; /*0x4be665*/
  v27[2] = 0; /*0x4be669*/
  v28 = 0; /*0x4be66d*/
  v31 = 0; /*0x4be672*/
  while ( 1 )
  {
    v26 = 0; /*0x4be679*/
    LOBYTE(v31) = 1; /*0x4be690*/
    v13 = sub_642D90(a1, (int)v27, &v29, &v26, 1); /*0x4be698*/
    v14 = v26; /*0x4be69f*/
    if ( v13 )
    {
      v15 = *(_DWORD **)(v26 + 0x1C); /*0x4be6a5*/
      v16 = v15[2]; /*0x4be6a8*/
      v17 = v16 ? (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0xD4))(v16) : "NONE";
      _sprintf(v30, "%s - (%i, %i)", v17, *v15, v15[1]); /*0x4be6d2*/
      v22 = (float)v24; /*0x4be6e5*/
      v11 = (double)iDebugTextLeftRightOffset; /*0x4be6ed*/
      v20 = v11; /*0x4be6f3*/
      InterfaceMgr_DebugTextLine(v14, a3, a4, v11, v30, v20, v22, 1, 0xFFFFFFFF); /*0x4be6f7*/
      v12 += a6; /*0x4be6fc*/
      v24 = v12; /*0x4be711*/
      if ( v12 > nHeight - 0xA ) /*0x4be715*/
        break; /*0x4be715*/
    }
    LOBYTE(v31) = 0; /*0x4be71b*/
    if ( v14 ) /*0x4be723*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 8)) ) /*0x4be729*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x4be73c*/
    }
    if ( (v28 & 2) != 0 ) /*0x4be743*/
      goto LABEL_14; /*0x4be743*/
  }
  LOBYTE(v31) = 0; /*0x4be74f*/
  if ( !InterlockedDecrement((volatile LONG *)(v14 + 8)) ) /*0x4be757*/
    (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x4be76a*/
LABEL_14:
  if ( g_DistantLODLoaderTasksByCell ) /*0x4be76c*/
  {
    sub_4BD990(g_DistantLODLoaderTasksByCell, a4, v11, a6, a7, (signed int *)a8); /*0x4be788*/
    result = v25; /*0x4be78d*/
  }
  else
  {
    result = (signed int *)a8; /*0x4be79f*/
  }
  *a7 = v12; /*0x4be791*/
  *a8 = v25; /*0x4be793*/
  return result; /*0x4be7a7*/
}
