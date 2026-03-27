void __thiscall sub_561520(int **this)
{
  int *v2; // eax
  unsigned int v3; // edi
  int *v4; // eax
  unsigned int v5; // edi
  int v6; // edi
  LONG (__stdcall *v7)(volatile LONG *); // ebp
  int v8; // edi
  int *v9; // eax
  unsigned int v10; // edi
  int *v11; // eax
  unsigned int v12; // edi
  int *v13; // eax
  unsigned int v14; // edi
  int *v15; // eax
  unsigned int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi

  v2 = *(this + 5);
  if ( v2 )
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFF);
    _LN21(v2, 4u, v2[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v3);
    *(this + 5) = 0;
  }
  v4 = *(this + 6);
  if ( v4 )
  {
    v5 = (unsigned int)(v4 + 0xFFFFFFFF);
    _LN21(v4, 4u, v4[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v5);
    *(this + 6) = 0;
  }
  v6 = (int)*(this + 7);
  v7 = InterlockedDecrement;
  if ( v6 )
  {
    if ( !v7((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *(this + 7) = 0;
  }
  v8 = (int)*(this + 8);
  if ( v8 )
  {
    if ( !v7((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    *(this + 8) = 0;
  }
  v9 = *(this + 9);
  if ( v9 )
  {
    v10 = (unsigned int)(v9 + 0xFFFFFFFF);
    _LN21(v9, 4u, v9[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v10);
    *(this + 9) = 0;
  }
  v11 = *(this + 0xA);
  if ( v11 )
  {
    v12 = (unsigned int)(v11 + 0xFFFFFFFF);
    _LN21(v11, 4u, v11[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v12);
    *(this + 0xA) = 0;
  }
  v13 = *(this + 0xB);
  if ( v13 )
  {
    v14 = (unsigned int)(v13 + 0xFFFFFFFF);
    _LN21(v13, 4u, v13[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v14);
    *(this + 0xB) = 0;
  }
  v15 = *(this + 0xC);
  if ( v15 )
  {
    v16 = (unsigned int)(v15 + 0xFFFFFFFF);
    _LN21(v15, 4u, v15[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v16);
    *(this + 0xC) = 0;
  }
  v17 = (int)*(this + 0xD);
  if ( v17 )
  {
    if ( !v7((volatile LONG *)(v17 + 4)) )
      (**(void (__thiscall ***)(int, int))v17)(v17, 1);
    *(this + 0xD) = 0;
  }
  v18 = (int)*(this + 0xE);
  if ( v18 )
  {
    if ( !v7((volatile LONG *)(v18 + 4)) )
      (**(void (__thiscall ***)(int, int))v18)(v18, 1);
    *(this + 0xE) = 0;
  }
  v19 = (int)*(this + 0xF);
  if ( v19 )
  {
    if ( !v7((volatile LONG *)(v19 + 4)) )
      (**(void (__thiscall ***)(int, int))v19)(v19, 1);
    *(this + 0xF) = 0;
  }
  v20 = (int)*(this + 0x10);
  if ( v20 )
  {
    if ( !v7((volatile LONG *)(v20 + 4)) )
      (**(void (__thiscall ***)(int, int))v20)(v20, 1);
    *(this + 0x10) = 0;
  }
}
