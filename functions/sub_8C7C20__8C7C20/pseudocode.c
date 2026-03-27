int __thiscall sub_8C7C20(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // ebx
  int v4; // eax
  bool v5; // cf
  int v6; // edi
  int v7; // ebp
  unsigned int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int *v13; // ebx
  int v14; // edi
  char v16; // [esp+17h] [ebp-21h] BYREF
  unsigned int v17; // [esp+18h] [ebp-20h]
  _DWORD *v18; // [esp+1Ch] [ebp-1Ch]
  int v19; // [esp+20h] [ebp-18h]
  int v20[2]; // [esp+24h] [ebp-14h] BYREF
  unsigned int v21; // [esp+34h] [ebp-4h]

  v2 = this;
  v18 = this;
  v3 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v16);
  v19 = v3;
  if ( v3 )
  {
    v4 = sub_7124D0(a2);
    v5 = a2[1] < 2u;
    v6 = v4;
    v17 = v4;
    if ( v5 )
    {
      sub_8C69C0((int **)(v3 + 8), v4);
      if ( v6 )
      {
        v20[0] = 0;
        v20[1] = 0;
        v7 = v6;
        do
        {
          v8 = *(_DWORD *)(v3 + 0x14);
          v5 = v8 < *(_DWORD *)(v3 + 0x10);
          v21 = 0;
          if ( !v5 )
            sub_8C69C0((int **)(v3 + 8), v8 + *(_DWORD *)(v3 + 0x1C));
          sub_8C68D0((_DWORD *)(v3 + 8), v8, v20);
          --v7;
          v21 = 0xFFFFFFFF;
        }
        while ( v7 );
        v6 = v17;
      }
    }
    v9 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        v10 = sub_7124A0(a2);
        v11 = *(_DWORD *)(v3 + 0xC);
        v12 = *(_DWORD *)(v11 + 8 * v9);
        v13 = (int *)(v11 + 8 * v9);
        v14 = v10;
        if ( v12 != v10 )
        {
          if ( v12 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
              (**(void (__thiscall ***)(int, int))v12)(v12, 1);
          }
          *v13 = v14;
          if ( v14 )
            InterlockedIncrement((volatile LONG *)(v14 + 4));
        }
        if ( ++v9 >= v17 )
          break;
        v3 = v19;
      }
    }
    v2 = v18;
  }
  return sub_8A2600(v2, (int)a2);
}
