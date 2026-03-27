void __thiscall sub_4530A0(void (__stdcall ****this)(signed int))
{
  unsigned int *v2; // edx
  void (__stdcall **v3)(signed int); // ecx
  unsigned int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // edx
  unsigned int v7; // eax
  _DWORD *v8; // esi
  unsigned int *v9; // edi
  unsigned int v10; // eax
  bool v11; // zf
  int v12; // edi
  unsigned int *v13; // esi
  unsigned int v14; // edi
  char v15; // [esp+Fh] [ebp-9h] BYREF
  unsigned int v16; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v17; // [esp+14h] [ebp-4h] BYREF

  v2 = (unsigned int *)*this;
  v3 = (*this)[1];
  v4 = 0;
  if ( v3 )
  {
    v5 = (_DWORD *)v2[2];
    v6 = v5;
    while ( !*v6 )
    {
      ++v4;
      ++v6;
      if ( v4 >= (unsigned int)v3 )
        goto LABEL_5;
    }
    v7 = v5[v4];
  }
  else
  {
LABEL_5:
    v7 = 0;
  }
  v16 = v7;
  while ( v16 )
  {
    sub_452800((unsigned int *)*this, &v16, &v15, &v17);
    v8 = v17;
    v9 = v17;
    if ( v17 )
    {
      do
      {
        v10 = *v9;
        v11 = *v9 == 0;
        v9 = (unsigned int *)v9[1];
        if ( !v11 )
          FormHeapFree(v10);
      }
      while ( v9 );
      if ( v8[1] )
      {
        do
        {
          v12 = *(_DWORD *)(v8[1] + 4);
          FormHeapFree(v8[1]);
          v8[1] = v12;
        }
        while ( v12 );
      }
      *v8 = 0;
      FormHeapFree((unsigned int)v8);
    }
  }
  if ( *this )
    ((void (__thiscall *)(_DWORD, int))***this)(*this, 1);
  v13 = (unsigned int *)*(this + 1);
  if ( v13 )
  {
    do
    {
      v14 = *v13;
      if ( *v13 )
      {
        MemoryHeap_Free_checked(*(void **)(v14 + 4));
        FormHeapFree(v14);
      }
      v13 = (unsigned int *)v13[1];
    }
    while ( v13 );
    BSSimpleList_Clear(*(this + 1));
    FormHeapFree((unsigned int)*(this + 1));
  }
}
