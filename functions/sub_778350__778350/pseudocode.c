// Buffer factory audit 2026-10-02: independent cached quad-index path, not a caller of PackBuffer7781F0. Requests 12 bytes per quad, INDEX16 (101), uses manager+0C cached IB/+10 capacity and fills each four vertices as 0,1,2,0,2,3. Calls D3D CreateIndexBuffer virtual+6C directly at778421, then Lock/Unlock. Current decompile has incorrect COM Lock arity/stack tracking and phantom ESI input; do not use its displayed prototype as authority.
int __userpurge sub_778350@<eax>(_DWORD *a1@<ecx>, int a2@<esi>, int a3, int a4, int a5, int a6, _WORD *a7)
{
  int v9; // ebx
  int v10; // esi
  unsigned int v11; // ebp
  int v12; // edi
  int v13; // eax
  void *v14; // ecx
  int (__stdcall *v15)(int, _DWORD, int, int *, _DWORD, int); // eax
  int v16; // esi
  void *v17; // ecx
  _WORD *v18; // eax
  _WORD *v19; // eax
  int v22; // [esp+28h] [ebp-14h] BYREF
  int v23; // [esp+2Ch] [ebp-10h]
  int v24; // [esp+30h] [ebp-Ch]
  int v25; // [esp+34h] [ebp-8h]
  unsigned int v26; // [esp+38h] [ebp-4h]

  if ( !a1[2] ) /*0x778356*/
    return 0; /*0x778366*/
  v9 = a3; /*0x77836a*/
  if ( !a3 ) /*0x778370*/
    return 0; /*0x778379*/
  v10 = a1[3]; /*0x778383*/
  v11 = 0xC * a3; /*0x778386*/
  if ( v10 ) /*0x77838a*/
  {
    v22 = 0; /*0x778392*/
    v23 = 0; /*0x778396*/
    v24 = 0; /*0x77839a*/
    v25 = 0; /*0x77839e*/
    v26 = 0; /*0x7783a2*/
    if ( (*(int (__stdcall **)(int, int *))(*(_DWORD *)v10 + 0x34))(v10, &v22) >= 0 ) /*0x7783b1*/
    {
      if ( v22 == 0x65 && v23 == 7 && v24 == a5 && v25 == a6 && v26 >= v11 ) /*0x7783d9*/
      {
        v12 = v10; /*0x7783e0*/
        if ( !(_BYTE)a4 ) /*0x7783e2*/
          return v10; /*0x7783ed*/
        goto LABEL_20; /*0x7783e2*/
      }
      (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x7783f6*/
    }
  }
  v13 = a1[2]; /*0x7783f8*/
  a4 = 0; /*0x77840e*/
  if ( (*(int (__stdcall **)(int, int, int, int, int, int *, _DWORD))(*(_DWORD *)v13 + 0x6C))( /*0x778421*/
         v13,
         0xC * a3,
         a5,
         0x65,
         a6,
         &a4,
         0) >= 0 )
  {
    v12 = a4; /*0x778438*/
  }
  else
  {
    Shared_NoOpVirtual_60D0A0(v14); /*0x778428*/
    v12 = 0; /*0x778430*/
    a4 = 0; /*0x778432*/
  }
  if ( !v12 ) /*0x77843e*/
  {
    Shared_NoOpVirtual_60D0A0(v14); /*0x778445*/
    return 0; /*0x778456*/
  }
LABEL_20:
  v15 = *(int (__stdcall **)(int, _DWORD, int, int *, _DWORD, int))(*(_DWORD *)v12 + 0x2C); /*0x778459*/
  v16 = 0; /*0x77845e*/
  a6 = 0; /*0x778469*/
  if ( v15(v12, 0, 0xC * a3, &a6, 0, a2) < 0 ) /*0x778471*/
  {
    Shared_NoOpVirtual_60D0A0(v17); /*0x7784c7*/
    (*(void (__cdecl **)(int))(*(_DWORD *)v12 + 0x30))(v12); /*0x7784d5*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 8))(v12); /*0x7784dd*/
    v12 = 0; /*0x7784df*/
  }
  else
  {
    v18 = a7; /*0x778475*/
    do /*0x7784b6*/
    {
      *v18 = v16; /*0x778483*/
      v19 = v18 + 1; /*0x778486*/
      *v19++ = v16 + 1; /*0x77848c*/
      *v19++ = v16 + 2; /*0x778495*/
      *v19++ = v16; /*0x77849b*/
      *v19++ = v16 + 2; /*0x7784a1*/
      *v19 = v16 + 3; /*0x7784aa*/
      v18 = v19 + 1; /*0x7784ad*/
      v16 += 4; /*0x7784b0*/
      --v9; /*0x7784b3*/
    }
    while ( v9 ); /*0x7784b6*/
    (*(void (__cdecl **)(int))(*(_DWORD *)v12 + 0x30))(v12); /*0x7784be*/
  }
  a1[4] = v11; /*0x7784e6*/
  a1[3] = v12; /*0x7784ea*/
  return v12; /*0x778362*/
}
