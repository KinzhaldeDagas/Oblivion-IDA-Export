char __stdcall sub_448C60(Data *a1, int a2)
{
  char v2; // bl
  TESSaveLoad *v3; // ecx
  unsigned int v5; // eax

  v2 = 1;
  if ( !a1 || TESFile_GetIsMaster(a1) )
  {
    v3 = SaveLoad_CurrentSavegame;
  }
  else
  {
    v3 = SaveLoad_CurrentSavegame;
    if ( !SaveLoad_CurrentSavegame || (v3->flags & 0x1000) == 0 )
      return 1;
  }
  if ( a2 )
  {
    v5 = *(_DWORD *)(a2 + 0xC);
    if ( v5 >= 4 && (v5 <= 5 || v5 == 9) )
    {
      return 0;
    }
    else if ( v3 )
    {
      if ( (v3->flags & 0x1000) != 0 )
      {
        switch ( TESForm_GetFormTypeFromChunkType(*(_DWORD *)(a2 + 8)) )
        {
          case 3:
          case 5:
          case 7:
          case 8:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x1F:
          case 0x20:
          case 0x25:
          case 0x28:
          case 0x29:
          case 0x2B:
          case 0x2D:
          case 0x2E:
          case 0x2F:
          case 0x39:
          case 0x3A:
          case 0x3C:
          case 0x3D:
          case 0x3E:
          case 0x3F:
          case 0x40:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
            return 0;
          default:
            return v2;
        }
      }
    }
  }
  return v2;
}
