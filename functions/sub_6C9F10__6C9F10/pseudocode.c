LONG __thiscall sub_6C9F10(float *this, int a2, int a3, int a4)
{
  float *v4; // ebx
  unsigned int i; // esi
  void (__thiscall ***v7)(_DWORD, int); // edi
  int v8; // eax
  int v9; // esi
  LONG result; // eax
  bool v11; // zf
  int v12; // edi
  int *v13; // esi
  unsigned int v14; // edx
  unsigned int v15; // ecx
  int **v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // esi
  int v23; // eax
  unsigned int v25; // [esp+18h] [ebp-24h]
  int v26; // [esp+1Ch] [ebp-20h] BYREF
  int v27; // [esp+20h] [ebp-1Ch] BYREF
  __int16 v28; // [esp+24h] [ebp-18h]
  __int16 v29; // [esp+26h] [ebp-16h]
  unsigned int v30; // [esp+28h] [ebp-14h]
  __int16 v31; // [esp+2Ch] [ebp-10h]
  int v32; // [esp+38h] [ebp-4h]
  int v33; // [esp+40h] [ebp+4h]

  v4 = this;
  for ( i = 0; i < *(_DWORD *)(a2 + 0xC); ++i )
  {
    sub_6C6610((_DWORD *)a2, &v26, i);
    if ( v26 )
    {
      v7 = (void (__thiscall ***)(_DWORD, int))v26;
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) )
        (**v7)(v7, 1);
    }
  }
  v8 = *((_DWORD *)v4 + 9);
  if ( v8 == 2 || !v8 )
    *(_DWORD *)(a2 + 0x24) = v8;
  *(float *)(a2 + 0x28) = v4[0xA];
  *(float *)(a2 + 0x2C) = v4[0xB];
  *(float *)(a2 + 0x30) = v4[0xC];
  v27 = *((_DWORD *)v4 + 0x19);
  v9 = v27;
  if ( v27 )
    InterlockedIncrement((volatile LONG *)(v27 + 4));
  result = 0xFFFF;
  v28 = 0xFFFF;
  v29 = 0xFFFF;
  v30 = 0xFFFFFFFF;
  v31 = 0xFFFF;
  v11 = *((_DWORD *)v4 + 3) == 0;
  v32 = 1;
  v25 = 0;
  if ( !v11 )
  {
    v33 = 0;
    while ( 1 )
    {
      v12 = v33 + *((_DWORD *)v4 + 5);
      v13 = *(int **)(v12 + 4);
      if ( *(_DWORD *)v12 && v13 )
      {
        if ( !a4 )
          goto LABEL_21;
        v14 = *(_DWORD *)(a4 + 0xC);
        v15 = 0;
        if ( v14 )
        {
          v16 = (int **)(*(_DWORD *)(a4 + 0x14) + 4);
          while ( v13 != *v16 )
          {
            ++v15;
            v16 += 4;
            if ( v15 >= v14 )
              goto LABEL_33;
          }
LABEL_21:
          v17 = 0;
          if ( (*(unsigned __int16 (__thiscall **)(_DWORD))(*v13 + 0x74))(*(_DWORD *)(v12 + 4)) )
          {
            while ( 1 )
            {
              v18 = (*(int (__thiscall **)(int *, int))(*v13 + 0x80))(v13, v17);
              v19 = *v13;
              if ( v18 == *(_DWORD *)(v12 + 8) )
                break;
              if ( ++v17 >= (unsigned int)(*(unsigned __int16 (__thiscall **)(int *))(v19 + 0x74))(v13) )
                goto LABEL_32;
            }
            v20 = (*(int (__thiscall **)(int *, int))(v19 + 0x90))(v13, v17);
            v21 = *(_DWORD *)(a2 + 0x14) + 0x10 * sub_6C94E0((unsigned int *)a2, v20, &v27);
            *(_DWORD *)(v21 + 8) = *(_DWORD *)(v12 + 8);
            v22 = *(_DWORD *)(v21 + 4);
            if ( v22 != *(_DWORD *)(v12 + 4) )
            {
              if ( v22 )
              {
                if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
                  (**(void (__thiscall ***)(int, int))v22)(v22, 1);
              }
              v23 = *(_DWORD *)(v12 + 4);
              *(_DWORD *)(v21 + 4) = v23;
              if ( v23 )
                InterlockedIncrement((volatile LONG *)(v23 + 4));
            }
            *(_BYTE *)(v21 + 0xD) = *(_BYTE *)(v12 + 0xD);
          }
LABEL_32:
          v4 = this;
        }
      }
LABEL_33:
      v33 += 0x10;
      result = ++v25;
      if ( v25 >= *((_DWORD *)v4 + 3) )
      {
        v9 = v27;
        break;
      }
    }
  }
  v32 = 0xFFFFFFFF;
  if ( v9 )
  {
    result = InterlockedDecrement((volatile LONG *)(v9 + 4));
    if ( !result )
      return (**(LONG (__thiscall ***)(int, int))v9)(v9, 1);
  }
  return result;
}
