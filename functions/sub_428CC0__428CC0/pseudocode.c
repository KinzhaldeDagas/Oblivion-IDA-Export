BSExtraData *__thiscall sub_428CC0(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // ebx
  BSExtraDataVtbl *vtbl; // edi
  void (__thiscall *Destructor)(BSExtraData *); // esi
  ExtraLight *v8; // eax
  BSExtraData *v9; // esi

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Light);
  v4 = ExtraData;
  if ( ExtraData )
  {
    vtbl = ExtraData[1].vtbl;
    if ( vtbl )
    {
      Destructor = vtbl->Destructor;
      if ( vtbl->Destructor )
      {
        if ( !InterlockedDecrement((volatile LONG *)Destructor + 1) )
        {
          if ( Destructor )
            (**(void (__thiscall ***)(void (__thiscall *)(BSExtraData *), int))Destructor)(Destructor, 1);
        }
      }
      FormHeapFree((unsigned int)vtbl);
    }
    v4[1].vtbl = a2;
    return v4;
  }
  else
  {
    v8 = (ExtraLight *)FormHeapAlloc(0x10u);
    if ( v8 )
      v9 = (BSExtraData *)ExtraLight::ExtraLight(v8, (int)a2);
    else
      v9 = 0;
    BaseExtraList_AddExtra(this, v9);
    return v9;
  }
}
