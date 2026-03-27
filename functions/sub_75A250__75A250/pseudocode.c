int __thiscall sub_75A250(_DWORD *this, int a2, int a3)
{
  int result; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // edx
  int v6; // edi
  unsigned __int16 v7; // cx
  int v8; // eax
  int v9; // ebp
  char v10; // bl
  float *v11; // edi
  int v12; // ebx
  int v13; // ecx
  int v14; // edx
  int v15; // [esp+28h] [ebp-24h] BYREF
  _DWORD *v16; // [esp+2Ch] [ebp-20h]
  char v17[4]; // [esp+30h] [ebp-1Ch]
  int v18; // [esp+34h] [ebp-18h]
  int v19; // [esp+38h] [ebp-14h]
  int v20[4]; // [esp+3Ch] [ebp-10h] BYREF
  int v21; // [esp+54h] [ebp+8h]

  result = a3;
  v4 = *(_DWORD **)(a3 + 0x24);
  v5 = this;
  v6 = *(_DWORD *)(a3 + 0x5C);
  v16 = this;
  if ( v4 )
  {
    v7 = *(_WORD *)(a3 + 0x48);
    v8 = v5[6];
    *(float *)&v15 = 0.0;
    v9 = *(_DWORD *)(v8 + 8);
    v18 = *(_DWORD *)(v8 + 0x10);
    v10 = *(_BYTE *)(v8 + 0x14);
    result = *(_DWORD *)(v8 + 0xC);
    v17[0] = v10;
    v19 = result;
    if ( v7 )
    {
      v11 = (float *)(v6 + 0x10);
      v12 = v7;
      while ( 1 )
      {
        *(float *)&v21 = v11[0xFFFFFFFF] / *v11;
        v15 = v5[7];
        if ( *(float *)&v15 >= (double)*(float *)&v21 )
          v21 = v15;
        v15 = v5[8];
        if ( *(float *)&v15 <= (double)*(float *)&v21 )
          v21 = v15;
        *(float *)&v15 = 0.0;
        sub_6BE040((float *)v20, *(float *)&v21, v19, v18, v9, &v15, v17[0]);
        v13 = v20[1];
        v14 = v20[2];
        *v4 = v20[0];
        result = v20[3];
        v4[1] = v13;
        v4[2] = v14;
        v4[3] = result;
        v4 += 4;
        v11 += 7;
        if ( !--v12 )
          break;
        v5 = v16;
      }
    }
  }
  return result;
}
