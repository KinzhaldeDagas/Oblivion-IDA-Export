void __thiscall sub_90F7E0(const void **this, _DWORD *a2)
{
  int v4; // eax
  char *v5; // edx
  int v6; // ecx
  const void **v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  _DWORD v12[11]; // [esp+8h] [ebp-2Ch] BYREF
  _DWORD *v13; // [esp+38h] [ebp+4h]

  if ( *a2 ) /*0x90f7e8*/
  {
    if ( !sub_88D780(this, (int)a2) ) /*0x90f7f5*/
    {
      if ( *(this + 0x49) == (const void *)((unsigned int)*(this + 0x4A) & 0x3FFFFFFF) ) /*0x90f81d*/
        sub_8A6EE0(this + 0x48, 8); /*0x90f822*/
      v4 = (int)*(this + 0x49); /*0x90f82a*/
      v5 = (char *)*(this + 0x48) + 8 * v4; /*0x90f82f*/
      *(this + 0x49) = (const void *)(v4 + 1); /*0x90f833*/
      qmemcpy(v12, *((const void **)*(this + 2) + 0x1D), sizeof(v12)); /*0x90f845*/
      v12[0xA] = v12[0] + 0x1A50; /*0x90f851*/
      v6 = (int)*(this + 5); /*0x90f855*/
      v7 = this + 5; /*0x90f858*/
      v13 = v5; /*0x90f85b*/
      LOBYTE(v12[3]) = 0; /*0x90f85f*/
      v8 = v12[0]; /*0x90f866*/
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x90f86d*/
      v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2); /*0x90f871*/
      v11 = v8 + 0x590; /*0x90f87a*/
      if ( !LOBYTE(v12[3]) ) /*0x90f880*/
        v11 = v8 + 0x190; /*0x90f882*/
      *v13 = (*(int (__cdecl **)(const void **, _DWORD *, _DWORD *, _DWORD))(v8 /*0x90f8ae*/
                                                                           + 0x14
                                                                           * *(unsigned __int8 *)(v11 + 0x20 * v9 + v10)
                                                                           + 0x990))(
               v7,
               a2,
               v12,
               0);
      v13[1] = a2; /*0x90f8b0*/
    }
  }
}
