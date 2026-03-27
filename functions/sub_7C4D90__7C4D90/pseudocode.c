unsigned int *sub_7C4D90()
{
  int v0; // eax
  int v1; // edx
  unsigned int *result; // eax
  unsigned int v3; // esi
  bool v4; // zf
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  unsigned int v11; // [esp+14h] [ebp-18h] BYREF
  unsigned int *v12; // [esp+18h] [ebp-14h] BYREF
  int v13; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v14; // [esp+28h] [ebp-4h]

  sub_7C4CE0();
  v0 = 0;
  if ( dword_B2CBD8 )
  {
    v1 = dword_B2CBDC;
    while ( !*(_DWORD *)(v1 + 4 * v0) )
    {
      if ( ++v0 >= (unsigned int)dword_B2CBD8 )
        goto LABEL_5;
    }
    result = *(unsigned int **)(v1 + 4 * v0);
  }
  else
  {
LABEL_5:
    result = 0;
  }
  v3 = 0;
  v12 = result;
  v11 = 0;
  v4 = dword_B2CBE0 == 0;
  v5 = InterlockedDecrement;
  v14 = 0;
  if ( !v4 )
  {
    if ( result )
    {
      do
      {
        sub_7B2600((unsigned int **)&off_B2CBD4, &v12, &v13, &v11);
        v3 = v11;
        if ( v11 )
        {
          if ( !*(_BYTE *)(v11 + 0x32) )
          {
            v6 = *(_DWORD *)(v11 + 8);
            if ( v6 )
            {
              if ( !v5((volatile LONG *)(v6 + 4)) )
                (**(void (__thiscall ***)(int, int))v6)(v6, 1);
              *(_DWORD *)(v3 + 8) = 0;
            }
            FormHeapFree(*(_DWORD *)(v3 + 0xC));
            *(_DWORD *)(v3 + 0xC) = 0;
            v7 = *(_DWORD *)(v3 + 0x14);
            if ( v7 )
            {
              if ( !v5((volatile LONG *)(v7 + 4)) )
                (**(void (__thiscall ***)(int, int))v7)(v7, 1);
              *(_DWORD *)(v3 + 0x14) = 0;
            }
            v8 = *(_DWORD *)(v3 + 0x1C);
            if ( v8 )
            {
              if ( !v5((volatile LONG *)(v8 + 4)) )
                (**(void (__thiscall ***)(int, int))v8)(v8, 1);
              *(_DWORD *)(v3 + 0x1C) = 0;
            }
            v9 = *(_DWORD *)(v3 + 0x18);
            if ( v9 )
            {
              if ( !v5((volatile LONG *)(v9 + 4)) )
                (**(void (__thiscall ***)(int, int))v9)(v9, 1);
              *(_DWORD *)(v3 + 0x18) = 0;
            }
            v10 = *(_DWORD *)(v3 + 0x20);
            if ( v10 )
            {
              if ( !v5((volatile LONG *)(v10 + 4)) )
                (**(void (__thiscall ***)(int, int))v10)(v10, 1);
              *(_DWORD *)(v3 + 0x20) = 0;
            }
          }
        }
      }
      while ( v12 );
    }
    result = (unsigned int *)NiTMap_Clear(&off_B2CBD4);
  }
  v14 = 0xFFFFFFFF;
  if ( v3 )
  {
    result = (unsigned int *)v5((volatile LONG *)(v3 + 4));
    if ( !result )
      return (**(unsigned int *(__thiscall ***)(unsigned int, int))v3)(v3, 1);
  }
  return result;
}
