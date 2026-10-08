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

  v13 = a4; /*0x43bdc8*/
  v5 = a2; /*0x43bdcc*/
  while ( v5 ) /*0x43bdce*/
  {
    v6 = *(const char **)v5; /*0x43bde0*/
    if ( *(_DWORD *)v5 ) /*0x43bde0*/
    {
      v7 = *(const char **)v5; /*0x43bdf4*/
      if ( a5 ) /*0x43bdf6*/
      {
        strcpy(v14, a5); /*0x43bdfc*/
        v8 = strlen(v6) + 1; /*0x43be17*/
        v9 = (char *)&v13 + 3; /*0x43be1f*/
        while ( *++v9 ) /*0x43be2a*/
          ; /*0x43be22*/
        qmemcpy(v9, v6, v8); /*0x43be33*/
        v7 = v14; /*0x43be3c*/
      }
      sub_43B840(this, v7, a3, v13); /*0x43be52*/
      FormHeapFree((unsigned int)v6); /*0x43be58*/
      v11 = *(_DWORD **)(v5 + 4); /*0x43be5d*/
      if ( v11 ) /*0x43be65*/
      {
        *(_DWORD *)(v5 + 4) = v11[1]; /*0x43be6a*/
        *(_DWORD *)v5 = *v11; /*0x43be70*/
        FormHeapFree((unsigned int)v11); /*0x43be73*/
      }
      else
      {
        *(_DWORD *)v5 = 0; /*0x43be7d*/
      }
    }
    else
    {
      v5 = *(_DWORD *)(v5 + 4); /*0x43be86*/
    }
  }
}
