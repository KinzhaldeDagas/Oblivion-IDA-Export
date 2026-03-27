int __usercall sub_9535B0@<eax>(int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, int a4@<ebx>, int a5, char *a6)
{
  int result; // eax
  int *v7[3]; // [esp+14h] [ebp-20Ch] BYREF
  char v8[512]; // [esp+20h] [ebp-200h] BYREF

  switch ( a1 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0x18:
      goto LABEL_3;
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
      a3 *= a2 >> 2;
      a2 = 4;
LABEL_3:
      result = sub_9181D0(a5, a6, a2, a3);
      break;
    default:
      sub_8BBFB0((int)v7, a4, v8, 0x200u, 1);
      sub_8BBDB0(v7, "Unknown class member found during write of plain data array.");
      (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
        dword_BA7FB0,
        3,
        0x747E1E03,
        v8,
        ".\\copier\\hkObjectCopier.cpp",
        0xDC);
      result = sub_8BC000(v7);
      break;
  }
  return result;
}
