void __thiscall sub_733380(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // ebp
  int v6; // edi
  int v7; // esi
  double v8; // st7
  int v9; // edx
  int v10; // ecx
  double v11; // st6
  int v12; // ecx
  double v13; // st6
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  float v17; // [esp+Ch] [ebp+4h]
  float v18; // [esp+Ch] [ebp+4h]

  v3 = a3;
  v4 = a2;
  if ( a3 > a2 )
  {
    while ( 1 )
    {
      v6 = v4 - 1;
      v7 = v3 + 1;
      v17 = sub_733200(this, v4, v3);
      v8 = v17;
      while ( 1 )
      {
        v9 = *(this + 0xB);
        v10 = v9 + 4 * v7;
        do
        {
          v11 = *(float *)(v10 - 4);
          v10 -= 4;
          --v7;
        }
        while ( v11 > v8 );
        v12 = v9 + 4 * v6;
        do
        {
          v13 = *(float *)(v12 + 4);
          v12 += 4;
          ++v6;
        }
        while ( v13 < v8 );
        if ( v6 >= v7 )
          break;
        v14 = *(this + 0xA);
        v15 = *(_DWORD *)(v14 + 4 * v6);
        *(_DWORD *)(v14 + 4 * v6) = *(_DWORD *)(v14 + 4 * v7);
        *(_DWORD *)(*(this + 0xA) + 4 * v7) = v15;
        v16 = *(this + 0xB);
        v18 = *(float *)(v16 + 4 * v6);
        *(float *)(v16 + 4 * v6) = *(float *)(v16 + 4 * v7);
        *(float *)(*(this + 0xB) + 4 * v7) = v18;
      }
      if ( v7 == a3 )
      {
        a3 = v7 - 1;
      }
      else
      {
        sub_733380(this, v4, v7);
        v4 = v7 + 1;
      }
      if ( a3 <= v4 )
        break;
      v3 = a3;
    }
  }
}
