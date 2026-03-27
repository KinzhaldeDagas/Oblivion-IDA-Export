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
  char v13; // al
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

  v8 = *a7;
  v25 = *a8;
  v23 = *a7;
  v10 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>))(*a1 + 0x38))(a1, a5, a4);
  _sprintf(v30, "Exteriors to load: %d", v10);
  v21 = (float)v23;
  v11 = (double)iDebugTextLeftRightOffset;
  v19 = v11;
  InterfaceMgr_DebugTextLine(a2, a3, a4, v11, (int)v30, v19, v21, 1, 0xFFFFFFFF);
  v12 = a6 + v8;
  v24 = v12;
  v27[0] = &LockFreeMap<unsigned int,NiPointer<ExteriorCellLoaderTask>>::LockFreeMapIterator::`vftable';
  v27[1] = 0;
  v27[2] = 0;
  v28 = 0;
  v31 = 0;
  while ( 1 )
  {
    v26 = 0;
    LOBYTE(v31) = 1;
    v13 = sub_642D90(a1, (int)v27, &v29, &v26, 1);
    v14 = v26;
    if ( v13 )
    {
      v15 = *(_DWORD **)(v26 + 0x1C);
      v16 = v15[2];
      v17 = v16 ? (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0xD4))(v16) : "NONE";
      _sprintf(v30, "%s - (%i, %i)", v17, *v15, v15[1]);
      v22 = (float)v24;
      v11 = (double)iDebugTextLeftRightOffset;
      v20 = v11;
      InterfaceMgr_DebugTextLine(v14, a3, a4, v11, (int)v30, v20, v22, 1, 0xFFFFFFFF);
      v12 += a6;
      v24 = v12;
      if ( v12 > nHeight - 0xA )
        break;
    }
    LOBYTE(v31) = 0;
    if ( v14 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 8)) )
        (**(void (__thiscall ***)(int, int))v14)(v14, 1);
    }
    if ( (v28 & 2) != 0 )
      goto LABEL_14;
  }
  LOBYTE(v31) = 0;
  if ( !InterlockedDecrement((volatile LONG *)(v14 + 8)) )
    (**(void (__thiscall ***)(int, int))v14)(v14, 1);
LABEL_14:
  if ( dword_B35B8C )
  {
    sub_4BD990((_DWORD *)dword_B35B8C, a3, a4, v11, a6, a7, (signed int *)a8);
    result = v25;
  }
  else
  {
    result = (signed int *)a8;
  }
  *a7 = v12;
  *a8 = v25;
  return result;
}
