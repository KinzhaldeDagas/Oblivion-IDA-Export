int __thiscall sub_90AB90(_DWORD *this, _DWORD *a2, _DWORD *a3, int *a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // esi
  int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // ecx
  int v16; // eax
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  _DWORD *v25; // ecx
  unsigned __int64 v26; // rax
  int v27; // esi
  _DWORD *v28; // ecx
  int v30; // [esp+18h] [ebp-48h]
  int v31; // [esp+1Ch] [ebp-44h]
  int v32; // [esp+1Ch] [ebp-44h]
  int v33; // [esp+20h] [ebp-40h] BYREF
  int v34; // [esp+24h] [ebp-3Ch]
  int v35; // [esp+28h] [ebp-38h]
  _DWORD *v36; // [esp+2Ch] [ebp-34h]
  _DWORD v37[2]; // [esp+30h] [ebp-30h] BYREF
  char v38; // [esp+38h] [ebp-28h]
  int v39; // [esp+5Ch] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90aba4*/
  v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90abab*/
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x90abba*/
  {
    v9 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90abbc*/
    v10 = *(_DWORD **)(v8 + 0x1A4); /*0x90abbe*/
    *v10 = "LthkBvAgent"; /*0x90abc4*/
    v10[3] = "checkBvShape"; /*0x90abca*/
    v11 = __rdtsc(); /*0x90abd1*/
    v10[1] = v11; /*0x90abdb*/
    *(_DWORD *)(v9 + 0x1A4) = v10 + 4; /*0x90abe1*/
  }
  v12 = *a2; /*0x90abed*/
  v35 = a2[2]; /*0x90abf2*/
  v36 = a2; /*0x90abf6*/
  v13 = *(_DWORD *)(v12 + 0xC); /*0x90abfd*/
  v34 = a2[1]; /*0x90ac00*/
  v33 = v13; /*0x90ac0e*/
  v14 = *(this + 3); /*0x90ac12*/
  v37[0] = &off_A9BB8C; /*0x90ac1a*/
  v38 = 0; /*0x90ac22*/
  v39 = 0x7F7FFFFF; /*0x90ac27*/
  v37[1] = 0x7F7FFFFF; /*0x90ac2f*/
  (*(void (__thiscall **)(int, int *, _DWORD *, int *, _DWORD *, _DWORD *))(*(_DWORD *)v14 + 0x10))( /*0x90ac3a*/
    v14,
    &v33,
    a3,
    a4,
    v37,
    v37);
  if ( v38 ) /*0x90ac43*/
  {
    v15 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90ac49*/
    if ( *(_DWORD *)(v15[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v15[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x90ac64*/
    {
      v16 = v15[MEMORY[0xBA9DE4]]; /*0x90ac6b*/
      v17 = *(_DWORD **)(v16 + 0x1A4); /*0x90ac6e*/
      v31 = v16; /*0x90ac74*/
      *v17 = "Stchild"; /*0x90ac78*/
      v18 = __rdtsc(); /*0x90ac7e*/
      v17[1] = v18; /*0x90ac8c*/
      *(_DWORD *)(v31 + 0x1A4) = v17 + 3; /*0x90ac92*/
    }
    v19 = *(_DWORD *)(v12 + 0x10); /*0x90ac9f*/
    v34 = v36[1]; /*0x90aca2*/
    v20 = *(this + 4); /*0x90aca6*/
    v33 = v19; /*0x90acab*/
    if ( !v20 ) /*0x90acaf*/
    {
      v32 = *(this + 2); /*0x90acb6*/
      v30 = *a4; /*0x90acbc*/
      v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19); /*0x90acc3*/
      v22 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3); /*0x90accc*/
      if ( *((_BYTE *)a4 + 0xC) ) /*0x90accf*/
        v23 = v30 + 0x590; /*0x90acda*/
      else
        v23 = v30 + 0x190; /*0x90ace2*/
      *(this + 4) = (*(int (__cdecl **)(int *, _DWORD *, int *, int))(v30 /*0x90ad13*/
                                                                    + 0x14
                                                                    * *(unsigned __int8 *)(v23 + 0x20 * v21 + v22)
                                                                    + 0x990))(
                      &v33,
                      a3,
                      a4,
                      v32);
    }
    (*(void (__thiscall **)(_DWORD, int *, _DWORD *, int *, int, int))(*(_DWORD *)*(this + 4) + 0x10))( /*0x90ad2f*/
      *(this + 4),
      &v33,
      a3,
      a4,
      a5,
      a6);
  }
  else
  {
    v24 = *(this + 4); /*0x90ad34*/
    if ( v24 ) /*0x90ad39*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 0x18))(v24); /*0x90ad3d*/
      *(this + 4) = 0; /*0x90ad40*/
    }
  }
  v25 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90ad47*/
  LODWORD(v26) = v25[MEMORY[0xBA9DE4]]; /*0x90ad54*/
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x90ad63*/
  {
    v27 = v25[MEMORY[0xBA9DE4]]; /*0x90ad65*/
    v28 = *(_DWORD **)(v26 + 0x1A4); /*0x90ad67*/
    *v28 = "lt"; /*0x90ad6d*/
    v26 = __rdtsc(); /*0x90ad73*/
    v28[1] = v26; /*0x90ad7d*/
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3; /*0x90ad83*/
  }
  return v26; /*0x90ad89*/
}
