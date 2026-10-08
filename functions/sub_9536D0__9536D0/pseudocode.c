int __usercall sub_9536D0@<eax>(int a1@<eax>, int a2)
{
  int v4; // eax
  int v5; // ebx
  _DWORD *v6; // ecx
  _BYTE *v7; // edx
  char *v8; // edi
  _BYTE *v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int i; // eax
  _DWORD *v14; // ecx
  _BYTE *v15; // eax
  bool v16; // zf
  int result; // eax
  _BYTE *v18; // [esp+10h] [ebp-10h] BYREF
  int v19; // [esp+14h] [ebp-Ch]
  signed int v20; // [esp+18h] [ebp-8h]
  _BYTE *v21; // [esp+1Ch] [ebp-4h]
  int v22; // [esp+24h] [ebp+4h]

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x1C))(a2); /*0x9536e2*/
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x9536f2*/
  v6 = *(_DWORD **)(v5 + 0x19C); /*0x9536f5*/
  v22 = v4; /*0x9536fb*/
  v18 = 0; /*0x953701*/
  v19 = 0; /*0x953705*/
  v20 = 0x80000000; /*0x953709*/
  v7 = (_BYTE *)v6[8]; /*0x953711*/
  v8 = &v7[(a1 + 0x10) & 0xFFFFFFF0]; /*0x95371a*/
  if ( (unsigned int)v8 > v6[0xB] ) /*0x953720*/
  {
    v9 = (_BYTE *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v6 + 0xC))(v6, (a1 + 0x10) & 0xFFFFFFF0); /*0x95372c*/
  }
  else
  {
    v6[8] = v8; /*0x953722*/
    v9 = v7; /*0x953725*/
  }
  v18 = v9; /*0x95372f*/
  v21 = v9; /*0x953735*/
  v20 = a1 | 0x80000000; /*0x953745*/
  if ( a1 > v19 ) /*0x953749*/
  {
    v10 = a1 & 0x3FFFFFFF; /*0x95374b*/
    v11 = v19; /*0x953753*/
    if ( (a1 & 0x3FFFFFFF) < a1 ) /*0x953755*/
    {
      v12 = 2 * v10; /*0x953757*/
      if ( a1 >= 2 * v10 ) /*0x95375c*/
        v12 = a1; /*0x95375e*/
      sub_8A6E40((const void **)&v18, v12, 1); /*0x953768*/
    }
    for ( i = v11; i < a1; ++i ) /*0x953774*/
      v18[i] = 0; /*0x95377a*/
  }
  v19 = a1; /*0x95378c*/
  if ( (v22 & (a1 - 1)) != 0 ) /*0x953790*/
    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 0xC))(a2, v18, a1 - (v22 & (a1 - 1))); /*0x95379f*/
  v14 = *(_DWORD **)(v5 + 0x19C); /*0x9537a2*/
  v15 = v21; /*0x9537a8*/
  v16 = v21 == (_BYTE *)v14[0xA]; /*0x9537ac*/
  v14[8] = v21; /*0x9537af*/
  if ( v16 ) /*0x9537b2*/
    (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v14 + 0x10))(v14, v15); /*0x9537b7*/
  result = v20; /*0x9537ba*/
  if ( v20 >= 0 ) /*0x9537c0*/
    return sub_8A75D0(*(_DWORD *)(v5 + 0x19C), v18, v20 & 0x3FFFFFFF, 0x14); /*0x9537d5*/
  return result; /*0x9537da*/
}
