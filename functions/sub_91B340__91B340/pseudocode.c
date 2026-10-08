int __thiscall sub_91B340(_DWORD **this, int a2, int a3)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  unsigned __int64 v4; // rax
  _DWORD **v5; // ebx
  int v6; // esi
  _DWORD *v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // edx
  _DWORD *v12; // esi
  int v13; // eax
  __m128 *v14; // ecx
  int v15; // edi
  int v16; // esi
  _DWORD *v17; // ecx
  int v19; // [esp+10h] [ebp-50h]
  float v20; // [esp+14h] [ebp-4Ch]
  int v21; // [esp+18h] [ebp-48h]
  __m128 v23[4]; // [esp+20h] [ebp-40h] BYREF

  HIDWORD(v4) = MEMORY[0xBA9DE4]; /*0x91b349*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91b352*/
  LODWORD(v4) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91b359*/
  v5 = this; /*0x91b362*/
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) ) /*0x91b370*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91b372*/
    v7 = *(_DWORD **)(v4 + 0x1A4); /*0x91b374*/
    *v7 = "TthkConvexRadiusViewer"; /*0x91b37a*/
    v4 = __rdtsc(); /*0x91b380*/
    v7[1] = v4; /*0x91b38a*/
    HIDWORD(v4) = MEMORY[0xBA9DE4]; /*0x91b38d*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x91b396*/
  }
  v8 = a2; /*0x91b39c*/
  v20 = *(float *)(a2 + 0x10); /*0x91b3a5*/
  v9 = 0; /*0x91b3a9*/
  v21 = 0; /*0x91b3ad*/
  if ( *(int *)(a2 + 0x3C) > 0 ) /*0x91b3b1*/
  {
    do /*0x91b45a*/
    {
      v10 = *(_DWORD *)(*(_DWORD *)(v8 + 0x38) + 4 * v9); /*0x91b3ba*/
      v11 = *(_DWORD *)(v10 + 0x38); /*0x91b3bd*/
      v12 = (_DWORD *)(v10 + 0x34); /*0x91b3c0*/
      v19 = 0; /*0x91b3c5*/
      if ( v11 > 0 ) /*0x91b3cd*/
      {
        do /*0x91b440*/
        {
          v13 = *(_DWORD *)(*v12 + 4 * v19); /*0x91b3d9*/
          v14 = *(__m128 **)(v13 + 0x50); /*0x91b3dc*/
          v15 = v13 + 0x17; /*0x91b3e2*/
          if ( v20 == v14[5].m128_f32[3] ) /*0x91b3f0*/
          {
            (*(void (__thiscall **)(_DWORD *, __m128 *, int, int))(*v5[0xFFFFFFFB] + 0xC))( /*0x91b405*/
              v5[0xFFFFFFFB],
              v14 + 1,
              v15,
              unk_BA842C);
            v5 = this; /*0x91b408*/
          }
          else
          {
            sub_89DB70(v14, v20, v23); /*0x91b418*/
            (*(void (__thiscall **)(_DWORD *, __m128 *, int, int))(*v5[0xFFFFFFFB] + 0xC))( /*0x91b42f*/
              v5[0xFFFFFFFB],
              v23,
              v15,
              unk_BA842C);
          }
          ++v19; /*0x91b43c*/
        }
        while ( v19 < v12[1] ); /*0x91b440*/
        v9 = v21; /*0x91b442*/
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91b446*/
        v8 = a2; /*0x91b44d*/
      }
      v21 = ++v9; /*0x91b456*/
    }
    while ( v9 < *(_DWORD *)(v8 + 0x3C) ); /*0x91b45a*/
    HIDWORD(v4) = MEMORY[0xBA9DE4]; /*0x91b460*/
  }
  LODWORD(v4) = ThreadLocalStoragePointer[HIDWORD(v4)]; /*0x91b466*/
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) ) /*0x91b475*/
  {
    v16 = ThreadLocalStoragePointer[HIDWORD(v4)]; /*0x91b477*/
    v17 = *(_DWORD **)(v4 + 0x1A4); /*0x91b479*/
    *v17 = "Et"; /*0x91b47f*/
    v4 = __rdtsc(); /*0x91b485*/
    v17[1] = v4; /*0x91b48f*/
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3; /*0x91b495*/
  }
  return v4; /*0x91b49b*/
}
