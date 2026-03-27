_DWORD *__thiscall sub_9037A0(_DWORD *this, int a2, _DWORD *a3, int *a4, int a5)
{
  const void **v6; // ebp
  int v7; // edx
  _DWORD *v8; // esi
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int *v13; // edi
  int (__thiscall ***v14)(_DWORD, int **, int *, _DWORD *, int, _DWORD *, int); // ecx
  int v15; // esi
  int v16; // eax
  int v17; // ecx
  int (__cdecl *v18)(_DWORD *, _DWORD *, int *, int); // eax
  _DWORD *v19; // esi
  int v21; // [esp+18h] [ebp-1Ch]
  int (__stdcall ****v22)(char); // [esp+18h] [ebp-1Ch]
  _DWORD *v24; // [esp+20h] [ebp-14h]
  _DWORD v25[4]; // [esp+24h] [ebp-10h] BYREF

  *(this + 2) = a5;
  *((_WORD *)this + 3) = 1;
  *this = &off_A9BCA8;
  v6 = (const void **)(this + 3);
  *(this + 3) = this + 6;
  *(this + 4) = 0;
  *(this + 5) = 0x80000004;
  v7 = *(_DWORD *)(a2 + 8);
  v8 = *(_DWORD **)a2;
  v25[3] = a2;
  v25[2] = v7;
  v24 = v8;
  v9 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x1C))(v8);
  v10 = (unsigned int)v6[2] & 0x3FFFFFFF;
  if ( v10 < v9 )
  {
    v11 = 2 * v10;
    if ( v9 >= v11 )
      v11 = v9;
    sub_8A6E40(v6, v11, 4);
  }
  v6[1] = (const void *)v9;
  v12 = 0;
  if ( (int)*(this + 4) <= 0 )
    return this;
  v13 = a4;
  do
  {
    v14 = (int (__thiscall ***)(_DWORD, int **, int *, _DWORD *, int, _DWORD *, int))v13[1];
    v25[0] = *(_DWORD *)(v8[4] + 8 * v12);
    v25[1] = v12;
    if ( *(_BYTE *)(**v14)(v14, &a4, v13, a3, a2, v8, v12) )
    {
      v21 = *v13;
      v15 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v25[0] + 8))(v25[0]);
      v16 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3);
      if ( *((_BYTE *)v13 + 0xC) )
        v17 = v21 + 0x590;
      else
        v17 = v21 + 0x190;
      v18 = *(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v21
                                                              + 0x14 * *(unsigned __int8 *)(v17 + 0x20 * v15 + v16)
                                                              + 0x990);
      v19 = (char *)*v6 + 4 * v12;
      *v19 = v18(v25, a3, v13, a5);
      v8 = v24;
    }
    else
    {
      v22 = (int (__stdcall ****)(char))((char *)*v6 + 4 * v12);
      *v22 = sub_8E0970();
    }
    ++v12;
  }
  while ( v12 < *(this + 4) );
  return this;
}
