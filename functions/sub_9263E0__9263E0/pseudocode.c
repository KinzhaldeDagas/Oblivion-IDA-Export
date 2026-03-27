int __thiscall sub_9263E0(_DWORD *this, _DWORD *a2)
{
  int v3; // ebx
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // eax
  unsigned int i; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // ebp
  _DWORD *v14; // ecx
  _DWORD *v15; // ecx
  int result; // eax
  int v17; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h]

  v3 = *(this + 4);
  if ( *(this + 2) == v3 )
  {
    v4 = *(this + 1) != *this ? 0 : *(this + 1);
    v5 = v4;
    if ( v3 )
    {
      v6 = 0xC * (v4 + 2 * v3);
      for ( i = 1; v6 > i; i *= 2 )
        ;
      sub_926320(this, i / 0xC);
    }
    else
    {
      sub_926320(this, 8);
    }
    v8 = 0;
    if ( v5 > 0 )
    {
      v9 = 0;
      v10 = 0xC * v3;
      v17 = v5;
      v18 = v5;
      do
      {
        v11 = *(this + 3);
        v12 = v9 + v11;
        v13 = *(_DWORD *)(v9 + v11);
        v14 = (_DWORD *)(v10 + v11);
        *v14 = v13;
        v14[1] = *(_DWORD *)(v12 + 4);
        v14[2] = *(_DWORD *)(v12 + 8);
        v9 += 0xC;
        v10 += 0xC;
        --v17;
      }
      while ( v17 );
      v8 = v18;
    }
    *(this + 1) = v3 + v8;
  }
  else if ( *(this + 1) == v3 )
  {
    *(this + 1) = 0;
  }
  v15 = (_DWORD *)(*(this + 3) + 0xC * *(this + 1));
  *v15 = *a2;
  v15[1] = a2[1];
  v15[2] = a2[2];
  result = *(this + 2) + 1;
  ++*(this + 1);
  *(this + 2) = result;
  return result;
}
