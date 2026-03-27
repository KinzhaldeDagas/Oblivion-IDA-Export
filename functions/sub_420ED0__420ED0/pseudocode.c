int __thiscall sub_420ED0(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax
  int result; // eax
  BSExtraDataVtbl *vtbl; // ecx
  void (__thiscall *Destructor)(BSExtraData *); // edx

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_FriendHitList);
  if ( !ExtraData )
    return 0;
  vtbl = ExtraData[1].vtbl;
  for ( result = 0; vtbl; vtbl = (BSExtraDataVtbl *)vtbl->CompareTo )
  {
    Destructor = vtbl->Destructor;
    if ( !vtbl->Destructor )
      break;
    if ( *(_DWORD *)Destructor == a2 )
      return *((unsigned __int16 *)Destructor + 2);
  }
  return result;
}
