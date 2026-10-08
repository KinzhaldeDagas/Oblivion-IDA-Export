int __thiscall sub_905510(int **this, int *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // esi
  unsigned __int64 v10; // rax
  int v11; // edx
  int v12; // ebx
  int *v13; // edi
  int v14; // eax
  int v15; // esi
  unsigned __int64 v16; // rax
  int v17; // esi
  _DWORD *v18; // ecx
  int v20; // [esp+18h] [ebp-228h]
  int **v21; // [esp+1Ch] [ebp-224h]
  _DWORD v22[4]; // [esp+20h] [ebp-220h] BYREF
  _BYTE v23[524]; // [esp+30h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90552c*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90553a*/
  v21 = this; /*0x905549*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x90554d*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90554f*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x905551*/
    *v9 = "TtShapeCollection"; /*0x905557*/
    v10 = __rdtsc(); /*0x90555d*/
    v9[1] = v10; /*0x905567*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x90556d*/
  }
  v11 = a2[2]; /*0x905576*/
  v12 = *a2; /*0x905579*/
  v13 = *(this + 3); /*0x90557b*/
  v22[3] = a2; /*0x90557e*/
  v14 = (int)v21[4] + 0xFFFFFFFF; /*0x905589*/
  v22[2] = v11; /*0x90558a*/
  v20 = v14; /*0x90558e*/
  if ( v14 >= 0 ) /*0x905592*/
  {
    do /*0x9055d7*/
    {
      v15 = *v13; /*0x905594*/
      v22[0] = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v12 + 0x28))(v12, *v13, v23); /*0x9055a3*/
      v22[1] = v15; /*0x9055aa*/
      (*(void (__thiscall **)(int, _DWORD *, int, int, int))(*(_DWORD *)v13[1] + 8))(v13[1], v22, a3, a4, a5); /*0x9055c1*/
      if ( *(_BYTE *)(a5 + 4) ) /*0x9055c4*/
        break; /*0x9055c9*/
      v13 += 2; /*0x9055cf*/
      --v20; /*0x9055d3*/
    }
    while ( v20 >= 0 ); /*0x9055d7*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9055d9*/
  }
  LODWORD(v16) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9055e6*/
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x9055f5*/
  {
    v17 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9055f7*/
    v18 = *(_DWORD **)(v16 + 0x1A4); /*0x9055f9*/
    *v18 = "Et"; /*0x9055ff*/
    v16 = __rdtsc(); /*0x905605*/
    v18[1] = v16; /*0x90560f*/
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x905615*/
  }
  return v16; /*0x90561b*/
}
