signed int __thiscall sub_958AD0(float *this, float a2, __m128 *a3, _DWORD *a4, _DWORD *a5)
{
  signed int v5; // ebp
  int v7; // ebx
  int v8; // esi
  signed int v9; // eax
  bool v10; // cc
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v5 = 0;
  v13 = 0;
  v12 = LODWORD(a2) + 0x1C;
  while ( 1 )
  {
    v7 = *(_DWORD *)v12;
    v8 = *(_DWORD *)(*(_DWORD *)v12 + 0xC);
    if ( !*(_DWORD *)(v8 + 0x44) )
    {
      v9 = sub_958A30(v8, a3, this, this + 1);
      *(_DWORD *)(v8 + 0x44) = v9;
      if ( v9 == 1 )
      {
        v5 = sub_958AD0(this, *(float *)&v8, a3, a4, a5);
        if ( v5 == 2 )
          goto LABEL_12;
        goto LABEL_7;
      }
      if ( v9 == 4 )
        break;
    }
LABEL_7:
    if ( *(_DWORD *)(v8 + 0x44) == 2 )
    {
      *(_DWORD *)(*(_DWORD *)v7 + 0x30) = v7;
      ++*a4;
      *a5 = v7;
    }
    v10 = ++v13 < 3;
    v12 += 0x10;
    if ( !v10 )
      goto LABEL_12;
  }
  v5 = 2;
LABEL_12:
  *(_DWORD *)(LODWORD(a2) + 0x10) = 0x7F7FFFFF;
  *(this + (*((_DWORD *)this + 3))++ + 0x378) = a2;
  return v5;
}
