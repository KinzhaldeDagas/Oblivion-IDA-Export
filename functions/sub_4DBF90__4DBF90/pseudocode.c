char __thiscall sub_4DBF90(Actor *this)
{
  BSExtraData *v2; // eax
  BSExtraData *i; // edi
  BSExtraDataVtbl *vtbl; // esi
  char v5; // bl
  bool a2; // [esp+8h] [ebp-4h]

  v2 = sub_4203A0(&this->members.super.super.baseExtraList);
  for ( i = v2; i; i = *(BSExtraData **)&i->members.type )
  {
    vtbl = i->vtbl;
    if ( i->vtbl )
    {
      v5 = (this->members.super.super.super.flags & 0x800) != 0;
      a2 = v5;
      if ( sub_420340((ExtraDataList *)&vtbl[8].CompareTo) )
      {
        v5 = v5 == 0;
        a2 = v5;
      }
      LOBYTE(v2) = ((int)vtbl[1].Destructor & 0x800) != 0;
      if ( (_BYTE)v2 != v5 )
      {
        TESForm_SetEnabled_((TESForm *)vtbl, a2);
        LOBYTE(v2) = sub_4DBF90((Actor *)vtbl);
      }
    }
  }
  return (char)v2;
}
