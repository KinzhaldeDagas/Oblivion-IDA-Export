int __thiscall sub_4D7D80(_BYTE *this)
{
  BSExtraDataVtbl *ItemDropper; // eax

  ItemDropper = ExtraDataList_GetItemDropper((ExtraDataList *)(this + 0x44)); /*0x4d7d86*/
  if ( ItemDropper ) /*0x4d7d8d*/
    sub_424C00((ExtraDataList *)&ItemDropper[8].CompareTo, (int)this); /*0x4d7d93*/
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x8C))(this, 1); /*0x4d7da4*/
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x90))(this, 1); /*0x4d7db2*/
  return (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 0x150))(this, 0); /*0x4d7dc2*/
}
