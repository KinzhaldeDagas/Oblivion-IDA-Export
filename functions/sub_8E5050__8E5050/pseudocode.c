int __thiscall sub_8E5050(int *this)
{
  int v1; // ebp
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int *v7; // edi
  int v8; // ebx
  int v9; // eax
  int result; // eax

  v1 = MEMORY[0xBA9DE4]; /*0x8e5052*/
  v3 = *(this + 0x1C); /*0x8e505b*/
  v4 = 0; /*0x8e505e*/
  *this = (int)&off_A9A710; /*0x8e5063*/
  if ( v3 > 0 ) /*0x8e5069*/
  {
    v5 = 0; /*0x8e506b*/
    do /*0x8e50a9*/
    {
      v6 = *(_DWORD *)(v5 + *(this + 0x1E) + 0xC); /*0x8e5077*/
      if ( v6 >= 0 ) /*0x8e507c*/
        sub_8A75D0( /*0x8e509b*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v1) + 0x19C),
          *(_DWORD **)(v5 + *(this + 0x1E) + 4),
          2 * (v6 & 0x3FFFFFFF),
          0x14);
      ++v4; /*0x8e50a3*/
      v5 += 0x10; /*0x8e50a4*/
    }
    while ( v4 < *(this + 0x1C) ); /*0x8e50a9*/
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, *(this + 0x1E)); /*0x8e50b7*/
  v7 = this + 0x1C; /*0x8e50ba*/
  v8 = 3; /*0x8e50bd*/
  do /*0x8e50f0*/
  {
    v9 = v7[0xFFFFFFFF]; /*0x8e50c2*/
    v7 += 0xFFFFFFFD; /*0x8e50c5*/
    if ( v9 >= 0 ) /*0x8e50ca*/
      sub_8A75D0( /*0x8e50ea*/
        *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v1) + 0x19C),
        (_DWORD *)*v7,
        4 * v9,
        0x14);
    --v8; /*0x8e50ef*/
  }
  while ( v8 ); /*0x8e50f0*/
  result = *(this + 0x12); /*0x8e50f2*/
  if ( result >= 0 ) /*0x8e50f7*/
    result = sub_8A75D0( /*0x8e5118*/
               *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v1) + 0x19C),
               (_DWORD *)*(this + 0x10),
               0x10 * result,
               0x14);
  *this = (int)&hkBaseObject::`vftable'; /*0x8e511e*/
  return result; /*0x8e511d*/
}
