_DWORD *__thiscall sub_90A8B0(_DWORD *this, int *a2, _DWORD *a3, int *a4, int a5)
{
  int v6; // ecx
  int v7; // edx
  int v8; // ebp
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  _DWORD v14[4]; // [esp+10h] [ebp-10h] BYREF

  *(this + 2) = a5;
  *((_WORD *)this + 3) = 1;
  *this = &off_A9BF7C;
  v6 = a2[2];
  v7 = *a2;
  v8 = *a4;
  v14[3] = a2;
  v14[2] = v6;
  v9 = *(_DWORD *)(v7 + 0xC);
  v14[1] = a2[1];
  v14[0] = v9;
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
  v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3);
  v12 = v8 + 0x590;
  if ( !*((_BYTE *)a4 + 0xC) )
    v12 = v8 + 0x190;
  *(this + 3) = (*(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v8
                                                                   + 0x14 * *(unsigned __int8 *)(v12 + 0x20 * v10 + v11)
                                                                   + 0x990))(
                  v14,
                  a3,
                  a4,
                  a5);
  *(this + 4) = 0;
  return this;
}
