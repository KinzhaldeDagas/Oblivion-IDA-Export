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

  for ( i = 0; i < (unsigned __int16)*(this + 0x27); ++i )
  {
    v3 = *(unsigned int **)(*((_DWORD *)this + 0x12) + 4 * i);
    if ( v3 )
    {
      FormHeapFree(*v3);
      FormHeapFree((unsigned int)v3);
    }
  }
  for ( j = 0; (unsigned __int16)j < *(this + 0x27); *(_DWORD *)(*((_DWORD *)this + 0x12) + 4 * v5) = 0 )
    v5 = (unsigned __int16)j++;
  v6 = 0;
  *(this + 0x27) = 0;
  *(this + 0x28) = 0;
  for ( k = 0; v6 < (unsigned __int16)*(this + 0x2F); k = ++v6 )
  {
    v7 = *(unsigned int **)(*((_DWORD *)this + 0x16) + 4 * v6);
    if ( v7 )
    {
      v8 = 0;
      v13 = 0;
      if ( v7[2] )
      {
        do
        {
          v9 = *(_DWORD *)(*v7 + 4 * v8);
          if ( v9 )
          {
            v10 = *(_DWORD *)(v9 + 4);
            if ( v10 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
                (**(void (__thiscall ***)(int, int))v10)(v10, 1);
            }
            FormHeapFree(v9);
            v8 = v13;
          }
          v13 = ++v8;
        }
        while ( v8 < v7[2] );
        v6 = k;
      }
      FormHeapFree(*v7);
      FormHeapFree((unsigned int)v7);
    }
  }
  for ( result = 0; (unsigned __int16)result < *(this + 0x2F); *(_DWORD *)(*((_DWORD *)this + 0x16) + 4 * v12) = 0 )
    v12 = (unsigned __int16)result++;
  *(this + 0x2F) = 0;
  *(this + 0x30) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  return result;
}
