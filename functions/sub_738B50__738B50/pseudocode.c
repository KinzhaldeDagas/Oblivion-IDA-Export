char __thiscall sub_738B50(NiTriBasedGeomData *this, int a2)
{
  _DWORD *v4; // edx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ebp
  float *v9; // edx
  float *v10; // esi
  int v11; // ebx
  float *v12; // eax
  int v13; // edi
  float *v14; // ecx
  int v15; // ebx
  float *v16; // ebp
  unsigned int v17; // edi
  int v18; // eax
  float *v19; // esi
  bool v20; // cf
  float *v21; // [esp+8h] [ebp-34h]
  _DWORD *v22; // [esp+Ch] [ebp-30h]
  int v23; // [esp+10h] [ebp-2Ch]
  int v24; // [esp+14h] [ebp-28h]
  int i; // [esp+18h] [ebp-24h]
  int v26; // [esp+1Ch] [ebp-20h]
  int v27; // [esp+20h] [ebp-1Ch]
  unsigned int v28; // [esp+24h] [ebp-18h]
  int v29; // [esp+28h] [ebp-14h]
  float *v30; // [esp+2Ch] [ebp-10h]
  unsigned int v31; // [esp+34h] [ebp-8h]
  unsigned int v32; // [esp+38h] [ebp-4h]
  float *v33; // [esp+40h] [ebp+4h]

  if ( !sub_71FDE0(this, a2) )
    return 0;
  if ( *(_BYTE *)(a2 + 0x58) != *((_BYTE *)this + 0x58) )
    return 0;
  v32 = *(unsigned __int16 *)(a2 + 0x6C);
  if ( v32 != *((unsigned __int16 *)this + 0x36) || *(_WORD *)(a2 + 0x6A) != *((_WORD *)this + 0x35) )
    return 0;
  v24 = 0;
  if ( !*(_WORD *)(a2 + 0x6C) )
    return 1;
  v4 = *((_DWORD **)this + 0x19);
  v5 = *(_DWORD *)(a2 + 0x64) - (_DWORD)v4;
  v22 = v4;
  for ( i = v5; ; v5 = i )
  {
    v6 = *(_DWORD *)((char *)v4 + v5);
    v7 = *v4;
    if ( v6 )
      break;
    if ( v7 )
      return 0;
LABEL_25:
    ++v4;
    v20 = ++v24 < v32;
    v22 = v4;
    if ( !v20 )
      return 1;
  }
  if ( !v7 )
    return 0;
  v8 = *(unsigned __int16 *)(v6 + 4);
  v31 = v8;
  v28 = *(unsigned __int16 *)(v6 + 6);
  if ( v8 != *(unsigned __int16 *)(v7 + 4) || *(unsigned __int16 *)(v6 + 6) != *(unsigned __int16 *)(v7 + 6) )
    return 0;
  v9 = *(float **)(v6 + 8);
  v10 = *(float **)(v6 + 0xC);
  v11 = *(_DWORD *)(v7 + 0xC);
  v12 = *(float **)(v6 + 0x10);
  v30 = v12;
  v29 = *(_DWORD *)(v7 + 0x10);
  v23 = 0;
  if ( !v8 )
  {
LABEL_24:
    v4 = v22;
    goto LABEL_25;
  }
  v13 = *(_DWORD *)(v7 + 8) - (_DWORD)v9;
  v14 = v9;
  v15 = v11 - (_DWORD)v10;
  v21 = v10;
  v33 = v9;
  v16 = v12;
  v26 = v13;
  v27 = v15;
  while ( !sub_4B9D10(v14, (float *)((char *)v14 + v13)) && !sub_632310(v21, (float *)((char *)v21 + v15)) )
  {
    v17 = 0;
    if ( v28 )
    {
      v18 = v29 - (_DWORD)v30;
      v19 = v16;
      while ( !sub_4B9D10(v19, (float *)((char *)v19 + v18)) )
      {
        ++v17;
        v19 += 2;
        if ( v17 >= v28 )
          goto LABEL_23;
        v18 = v29 - (_DWORD)v30;
      }
      return 0;
    }
LABEL_23:
    v33 += 2;
    v21 += 4;
    v16 += 2 * v28;
    if ( ++v23 >= v31 )
      goto LABEL_24;
    v14 = v33;
    v13 = v26;
    v15 = v27;
  }
  return 0;
}
