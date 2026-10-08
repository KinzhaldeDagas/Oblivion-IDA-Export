int *__thiscall sub_899A50(const void **this, int *a2)
{
  int v3; // eax
  char **v4; // ecx
  int v6; // eax
  int v7; // eax
  bool v8; // zf
  char v9[4]; // [esp+4h] [ebp-8h] BYREF
  int *v10; // [esp+8h] [ebp-4h]

  v3 = (int)*(this + 0x22); /*0x899a56*/
  if ( (char *)*(this + 0x23) + v3 ) /*0x899a62*/
  {
    v4 = (char **)*(this + 0x20); /*0x899a6a*/
    v9[0] = 0xD; /*0x899a75*/
    v10 = a2; /*0x899a7a*/
    sub_8D8830(v4, (int)v9); /*0x899a7e*/
    return 0; /*0x899a83*/
  }
  else
  {
    *(this + 0x22) = (const void *)(v3 + 1); /*0x899a92*/
    if ( !a2[7] ) /*0x899a98*/
      a2[7] = (*(int (__thiscall **)(int *))(*a2 + 0xC))(a2); /*0x899aa6*/
    a2[2] = (int)this; /*0x899aac*/
    sub_8BC720(a2); /*0x899aaf*/
    if ( *(this + 0x2F) == (const void *)((unsigned int)*(this + 0x30) & 0x3FFFFFFF) ) /*0x899acd*/
      sub_8A6EE0(this + 0x2E, 4); /*0x899ad2*/
    *((_DWORD *)*(this + 0x2E) + (_DWORD)*(this + 0x2F)) = a2; /*0x899adf*/
    *(this + 0x2F) = (char *)*(this + 0x2F) + 1; /*0x899ae8*/
    v6 = sub_8CC950((int)this, a2); /*0x899aeb*/
    v7 = sub_8DC530(v6, (int)this, (int)a2); /*0x899af2*/
    sub_8DE590(v7, (int)a2); /*0x899afc*/
    v8 = *(this + 0x22) == (const void *)1; /*0x899b01*/
    *(this + 0x22) = (char *)*(this + 0x22) + 0xFFFFFFFF; /*0x899b01*/
    if ( v8 ) /*0x899b08*/
    {
      if ( *(this + 0x21) ) /*0x899b0a*/
      {
        if ( !*((_BYTE *)this + 0x90) ) /*0x899b14*/
          sub_899210((int)this); /*0x899b20*/
      }
    }
    return a2; /*0x899b25*/
  }
}
