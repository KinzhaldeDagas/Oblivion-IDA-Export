int __thiscall sub_4AE830(_DWORD *this)
{
  int result; // eax
  NiObjectNET *v3; // eax
  const char *v4; // eax
  int v5; // [esp+0h] [ebp-4h]
  int v6; // [esp+0h] [ebp-4h]

  result = *(this + 2) >> 0xE; /*0x4ae836*/
  if ( (*(this + 2) & 0x4000) == 0 ) /*0x4ae83b*/
  {
    result = *(this + 0x16); /*0x4ae83d*/
    if ( result ) /*0x4ae842*/
    {
      if ( (result & 0xC0000000) == 0 ) /*0x4ae89e*/
      {
        v4 = (const char *)(*(int (__thiscall **)(_DWORD *))(*this + 0xD4))(this); /*0x4ae8a8*/
        return PrintError("Furniture '%s' is not marked for sitting or sleeping.", v4); /*0x4ae8b0*/
      }
    }
    else
    {
      v3 = (NiObjectNET *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x114))(this, 0); /*0x4ae84d*/
      if ( NiObjectNET::GetBSFornitureMarker(v3) ) /*0x4ae850*/
      {
        v6 = (*(int (__thiscall **)(_DWORD *))(*this + 0xD4))(this); /*0x4ae87b*/
        PrintError("You have not selected any FurnitureMarkers for '%s'.", v6); /*0x4ae881*/
      }
      else
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*(this + 0xC) + 0x14))(this + 0xC); /*0x4ae867*/
        PrintError("No FurnitureMarkers found in '%s'.", v5); /*0x4ae86d*/
      }
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0xF0))(this, 0); /*0x4ae895*/
    }
  }
  return result; /*0x4ae897*/
}
