int __thiscall sub_901B20(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // esi
  int v7; // [esp+Ch] [ebp-8h] BYREF

  result = a2; /*0x901b20*/
  v4 = 0; /*0x901b2f*/
  v5 = a2; /*0x901b33*/
  if ( (int)*(this + 5) > 0 ) /*0x901b35*/
  {
    do /*0x901b61*/
    {
      v6 = *(_DWORD *)(*(this + 4) + 8 * v4); /*0x901b3b*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x20))(v6, v5); /*0x901b43*/
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v6 + 0x1C))(v6, &v7); /*0x901b4f*/
      v5 += 0x10 * v7; /*0x901b5c*/
      ++v4; /*0x901b5e*/
    }
    while ( v4 < *(this + 5) ); /*0x901b61*/
    return a2; /*0x901b63*/
  }
  return result; /*0x901b68*/
}
