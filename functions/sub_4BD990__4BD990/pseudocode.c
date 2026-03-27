int __userpurge sub_4BD990@<eax>(
        _DWORD *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int *a6,
        signed int *a7)
{
  signed int v7; // edi
  int v8; // ecx
  char v9; // al
  int v10; // esi
  int v11; // eax
  int result; // eax
  signed int *v13; // ecx
  float v14; // [esp+4h] [ebp-1F8h]
  float v15; // [esp+4h] [ebp-1F8h]
  float v16; // [esp+4h] [ebp-1F8h]
  float v17; // [esp+8h] [ebp-1F4h]
  float v18; // [esp+8h] [ebp-1F4h]
  float v19; // [esp+8h] [ebp-1F4h]
  int v21; // [esp+28h] [ebp-1D4h]
  int v22; // [esp+28h] [ebp-1D4h]
  int v23; // [esp+28h] [ebp-1D4h]
  signed int v24; // [esp+2Ch] [ebp-1D0h]
  int v25; // [esp+2Ch] [ebp-1D0h]
  int v26; // [esp+2Ch] [ebp-1D0h]
  int v27; // [esp+30h] [ebp-1CCh] BYREF
  int v28; // [esp+34h] [ebp-1C8h]
  int v29; // [esp+38h] [ebp-1C4h]
  int v30; // [esp+3Ch] [ebp-1C0h]
  signed int *v31; // [esp+40h] [ebp-1BCh]
  int v32; // [esp+44h] [ebp-1B8h]
  _DWORD v33[3]; // [esp+48h] [ebp-1B4h] BYREF
  char v34; // [esp+54h] [ebp-1A8h]
  int v35; // [esp+58h] [ebp-1A4h] BYREF
  char v36[400]; // [esp+5Ch] [ebp-1A0h] BYREF
  int v37; // [esp+1F8h] [ebp-4h]

  v7 = *a7;
  v8 = *a6;
  v31 = a7;
  v32 = v8;
  v24 = v7;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v33[0] = &LockFreeMap<unsigned int,NiPointer<DistantLODLoaderTask>>::LockFreeMapIterator::`vftable';
  v33[1] = 0;
  v33[2] = 0;
  v34 = 0;
  v37 = 0;
  do
  {
    v27 = 0;
    LOBYTE(v37) = 1;
    v9 = sub_642D90(a1, (int)v33, &v35, &v27, 1);
    v10 = v27;
    if ( v9 )
    {
      v11 = 0;
      while ( *(_DWORD *)(4 * v11 + 0xA45A58) != (unsigned __int8)BYTE2(*(_DWORD *)(v27 + 0x10)) )
      {
        if ( ++v11 >= 3 )
          goto LABEL_8;
      }
      ++*(&v28 + v11);
    }
LABEL_8:
    LOBYTE(v37) = 0;
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 8)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
  }
  while ( (v34 & 2) == 0 );
  _sprintf(v36, "High LOD to load: %d", v28);
  __asm { fild    [esp+1F4h+var_1D0] }
  __asm { fstp    [esp+1F8h+var_1F4]; float }
  v21 = 0x500 - iDebugTextLeftRightOffset;
  __asm { fild    [esp+1F8h+var_1D4] }
  __asm { fstp    [esp+1F8h+var_1F8]; float }
  InterfaceMgr_DebugTextLine((char)a6, a2, a3, a4, (int)v36, v14, v17, 3, 0xFFFFFFFF);
  v25 = a5 + v7;
  _sprintf(v36, "Mid LOD to load: %d", v29);
  __asm { fild    [esp+208h+var_1D0] }
  __asm { fstp    [esp+1F8h+var_1F4]; float }
  v22 = 0x500 - iDebugTextLeftRightOffset;
  __asm { fild    [esp+1F8h+var_1D4] }
  __asm { fstp    [esp+1F8h+var_1F8]; float }
  InterfaceMgr_DebugTextLine((char)a6, a2, a3, a4, (int)v36, v15, v18, 3, 0xFFFFFFFF);
  v26 = a5 + a5 + v7;
  _sprintf(v36, "Low LOD to load: %d", v30);
  __asm { fild    [esp+208h+var_1D0] }
  __asm { fstp    [esp+1F8h+var_1F4]; float }
  v23 = 0x500 - iDebugTextLeftRightOffset;
  __asm { fild    [esp+1F8h+var_1D4] }
  __asm { fstp    [esp+1F8h+var_1F8]; float }
  InterfaceMgr_DebugTextLine((char)a6, a2, a3, a4, (int)v36, v16, v19, 3, 0xFFFFFFFF);
  result = v32;
  v13 = v31;
  *a6 = v32;
  *v13 = a5 + v26;
  return result;
}
