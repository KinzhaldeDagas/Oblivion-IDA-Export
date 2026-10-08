void __thiscall sub_566870(TargetData **this, TESForm *a2, char a3)
{
  TargetData *v4; // ecx
  int v5; // [esp-4h] [ebp-8h]

  v4 = *(this + 0xA); /*0x566873*/
  if ( v4 ) /*0x566878*/
  {
    if ( (TESForm *)sub_569E60(v4).form == a2 ) /*0x566883*/
    {
      v5 = (int)*(this + 3); /*0x56688d*/
      if ( a3 ) /*0x56688e*/
      {
        *(this + 7) = (TargetData *)((unsigned int)*(this + 7) | 0x8000); /*0x566890*/
        if ( !TESDataHandler_IsFormIDCreated_(v5) ) /*0x56689d*/
          ((void (__thiscall *)(TargetData **, int))(*this)[5].target.form)(this, 0x10000000); /*0x5668b2*/
      }
      else
      {
        *(this + 7) = (TargetData *)((unsigned int)*(this + 7) & 0xFFFF7FFF); /*0x5668b8*/
        if ( !TESDataHandler_IsFormIDCreated_(v5) ) /*0x5668c5*/
          ((void (__thiscall *)(TargetData **, int))(*this)[5].count)(this, 0x10000000); /*0x5668da*/
      }
    }
  }
}
