void __thiscall sub_43BDA0(_DWORD *this, int a2, unsigned __int8 a3, volatile LONG *a4, const char *a5)
{
  int v5; // ebp
  const char *v6; // ebx
  const char *v7; // eax
  unsigned int v8; // eax
  char *v9; // edi
  _DWORD *v11; // eax
  volatile LONG *v13; // [esp+8h] [ebp-10Ch] BYREF
  char v14[260]; // [esp+Ch] [ebp-108h] BYREF

  v13 = a4;
  v5 = a2;
  while ( v5 )
  {
    v6 = *(const char **)v5;
    if ( *(_DWORD *)v5 )
    {
      v7 = *(const char **)v5;
      if ( a5 )
      {
        strcpy(v14, a5);
        v8 = strlen(v6) + 1;
        v9 = (char *)&v13 + 3;
        while ( *++v9 )
          ;
        qmemcpy(v9, v6, v8);
        v7 = v14;
      }
      sub_43B840(this, v7, a3, v13);
      FormHeapFree((unsigned int)v6);
      v11 = *(_DWORD **)(v5 + 4);
      if ( v11 )
      {
        *(_DWORD *)(v5 + 4) = v11[1];
        *(_DWORD *)v5 = *v11;
        FormHeapFree((unsigned int)v11);
      }
      else
      {
        *(_DWORD *)v5 = 0;
      }
    }
    else
    {
      v5 = *(_DWORD *)(v5 + 4);
    }
  }
}
