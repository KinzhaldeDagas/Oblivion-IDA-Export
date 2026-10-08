void *__thiscall sub_438EB0(void *this, int a2)
{
  void *result; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // edx

  result = (void *)FormHeapAlloc(0x24u); /*0x438eb6*/
  if ( !result ) /*0x438ec2*/
    return 0; /*0x438f06*/
  v4 = *((_DWORD *)this + 1) + 0xC * a2 + 8; /*0x438ed3*/
  v5 = *((_DWORD *)this + 1) + 0xC * a2 + 4; /*0x438edb*/
  v6 = *((_DWORD *)this + 1); /*0x438edf*/
  *((_DWORD *)result + 5) = 0; /*0x438ee2*/
  *((_DWORD *)result + 6) = 0; /*0x438ee5*/
  *((_DWORD *)result + 2) = v5; /*0x438ee8*/
  *((_DWORD *)result + 3) = v4; /*0x438eee*/
  *(_DWORD *)result = this; /*0x438ef1*/
  *((_DWORD *)result + 1) = 0xC * a2 + v6; /*0x438ef4*/
  *((_DWORD *)result + 4) = 0; /*0x438ef7*/
  *((_DWORD *)result + 7) = 0; /*0x438efa*/
  *((_DWORD *)result + 8) = 0; /*0x438efd*/
  return result; /*0x438f00*/
}
