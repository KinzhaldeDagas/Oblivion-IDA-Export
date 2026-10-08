char __thiscall sub_7496D0(NiNode *this, int a2)
{
  char result; // al
  _DWORD *numItems; // esi
  int v5; // ecx

  result = sub_717910(this, a2); /*0x7496d9*/
  if ( result ) /*0x7496e0*/
  {
    numItems = (_DWORD *)this->members.effects.numItems; /*0x7496e7*/
    while ( numItems ) /*0x7496ef*/
    {
      v5 = numItems[2]; /*0x7496f1*/
      numItems = (_DWORD *)*numItems; /*0x7496fc*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2); /*0x7496ff*/
    }
    return 1; /*0x749706*/
  }
  return result; /*0x7496e2*/
}
