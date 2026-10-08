int sub_8BB020()
{
  int v0; // ecx

  sub_8BAA10(); /*0x8bb020*/
  v0 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8bb034*/
  if ( !v0 ) /*0x8bb03c*/
    v0 = unk_BA7D9C; /*0x8bb03e*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v0 + 4))(v0); /*0x8bb046*/
  sub_8A7260(0); /*0x8bb04b*/
  return 0; /*0x8bb055*/
}
