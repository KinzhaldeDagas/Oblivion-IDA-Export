int **__usercall sub_941760@<eax>(int a1@<eax>, int a2@<ecx>, int **a3@<edi>, float *a4@<esi>)
{
  int **result; // eax
  const char *v5; // eax
  char *v6; // ecx
  char *Format; // [esp+24h] [ebp-4h] BYREF

  result = (int **)(a1 - 1); /*0x941769*/
  switch ( (unsigned int)result ) /*0x941773*/
  {
    case 0u: /*0x941773*/
      v5 = "true"; /*0x94177d*/
      if ( !*(_BYTE *)a4 ) /*0x94177a*/
        v5 = "false"; /*0x941784*/
      result = sub_8BBDB0(a3, v5); /*0x94178c*/
      break; /*0x941794*/
    case 1u: /*0x941773*/
      result = (int **)sub_8BBEE0((int)a3, "%c", *(char *)a4); /*0x94179f*/
      break; /*0x9417aa*/
    case 2u: /*0x941773*/
      result = (int **)sub_8BBEE0((int)a3, "%i", *(char *)a4); /*0x9417b5*/
      break; /*0x9417c0*/
    case 3u: /*0x941773*/
      result = (int **)sub_8BBEE0((int)a3, "%u", *(unsigned __int8 *)a4); /*0x9417cb*/
      break; /*0x9417d6*/
    case 4u: /*0x941773*/
      result = (int **)sub_8BBEE0((int)a3, "%i", *(__int16 *)a4); /*0x9417e1*/
      break; /*0x9417ec*/
    case 5u: /*0x941773*/
      result = (int **)sub_8BBEE0((int)a3, "%u", *(unsigned __int16 *)a4); /*0x9417f7*/
      break; /*0x941802*/
    case 6u: /*0x941773*/
      result = (int **)sub_8BBEE0((int)a3, "%i", *(_DWORD *)a4); /*0x94180c*/
      break; /*0x941817*/
    case 7u: /*0x941773*/
      result = (int **)sub_8BBEE0((int)a3, "%u", *(_DWORD *)a4); /*0x941821*/
      break; /*0x94182c*/
    case 8u: /*0x941773*/
      result = (int **)sub_8BBEE0((int)a3, "%I64i", *(_QWORD *)a4); /*0x94183a*/
      break; /*0x941845*/
    case 9u: /*0x941773*/
      result = (int **)sub_8BBEE0((int)a3, "%I64u", *(_QWORD *)a4); /*0x941853*/
      break; /*0x94185e*/
    case 0xAu: /*0x941773*/
      result = (int **)sub_8BBEE0((int)a3, "%f", *a4); /*0x94186d*/
      break; /*0x941878*/
    case 0xBu: /*0x941773*/
    case 0xCu: /*0x941773*/
      result = (int **)sub_8BBEE0((int)a3, "(%f %f %f %f)", *a4, a4[1], a4[2], a4[3]); /*0x94189c*/
      break; /*0x94189c*/
    case 0xDu: /*0x941773*/
    case 0xEu: /*0x941773*/
      sub_8BBEE0((int)a3, "(%f %f %f)", *a4, a4[1], a4[2]); /*0x9418c4*/
      sub_8BBEE0((int)a3, "(%f %f %f)", a4[4], a4[5], a4[6]); /*0x9418e6*/
      goto LABEL_18; /*0x9418e6*/
    case 0xFu: /*0x941773*/
      sub_8BBEE0((int)a3, "(%f %f %f)", *a4, a4[1], a4[2]); /*0x941930*/
      sub_8BBEE0((int)a3, "(%f %f %f %f)", a4[4], a4[5], a4[6], a4[7]); /*0x941956*/
LABEL_18:
      result = (int **)sub_8BBEE0((int)a3, "(%f %f %f)", a4[8], a4[9], a4[0xA]); /*0x9418ee*/
      break; /*0x941908*/
    case 0x10u: /*0x941773*/
      sub_8BBEE0((int)a3, "(%f %f %f %f)", *a4, a4[1], a4[2], a4[3]); /*0x941983*/
      sub_8BBEE0((int)a3, "(%f %f %f %f)", a4[4], a4[5], a4[6], a4[7]); /*0x9419ac*/
      sub_8BBEE0((int)a3, "(%f %f %f %f)", a4[8], a4[9], a4[0xA], a4[0xB]); /*0x9419d5*/
      result = (int **)sub_8BBEE0((int)a3, "(%f %f %f %f)", a4[0xC], a4[0xD], a4[0xE], a4[0xF]); /*0x9419f5*/
      break; /*0x9419f5*/
    case 0x11u: /*0x941773*/
      sub_8BBEE0((int)a3, "(%f %f %f)", *a4, a4[1], a4[2]); /*0x941a16*/
      sub_8BBEE0((int)a3, "(%f %f %f)", a4[4], a4[5], a4[6]); /*0x941a38*/
      sub_8BBEE0((int)a3, "(%f %f %f)", a4[8], a4[9], a4[0xA]); /*0x941a5a*/
      result = (int **)sub_8BBEE0((int)a3, "(%f %f %f)", a4[0xC], a4[0xD], a4[0xE]); /*0x941a73*/
      break; /*0x941a73*/
    case 0x13u: /*0x941773*/
      (*(void (__thiscall **)(int, char **, _DWORD))(*(_DWORD *)a2 + 0x10))(a2, &Format, *(_DWORD *)a4); /*0x941a82*/
      sub_8BBEE0((int)a3, Format); /*0x941a8b*/
      v6 = Format + 0xFFFFFFF4; /*0x941a97*/
      result = (int **)(*((_DWORD *)Format + 0xFFFFFFFF) - 1); /*0x941a9d*/
      *(_DWORD *)&Format[0xFFFFFFFC] = result; /*0x941a9e*/
      if ( (int)result < 0 ) /*0x941aa1*/
        result = (int **)sub_8B1930(v6); /*0x941aa3*/
      break; /*0x941aa3*/
    default:
      return result;
  }
  return result; /*0x941791*/
}
