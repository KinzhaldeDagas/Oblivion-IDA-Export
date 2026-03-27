void __thiscall sub_8DE950(_DWORD *this, int a2)
{
  int *v3; // ecx
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // ecx
  _DWORD *v8; // edx
  char *v9; // ebp
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // edi
  _DWORD *v14; // edx
  char *v15; // ebp
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int (__thiscall ***v20)(_DWORD, int *, int, int); // eax
  int v21; // ecx
  bool v22; // zf
  _DWORD *v23; // ecx
  _DWORD *v24; // eax
  int v25; // ecx
  _DWORD *v26; // ecx
  _DWORD *v27; // eax
  int v28; // ecx
  _DWORD *v29; // [esp+10h] [ebp-30h] BYREF
  _DWORD v30[3]; // [esp+14h] [ebp-2Ch] BYREF
  _DWORD *v31; // [esp+20h] [ebp-20h] BYREF
  int v32; // [esp+24h] [ebp-1Ch]
  signed int v33; // [esp+28h] [ebp-18h]
  _DWORD *v34; // [esp+2Ch] [ebp-14h]
  _DWORD *v35; // [esp+30h] [ebp-10h] BYREF
  int v36; // [esp+34h] [ebp-Ch]
  signed int v37; // [esp+38h] [ebp-8h]
  _DWORD *v38; // [esp+3Ch] [ebp-4h]

  v3 = (int *)*(this + 2);
  if ( v3 )
  {
    if ( v3[0x22] + v3[0x23] )
    {
      LOBYTE(v30[0]) = 0x11;
      v30[1] = this;
      v30[2] = a2;
      sub_898820(v3, (int)v30);
    }
    else
    {
      v4 = TlsIndex;
      ++v3[0x22];
      v5 = *(_DWORD *)(*(this + 2) + 0x2A8);
      v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v4);
      v7 = *(_DWORD **)(v6 + 0x19C);
      v35 = 0;
      v36 = 0;
      v37 = 0x80000000;
      if ( !v7 )
        v7 = (_DWORD *)dword_BA7D9C;
      v8 = (_DWORD *)v7[8];
      v9 = (char *)v8 + ((8 * v5 + 0x10) & 0xFFFFFFF0);
      if ( (unsigned int)v9 > v7[0xB] )
      {
        v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v7 + 0xC))(v7, (8 * v5 + 0x10) & 0xFFFFFFF0);
      }
      else
      {
        v7[8] = v9;
        v10 = v8;
      }
      v11 = *(_DWORD **)(v6 + 0x19C);
      v35 = v10;
      v38 = v10;
      v12 = *(this + 2);
      v37 = v5 | 0x80000000;
      v13 = *(_DWORD *)(v12 + 0x2A8);
      v31 = 0;
      v32 = 0;
      v33 = 0x80000000;
      if ( !v11 )
        v11 = (_DWORD *)dword_BA7D9C;
      v14 = (_DWORD *)v11[8];
      v15 = (char *)v14 + ((8 * v13 + 0x10) & 0xFFFFFFF0);
      if ( (unsigned int)v15 > v11[0xB] )
      {
        v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v11 + 0xC))(v11, (8 * v13 + 0x10) & 0xFFFFFFF0);
      }
      else
      {
        v11[8] = v15;
        v16 = v14;
      }
      v17 = *(this + 2);
      v31 = v16;
      v34 = v16;
      v33 = v13 | 0x80000000;
      v29 = this + 0xA;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v17 + 8) + 0x24))(*(_DWORD *)(v17 + 8));
      (*(void (__thiscall **)(_DWORD, _DWORD **, int, int, _DWORD **, _DWORD **))(**(_DWORD **)(*(this + 2) + 0x64)
                                                                                + 0x18))(
        *(_DWORD *)(*(this + 2) + 0x64),
        &v29,
        a2,
        1,
        &v35,
        &v31);
      if ( v36 || v32 )
      {
        sub_8D84F0((const void **)&v35, (int *)&v31);
        sub_8D83E0(*(_DWORD ***)(*(this + 2) + 0x68), v31, v32);
        v18 = *(this + 2);
        v19 = *(_DWORD *)(v18 + 0x78);
        if ( v19 )
          v20 = (int (__thiscall ***)(_DWORD, int *, int, int))(v19 + 8);
        else
          v20 = 0;
        sub_8D8370(*(_DWORD ***)(v18 + 0x68), v35, v36, v20);
        sub_8DE4E0(this + 0x14);
      }
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 2) + 8) + 0x28))(*(_DWORD *)(*(this + 2) + 8));
      v21 = *(this + 2);
      v22 = (*(_DWORD *)(v21 + 0x88))-- == 1;
      if ( v22 )
      {
        if ( *(_DWORD *)(v21 + 0x84) )
        {
          if ( !*(_BYTE *)(v21 + 0x90) )
            sub_899210(v21);
        }
      }
      v23 = *(_DWORD **)(v6 + 0x19C);
      v24 = v34;
      if ( !v23 )
        v23 = (_DWORD *)dword_BA7D9C;
      v22 = v34 == (_DWORD *)v23[0xA];
      v23[8] = v34;
      if ( v22 )
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v23 + 0x10))(v23, v24);
      if ( v33 >= 0 )
      {
        v25 = *(_DWORD *)(v6 + 0x19C);
        if ( !v25 )
          v25 = dword_BA7D9C;
        sub_8A75D0(v25, v31, 8 * v33, 0x14);
      }
      v26 = *(_DWORD **)(v6 + 0x19C);
      v27 = v38;
      if ( !v26 )
        v26 = (_DWORD *)dword_BA7D9C;
      v22 = v38 == (_DWORD *)v26[0xA];
      v26[8] = v38;
      if ( v22 )
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v26 + 0x10))(v26, v27);
      if ( v37 >= 0 )
      {
        v28 = *(_DWORD *)(v6 + 0x19C);
        if ( !v28 )
          v28 = dword_BA7D9C;
        sub_8A75D0(v28, v35, 8 * v37, 0x14);
      }
    }
  }
}
