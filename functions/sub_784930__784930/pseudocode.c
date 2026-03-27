int *__thiscall sub_784930(_DWORD *this, int a2)
{
  int *result; // eax
  int v3; // esi
  unsigned int v5; // ebx
  _DWORD **v6; // ebp
  _DWORD *v7; // edx
  unsigned int v8; // edi
  unsigned int v9; // ecx
  _DWORD *v10; // eax
  signed int v11; // eax
  bool v12; // sf
  int *v13; // [esp+4h] [ebp-4h]
  unsigned int v14; // [esp+Ch] [ebp+4h]

  result = (int *)*(this + 1);
  v3 = result[1];
  v13 = result;
  if ( !*(_BYTE *)(v3 + 0x2D) )
  {
    v5 = *(_DWORD *)(a2 + 0x14);
    v14 = *(_DWORD *)(a2 + 0x18);
    v6 = (_DWORD **)(a2 + 4);
    while ( 1 )
    {
      if ( v14 < 0x10 )
        v7 = v6;
      else
        v7 = *v6;
      v8 = *(_DWORD *)(v3 + 0x20);
      v9 = v8;
      if ( v8 >= v5 )
        v9 = v5;
      if ( *(_DWORD *)(v3 + 0x24) < 0x10u )
        v10 = (_DWORD *)(v3 + 0x10);
      else
        v10 = *(_DWORD **)(v3 + 0x10);
      v11 = sub_6F5CB0(v10, v7, v9);
      v12 = v11 < 0;
      if ( !v11 )
      {
        if ( v8 < v5 )
          goto LABEL_15;
        LOBYTE(v11) = v8 != v5;
        v12 = v11 < 0;
      }
      if ( !v12 )
      {
        v13 = (int *)v3;
        v3 = *(_DWORD *)v3;
        goto LABEL_17;
      }
LABEL_15:
      v3 = *(_DWORD *)(v3 + 8);
LABEL_17:
      if ( *(_BYTE *)(v3 + 0x2D) )
        return v13;
    }
  }
  return result;
}
