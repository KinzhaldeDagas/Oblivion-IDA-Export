BSExtraDataVtbl *__thiscall sub_4DB7D0(_BYTE *this)
{
  ExtraDataList *v2; // edi
  BSExtraDataVtbl *result; // eax
  void **p_Destructor; // esi
  BSExtraData *Teleport; // eax
  BSExtraData *v6; // edi
  BSExtraDataVtbl *v7; // eax
  ExtraDataList *v8; // ecx

  v2 = (ExtraDataList *)(this + 0x44);
  result = sub_41E7D0((ExtraDataList *)(this + 0x44));
  p_Destructor = (void **)&result->Destructor;
  if ( !result )
  {
    Teleport = (BSExtraData *)ExtraDataList_GetTeleport(v2);
    v6 = Teleport;
    if ( !Teleport
      || !sub_42B410(Teleport)
      || (v7 = sub_42B410(v6),
          result = sub_41E7D0((ExtraDataList *)&v7[8].CompareTo),
          (p_Destructor = (void **)&result->Destructor) == 0) )
    {
      v8 = *((ExtraDataList **)this + 0x10);
      if ( v8 )
        return sub_41E7D0(v8 + 2);
      else
        return (BSExtraDataVtbl *)p_Destructor;
    }
  }
  return result;
}
