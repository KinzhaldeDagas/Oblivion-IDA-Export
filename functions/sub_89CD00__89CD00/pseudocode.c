void __thiscall sub_89CD00(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  _DWORD *v7; // ecx
  _DWORD *v8; // edx
  char *v9; // ebp
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // edx
  char *v13; // edi
  _DWORD *v14; // eax
  int v15; // ebp
  _DWORD *v16; // esi
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // ecx
  int v20; // esi
  _DWORD *v21; // edx
  char *v22; // ebp
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // eax
  int (__thiscall ***v26)(_DWORD, int *, int, int); // eax
  bool v27; // zf
  _DWORD *v28; // ecx
  _DWORD *v29; // eax
  int v30; // ecx
  _DWORD *v31; // ecx
  _DWORD *v32; // eax
  int v33; // ecx
  _DWORD *v34; // ecx
  _DWORD *v35; // eax
  int v36; // ecx
  int v37; // [esp+Ch] [ebp-44h]
  int v38; // [esp+10h] [ebp-40h]
  _DWORD v39[2]; // [esp+14h] [ebp-3Ch] BYREF
  int v40; // [esp+1Ch] [ebp-34h]
  _DWORD *v41; // [esp+20h] [ebp-30h] BYREF
  int v42; // [esp+24h] [ebp-2Ch]
  signed int v43; // [esp+28h] [ebp-28h]
  _DWORD *v44; // [esp+2Ch] [ebp-24h]
  _DWORD *v45; // [esp+30h] [ebp-20h] BYREF
  int v46; // [esp+34h] [ebp-1Ch]
  signed int v47; // [esp+38h] [ebp-18h]
  _DWORD *v48; // [esp+3Ch] [ebp-14h]
  _DWORD *v49; // [esp+40h] [ebp-10h] BYREF
  int v50; // [esp+44h] [ebp-Ch]
  signed int v51; // [esp+48h] [ebp-8h]
  _DWORD *v52; // [esp+4Ch] [ebp-4h]

  v4 = *(this + 0x22);
  if ( v4 + *(this + 0x23) )
  {
    v5 = *(this + 0x20);
    LOBYTE(v39[0]) = 0xF;
    v39[1] = a2;
    LOWORD(v40) = a3;
    sub_8D8830(v5, (int)v39);
  }
  else
  {
    v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    *(this + 0x22) = v4 + 1;
    v7 = *(_DWORD **)(v6 + 0x19C);
    v49 = 0;
    v50 = 0;
    v51 = 0x80000000;
    v38 = v6;
    if ( !v7 )
      v7 = (_DWORD *)dword_BA7D9C;
    v8 = (_DWORD *)v7[8];
    v9 = (char *)v8 + ((4 * a3 + 0x10) & 0xFFFFFFF0);
    if ( (unsigned int)v9 > v7[0xB] )
    {
      v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v7 + 0xC))(v7, (4 * a3 + 0x10) & 0xFFFFFFF0);
    }
    else
    {
      v7[8] = v9;
      v10 = v8;
    }
    v11 = *(_DWORD **)(v6 + 0x19C);
    v49 = v10;
    v52 = v10;
    v51 = a3 | 0x80000000;
    v45 = 0;
    v46 = 0;
    v47 = 0x80000000;
    if ( !v11 )
      v11 = (_DWORD *)dword_BA7D9C;
    v12 = (_DWORD *)v11[8];
    v13 = (char *)v12 + ((0x20 * a3 + 0x10) & 0xFFFFFFF0);
    if ( (unsigned int)v13 > v11[0xB] )
    {
      v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v11 + 0xC))(v11, (0x20 * a3 + 0x10) & 0xFFFFFFF0);
    }
    else
    {
      v11[8] = v13;
      v14 = v12;
    }
    v47 = a3 | 0x80000000;
    v15 = 0;
    v45 = v14;
    v48 = v14;
    v46 = a3;
    v50 = a3;
    if ( a3 > 0 )
    {
      v37 = 0;
      do
      {
        v16 = *(_DWORD **)(a2 + 4 * v15);
        if ( !v16[7] )
          v16[7] = (*(int (__thiscall **)(_DWORD))(*v16 + 0xC))(*(_DWORD *)(a2 + 4 * v15));
        v16[2] = this;
        v49[v15] = v16 + 0xA;
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v16 + 0x14))(v16, &v45[v37]);
        sub_8BC720(v16);
        if ( *(this + 0x2F) == (*(this + 0x30) & 0x3FFFFFFF) )
          sub_8A6EE0((int)(this + 0x2E), 4);
        *(_DWORD *)(*(this + 0x2E) + 4 * *(this + 0x2F)) = v16;
        v17 = *(this + 0x2F) + 1;
        *(this + 0x2F) = v17;
        v18 = sub_8DC530(v17, (int)this, (int)v16);
        sub_8DE590(v18, (int)v16);
        ++v15;
        v37 += 8;
      }
      while ( v15 < a3 );
    }
    v19 = *(_DWORD **)(v38 + 0x19C);
    v20 = *(this + 0xA9);
    v41 = 0;
    v42 = 0;
    v43 = 0x80000000;
    if ( !v19 )
      v19 = (_DWORD *)dword_BA7D9C;
    v21 = (_DWORD *)v19[8];
    v22 = (char *)v21 + ((8 * v20 + 0x10) & 0xFFFFFFF0);
    if ( (unsigned int)v22 > v19[0xB] )
    {
      v23 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v19 + 0xC))(v19, (8 * v20 + 0x10) & 0xFFFFFFF0);
    }
    else
    {
      v19[8] = v22;
      v23 = v21;
    }
    v24 = *(this + 0x19);
    v41 = v23;
    v43 = v20 | 0x80000000;
    v44 = v23;
    (*(void (__thiscall **)(int, _DWORD **, _DWORD **, _DWORD **))(*(_DWORD *)v24 + 0xC))(v24, &v49, &v45, &v41);
    v25 = *(this + 0x1E);
    if ( v25 )
      v26 = (int (__thiscall ***)(_DWORD, int *, int, int))(v25 + 8);
    else
      v26 = 0;
    sub_8D8370((_DWORD **)*(this + 0x1A), v41, v42, v26);
    v27 = (*(this + 0x22))-- == 1;
    if ( v27 )
    {
      if ( *(this + 0x21) )
      {
        if ( !*((_BYTE *)this + 0x90) )
          sub_899210((int)this);
      }
    }
    v28 = *(_DWORD **)(v38 + 0x19C);
    v29 = v44;
    if ( !v28 )
      v28 = (_DWORD *)dword_BA7D9C;
    v27 = v44 == (_DWORD *)v28[0xA];
    v28[8] = v44;
    if ( v27 )
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v28 + 0x10))(v28, v29);
    if ( v43 >= 0 )
    {
      v30 = *(_DWORD *)(v38 + 0x19C);
      if ( !v30 )
        v30 = dword_BA7D9C;
      sub_8A75D0(v30, v41, 8 * v43, 0x14);
    }
    v31 = *(_DWORD **)(v38 + 0x19C);
    v32 = v48;
    if ( !v31 )
      v31 = (_DWORD *)dword_BA7D9C;
    v27 = v48 == (_DWORD *)v31[0xA];
    v31[8] = v48;
    if ( v27 )
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v31 + 0x10))(v31, v32);
    if ( v47 >= 0 )
    {
      v33 = *(_DWORD *)(v38 + 0x19C);
      if ( !v33 )
        v33 = dword_BA7D9C;
      sub_8A75D0(v33, v45, 0x20 * v47, 0x14);
    }
    v34 = *(_DWORD **)(v38 + 0x19C);
    v35 = v52;
    if ( !v34 )
      v34 = (_DWORD *)dword_BA7D9C;
    v27 = v52 == (_DWORD *)v34[0xA];
    v34[8] = v52;
    if ( v27 )
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v34 + 0x10))(v34, v35);
    if ( v51 >= 0 )
    {
      v36 = *(_DWORD *)(v38 + 0x19C);
      if ( !v36 )
        v36 = dword_BA7D9C;
      sub_8A75D0(v36, v49, 4 * v51, 0x14);
    }
  }
}
