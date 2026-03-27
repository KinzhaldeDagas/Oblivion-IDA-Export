char *__cdecl TESForm_GetFormTypeName(char a1)
{
  signed int v1; // eax
  char *result; // eax
  unsigned __int8 v3; // cl

  v1 = sub_47D640(a1);
  if ( v1 >= 0 )
    return *(char **)(4 * v1 + 0xB081D0);
  v3 = a1;
  switch ( a1 )
  {
    case 3:
      result = off_B06898[0];
      break;
    case 4:
      result = off_B06890[0];
      break;
    case 5:
      result = off_B06874[0];
      break;
    case 6:
      result = off_B06888[0];
      break;
    case 7:
      result = off_B068B4[0];
      break;
    case 8:
      result = off_B068B8[0];
      break;
    case 9:
      result = off_B06870[0];
      break;
    case 0xA:
      result = off_B0688C[0];
      break;
    case 0xB:
      result = (char *)off_B068AC;
      break;
    case 0xC:
      result = off_B0689C[0];
      break;
    case 0xD:
      result = off_B0687C[0];
      break;
    case 0x11:
      result = off_B06878[0];
      break;
    case 0x2D:
      result = off_B068A8;
      break;
    case 0x2E:
      result = off_B068A4[0];
      break;
    case 0x2F:
      result = off_B06894[0];
      break;
    case 0x30:
      result = off_B06884[0];
      break;
    case 0x31:
      result = off_B068BC[0];
      break;
    case 0x35:
      result = off_B068A0[0];
      break;
    case 0x39:
      result = off_B06880[0];
      break;
    case 0x3B:
      result = off_B068B0[0];
      break;
    case 0x3C:
      result = off_B068C0[0];
      break;
    case 0x3D:
      result = off_B068C4;
      break;
    default:
      if ( (unsigned __int8)a1 >= 0x45u )
      {
        PrintError("Invalid FormID sent to FormIDToString().\r\n", *(_DWORD *)(0xC * (unsigned __int8)a1 + 0xB05E04));
        v3 = 0;
      }
      result = *(char **)(0xC * v3 + 0xB05E04);
      break;
  }
  return result;
}
