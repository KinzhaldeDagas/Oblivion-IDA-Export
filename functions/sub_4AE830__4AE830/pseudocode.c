int __thiscall sub_4AE830(_DWORD *this)
{
  int result; // eax
  NiObjectNET *v3; // eax
  const char *v4; // eax
  int v5; // [esp+0h] [ebp-4h]
  int v6; // [esp+0h] [ebp-4h]

  result = *(this + 2) >> 0xE;
  if ( (*(this + 2) & 0x4000) == 0 )
  {
    result = *(this + 0x16);
    if ( result )
    {
      if ( (result & 0xC0000000) == 0 )
      {
        v4 = (const char *)(*(int (__thiscall **)(_DWORD *))(*this + 0xD4))(this);
        return PrintError("Furniture '%s' is not marked for sitting or sleeping.", v4);
      }
    }
    else
    {
      v3 = (NiObjectNET *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x114))(this, 0);
      if ( NiObjectNET::GetBSFornitureMarker(v3) )
      {
        v6 = (*(int (__thiscall **)(_DWORD *))(*this + 0xD4))(this);
        PrintError("You have not selected any FurnitureMarkers for '%s'.", v6);
      }
      else
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*(this + 0xC) + 0x14))(this + 0xC);
        PrintError("No FurnitureMarkers found in '%s'.", v5);
      }
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0xF0))(this, 0);
    }
  }
  return result;
}
