void __thiscall sub_90F7E0(const void **this, _DWORD *a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  _DWORD *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  _DWORD v12[11]; // [esp+8h] [ebp-2Ch] BYREF
  _DWORD *v13; // [esp+38h] [ebp+4h]

  if ( *a2 )
  {
    if ( !sub_88D780(this, (int)a2) )
    {
      if ( *(this + 0x49) == (const void *)((unsigned int)*(this + 0x4A) & 0x3FFFFFFF) )
        sub_8A6EE0(this + 0x48, 8);
      v4 = (int)*(this + 0x49);
      v5 = (int)*(this + 0x48) + 8 * v4;
      *(this + 0x49) = (const void *)(v4 + 1);
      qmemcpy(v12, *((const void **)*(this + 2) + 0x1D), sizeof(v12));
      v12[0xA] = v12[0] + 0x1A50;
      v6 = (int)*(this + 5);
      v7 = this + 5;
      v13 = (_DWORD *)v5;
      LOBYTE(v12[3]) = 0;
      v8 = v12[0];
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
      v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
      v11 = v8 + 0x590;
      if ( !LOBYTE(v12[3]) )
        v11 = v8 + 0x190;
      *v13 = (*(int (__cdecl **)(_DWORD *, _DWORD *, _DWORD *, _DWORD))(v8
                                                                      + 0x14
                                                                      * *(unsigned __int8 *)(v11 + 0x20 * v9 + v10)
                                                                      + 0x990))(
               v7,
               a2,
               v12,
               0);
      v13[1] = a2;
    }
  }
}
