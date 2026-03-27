_DWORD *__thiscall TESRace_GetFaceGenHeadParameters(int *this, int a2, int a3)
{
  int v4; // ebp
  int v5; // ebx
  unsigned int v6; // eax
  int *v7; // eax
  unsigned int v8; // esi
  int v9; // ebp
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // edi
  unsigned int v14; // esi
  int v15; // ebp
  int *v16; // ebp
  unsigned int v17; // edi
  unsigned int v18; // eax
  void (__thiscall ***v19)(_DWORD, int); // esi
  bool v20; // zf
  _DWORD *result; // eax
  int *v22; // esi
  int v23; // edi
  char *v24; // eax
  unsigned int v25; // [esp+14h] [ebp-18h]
  int v27; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v28; // [esp+28h] [ebp-4h]

  if ( a2 )
  {
    v4 = a3;
    sub_5221C0((int *)a2, (_DWORD *)a3);
    *(_DWORD *)(a3 + 0x60) = *(_DWORD *)(a2 + 0x1C8);
    *(float *)(a3 + 0x68) = *(float *)(a2 + 0x1CC);
    *(_DWORD *)(a3 + 0x64) = *(_DWORD *)(a2 + 0x1E8);
    *(_DWORD *)(a3 + 0x6C) = *(_DWORD *)(a2 + 0x1D0);
    *(_DWORD *)(a3 + 0x70) = TESActorBase_IsFemale((_BYTE *)a2);
    v25 = 0;
    v5 = a3 + 0x84;
    v6 = sub_52BC50((int)this, 0);
  }
  else
  {
    v7 = this + 0xA7;
    if ( this == (int *)0xFFFFFD64 )
      v7 = (int *)sub_5538D0();
    sub_5528F0(v7, a3);
    v4 = a3;
    v25 = 0;
    v5 = a3 + 0x84;
    v6 = sub_52BC50((int)this, 0);
  }
  while ( 1 )
  {
    v8 = *(unsigned __int16 *)(v4 + 0x7E);
    v9 = v4 + 0x74;
    v10 = v6;
    if ( v8 >= *(unsigned __int16 *)(v9 + 8) )
      NiTArray_SetSize((unsigned __int16 *)v9, v8 + *(unsigned __int16 *)(v9 + 0xE));
    if ( v8 < *(unsigned __int16 *)(v9 + 0xA) )
    {
      if ( v10 )
      {
        if ( !*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4 * v8) )
          ++*(_WORD *)(v9 + 0xC);
      }
      else if ( *(_DWORD *)(*(_DWORD *)(v9 + 4) + 4 * v8) )
      {
        --*(_WORD *)(v9 + 0xC);
      }
    }
    else
    {
      *(_WORD *)(v9 + 0xA) = v8 + 1;
      if ( v10 )
        ++*(_WORD *)(v9 + 0xC);
    }
    *(_DWORD *)(*(_DWORD *)(v9 + 4) + 4 * v8) = v10;
    v11 = sub_52BD00((int)this, v25);
    v12 = *(unsigned __int16 *)(v5 + 0xA);
    v13 = v11;
    if ( v12 >= *(unsigned __int16 *)(v5 + 8) )
      NiTArray_SetSize((unsigned __int16 *)v5, v12 + *(unsigned __int16 *)(v5 + 0xE));
    if ( v12 < *(unsigned __int16 *)(v5 + 0xA) )
    {
      if ( v13 )
      {
        if ( !*(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v12) )
          ++*(_WORD *)(v5 + 0xC);
      }
      else if ( *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v12) )
      {
        --*(_WORD *)(v5 + 0xC);
      }
    }
    else
    {
      *(_WORD *)(v5 + 0xA) = v12 + 1;
      if ( v13 )
        ++*(_WORD *)(v5 + 0xC);
    }
    *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v12) = v13;
    v14 = *(unsigned __int16 *)(a3 + 0x9E);
    v15 = *(_DWORD *)(4 * v25 + 0xB10CA8);
    if ( v14 >= *(unsigned __int16 *)(a3 + 0x9C) )
      NiTArray_SetSize((unsigned __int16 *)(a3 + 0x94), v14 + *(unsigned __int16 *)(a3 + 0xA2));
    if ( v14 < *(unsigned __int16 *)(a3 + 0x9E) )
    {
      if ( v15 )
      {
        if ( !*(_DWORD *)(*(_DWORD *)(a3 + 0x98) + 4 * v14) )
          ++*(_WORD *)(a3 + 0xA0);
      }
      else if ( *(_DWORD *)(*(_DWORD *)(a3 + 0x98) + 4 * v14) )
      {
        --*(_WORD *)(a3 + 0xA0);
      }
    }
    else
    {
      *(_WORD *)(a3 + 0x9E) = v14 + 1;
      if ( v15 )
        ++*(_WORD *)(a3 + 0xA0);
    }
    *(_DWORD *)(*(_DWORD *)(a3 + 0x98) + 4 * v14) = v15;
    if ( a2 )
    {
      if ( byte_B10D3C )
      {
        v16 = sub_524100((TESForm *)a2, &v27, v25);
        v17 = *(unsigned __int16 *)(a3 + 0xAE);
        v18 = *(unsigned __int16 *)(a3 + 0xAC);
        v28 = 0;
        if ( v17 >= v18 )
          sub_523B10((unsigned __int16 *)(a3 + 0xA4), v17 + *(unsigned __int16 *)(a3 + 0xB2));
        sub_5254D0((_DWORD *)(a3 + 0xA4), v17, v16);
        v28 = 0xFFFFFFFF;
        if ( v27 )
        {
          v19 = (void (__thiscall ***)(_DWORD, int))v27;
          if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) )
            (**v19)(v19, 1);
        }
      }
    }
    if ( (int)++v25 >= 9 )
      break;
    v4 = a3;
    v6 = sub_52BC50((int)this, v25);
  }
  v20 = *(_DWORD *)(a3 + 0x60) == 0;
  *(_BYTE *)(a3 + 0xB4) = byte_B10D3C;
  *(_DWORD *)(a3 + 0xC0) = dword_B120B0;
  result = this + 0x62;
  *(_DWORD *)(a3 + 0xB8) = this + 0x62;
  *(_DWORD *)(a3 + 0xBC) = this + 0x68;
  if ( v20 )
  {
    result = this + 0x23;
    if ( this != (int *)0xFFFFFF74 && (*(this + 0x24) || *result) )
    {
      result = (_DWORD *)*result;
      *(_DWORD *)(a3 + 0x60) = result;
    }
  }
  if ( !*(_DWORD *)(a3 + 0x6C) )
  {
    result = this + 0x2A;
    if ( this != (int *)0xFFFFFF58 && (*(this + 0x2B) || *result) )
    {
      *(_DWORD *)(a3 + 0x6C) = *result;
    }
    else
    {
      v22 = (int *)(TESDataHandler + 0x3C);
      if ( TESDataHandler != 0xFFFFFFC4 )
      {
        while ( 1 )
        {
          v23 = *v22;
          if ( *v22 )
          {
            v24 = *(char **)(v23 + 0x28);
            if ( !v24 )
              v24 = EmptyString;
            result = (_DWORD *)_strcmp(v24, "Characters\\Eyes\\EyeDefault.dds");
            if ( !result )
              break;
          }
          v22 = (int *)v22[1];
          if ( !v22 )
            return result;
        }
        *(_DWORD *)(a3 + 0x6C) = v23;
      }
    }
  }
  return result;
}
