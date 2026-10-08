_BYTE *__thiscall sub_8996C0(_DWORD *this, _BYTE *a2, int (__stdcall ***a3)(signed int))
{
  char **v4; // ecx
  int v6; // ebp
  _DWORD *ThreadLocalStoragePointer; // edi
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // eax
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // eax
  _DWORD *v16; // ecx
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  _DWORD *v21; // ecx
  unsigned __int64 v22; // rax
  _DWORD v23[2]; // [esp+4h] [ebp-8h] BYREF

  if ( *(this + 0x22) ) /*0x8996c6*/
  {
    v4 = (char **)*(this + 0x20); /*0x8996d9*/
    LOBYTE(v23[0]) = 2; /*0x8996df*/
    v23[1] = a3; /*0x8996e4*/
    sub_8D8830(v4, (int)v23); /*0x8996e8*/
    *a2 = 0; /*0x8996f1*/
    return a2; /*0x8996ed*/
  }
  else
  {
    v6 = MEMORY[0xBA9DE4]; /*0x8996fd*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x899704*/
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x89970b*/
    *(this + 0x22) = 1; /*0x89970e*/
    if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x899724*/
    {
      v9 = v8; /*0x899726*/
      v10 = *(_DWORD **)(v8 + 0x1A4); /*0x899728*/
      *v10 = "LtRemEntity"; /*0x89972e*/
      v10[3] = "Broadphase"; /*0x899734*/
      v11 = __rdtsc(); /*0x89973b*/
      v23[0] = v11; /*0x89973d*/
      v10[1] = v11; /*0x899745*/
      *(_DWORD *)(v9 + 0x1A4) = v10 + 4; /*0x89974b*/
    }
    sub_8CCA80((int)this, (int)a3); /*0x899757*/
    if ( (int)*(this + 0x2D) >= 4 ) /*0x899768*/
      sub_8CC4E0(*(this + 2), (int)a3); /*0x89976f*/
    v12 = ThreadLocalStoragePointer[v6]; /*0x899777*/
    if ( *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8) ) /*0x899786*/
    {
      v13 = *(_DWORD **)(v12 + 0x1A4); /*0x899788*/
      *v13 = "StCallbacks"; /*0x89978e*/
      v14 = __rdtsc(); /*0x899794*/
      v13[1] = v14; /*0x89979e*/
      v12 = ThreadLocalStoragePointer[v6]; /*0x8997a1*/
      *(_DWORD *)(v12 + 0x1A4) = v13 + 3; /*0x8997a7*/
    }
    sub_8DC410(v12, (int)this, (int)a3); /*0x8997af*/
    sub_8DC1C0((int)a3); /*0x8997b5*/
    v15 = ThreadLocalStoragePointer[v6]; /*0x8997ba*/
    *((_BYTE *)this + 0x91) = 0; /*0x8997bd*/
    if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) ) /*0x8997d5*/
    {
      v16 = *(_DWORD **)(v15 + 0x1A4); /*0x8997d7*/
      *v16 = "StIsland"; /*0x8997dd*/
      v17 = __rdtsc(); /*0x8997e3*/
      HIDWORD(v17) = v17; /*0x8997e9*/
      LODWORD(v17) = ThreadLocalStoragePointer[v6]; /*0x8997ed*/
      v16[1] = HIDWORD(v17); /*0x8997f0*/
      *(_DWORD *)(v17 + 0x1A4) = v16 + 3; /*0x8997f6*/
    }
    sub_8CBE90((int)this, (int)a3); /*0x8997fe*/
    if ( !*((_WORD *)a3 + 2) ) /*0x899806*/
      ((void (__thiscall *)(int (__stdcall ***)(signed int)))(*a3)[4])(a3); /*0x899811*/
    sub_8BC730((int (__thiscall ***)(int (__stdcall ***)(signed int), int))a3); /*0x899816*/
    v18 = *(this + 0x22) - 1; /*0x899821*/
    *((_BYTE *)this + 0x91) = 1; /*0x899822*/
    *(this + 0x22) = v18; /*0x899829*/
    if ( !v18 ) /*0x89982f*/
    {
      if ( *(this + 0x21) ) /*0x899831*/
      {
        if ( !*((_BYTE *)this + 0x90) ) /*0x89983b*/
          sub_899210((int)this); /*0x899847*/
      }
    }
    v19 = ThreadLocalStoragePointer[v6]; /*0x89984c*/
    if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) ) /*0x89985b*/
    {
      v20 = ThreadLocalStoragePointer[v6]; /*0x89985d*/
      v21 = *(_DWORD **)(v19 + 0x1A4); /*0x89985f*/
      *v21 = "lt"; /*0x899865*/
      v22 = __rdtsc(); /*0x89986b*/
      v21[1] = v22; /*0x899875*/
      *(_DWORD *)(v20 + 0x1A4) = v21 + 3; /*0x89987b*/
    }
    *a2 = 1; /*0x899888*/
    return a2; /*0x899881*/
  }
}
