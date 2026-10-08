int __cdecl sub_9023F0(int *a1, __m128 **a2, int a3, int a4)
{
  int v4; // ebp
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  float v10; // ecx
  int v11; // eax
  double v12; // st7
  __m128 *v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // edi
  _DWORD *v21; // ecx
  int (__stdcall **v23)(char); // [esp+Ch] [ebp-3Ch] BYREF
  char v24; // [esp+10h] [ebp-38h]
  int (__stdcall **v25)(char); // [esp+14h] [ebp-34h] BYREF
  char v26; // [esp+18h] [ebp-30h]
  int v27; // [esp+1Ch] [ebp-2Ch]
  __m128 *v28[4]; // [esp+20h] [ebp-28h] BYREF
  int (__stdcall **v29)(char); // [esp+30h] [ebp-18h] BYREF
  __int16 v30; // [esp+36h] [ebp-12h]
  int v31; // [esp+38h] [ebp-10h]
  float v32; // [esp+3Ch] [ebp-Ch]
  int v33; // [esp+40h] [ebp-8h]
  int v34; // [esp+44h] [ebp-4h]

  v4 = MEMORY[0xBA9DE4]; /*0x9023f4*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9023fc*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x902403*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x902412*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x902414*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x902416*/
    *v8 = "LtCvxList"; /*0x90241c*/
    v8[3] = "checkHull"; /*0x902422*/
    v9 = __rdtsc(); /*0x902429*/
    v23 = (int (__stdcall **)(char))v9; /*0x90242b*/
    v8[1] = v9; /*0x902433*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4; /*0x902439*/
  }
  v10 = flt_B2FFE4; /*0x902446*/
  v28[2] = a2[2]; /*0x90244c*/
  v11 = (int)*a2; /*0x902450*/
  v32 = v10; /*0x902452*/
  v28[3] = (__m128 *)a2; /*0x902456*/
  v30 = 1; /*0x90245a*/
  v31 = 0; /*0x902461*/
  v29 = &off_A9BB94; /*0x902469*/
  v12 = *(float *)(**(_DWORD **)(v11 + 0x10) + 0xC); /*0x902476*/
  v13 = a2[1]; /*0x902479*/
  v33 = *(_DWORD *)(v11 + 0x10); /*0x90247c*/
  v14 = *(_DWORD *)(v11 + 0x14); /*0x902480*/
  v32 = v12; /*0x902483*/
  v34 = v14; /*0x902487*/
  v28[0] = (__m128 *)&v29; /*0x902498*/
  v28[1] = v13; /*0x9024a0*/
  v23 = &off_A9BB84; /*0x9024ab*/
  v24 = 0; /*0x9024b3*/
  sub_93F800((int)a1, v28, a3, (int)&v23); /*0x9024b8*/
  if ( v24 ) /*0x9024c6*/
  {
    v15 = ThreadLocalStoragePointer[v4]; /*0x9024c8*/
    if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) ) /*0x9024d7*/
    {
      v16 = ThreadLocalStoragePointer[v4]; /*0x9024da*/
      v17 = *(_DWORD **)(v15 + 0x1A4); /*0x9024dc*/
      *v17 = "Stchildren"; /*0x9024e2*/
      v18 = __rdtsc(); /*0x9024e8*/
      v17[1] = v18; /*0x9024f2*/
      *(_DWORD *)(v16 + 0x1A4) = v17 + 3; /*0x9024f8*/
    }
    v27 = a4; /*0x90250c*/
    v26 = 0; /*0x902517*/
    v25 = &off_A9B4F0; /*0x90251c*/
    sub_905630((int *)a2, a1, a3, (int)&v25); /*0x902524*/
  }
  LODWORD(v19) = ThreadLocalStoragePointer[v4]; /*0x90252c*/
  if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) ) /*0x90253b*/
  {
    v20 = ThreadLocalStoragePointer[v4]; /*0x90253d*/
    v21 = *(_DWORD **)(v19 + 0x1A4); /*0x90253f*/
    *v21 = "lt"; /*0x902545*/
    v19 = __rdtsc(); /*0x90254b*/
    v21[1] = v19; /*0x902555*/
    *(_DWORD *)(v20 + 0x1A4) = v21 + 3; /*0x90255b*/
  }
  return v19; /*0x902561*/
}
