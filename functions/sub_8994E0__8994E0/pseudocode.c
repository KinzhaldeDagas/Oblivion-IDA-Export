_DWORD *__thiscall sub_8994E0(_DWORD *this, _DWORD *a2, int a3)
{
  char **v4; // ecx
  int v6; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v8; // eax
  int v9; // ebp
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
  char v23[4]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v24; // [esp+Ch] [ebp-8h]
  int v25; // [esp+10h] [ebp-4h]

  if ( *(this + 0x22) ) /*0x8994e6*/
  {
    v25 = a3; /*0x8994fc*/
    v4 = (char **)*(this + 0x20); /*0x899500*/
    v23[0] = 1; /*0x899507*/
    v24 = a2; /*0x89950c*/
    sub_8D8830(v4, (int)v23); /*0x899510*/
    return 0; /*0x899515*/
  }
  else
  {
    v6 = MEMORY[0xBA9DE4]; /*0x89951f*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x899527*/
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x89952e*/
    if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x89953d*/
    {
      v9 = ThreadLocalStoragePointer[v6]; /*0x89953f*/
      v10 = *(_DWORD **)(v8 + 0x1A4); /*0x899541*/
      *v10 = "LtAddEntity"; /*0x899547*/
      v10[3] = "Island"; /*0x89954d*/
      v11 = __rdtsc(); /*0x899554*/
      v10[1] = v11; /*0x89955e*/
      *(_DWORD *)(v9 + 0x1A4) = v10 + 4; /*0x899564*/
    }
    if ( !a2[7] ) /*0x89956e*/
      a2[7] = (*(int (__thiscall **)(_DWORD *))(*a2 + 0xC))(a2); /*0x89957d*/
    sub_8DD0C0(0.0, 0, a2[0x14] + 0x10); /*0x89958b*/
    *((_BYTE *)this + 0x91) = 0; /*0x899595*/
    sub_8BC720(a2); /*0x89959c*/
    sub_8CB640((int)this, (int)a2, a3); /*0x8995a8*/
    ++*(this + 0x22); /*0x8995b7*/
    v12 = ThreadLocalStoragePointer[v6]; /*0x8995bd*/
    *((_BYTE *)this + 0x91) = 1; /*0x8995c0*/
    if ( *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8) ) /*0x8995d3*/
    {
      v13 = *(_DWORD **)(v12 + 0x1A4); /*0x8995d5*/
      *v13 = "StBroadphase"; /*0x8995db*/
      v14 = __rdtsc(); /*0x8995e1*/
      HIDWORD(v14) = v14; /*0x8995e7*/
      LODWORD(v14) = ThreadLocalStoragePointer[v6]; /*0x8995eb*/
      v13[1] = HIDWORD(v14); /*0x8995ee*/
      *(_DWORD *)(v14 + 0x1A4) = v13 + 3; /*0x8995f4*/
    }
    sub_8CC800((int)this, (int)a2); /*0x8995fc*/
    v15 = ThreadLocalStoragePointer[v6]; /*0x899601*/
    if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) ) /*0x899615*/
    {
      v16 = *(_DWORD **)(v15 + 0x1A4); /*0x899617*/
      *v16 = "StCallbacks"; /*0x89961d*/
      v17 = __rdtsc(); /*0x899623*/
      HIDWORD(v17) = v17; /*0x899629*/
      v15 = ThreadLocalStoragePointer[v6]; /*0x89962d*/
      v16[1] = HIDWORD(v17); /*0x899630*/
      *(_DWORD *)(v15 + 0x1A4) = v16 + 3; /*0x899636*/
    }
    sub_8DC380(v15, (int)this, (int)a2); /*0x89963e*/
    sub_8DBEF0((int)a2); /*0x899644*/
    v18 = *(this + 0x22) - 1; /*0x899652*/
    *(this + 0x22) = v18; /*0x899653*/
    if ( !v18 ) /*0x899659*/
    {
      if ( *(this + 0x21) ) /*0x89965b*/
      {
        if ( !*((_BYTE *)this + 0x90) ) /*0x899665*/
          sub_899210((int)this); /*0x899671*/
      }
    }
    v19 = ThreadLocalStoragePointer[v6]; /*0x899676*/
    if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) ) /*0x899685*/
    {
      v20 = ThreadLocalStoragePointer[v6]; /*0x899687*/
      v21 = *(_DWORD **)(v19 + 0x1A4); /*0x899689*/
      *v21 = "lt"; /*0x89968f*/
      v22 = __rdtsc(); /*0x899695*/
      v21[1] = v22; /*0x89969f*/
      *(_DWORD *)(v20 + 0x1A4) = v21 + 3; /*0x8996a5*/
    }
    return a2; /*0x8996ac*/
  }
}
