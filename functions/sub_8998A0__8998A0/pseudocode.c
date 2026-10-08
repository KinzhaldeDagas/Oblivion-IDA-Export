void __thiscall sub_8998A0(int *this, const void *a2)
{
  int v3; // ecx
  int v4; // ecx
  int i; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // [esp+8h] [ebp-14h] BYREF
  void *v10; // [esp+Ch] [ebp-10h]
  _DWORD *v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]

  if ( *(this + 0x22) ) /*0x8998a6*/
  {
    v3 = unk_BA7D98; /*0x8998b0*/
    LOBYTE(v9) = 0x1F; /*0x8998b8*/
    v10 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 0x10))(v3, 0x20, 4); /*0x8998cc*/
    sub_8B1890(v10, a2, 0x20u); /*0x8998d0*/
    sub_8D8830((char **)*(this + 0x20), (int)&v9); /*0x8998e3*/
  }
  else
  {
    v4 = *(this + 0x19); /*0x8998ef*/
    v11 = 0; /*0x8998fb*/
    v12 = 0; /*0x899903*/
    v13 = 0x80000000; /*0x89990b*/
    (*(void (__thiscall **)(int, const void *, _DWORD **))(*(_DWORD *)v4 + 0x28))(v4, a2, &v11); /*0x899916*/
    for ( i = 0; i < v12; ++i ) /*0x899921*/
    {
      v6 = v11[2 * i + 1] + *(char *)(v11[2 * i + 1] + 5); /*0x89992f*/
      if ( *(_BYTE *)(v6 + 0x18) == 1 ) /*0x899935*/
      {
        v7 = v6 + *(_DWORD *)(v6 + 0x10); /*0x89993a*/
        if ( v7 ) /*0x89993c*/
          sub_8A6410(v7); /*0x89993e*/
      }
    }
    if ( v13 >= 0 ) /*0x899952*/
    {
      v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x899964*/
      if ( !v8 ) /*0x89996c*/
        v8 = unk_BA7D9C; /*0x89996e*/
      sub_8A75D0(v8, v11, 8 * v13, 0x14); /*0x899984*/
    }
  }
}
