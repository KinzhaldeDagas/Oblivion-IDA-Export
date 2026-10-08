int __thiscall sub_9549C0(unsigned int **this, int a2, int a3)
{
  int v4; // esi
  _BYTE *v6; // ebp
  _DWORD *v7; // ebx
  int v8; // ecx
  int v9; // esi
  int result; // eax
  int v11; // [esp+10h] [ebp-10h]
  char v12; // [esp+14h] [ebp-Ch]
  int v13; // [esp+18h] [ebp-8h]
  char v14; // [esp+1Ch] [ebp-4h]
  _DWORD *v15; // [esp+24h] [ebp+4h]

  v4 = a3; /*0x9549ca*/
  v15 = (_DWORD *)(a3 + 0x28); /*0x9549d4*/
  a2 += 0x38; /*0x9549d8*/
  v12 = 0x1E - a2; /*0x9549e2*/
  v6 = (_BYTE *)(a2 + 8); /*0x9549ed*/
  v7 = (_DWORD *)(a3 + 0x10); /*0x9549f0*/
  v14 = 0x21 - a2; /*0x9549f3*/
  v11 = 3; /*0x9549f7*/
  do /*0x954a89*/
  {
    if ( *v6 == 1 ) /*0x954a04*/
    {
      v8 = *(_DWORD *)(v4 + 0x24); /*0x954a0c*/
      v9 = (v7[0xFFFFFFFF] - *v15) >> v8; /*0x954a1a*/
      sub_956520(*(this + 4), ((*v7 - *v15) >> v8) + 1); /*0x954a21*/
      sub_956520(*(this + 4), v9); /*0x954a2a*/
      sub_956520(*(this + 4), (_BYTE)v6 + v12); /*0x954a39*/
      v4 = a3; /*0x954a3e*/
    }
    if ( *v6 == 2 ) /*0x954a46*/
    {
      v13 = v7[0xFFFFFFFF]; /*0x954a4e*/
      sub_956730(*(this + 4), *v7 + 1); /*0x954a56*/
      sub_956730(*(this + 4), v13); /*0x954a63*/
      sub_956520(*(this + 4), (_BYTE)v6 + v14); /*0x954a72*/
    }
    ++v15; /*0x954a77*/
    ++v6; /*0x954a80*/
    v7 += 2; /*0x954a81*/
    result = --v11; /*0x954a84*/
  }
  while ( v11 ); /*0x954a89*/
  return result; /*0x954a8f*/
}
