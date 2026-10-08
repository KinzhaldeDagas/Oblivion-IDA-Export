int __thiscall sub_4D8E60(int *this, BSExtraDataVtbl *a2)
{
  int v3; // eax

  ExtraDataList_SetOrRemoveOblivionEntry((ExtraDataList *)(this + 0x11), (int)this, a2); /*0x4d8e6d*/
  v3 = *this; /*0x4d8e74*/
  if ( a2 ) /*0x4d8e7d*/
    return (*(int (__thiscall **)(int *, int))(v3 + 0x40))(this, 0x4000); /*0x4d8e82*/
  else
    return (*(int (__thiscall **)(int *, int))(v3 + 0x44))(this, 0x4000); /*0x4d8e8c*/
}
