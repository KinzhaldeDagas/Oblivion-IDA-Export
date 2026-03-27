bool __thiscall sub_4B2A00(unsigned __int8 *this)
{
  bool result; // al
  char *FormModelPAth; // eax

  if ( !this )
    return 0;
  switch ( *(this + 4) )
  {
    case 0x12u:
      FormModelPAth = GetFormModelPAth(this);
      if ( _strcmp(FormModelPAth, "EditorMarker.NIF") )
        goto LABEL_20;
      return 1;
    case 0x18u:
      if ( (unsigned __int8 *)TESDataHandler_g_PrisonMarker != this )
        goto LABEL_20;
      return 1;
    case 0x1Au:
      if ( sub_46DA90(this) )
        goto LABEL_20;
      result = 1;
      break;
    case 0x1Cu:
      if ( (unsigned __int8 *)TESDataHandler_g_DoorMarker != this
        && (unsigned __int8 *)TESDataHandler_g_TravelMarker != this
        && (unsigned __int8 *)TESDataHandler_g_TempleMarker != this
        && (unsigned __int8 *)TESDataHandler_g_DivineMarker != this
        && (unsigned __int8 *)TESDataHandler_g_NorthMarker != this
        && (unsigned __int8 *)TESDataHandler_g_MapMarker != this
        && TESDataHandler_g_HorseMarker != (TESForm *)this
        && TESDataHandler_g_XMarker != (TESForm *)this
        && (unsigned __int8 *)TESDataHandler_g_XMarkerHeading != this )
      {
        goto LABEL_20;
      }
      result = 1;
      break;
    case 0x29u:
      return 1;
    default:
LABEL_20:
      result = (unsigned int)(*((_DWORD *)this + 3) - 0x64) <= 0x13;
      break;
  }
  return result;
}
