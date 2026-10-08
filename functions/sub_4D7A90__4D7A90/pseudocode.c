unsigned int __thiscall sub_4D7A90(int *this, char a2)
{
  unsigned int result; // eax
  int v4; // eax

  result = *(unsigned __int8 *)((*(int (__thiscall **)(int *))(*this + 0x170))(this) + 4) - 0x23; /*0x4d7aa1*/
  if ( result <= 2 ) /*0x4d7aa7*/
  {
    v4 = *this; /*0x4d7aa9*/
    if ( a2 ) /*0x4d7ab9*/
      (*(void (__thiscall **)(int *, int))(v4 + 0x40))(this, 0x10000000); /*0x4d7abe*/
    else
      (*(void (__thiscall **)(int *, int))(v4 + 0x44))(this, 0x10000000); /*0x4d7ad1*/
    return ExtraDataList_SetLeveledCreatureFlag((ExtraDataList *)(this + 0x11), a2); /*0x4d7ac4*/
  }
  return result; /*0x4d7aca*/
}
