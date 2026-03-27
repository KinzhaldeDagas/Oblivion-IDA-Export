PlayerCharacter *__thiscall sub_536A70(_DWORD *this, int a2)
{
  PlayerCharacter *result; // eax
  TESObjectREFR *v4; // edi

  result = (PlayerCharacter *)(*(_DWORD *)(a2 + 0x30) & 0x3F);
  if ( (_BYTE)result == 0xC )
  {
    result = sub_536110(a2 + 0x14);
    v4 = (TESObjectREFR *)result;
    if ( result )
    {
      result = (PlayerCharacter *)FormHeapAlloc(0x10u);
      if ( result )
      {
        result->super.super.super.super.super.flags = a2 + 0x14;
        result->super.super.super.super.super.refID = (UInt32)v4;
        result->vtbl = 0;
        *(_DWORD *)&result->super.super.super.super.super.type = 0;
        *(_DWORD *)&result->super.super.super.super.super.type = *(this + 2);
        *(this + 2) = result;
      }
      else
      {
        *(_DWORD *)4 = *(this + 2);
        *(this + 2) = 0;
        return 0;
      }
    }
  }
  return result;
}
