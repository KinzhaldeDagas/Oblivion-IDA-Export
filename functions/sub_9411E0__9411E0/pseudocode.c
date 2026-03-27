_DWORD *__thiscall sub_9411E0(int *this, _DWORD *a2, _DWORD *a3, int a4, int a5, const char *a6)
{
  _DWORD *v6; // ebp
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  const char *v10; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // edx
  const char *v14; // eax
  bool v15; // zf
  int v16; // ecx
  int v17; // edi
  int v18; // ebp
  int v19; // ecx
  int v20; // edi
  _DWORD *v21; // eax
  int v22; // edi
  char **v23; // esi
  int v25; // [esp-4h] [ebp-74h]
  _DWORD *v26; // [esp+10h] [ebp-60h] BYREF
  _DWORD v27[4]; // [esp+14h] [ebp-5Ch] BYREF
  _DWORD *v28; // [esp+24h] [ebp-4Ch] BYREF
  _DWORD *v29; // [esp+28h] [ebp-48h]
  const char *v30; // [esp+34h] [ebp-3Ch]
  _DWORD v31[3]; // [esp+3Ch] [ebp-34h] BYREF
  int v32; // [esp+48h] [ebp-28h]
  int v33; // [esp+4Ch] [ebp-24h]
  unsigned int v34; // [esp+50h] [ebp-20h]
  int v35; // [esp+54h] [ebp-1Ch]
  int v36; // [esp+58h] [ebp-18h]
  unsigned int v37; // [esp+5Ch] [ebp-14h]
  int v38; // [esp+60h] [ebp-10h]
  int v39; // [esp+64h] [ebp-Ch]
  unsigned int v40; // [esp+68h] [ebp-8h]
  int v41; // [esp+6Ch] [ebp-4h]

  v6 = a2;
  v8 = a3;
  v9 = a2;
  v26 = a2;
  a2 = a3;
  if ( a5 )
  {
    (*(void (__thiscall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)a5 + 4))(a5, &v26, &a2);
    v9 = v26;
  }
  if ( v9 )
  {
    v28 = v9;
    v29 = a2;
    v10 = sub_940F60(this, (unsigned int)v6, v8, a6);
    v25 = *(this + 3);
    v30 = v10;
    sub_8B0E80((char **)this + 5, (unsigned int)v6, v25);
    if ( *(this + 3) == (*(this + 4) & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)this + 2, 0x18);
    v11 = (_DWORD *)(*(this + 2) + 0x18 * *(this + 3));
    v12 = v29;
    *v11 = v28;
    v13 = a3;
    v11[1] = v12;
    v14 = v30;
    v11[2] = v6;
    v11[3] = v13;
    v11[4] = v14;
    v11[5] = 0xFFFFFFFF;
    v15 = a2 == (_DWORD *)&unk_BA8788;
    v16 = a2 == (_DWORD *)&unk_BA8788;
    ++*(this + 3);
    v17 = *(this + 0x13);
    *(this + 0x14) += v16;
    *(this + 0x13) = !v15 + v17;
    sub_90BB90(&a3);
    sub_942D70((int)&v28, 0, &a3);
    v31[0] = 0;
    v31[1] = 0;
    v31[2] = 0x80000000;
    v32 = 0;
    v33 = 0;
    v34 = 0x80000000;
    v35 = 0;
    v36 = 0;
    v37 = 0x80000000;
    v38 = 0;
    v39 = 0;
    v40 = 0x80000000;
    v41 = 0;
    sub_953140(v27);
    sub_942D10(&v28, (int)v27, (int)v26, (unsigned int)a2, (int)v31);
    v18 = 0;
    if ( v33 > 0 )
    {
      v19 = v32;
      v20 = 0;
      do
      {
        v21 = *(_DWORD **)(v20 + v19 + 8);
        if ( v21 )
        {
          sub_941070(this, *(_DWORD **)(v20 + v19 + 4), v21, a4, a5, a6);
          v19 = v32;
        }
        ++v18;
        v20 += 0xC;
      }
      while ( v18 < v33 );
    }
    v22 = 0;
    if ( v36 > 0 )
    {
      v23 = (char **)(this + 0xE);
      do
        sub_9429D0(v23, *(const char **)(v35 + 8 * v22++ + 4), 0xFFFFFFFF);
      while ( v22 < v36 );
    }
    v27[0] = &hkBaseObject::`vftable';
    sub_941400(v31);
    sub_942E10(&v28);
    return a2;
  }
  else
  {
    sub_8B0E80((char **)this + 5, (unsigned int)v6, 0xFFFFFFFF);
    return a2;
  }
}
