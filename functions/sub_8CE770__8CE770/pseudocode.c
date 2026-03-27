int __thiscall sub_8CE770(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  __int128 v8; // xmm0
  int v9; // eax
  int result; // eax
  int v11; // edx
  int v12; // ebx
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  __int128 v16; // xmm0
  int v17; // eax
  char v18; // [esp+17h] [ebp-9h] BYREF
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]

  v2 = *(this + 5) - 1;
  if ( v2 > 0 )
  {
    v3 = 0x30 * v2;
    do
    {
      v20 = v2 - 1;
      v19 = v2 - 1;
      if ( v2 != 1 )
      {
        v4 = v3 - 0x30;
        while ( 1 )
        {
          v5 = *(this + 4);
          --v19;
          v4 -= 0x30;
          if ( *sub_8CE690(&v18, (__m128 *)(v4 + v5), (__m128 *)(v3 + v5)) )
            break;
          if ( !v19 )
            goto LABEL_9;
        }
        --*(this + 5);
        v6 = *(this + 4);
        v7 = 0x30 * *(this + 5);
        v8 = *(_OWORD *)(v7 + v6);
        v9 = v6 + v7;
        *(_OWORD *)(v3 + v6) = v8;
        *(_OWORD *)(v3 + v6 + 0x10) = *(_OWORD *)(v9 + 0x10);
        *(_DWORD *)(v3 + v6 + 0x20) = *(_DWORD *)(v9 + 0x20);
        *(_DWORD *)(v3 + v6 + 0x24) = *(_DWORD *)(v9 + 0x24);
        *(_DWORD *)(v3 + v6 + 0x28) = *(_DWORD *)(v9 + 0x28);
        *(_DWORD *)(v3 + v6 + 0x2C) = *(_DWORD *)(v9 + 0x2C);
      }
LABEL_9:
      v2 = v20;
      v3 -= 0x30;
    }
    while ( v20 > 0 );
  }
  result = *(this + 0x68);
  if ( result )
  {
    result = *(_DWORD *)(result + 0x14);
    if ( result )
    {
      v11 = 0x30 * result;
      do
      {
        v12 = *(this + 5);
        --result;
        v11 -= 0x30;
        v19 = result;
        v20 = v11;
        if ( v12 )
        {
          v13 = 0x30 * v12;
          do
          {
            v13 -= 0x30;
            --v12;
            if ( *sub_8CE690(&v18, (__m128 *)(v11 + *(_DWORD *)(*(this + 0x68) + 0x10)), (__m128 *)(v13 + *(this + 4))) )
            {
              --*(this + 5);
              v14 = *(this + 4);
              v15 = 0x30 * *(this + 5);
              v16 = *(_OWORD *)(v15 + v14);
              v17 = v14 + v15;
              *(_OWORD *)(v13 + v14) = v16;
              *(_OWORD *)(v13 + v14 + 0x10) = *(_OWORD *)(v17 + 0x10);
              *(_DWORD *)(v13 + v14 + 0x20) = *(_DWORD *)(v17 + 0x20);
              *(_DWORD *)(v13 + v14 + 0x24) = *(_DWORD *)(v17 + 0x24);
              *(_DWORD *)(v13 + v14 + 0x28) = *(_DWORD *)(v17 + 0x28);
              *(_DWORD *)(v13 + v14 + 0x2C) = *(_DWORD *)(v17 + 0x2C);
            }
            v11 = v20;
          }
          while ( v12 );
          result = v19;
        }
      }
      while ( result );
    }
  }
  return result;
}
