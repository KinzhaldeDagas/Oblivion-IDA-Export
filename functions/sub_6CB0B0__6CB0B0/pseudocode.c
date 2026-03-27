float **__cdecl sub_6CB0B0(float **a1, int a2)
{
  unsigned int v2; // ebp
  void *v3; // eax
  void *v4; // eax
  char v5; // bl
  char *v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // ebp
  float *v10; // ebx
  int v11; // edi
  float *v12; // edi

  v2 = 0;
  v3 = (void *)FormHeapAlloc(0x68u);
  if ( v3 )
    v4 = sub_6C7FB0(v3, *(char **)(a2 + 8), *(unsigned __int16 *)(a2 + 0x16), *(unsigned __int16 *)(a2 + 0x16), 0);
  else
    v4 = 0;
  *a1 = (float *)v4;
  if ( v4 )
    InterlockedIncrement((volatile LONG *)v4 + 1);
  v5 = 1;
  if ( *(_WORD *)(a2 + 0x16) )
  {
    do
    {
      v6 = *(char **)(*(_DWORD *)(a2 + 0x10) + 4 * v2);
      v7 = *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4 * v2);
      if ( v6 )
      {
        if ( v7 )
        {
          if ( v5 )
          {
            v8 = (*(unsigned __int8 *)(v7 + 8) >> 1) & 3;
            if ( v8 != 2 )
            {
              if ( v8 )
                v8 = 0;
            }
            *((_DWORD *)*a1 + 9) = v8;
            v5 = 0;
            (*a1)[0xA] = *(float *)(v7 + 0xC);
            (*a1)[0xB] = *(float *)(v7 + 0x14);
            (*a1)[0xC] = *(float *)(v7 + 0x18);
          }
          sub_6CA8E0(*a1, v6, (volatile LONG *)v7);
        }
      }
      ++v2;
    }
    while ( v2 < *(unsigned __int16 *)(a2 + 0x16) );
  }
  v9 = *(_DWORD *)(a2 + 0x2C);
  v10 = *a1;
  v11 = *((_DWORD *)*a1 + 8);
  if ( v11 != v9 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    }
    *((_DWORD *)v10 + 8) = v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  v12 = *a1;
  FormHeapFree(*((_DWORD *)*a1 + 0x17));
  v12[0x17] = 0.0;
  return a1;
}
