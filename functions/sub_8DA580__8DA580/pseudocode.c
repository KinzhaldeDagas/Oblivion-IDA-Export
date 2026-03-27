int __thiscall sub_8DA580(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // edx
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int *v14; // eax
  int result; // eax
  int v16; // edx
  int v17; // edi
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  char *v21; // esi
  const char *v22; // edi
  const char *v23; // ebp
  char *v24; // ebx
  const char *v25; // eax
  bool v26; // zf
  size_t v27; // [esp-28h] [ebp-45Ch]
  int v28; // [esp+10h] [ebp-424h]
  int v29; // [esp+14h] [ebp-420h]
  int v30; // [esp+18h] [ebp-41Ch]
  int v31; // [esp+1Ch] [ebp-418h]
  int v33; // [esp+24h] [ebp-410h]
  int v34; // [esp+28h] [ebp-40Ch]
  int v35; // [esp+2Ch] [ebp-408h]
  char Dest[1024]; // [esp+30h] [ebp-404h] BYREF

  v9 = this;
  *(_BYTE *)(this + 0x1BF4) = 1;
  v10 = 0;
  if ( *(int *)(this + 0x1C08) > 0 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v9 + 0x1C04);
      v12 = *(_DWORD *)(v11 + 8 * v10 + 4);
      v13 = a4;
      v14 = (int *)(v11 + 8 * v10);
      if ( v12 == a4 )
        goto LABEL_5;
      if ( v12 == a5 )
      {
        if ( v12 == a4 )
LABEL_5:
          sub_8DA580(v9, a2, a3, *v14, a5, a6, a7, a8, a9 + 1);
        else
          sub_8DA580(v9, a2, a3, a4, *v14, a6, a7, a8, a9 + 1);
        v9 = this;
      }
      if ( ++v10 >= *(_DWORD *)(v9 + 0x1C08) )
        goto LABEL_11;
    }
  }
  v13 = a4;
LABEL_11:
  result = a5;
  v31 = a5 + 1;
  v16 = a9;
  v17 = v13;
  v33 = a5;
  v18 = v13 + 1;
  v28 = a9;
  if ( v13 == 0xFFFFFFFF )
  {
    v17 = 1;
    v18 = 0x20;
    v28 = a9 + 1;
    v16 = a9 + 1;
  }
  if ( a5 == 0xFFFFFFFF )
  {
    ++v16;
    v33 = 1;
    v31 = 0x20;
    v28 = v16;
  }
  if ( v17 < v18 )
  {
    v30 = 0x20 * v17 + a2;
    v19 = v33;
    v29 = v33 + 0x20 * v17 + a8 + 2 * (v33 + 0x20 * v17) + 1;
    v35 = v18 - v17;
    do
    {
      v20 = v19;
      v34 = v19;
      if ( v19 < v31 )
      {
        v21 = (char *)v29;
        do
        {
          *(_BYTE *)(v30 + v20) = a3;
          if ( a8 )
          {
            if ( *(_BYTE *)(this + 0x1C00) )
            {
              if ( v16 > v21[1] )
              {
                v22 = sub_90BA40(v21[0xFFFFFFFF]);
                v23 = sub_90BA40(*v21);
                v24 = (char *)sub_90BA40(v13);
                v25 = sub_90BA40(a5);
                HIDWORD(v27) = "Agent handling types <%s-%s> would override more specialized agent <%s-%s>\n"
                               "Maybe the order of registering your collision agent is wrong, make sure you register your"
                               " alternate type agents first";
                LODWORD(v27) = 0x3E8;
                sub_8B1730(Dest, v27, v24, v25, v22, v23);
                v13 = a4;
                v16 = v28;
                v20 = v34;
              }
            }
            v21[0xFFFFFFFF] = a6;
            v21[1] = v16;
            *v21 = a7;
          }
          ++v20;
          v21 += 3;
          v34 = v20;
        }
        while ( v20 < v31 );
        v19 = v33;
      }
      result = v35 - 1;
      v26 = v35 == 1;
      v29 += 0x60;
      v30 += 0x20;
      --v35;
    }
    while ( !v26 );
  }
  return result;
}
