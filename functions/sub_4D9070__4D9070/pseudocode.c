void __thiscall sub_4D9070(_BYTE *this)
{
  ExtraDataList *v2; // edi
  BSExtraData *Teleport; // eax
  BSExtraData *v4; // esi
  BSExtraDataVtbl *v5; // eax
  BSExtraDataVtbl *v6; // eax

  v2 = (ExtraDataList *)(this + 0x44);
  if ( sub_41E690((ExtraDataList *)(this + 0x44)) )
  {
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x40))(this, 0x40);
  }
  else
  {
    Teleport = (BSExtraData *)ExtraDataList_GetTeleport(v2);
    v4 = Teleport;
    if ( Teleport )
    {
      if ( sub_42B410(Teleport) )
      {
        v5 = sub_42B410(v4);
        if ( sub_41E690((ExtraDataList *)&v5[8].CompareTo) )
        {
          v6 = sub_42B410(v4);
          (*((void (__thiscall **)(BSExtraDataVtbl *, int))v6->Destructor + 0x10))(v6, 0x40);
        }
      }
    }
  }
}
