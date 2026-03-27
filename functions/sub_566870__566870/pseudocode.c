void __thiscall sub_566870(TargetData **this, TESForm *a2, char a3)
{
  TargetData *v4; // ecx
  int v5; // [esp-4h] [ebp-8h]

  v4 = *(this + 0xA);
  if ( v4 )
  {
    if ( (TESForm *)sub_569E60(v4).form == a2 )
    {
      v5 = (int)*(this + 3);
      if ( a3 )
      {
        *(this + 7) = (TargetData *)((unsigned int)*(this + 7) | 0x8000);
        if ( !TESDataHandler_IsFormIDCreated_(v5) )
          ((void (__thiscall *)(TargetData **, int))(*this)[5].target.form)(this, 0x10000000);
      }
      else
      {
        *(this + 7) = (TargetData *)((unsigned int)*(this + 7) & 0xFFFF7FFF);
        if ( !TESDataHandler_IsFormIDCreated_(v5) )
          ((void (__thiscall *)(TargetData **, int))(*this)[5].count)(this, 0x10000000);
      }
    }
  }
}
