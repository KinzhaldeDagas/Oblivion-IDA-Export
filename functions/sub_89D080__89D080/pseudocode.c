void __thiscall sub_89D080(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // ebp
  _DWORD *v10; // edx
  char *v11; // edi
  _DWORD *v12; // eax
  int v13; // edi
  int v14; // eax
  _DWORD *v15; // ecx
  int v16; // edi
  _DWORD *v17; // eax
  char *v18; // ebp
  int v19; // ecx
  int v20; // edi
  _DWORD *v21; // eax
  _DWORD *v22; // edx
  bool v23; // zf
  int v24; // ecx
  int v25; // ebp
  int (__stdcall ***v26)(signed int); // edi
  signed int v27; // eax
  int v28; // ecx
  int (__stdcall ****v29)(signed int); // edx
  int v30; // ecx
  _DWORD *v31; // ecx
  _DWORD *v32; // eax
  int v33; // ecx
  int v34; // [esp+14h] [ebp-24h]
  _DWORD *v35; // [esp+18h] [ebp-20h] BYREF
  int v36; // [esp+1Ch] [ebp-1Ch]
  signed int v37; // [esp+20h] [ebp-18h]
  _DWORD *v38; // [esp+24h] [ebp-14h]
  _DWORD *v39; // [esp+28h] [ebp-10h] BYREF
  int v40; // [esp+2Ch] [ebp-Ch]
  signed int v41; // [esp+30h] [ebp-8h]
  _DWORD *v42; // [esp+34h] [ebp-4h]

  v4 = *(this + 0x22);
  if ( v4 + *(this + 0x23) )
  {
    v5 = *(this + 0x20);
    LOBYTE(v35) = 0x10;
    v36 = a2;
    LOWORD(v37) = a3;
    sub_8D8830(v5, (int)&v35);
  }
  else
  {
    v6 = TlsIndex;
    *(this + 0x22) = v4 + 1;
    v7 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6);
    v8 = *(_DWORD **)(v7 + 0x19C);
    v9 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0x80000000;
    v34 = v7;
    if ( !v8 )
      v8 = (_DWORD *)dword_BA7D9C;
    v10 = (_DWORD *)v8[8];
    v11 = (char *)v10 + ((4 * a3 + 0x10) & 0xFFFFFFF0);
    if ( (unsigned int)v11 > v8[0xB] )
    {
      v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v8 + 0xC))(v8, (4 * a3 + 0x10) & 0xFFFFFFF0);
    }
    else
    {
      v8[8] = v11;
      v12 = v10;
    }
    v39 = v12;
    v41 = a3 | 0x80000000;
    v42 = v12;
    if ( a3 > 0 )
    {
      do
      {
        v13 = *(_DWORD *)(a2 + 4 * v9);
        v39[v40++] = v13 + 0x28;
        v14 = sub_8DC5C0(v13 + 0x28, (int)this, v13);
        sub_8DE520(v14, v13);
        ++v9;
      }
      while ( v9 < a3 );
    }
    v15 = *(_DWORD **)(v34 + 0x19C);
    v16 = *(this + 0xA9);
    v35 = 0;
    v36 = 0;
    v37 = 0x80000000;
    if ( !v15 )
      v15 = (_DWORD *)dword_BA7D9C;
    v17 = (_DWORD *)v15[8];
    v18 = (char *)v17 + ((8 * v16 + 0x10) & 0xFFFFFFF0);
    if ( (unsigned int)v18 > v15[0xB] )
      v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v15 + 0xC))(v15, (8 * v16 + 0x10) & 0xFFFFFFF0);
    else
      v15[8] = v18;
    v19 = *(this + 0x19);
    v35 = v17;
    v38 = v17;
    v37 = v16 | 0x80000000;
    (*(void (__thiscall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)v19 + 0x14))(v19, &v39, &v35);
    sub_8D83E0((_DWORD **)*(this + 0x1A), v35, v36);
    v20 = v34;
    v21 = *(_DWORD **)(v34 + 0x19C);
    v22 = v38;
    if ( !v21 )
      v21 = (_DWORD *)dword_BA7D9C;
    v23 = v38 == (_DWORD *)v21[0xA];
    v21[8] = v38;
    if ( v23 )
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v21 + 0x10))(v21, v22);
    if ( v37 >= 0 )
    {
      v24 = *(_DWORD *)(v34 + 0x19C);
      if ( !v24 )
        v24 = dword_BA7D9C;
      sub_8A75D0(v24, v35, 8 * v37, 0x14);
    }
    v25 = 0;
    if ( a3 > 0 )
    {
      do
      {
        v26 = *(int (__stdcall ****)(signed int))(a2 + 4 * v25);
        v27 = 0;
        v26[2] = 0;
        v28 = *(this + 0x2F);
        if ( v28 <= 0 )
        {
LABEL_28:
          v27 = 0xFFFFFFFF;
        }
        else
        {
          v29 = (int (__stdcall ****)(signed int))*(this + 0x2E);
          while ( *v29 != v26 )
          {
            ++v27;
            ++v29;
            if ( v27 >= v28 )
              goto LABEL_28;
          }
        }
        v30 = *(this + 0x2F) - 1;
        *(this + 0x2F) = v30;
        *(_DWORD *)(*(this + 0x2E) + 4 * v27) = *(_DWORD *)(*(this + 0x2E) + 4 * v30);
        if ( !*((_WORD *)v26 + 2) )
          ((void (__thiscall *)(int (__stdcall ***)(signed int)))(*v26)[0xB])(v26);
        sub_8BC730(v26);
        ++v25;
      }
      while ( v25 < a3 );
      v20 = v34;
    }
    v23 = (*(this + 0x22))-- == 1;
    if ( v23 )
    {
      if ( *(this + 0x21) )
      {
        if ( !*((_BYTE *)this + 0x90) )
          sub_899210((int)this);
      }
    }
    v31 = *(_DWORD **)(v20 + 0x19C);
    v32 = v42;
    if ( !v31 )
      v31 = (_DWORD *)dword_BA7D9C;
    v23 = v42 == (_DWORD *)v31[0xA];
    v31[8] = v42;
    if ( v23 )
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v31 + 0x10))(v31, v32);
    if ( v41 >= 0 )
    {
      v33 = *(_DWORD *)(v20 + 0x19C);
      if ( !v33 )
        v33 = dword_BA7D9C;
      sub_8A75D0(v33, v39, 4 * v41, 0x14);
    }
  }
}
