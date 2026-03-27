LONG __thiscall sub_6AC420(unsigned int **this, LONG a2, float a3)
{
  int v4; // ebx
  LONG result; // eax
  int v6; // edi
  int v7; // edi
  _DWORD *v8; // esi
  int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // ecx
  int v14; // eax
  LONG (__stdcall *v15)(volatile LONG *); // esi
  int (__thiscall **v16)(int, int); // edx
  int v17; // ecx
  int v18; // [esp+14h] [ebp-24h] BYREF
  _DWORD *v19; // [esp+18h] [ebp-20h] BYREF
  int v20; // [esp+1Ch] [ebp-1Ch]
  int v21; // [esp+20h] [ebp-18h] BYREF
  __int64 v22; // [esp+24h] [ebp-14h]
  unsigned int v23; // [esp+34h] [ebp-4h]

  v4 = 0;
  v19 = 0;
  v18 = 0;
  result = a2;
  v6 = *(_DWORD *)(a2 + 0x3C);
  v23 = 0;
  v20 = v6;
  if ( v6 )
    result = InterlockedIncrement((volatile LONG *)(v6 + 4));
  LOBYTE(v23) = 1;
  if ( v6 && bSoundEnabled_Audio )
  {
    a2 = sub_6A9030(*(this + 0xC1));
    while ( a2 )
    {
      sub_7B2600(*(this + 0xC1), (unsigned int **)&a2, &v21, (unsigned int *)&v18);
      v4 = v18;
      if ( v18 == v6 )
      {
        v7 = v21;
        NiTMap_GetAt(*(this + 0xC0), v21, &v19);
        v8 = v19;
        if ( v19 )
        {
          *v19 |= 0x100u;
          NiTMap_RemoveAt(*(this + 0xC1), v7);
          if ( v4 )
            sub_6F9710(v4);
          if ( a3 >= dbl_A77188 )
          {
            v22 = (__int64)(a3 * dbl_A2FC70);
            sub_6AB8D0(this, v7, 1, v22);
          }
          else
          {
            sub_6B6AC0(v8);
          }
          v9 = (int)*(this + 0xC1);
          v10 = *(_DWORD *)(v9 + 4);
          v11 = 0;
          if ( v10 )
          {
            v12 = *(_DWORD **)(v9 + 8);
            v13 = v12;
            while ( !*v13 )
            {
              ++v11;
              ++v13;
              if ( v11 >= v10 )
                goto LABEL_17;
            }
            v14 = v12[v11];
          }
          else
          {
LABEL_17:
            v14 = 0;
          }
          a2 = v14;
        }
        v6 = v20;
      }
    }
    v15 = InterlockedDecrement;
    LOBYTE(v23) = 0;
    result = v15((volatile LONG *)(v6 + 4));
    if ( !result )
      result = (**(int (__thiscall ***)(int, int))v6)(v6, 1);
    v23 = 0xFFFFFFFF;
    if ( v4 )
    {
      result = v15((volatile LONG *)(v4 + 4));
      if ( !result )
      {
        v16 = *(int (__thiscall ***)(int, int))v4;
        v17 = v4;
        return (*v16)(v17, 1);
      }
    }
  }
  else
  {
    LOBYTE(v23) = 0;
    if ( v6 )
    {
      result = InterlockedDecrement((volatile LONG *)(v6 + 4));
      if ( !result )
      {
        v16 = *(int (__thiscall ***)(int, int))v6;
        v17 = v6;
        return (*v16)(v17, 1);
      }
    }
  }
  return result;
}
