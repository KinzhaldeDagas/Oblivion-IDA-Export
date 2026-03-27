unsigned int __thiscall sub_705860(char **this, int a2, int a3)
{
  char **v3; // edi
  int v4; // ebp
  unsigned int result; // eax
  unsigned int v6; // ebx
  int v7; // esi
  float *v8; // edi
  double v9; // st7
  bool v10; // cc
  _WORD *v11; // eax
  _WORD *v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // ebp
  int v16; // ebx
  int v17; // esi
  int v18; // edi
  int v19; // edi
  int v20; // esi
  unsigned int v21; // eax
  _WORD *v23; // [esp+1Ch] [ebp-10h] BYREF
  int v24; // [esp+28h] [ebp-4h]
  unsigned int v25; // [esp+34h] [ebp+8h]
  unsigned int i; // [esp+34h] [ebp+8h]

  v3 = this;
  v4 = a2;
  sub_700A60(this, (NiObjectNET *)a2, a3);
  *(_WORD *)(a2 + 0x18) = *((_WORD *)v3 + 0xC);
  result = *((unsigned __int16 *)v3 + 0x13);
  v6 = 0;
  v25 = result;
  if ( *((_WORD *)v3 + 0x13) )
  {
    do
    {
      if ( *(_DWORD *)&v3[8][4 * v6] )
      {
        if ( v6 == 5 )
        {
          v7 = FormHeapAlloc(0x28u);
          v23 = (_WORD *)v7;
          v24 = 0;
          if ( v7 )
          {
            v8 = *((float **)v3[8] + 5);
            sub_704190((_WORD *)v7, (int)v8);
            v4 = a2;
            *(_DWORD *)v7 = &NiTexturingProperty::BumpMap::`vftable';
            *(float *)(v7 + 0x10) = v8[4];
            *(float *)(v7 + 0x14) = v8[5];
            *(float *)(v7 + 0x18) = v8[6];
            *(float *)(v7 + 0x1C) = v8[7];
            *(float *)(v7 + 0x20) = v8[8];
            v9 = v8[9];
            v3 = this;
            *(float *)(v7 + 0x24) = v9;
          }
          else
          {
            v7 = 0;
          }
          v10 = *(_WORD *)(v4 + 0x24) <= 5u;
          v23 = (_WORD *)v7;
          v24 = 0xFFFFFFFF;
          if ( v10 )
            NiTArray_SetSize((unsigned __int16 *)(v4 + 0x1C), *(unsigned __int16 *)(v4 + 0x2A) + 5);
          result = NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(v4 + 0x1C), 5u, &v23);
        }
        else
        {
          v11 = (_WORD *)FormHeapAlloc(0x10u);
          v23 = v11;
          v24 = 1;
          if ( v11 )
            v12 = sub_704190(v11, *(_DWORD *)&v3[8][4 * v6]);
          else
            v12 = 0;
          v23 = v12;
          v13 = *(unsigned __int16 *)(v4 + 0x24);
          v24 = 0xFFFFFFFF;
          if ( v6 >= v13 )
            NiTArray_SetSize((unsigned __int16 *)(v4 + 0x1C), v6 + *(unsigned __int16 *)(v4 + 0x2A));
          result = NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(v4 + 0x1C), v6, &v23);
        }
      }
      ++v6;
    }
    while ( v6 < v25 );
  }
  if ( v3[0xB] )
  {
    if ( !*(_DWORD *)(v4 + 0x2C) )
    {
      v14 = FormHeapAlloc(0x10u);
      if ( v14 )
      {
        *(_DWORD *)v14 = &NiTArray<NiTexturingProperty::ShaderMap *>::`vftable';
        *(_WORD *)(v14 + 8) = 0;
        *(_WORD *)(v14 + 0xE) = 1;
        *(_WORD *)(v14 + 0xA) = 0;
        *(_WORD *)(v14 + 0xC) = 0;
        *(_DWORD *)(v14 + 4) = 0;
      }
      else
      {
        v14 = 0;
      }
      v24 = 0xFFFFFFFF;
      *(_DWORD *)(v4 + 0x2C) = v14;
    }
    result = *((unsigned __int16 *)v3[0xB] + 5);
    v15 = 0;
    for ( i = result; v15 < result; ++v15 )
    {
      v16 = 4 * v15;
      if ( *(_DWORD *)(4 * v15 + *((_DWORD *)v3[0xB] + 1)) )
      {
        v17 = FormHeapAlloc(0x14u);
        v23 = (_WORD *)v17;
        v24 = 3;
        if ( v17 )
        {
          v18 = *(_DWORD *)(*((_DWORD *)v3[0xB] + 1) + 4 * v15);
          sub_704190((_WORD *)v17, v18);
          *(_DWORD *)v17 = &NiTexturingProperty::ShaderMap::`vftable';
          *(_DWORD *)(v17 + 0x10) = *(_DWORD *)(v18 + 0x10);
          v19 = v17;
        }
        else
        {
          v19 = 0;
        }
        v20 = *(_DWORD *)(a2 + 0x2C);
        v21 = *(unsigned __int16 *)(v20 + 8);
        v24 = 0xFFFFFFFF;
        if ( v15 >= v21 )
          NiTArray_SetSize((unsigned __int16 *)v20, v15 + *(unsigned __int16 *)(v20 + 0xE));
        if ( v15 < *(unsigned __int16 *)(v20 + 0xA) )
        {
          if ( v19 )
          {
            if ( !*(_DWORD *)(v16 + *(_DWORD *)(v20 + 4)) )
              ++*(_WORD *)(v20 + 0xC);
          }
          else if ( *(_DWORD *)(v16 + *(_DWORD *)(v20 + 4)) )
          {
            --*(_WORD *)(v20 + 0xC);
          }
        }
        else
        {
          *(_WORD *)(v20 + 0xA) = v15 + 1;
          if ( v19 )
            ++*(_WORD *)(v20 + 0xC);
        }
        *(_DWORD *)(v16 + *(_DWORD *)(v20 + 4)) = v19;
        v3 = this;
        result = i;
      }
    }
  }
  return result;
}
