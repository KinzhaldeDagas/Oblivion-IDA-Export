char *__cdecl TESForm_GetFormTypeName(unsigned __int8 a1)
{
  signed int v1; // eax
  char *result; // eax
  unsigned __int8 v3; // cl

  v1 = sub_47D640(a1); /*0x47e195*/
  if ( v1 >= 0 ) /*0x47e19f*/
    return *(char **)(4 * v1 + 0xB081D0); /*0x47e1a1*/
  v3 = a1; /*0x47e1a9*/
  switch ( a1 ) /*0x47e1c3*/
  {
    case 3u: /*0x47e1c3*/
      result = off_B06898[0]; /*0x47e206*/
      break; /*0x47e20b*/
    case 4u: /*0x47e1c3*/
      result = off_B06890[0]; /*0x47e1fa*/
      break; /*0x47e1ff*/
    case 5u: /*0x47e1c3*/
      result = off_B06874[0]; /*0x47e1d0*/
      break; /*0x47e1d5*/
    case 6u: /*0x47e1c3*/
      result = off_B06888[0]; /*0x47e1ee*/
      break; /*0x47e1f3*/
    case 7u: /*0x47e1c3*/
      result = off_B068B4[0]; /*0x47e230*/
      break; /*0x47e235*/
    case 8u: /*0x47e1c3*/
      result = off_B068B8[0]; /*0x47e236*/
      break; /*0x47e23b*/
    case 9u: /*0x47e1c3*/
      result = off_B06870[0]; /*0x47e1ca*/
      break; /*0x47e1cf*/
    case 0xAu: /*0x47e1c3*/
      result = off_B0688C[0]; /*0x47e1f4*/
      break; /*0x47e1f9*/
    case 0xBu: /*0x47e1c3*/
      result = (char *)off_B068AC; /*0x47e224*/
      break; /*0x47e229*/
    case 0xCu: /*0x47e1c3*/
      result = off_B0689C[0]; /*0x47e20c*/
      break; /*0x47e211*/
    case 0xDu: /*0x47e1c3*/
      result = off_B0687C[0]; /*0x47e1dc*/
      break; /*0x47e1e1*/
    case 0x11u: /*0x47e1c3*/
      result = off_B06878[0]; /*0x47e1d6*/
      break; /*0x47e1db*/
    case 0x2Du: /*0x47e1c3*/
      result = off_B068A8; /*0x47e21e*/
      break; /*0x47e223*/
    case 0x2Eu: /*0x47e1c3*/
      result = off_B068A4[0]; /*0x47e218*/
      break; /*0x47e21d*/
    case 0x2Fu: /*0x47e1c3*/
      result = off_B06894[0]; /*0x47e200*/
      break; /*0x47e205*/
    case 0x30u: /*0x47e1c3*/
      result = off_B06884[0]; /*0x47e1e8*/
      break; /*0x47e1ed*/
    case 0x31u: /*0x47e1c3*/
      result = off_B068BC[0]; /*0x47e23c*/
      break; /*0x47e241*/
    case 0x35u: /*0x47e1c3*/
      result = off_B068A0[0]; /*0x47e212*/
      break; /*0x47e217*/
    case 0x39u: /*0x47e1c3*/
      result = off_B06880[0]; /*0x47e1e2*/
      break; /*0x47e1e7*/
    case 0x3Bu: /*0x47e1c3*/
      result = off_B068B0[0]; /*0x47e22a*/
      break; /*0x47e22f*/
    case 0x3Cu: /*0x47e1c3*/
      result = off_B068C0[0]; /*0x47e242*/
      break; /*0x47e247*/
    case 0x3Du: /*0x47e1c3*/
      result = off_B068C4; /*0x47e248*/
      break; /*0x47e24d*/
    default:
      if ( a1 >= 0x45u ) /*0x47e251*/
      {
        PrintError("Invalid FormID sent to FormIDToString().\r\n", *(_DWORD *)(0xC * a1 + 0xB05E04)); /*0x47e263*/
        v3 = 0; /*0x47e26b*/
      }
      result = *(char **)(0xC * v3 + 0xB05E04); /*0x47e273*/
      break; /*0x47e273*/
  }
  return result; /*0x47e1a8*/
}
