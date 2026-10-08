int __usercall sub_9535B0@<eax>(int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, int a4@<ebx>, int a5, char *a6)
{
  int result; // eax
  int *v7[3]; // [esp+14h] [ebp-20Ch] BYREF
  char v8[512]; // [esp+20h] [ebp-200h] BYREF

  switch ( a1 ) /*0x9535c3*/
  {
    case 1: /*0x9535c3*/
    case 2: /*0x9535c3*/
    case 3: /*0x9535c3*/
    case 4: /*0x9535c3*/
    case 5: /*0x9535c3*/
    case 6: /*0x9535c3*/
    case 7: /*0x9535c3*/
    case 8: /*0x9535c3*/
    case 9: /*0x9535c3*/
    case 0xA: /*0x9535c3*/
    case 0xB: /*0x9535c3*/
    case 0x18: /*0x9535c3*/
      goto LABEL_3;
    case 0xC: /*0x9535c3*/
    case 0xD: /*0x9535c3*/
    case 0xE: /*0x9535c3*/
    case 0xF: /*0x9535c3*/
    case 0x10: /*0x9535c3*/
    case 0x11: /*0x9535c3*/
    case 0x12: /*0x9535c3*/
      a3 *= a2 >> 2; /*0x9535cd*/
      a2 = 4; /*0x9535d0*/
LABEL_3:
      result = sub_9181D0(a5, a6, a2, a3); /*0x9535d5*/
      break; /*0x9535f1*/
    default:
      sub_8BBFB0((int)v7, a4, v8, 0x200u, 1); /*0x953606*/
      sub_8BBDB0(v7, "Unknown class member found during write of plain data array."); /*0x953614*/
      (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x953637*/
        unk_BA7FB0,
        3,
        0x747E1E03,
        v8,
        ".\\copier\\hkObjectCopier.cpp",
        0xDC);
      result = sub_8BC000(v7); /*0x95363d*/
      break; /*0x95363d*/
  }
  return result; /*0x9535eb*/
}
