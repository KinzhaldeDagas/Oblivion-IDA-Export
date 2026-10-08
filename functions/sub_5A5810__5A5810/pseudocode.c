int *__thiscall sub_5A5810(_DWORD *this, unsigned int a2)
{
  _DWORD **v3; // eax
  _DWORD *v4; // esi
  bool v5; // zf
  int v6; // eax
  _DWORD *v7; // ecx

  if ( a2 >= *(this + 3) ) /*0x5a5817*/
    return 0; /*0x5a5819*/
  v3 = (_DWORD **)(*(this + 1) + 4 * a2); /*0x5a5821*/
  v4 = *v3; /*0x5a5825*/
  v5 = *v3 == 0; /*0x5a5827*/
  *v3 = 0; /*0x5a5829*/
  if ( !v5 ) /*0x5a582f*/
    --*(this + 4); /*0x5a5831*/
  v6 = *(this + 3) - 1; /*0x5a5838*/
  if ( a2 == v6 ) /*0x5a583d*/
    *(this + 3) = v6; /*0x5a583f*/
  if ( v4 ) /*0x5a5844*/
  {
    v7 = (_DWORD *)v4[1]; /*0x5a5846*/
    if ( v7 ) /*0x5a584b*/
    {
      BSSimpleList_Clear(v7); /*0x5a584d*/
      FormHeapFree(v4[1]); /*0x5a5856*/
    }
    if ( *v4 ) /*0x5a585e*/
    {
      Tile::Release((Tile *)*v4); /*0x5a5864*/
      if ( !unk_B3A6D4 ) /*0x5a5869*/
      {
        if ( *v4 ) /*0x5a5872*/
          (**(void (__thiscall ***)(_DWORD, int))*v4)(*v4, 1); /*0x5a587e*/
      }
    }
  }
  return v4; /*0x5a581b*/
}
