BSExtraDataVtbl *__thiscall sub_4D8E40(_BYTE *this)
{
  BSExtraData *v1; // eax

  v1 = sub_420190((ExtraDataList *)(this + 0x44));
  if ( v1 )
    return v1[2].vtbl;
  else
    return 0;
}
