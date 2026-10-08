int __thiscall sub_9136E0(_DWORD *this, int a2, unsigned int a3)
{
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  _OWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx
  __int128 v13; // [esp+10h] [ebp-10h]

  v4 = *(this + 1) + 0x1C; /*0x9136f5*/
  ++*(this + 2); /*0x9136f8*/
  if ( *(_DWORD *)(v4 + 4) == (*(_DWORD *)(v4 + 8) & 0x3FFFFFFF) ) /*0x913708*/
    sub_8A6EE0((const void **)v4, 4); /*0x91370d*/
  *(_DWORD *)(*(_DWORD *)v4 + 4 * (*(_DWORD *)(v4 + 4))++) = 0x16; /*0x91371d*/
  LODWORD(v13) = a2; /*0x91372e*/
  v5 = *(this + 1); /*0x913732*/
  v6 = *(_DWORD *)(v5 + 0x14); /*0x913738*/
  v7 = v5 + 0x10; /*0x91373b*/
  *(_QWORD *)((char *)&v13 + 4) = a3; /*0x913749*/
  HIDWORD(v13) = 0; /*0x913755*/
  if ( v6 == (*(_DWORD *)(v5 + 0x18) & 0x3FFFFFFF) ) /*0x91375d*/
    sub_8A6EE0((const void **)v7, 0x10); /*0x913762*/
  v8 = (_OWORD *)(*(_DWORD *)v7 + 0x10 * (*(_DWORD *)(v7 + 4))++); /*0x913779*/
  *v8 = v13; /*0x91377f*/
  v9 = (_DWORD *)*(this + 1); /*0x913782*/
  v10 = v9[3]; /*0x91378b*/
  v11 = v9[1] + 0x30; /*0x913791*/
  v9[2] += 0xC; /*0x913795*/
  v9[1] = v11; /*0x913799*/
  v9[3] = v10 + 1; /*0x91379c*/
  return v6; /*0x913794*/
}
