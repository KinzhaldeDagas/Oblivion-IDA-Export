_DWORD *__thiscall sub_8BC7B0(int *this, _DWORD *a2, int a3)
{
  int v3; // esi
  int v4; // eax
  _DWORD *v5; // edx
  int v7; // edx
  int v8; // edi
  int v9; // ebx
  int v10; // edi
  int i; // esi
  _DWORD *v12; // eax
  int v13; // [esp+1Ch] [ebp-4h]

  v3 = *(this + 0x12);
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_5:
    *a2 = 0;
    a2[1] = 0;
    return a2;
  }
  else
  {
    v5 = (_DWORD *)*(this + 0x11);
    while ( *v5 != a3 )
    {
      ++v4;
      v5 += 4;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    v7 = 0x10 * v4;
    v8 = 0x10 * v4 + *(this + 0x11);
    v9 = *(_DWORD *)(v8 + 8);
    v13 = *(_DWORD *)(v8 + 0xC);
    v10 = *(this + 0x12) - 1;
    *(this + 0x12) = v10;
    for ( i = v4; i < *(this + 0x12); v7 += 0x10 )
    {
      v12 = (_DWORD *)(v7 + *(this + 0x11));
      *v12 = v12[4];
      v12[1] = v12[5];
      v12[2] = v12[6];
      v12[3] = v12[7];
      ++i;
    }
    *a2 = v9;
    a2[1] = v13;
    return a2;
  }
}
