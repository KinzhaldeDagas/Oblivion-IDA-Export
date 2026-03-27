NiObject *__thiscall sub_6C78B0(_DWORD *this)
{
  _DWORD *v1; // edi
  NiObject *result; // eax
  int v3; // ebx
  _WORD *v4; // eax
  unsigned __int16 v5; // cx
  const char *v6; // edx
  unsigned __int16 v7; // cx
  const char *v8; // edi
  unsigned __int16 v9; // cx
  const char *v10; // esi
  unsigned __int16 v11; // cx
  const char *v12; // ebp
  unsigned __int16 v13; // cx
  const char *v14; // ebx
  unsigned __int16 v15; // bp
  unsigned __int16 v16; // bx
  const char ***v17; // edi
  const char **v18; // eax
  const char **v19; // esi
  _WORD *v20; // eax
  bool v21; // cf
  int v22; // esi
  const char **v23; // [esp+8h] [ebp-20h]
  int v24; // [esp+Ch] [ebp-1Ch]
  unsigned __int16 v26; // [esp+14h] [ebp-14h]
  unsigned __int16 v27; // [esp+18h] [ebp-10h]
  unsigned __int16 v28; // [esp+1Ch] [ebp-Ch]
  int v29; // [esp+20h] [ebp-8h]
  NiObject *v30; // [esp+24h] [ebp-4h]

  v1 = this;
  result = sub_6C6400();
  v3 = (int)result;
  v30 = result;
  if ( (NiObject *)v1[0x19] != result )
  {
    result = 0;
    v29 = 0;
    if ( v1[3] )
    {
      v24 = 0;
      do
      {
        v23 = (const char **)sub_6C6400();
        v4 = (_WORD *)(v24 + v1[6]);
        v5 = v4[2];
        if ( v5 == 0xFFFF )
          v6 = 0;
        else
          v6 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v5);
        v7 = v4[3];
        if ( v7 == 0xFFFF )
          v8 = 0;
        else
          v8 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v7);
        v9 = v4[4];
        if ( v9 == 0xFFFF )
          v10 = 0;
        else
          v10 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v9);
        v11 = v4[5];
        if ( v11 == 0xFFFF )
          v12 = 0;
        else
          v12 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v11);
        v13 = v4[6];
        if ( v13 == 0xFFFF )
          v14 = 0;
        else
          v14 = (const char *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + v13);
        if ( v6 )
          v26 = (unsigned __int16)sub_6C6270(v23, v6);
        else
          v26 = 0xFFFF;
        if ( v8 )
          v27 = (unsigned __int16)sub_6C6270(v23, v8);
        else
          v27 = 0xFFFF;
        if ( v10 )
          v28 = (unsigned __int16)sub_6C6270(v23, v10);
        else
          v28 = 0xFFFF;
        if ( v12 )
          v15 = (unsigned __int16)sub_6C6270(v23, v12);
        else
          v15 = 0xFFFF;
        if ( v14 )
          v16 = (unsigned __int16)sub_6C6270(v23, v14);
        else
          v16 = 0xFFFF;
        v17 = (const char ***)(v24 + *(this + 6));
        v18 = v23;
        v19 = *v17;
        if ( *v17 != v23 )
        {
          if ( v19 )
          {
            if ( !InterlockedDecrement((volatile LONG *)v19 + 1) )
              (*(void (__thiscall **)(const char **, int))*v19)(v19, 1);
            v18 = v23;
          }
          *v17 = v18;
          if ( v18 )
            InterlockedIncrement((volatile LONG *)v18 + 1);
        }
        v20 = (_WORD *)(v24 + *(this + 6));
        v20[2] = v26;
        v20[3] = v27;
        v20[4] = v28;
        v20[5] = v15;
        v20[6] = v16;
        result = (NiObject *)(v29 + 1);
        v21 = (unsigned int)++v29 < *(this + 3);
        v24 += 0x10;
        v1 = this;
      }
      while ( v21 );
      v3 = (int)v30;
    }
    v22 = v1[0x19];
    if ( v22 != v3 )
    {
      if ( v22 )
      {
        result = (NiObject *)InterlockedDecrement((volatile LONG *)(v22 + 4));
        if ( !result )
          result = (NiObject *)(**(int (__thiscall ***)(int, int))v22)(v22, 1);
      }
      v1[0x19] = v3;
      if ( v3 )
        return (NiObject *)InterlockedIncrement((volatile LONG *)(v3 + 4));
    }
  }
  return result;
}
