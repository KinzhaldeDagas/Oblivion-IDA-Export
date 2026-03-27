char __thiscall sub_6C8580(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // eax
  unsigned int v4; // esi
  unsigned int *v5; // eax
  char *v6; // ebx
  unsigned int v7; // ecx
  unsigned int *v8; // eax
  int *v9; // ebx
  unsigned int v10; // eax
  int *v11; // ebx
  int v12; // ebp
  int v13; // ecx
  int v14; // ebp
  int v15; // edi
  bool v16; // cf
  int *v17; // eax
  unsigned int v18; // ebx
  int *v19; // eax
  unsigned int v20; // ebx
  char *v21; // [esp+14h] [ebp-24h]
  int *v22; // [esp+18h] [ebp-20h]
  int v24; // [esp+20h] [ebp-18h]
  int v25; // [esp+24h] [ebp-14h]

  v1 = this;
  v2 = *(this + 4);
  if ( !v2 )
    return 0;
  v4 = v2 + *(this + 3);
  v5 = (unsigned int *)FormHeapAlloc(
                         __CFADD__((unsigned __int64)v4 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v4, 4)
                       ? 0xFFFFFFFF
                       : (unsigned __int64)v4 >> 0x1C != 0
                       ? 3
                       : 0x10 * v4 + 4);
  if ( v5 )
  {
    v6 = (char *)(v5 + 1);
    *v5 = v4;
    ArrayConstructor(v5 + 1, 0x10u, v4, (int)sub_6C62E0, (void (__thiscall *)(void *))sub_6C64C0);
    v21 = v6;
  }
  else
  {
    v21 = 0;
  }
  v7 = (unsigned __int64)v4 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v4;
  v8 = (unsigned int *)FormHeapAlloc(__CFADD__(v7, 4) ? 0xFFFFFFFF : v7 + 4);
  if ( v8 )
  {
    v9 = (int *)(v8 + 1);
    *v8 = v4;
    ArrayConstructor(v8 + 1, 0x10u, v4, (int)sub_6C6370, (void (__thiscall *)(void *))sub_7016A0);
    v22 = v9;
  }
  else
  {
    v22 = 0;
  }
  v10 = 0;
  v24 = 0;
  if ( v4 )
  {
    v11 = v22;
    v12 = 0;
    v13 = v21 - (char *)v22;
    v25 = 0;
    while ( 1 )
    {
      if ( v10 >= v1[3] )
      {
        v14 = v1[0x19];
        v15 = *v11;
        if ( *v11 != v14 )
        {
          if ( v15 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
              (**(void (__thiscall ***)(int, int))v15)(v15, 1);
          }
          *v11 = v14;
          if ( v14 )
            InterlockedIncrement((volatile LONG *)(v14 + 4));
        }
        v1 = this;
      }
      else
      {
        sub_6C6870((int *)((char *)v11 + v13), (int *)(v12 + v1[5]));
        sub_6C67F0(v11, (int *)(v12 + v1[6]));
      }
      v10 = v24 + 1;
      v12 = v25 + 0x10;
      v11 += 4;
      v16 = ++v24 < v4;
      v25 += 0x10;
      if ( !v16 )
        break;
      v13 = v21 - (char *)v22;
    }
  }
  v17 = (int *)v1[5];
  if ( v17 )
  {
    v18 = (unsigned int)(v17 + 0xFFFFFFFF);
    _LN21(v17, 0x10u, v17[0xFFFFFFFF], (void (__thiscall *)(void *))sub_6C64C0);
    FormHeapFree(v18);
  }
  v19 = (int *)v1[6];
  if ( v19 )
  {
    v20 = (unsigned int)(v19 + 0xFFFFFFFF);
    _LN21(v19, 0x10u, v19[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v20);
  }
  v1[5] = v21;
  v1[3] = v4;
  v1[6] = v22;
  return 1;
}
