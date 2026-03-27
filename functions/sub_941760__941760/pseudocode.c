int **__usercall sub_941760@<eax>(int a1@<eax>, int a2@<ecx>, int **a3@<edi>, float *a4@<esi>)
{
  int **result; // eax
  const char *v5; // eax
  char *v6; // ecx
  char *Format; // [esp+24h] [ebp-4h] BYREF

  result = (int **)(a1 - 1);
  switch ( (unsigned int)result )
  {
    case 0u:
      v5 = "true";
      if ( !*(_BYTE *)a4 )
        v5 = "false";
      result = sub_8BBDB0(a3, v5);
      break;
    case 1u:
      result = (int **)sub_8BBEE0((int)a3, "%c", *(char *)a4);
      break;
    case 2u:
      result = (int **)sub_8BBEE0((int)a3, "%i", *(char *)a4);
      break;
    case 3u:
      result = (int **)sub_8BBEE0((int)a3, "%u", *(unsigned __int8 *)a4);
      break;
    case 4u:
      result = (int **)sub_8BBEE0((int)a3, "%i", *(__int16 *)a4);
      break;
    case 5u:
      result = (int **)sub_8BBEE0((int)a3, "%u", *(unsigned __int16 *)a4);
      break;
    case 6u:
      result = (int **)sub_8BBEE0((int)a3, "%i", *(_DWORD *)a4);
      break;
    case 7u:
      result = (int **)sub_8BBEE0((int)a3, "%u", *(_DWORD *)a4);
      break;
    case 8u:
      result = (int **)sub_8BBEE0((int)a3, "%I64i", *(_QWORD *)a4);
      break;
    case 9u:
      result = (int **)sub_8BBEE0((int)a3, "%I64u", *(_QWORD *)a4);
      break;
    case 0xAu:
      result = (int **)sub_8BBEE0((int)a3, "%f", *a4);
      break;
    case 0xBu:
    case 0xCu:
      result = (int **)sub_8BBEE0((int)a3, "(%f %f %f %f)", *a4, a4[1], a4[2], a4[3]);
      break;
    case 0xDu:
    case 0xEu:
      sub_8BBEE0((int)a3, "(%f %f %f)", *a4, a4[1], a4[2]);
      sub_8BBEE0((int)a3, "(%f %f %f)", a4[4], a4[5], a4[6]);
      goto LABEL_18;
    case 0xFu:
      sub_8BBEE0((int)a3, "(%f %f %f)", *a4, a4[1], a4[2]);
      sub_8BBEE0((int)a3, "(%f %f %f %f)", a4[4], a4[5], a4[6], a4[7]);
LABEL_18:
      result = (int **)sub_8BBEE0((int)a3, "(%f %f %f)", a4[8], a4[9], a4[0xA]);
      break;
    case 0x10u:
      sub_8BBEE0((int)a3, "(%f %f %f %f)", *a4, a4[1], a4[2], a4[3]);
      sub_8BBEE0((int)a3, "(%f %f %f %f)", a4[4], a4[5], a4[6], a4[7]);
      sub_8BBEE0((int)a3, "(%f %f %f %f)", a4[8], a4[9], a4[0xA], a4[0xB]);
      result = (int **)sub_8BBEE0((int)a3, "(%f %f %f %f)", a4[0xC], a4[0xD], a4[0xE], a4[0xF]);
      break;
    case 0x11u:
      sub_8BBEE0((int)a3, "(%f %f %f)", *a4, a4[1], a4[2]);
      sub_8BBEE0((int)a3, "(%f %f %f)", a4[4], a4[5], a4[6]);
      sub_8BBEE0((int)a3, "(%f %f %f)", a4[8], a4[9], a4[0xA]);
      result = (int **)sub_8BBEE0((int)a3, "(%f %f %f)", a4[0xC], a4[0xD], a4[0xE]);
      break;
    case 0x13u:
      (*(void (__thiscall **)(int, char **, _DWORD))(*(_DWORD *)a2 + 0x10))(a2, &Format, *(_DWORD *)a4);
      sub_8BBEE0((int)a3, Format);
      v6 = Format + 0xFFFFFFF4;
      result = (int **)(*((_DWORD *)Format + 0xFFFFFFFF) - 1);
      *(_DWORD *)&Format[0xFFFFFFFC] = result;
      if ( (int)result < 0 )
        result = (int **)sub_8B1930(v6);
      break;
    default:
      return result;
  }
  return result;
}
