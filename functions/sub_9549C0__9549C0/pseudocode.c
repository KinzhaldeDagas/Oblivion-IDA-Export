int __thiscall sub_9549C0(_DWORD **this, int a2, int a3)
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

  v4 = a3;
  v15 = (_DWORD *)(a3 + 0x28);
  a2 += 0x38;
  v12 = 0x1E - a2;
  v6 = (_BYTE *)(a2 + 8);
  v7 = (_DWORD *)(a3 + 0x10);
  v14 = 0x21 - a2;
  v11 = 3;
  do
  {
    if ( *v6 == 1 )
    {
      v8 = *(_DWORD *)(v4 + 0x24);
      v9 = (v7[0xFFFFFFFF] - *v15) >> v8;
      sub_956520(*(this + 4), ((*v7 - *v15) >> v8) + 1);
      sub_956520(*(this + 4), v9);
      sub_956520(*(this + 4), (_BYTE)v6 + v12);
      v4 = a3;
    }
    if ( *v6 == 2 )
    {
      v13 = v7[0xFFFFFFFF];
      sub_956730(*(this + 4), *v7 + 1);
      sub_956730(*(this + 4), v13);
      sub_956520(*(this + 4), (_BYTE)v6 + v14);
    }
    ++v15;
    ++v6;
    v7 += 2;
    result = --v11;
  }
  while ( v11 );
  return result;
}
