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

  v2 = *(this + 5) - 1; /*0x8ce780*/
  if ( v2 > 0 ) /*0x8ce786*/
  {
    v3 = 0x30 * v2; /*0x8ce78f*/
    do /*0x8ce819*/
    {
      v20 = v2 - 1; /*0x8ce798*/
      v19 = v2 - 1; /*0x8ce79c*/
      if ( v2 != 1 ) /*0x8ce7a0*/
      {
        v4 = v3 - 0x30; /*0x8ce7a2*/
        while ( 1 ) /*0x8ce7a5*/
        {
          v5 = *(this + 4); /*0x8ce7a5*/
          --v19; /*0x8ce7a8*/
          v4 -= 0x30; /*0x8ce7b1*/
          if ( *sub_8CE690(&v18, (__m128 *)(v4 + v5), (__m128 *)(v3 + v5)) ) /*0x8ce7c3*/
            break; /*0x8ce7c3*/
          if ( !v19 ) /*0x8ce7cd*/
            goto LABEL_9; /*0x8ce7cd*/
        }
        --*(this + 5); /*0x8ce7d1*/
        v6 = *(this + 4); /*0x8ce7d8*/
        v7 = 0x30 * *(this + 5); /*0x8ce7de*/
        v8 = *(_OWORD *)(v7 + v6); /*0x8ce7e1*/
        v9 = v6 + v7; /*0x8ce7e5*/
        *(_OWORD *)(v3 + v6) = v8; /*0x8ce7e7*/
        *(_OWORD *)(v3 + v6 + 0x10) = *(_OWORD *)(v9 + 0x10); /*0x8ce7ef*/
        *(_DWORD *)(v3 + v6 + 0x20) = *(_DWORD *)(v9 + 0x20); /*0x8ce7f7*/
        *(_DWORD *)(v3 + v6 + 0x24) = *(_DWORD *)(v9 + 0x24); /*0x8ce7fe*/
        *(_DWORD *)(v3 + v6 + 0x28) = *(_DWORD *)(v9 + 0x28); /*0x8ce805*/
        *(_DWORD *)(v3 + v6 + 0x2C) = *(_DWORD *)(v9 + 0x2C); /*0x8ce80c*/
      }
LABEL_9:
      v2 = v20; /*0x8ce810*/
      v3 -= 0x30; /*0x8ce814*/
    }
    while ( v20 > 0 ); /*0x8ce819*/
  }
  result = *(this + 0x68); /*0x8ce81f*/
  if ( result ) /*0x8ce827*/
  {
    result = *(_DWORD *)(result + 0x14); /*0x8ce82d*/
    if ( result ) /*0x8ce832*/
    {
      v11 = 0x30 * result; /*0x8ce83b*/
      do /*0x8ce8d6*/
      {
        v12 = *(this + 5); /*0x8ce83e*/
        --result; /*0x8ce841*/
        v11 -= 0x30; /*0x8ce844*/
        v19 = result; /*0x8ce849*/
        v20 = v11; /*0x8ce84d*/
        if ( v12 ) /*0x8ce851*/
        {
          v13 = 0x30 * v12; /*0x8ce85a*/
          do /*0x8ce8ce*/
          {
            v13 -= 0x30; /*0x8ce86c*/
            --v12; /*0x8ce87c*/
            if ( *sub_8CE690(&v18, (__m128 *)(v11 + *(_DWORD *)(*(this + 0x68) + 0x10)), (__m128 *)(v13 + *(this + 4))) ) /*0x8ce884*/
            {
              --*(this + 5); /*0x8ce889*/
              v14 = *(this + 4); /*0x8ce890*/
              v15 = 0x30 * *(this + 5); /*0x8ce896*/
              v16 = *(_OWORD *)(v15 + v14); /*0x8ce899*/
              v17 = v14 + v15; /*0x8ce89d*/
              *(_OWORD *)(v13 + v14) = v16; /*0x8ce89f*/
              *(_OWORD *)(v13 + v14 + 0x10) = *(_OWORD *)(v17 + 0x10); /*0x8ce8a7*/
              *(_DWORD *)(v13 + v14 + 0x20) = *(_DWORD *)(v17 + 0x20); /*0x8ce8af*/
              *(_DWORD *)(v13 + v14 + 0x24) = *(_DWORD *)(v17 + 0x24); /*0x8ce8b6*/
              *(_DWORD *)(v13 + v14 + 0x28) = *(_DWORD *)(v17 + 0x28); /*0x8ce8bd*/
              *(_DWORD *)(v13 + v14 + 0x2C) = *(_DWORD *)(v17 + 0x2C); /*0x8ce8c4*/
            }
            v11 = v20; /*0x8ce8ca*/
          }
          while ( v12 ); /*0x8ce8ce*/
          result = v19; /*0x8ce8d0*/
        }
      }
      while ( result ); /*0x8ce8d6*/
    }
  }
  return result; /*0x8ce8dc*/
}
