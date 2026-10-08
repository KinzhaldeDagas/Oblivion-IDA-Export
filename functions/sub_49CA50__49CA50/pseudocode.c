void __thiscall sub_49CA50(char **this)
{
  unsigned int v2; // ecx
  unsigned int v3; // ebp
  int v4; // eax
  int v5; // ecx
  void (__thiscall ***v6)(_DWORD, int); // esi
  int *v7; // esi
  int v8; // edi
  char *v9; // eax
  unsigned int v10; // esi
  unsigned int i; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h] BYREF

  if ( *(this + 2) ) /*0x49ca56*/
  {
    v2 = (_DWORD)*(this + 6) * (_DWORD)*(this + 6); /*0x49ca65*/
    v3 = 0; /*0x49ca69*/
    for ( i = v2; v3 < v2; ++v3 ) /*0x49ca72*/
    {
      v4 = *(_DWORD *)&(*(this + 2))[4 * v3]; /*0x49ca8a*/
      if ( v4 ) /*0x49ca8f*/
      {
        v5 = *(_DWORD *)(v4 + 0x1C); /*0x49ca91*/
        if ( v5 ) /*0x49ca96*/
        {
          (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v5 + 0x88))(v5, &v12, *(_DWORD *)&(*(this + 2))[4 * v3]); /*0x49caa6*/
          if ( v12 ) /*0x49caae*/
          {
            v6 = (void (__thiscall ***)(_DWORD, int))v12; /*0x49cab0*/
            if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x49cab6*/
              (**v6)(v6, 1); /*0x49cacc*/
          }
        }
        v7 = (int *)&(*(this + 2))[4 * v3]; /*0x49cad1*/
        v8 = *v7; /*0x49cad3*/
        if ( *v7 ) /*0x49cad3*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x49cadd*/
          {
            if ( v8 ) /*0x49cae9*/
              (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x49caf3*/
          }
          *v7 = 0; /*0x49caf5*/
        }
        v2 = i; /*0x49cafb*/
      }
    }
    v9 = *(this + 2); /*0x49cb0b*/
    if ( v9 ) /*0x49cb10*/
    {
      v10 = (unsigned int)(v9 + 0xFFFFFFFC); /*0x49cb15*/
      _LN21(v9, 4u, *((_DWORD *)v9 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x49cb21*/
      FormHeapFree(v10); /*0x49cb27*/
    }
    *(this + 2) = 0; /*0x49cb30*/
  }
}
