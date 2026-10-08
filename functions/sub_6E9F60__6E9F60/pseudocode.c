int __thiscall sub_6E9F60(_WORD *this)
{
  unsigned int i; // esi
  unsigned int *v3; // ebp
  int j; // eax
  int v5; // ecx
  unsigned int v6; // esi
  unsigned int *v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // esi
  int result; // eax
  int v12; // edx
  unsigned int v13; // [esp+10h] [ebp-8h]
  unsigned int k; // [esp+14h] [ebp-4h]

  for ( i = 0; i < (unsigned __int16)*(this + 0x27); ++i ) /*0x6e9f6d*/
  {
    v3 = *(unsigned int **)(*((_DWORD *)this + 0x12) + 4 * i); /*0x6e9f76*/
    if ( v3 ) /*0x6e9f7b*/
    {
      FormHeapFree(*v3); /*0x6e9f81*/
      FormHeapFree((unsigned int)v3); /*0x6e9f87*/
    }
  }
  for ( j = 0; (unsigned __int16)j < *(this + 0x27); *(_DWORD *)(*((_DWORD *)this + 0x12) + 4 * v5) = 0 ) /*0x6e9f9c*/
    v5 = (unsigned __int16)j++; /*0x6e9fa5*/
  v6 = 0; /*0x6e9fb4*/
  *(this + 0x27) = 0; /*0x6e9fb6*/
  *(this + 0x28) = 0; /*0x6e9fba*/
  for ( k = 0; v6 < (unsigned __int16)*(this + 0x2F); k = ++v6 ) /*0x6e9fbe*/
  {
    v7 = *(unsigned int **)(*((_DWORD *)this + 0x16) + 4 * v6); /*0x6e9fd3*/
    if ( v7 ) /*0x6e9fd8*/
    {
      v8 = 0; /*0x6e9fda*/
      v13 = 0; /*0x6e9fdf*/
      if ( v7[2] ) /*0x6e9fdc*/
      {
        do /*0x6ea029*/
        {
          v9 = *(_DWORD *)(*v7 + 4 * v8); /*0x6e9fe8*/
          if ( v9 ) /*0x6e9fed*/
          {
            v10 = *(_DWORD *)(v9 + 4); /*0x6e9fef*/
            if ( v10 ) /*0x6e9ff4*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x6e9ffa*/
                (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x6ea010*/
            }
            FormHeapFree(v9); /*0x6ea013*/
            v8 = v13; /*0x6ea018*/
          }
          v13 = ++v8; /*0x6ea025*/
        }
        while ( v8 < v7[2] ); /*0x6ea029*/
        v6 = k; /*0x6ea02b*/
      }
      FormHeapFree(*v7); /*0x6ea035*/
      FormHeapFree((unsigned int)v7); /*0x6ea03b*/
    }
  }
  for ( result = 0; (unsigned __int16)result < *(this + 0x2F); *(_DWORD *)(*((_DWORD *)this + 0x16) + 4 * v12) = 0 ) /*0x6ea058*/
    v12 = (unsigned __int16)result++; /*0x6ea063*/
  *(this + 0x2F) = 0; /*0x6ea072*/
  *(this + 0x30) = 0; /*0x6ea076*/
  *((_DWORD *)this + 0x1B) = 0; /*0x6ea07a*/
  return result; /*0x6ea07d*/
}
