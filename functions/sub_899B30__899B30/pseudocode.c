void __thiscall sub_899B30(_DWORD *this, int (__stdcall ***a2)(signed int))
{
  int v3; // eax
  char **v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  signed int v8; // eax
  int (__stdcall ****v9)(signed int); // edx
  int v10; // ecx
  bool v11; // zf
  int v12; // eax
  char v13[4]; // [esp+4h] [ebp-8h] BYREF
  int (__stdcall ***v14)(signed int); // [esp+8h] [ebp-4h]

  v3 = *(this + 0x22); /*0x899b36*/
  if ( v3 + *(this + 0x23) ) /*0x899b42*/
  {
    v4 = (char **)*(this + 0x20); /*0x899b4a*/
    v13[0] = 0xE; /*0x899b55*/
    v14 = a2; /*0x899b5a*/
    sub_8D8830(v4, (int)v13); /*0x899b5e*/
  }
  else
  {
    v5 = v3 + 1; /*0x899b6f*/
    *(this + 0x22) = v5; /*0x899b72*/
    v6 = sub_8DC5C0(v5, (int)this, (int)a2); /*0x899b78*/
    sub_8DE520(v6, (int)a2); /*0x899b82*/
    sub_8CCB90((int)this, (int)a2); /*0x899b89*/
    v7 = *(this + 0x2F); /*0x899b8e*/
    v8 = 0; /*0x899b97*/
    if ( v7 <= 0 ) /*0x899b9b*/
    {
LABEL_7:
      v8 = 0xFFFFFFFF; /*0x899baf*/
    }
    else
    {
      v9 = (int (__stdcall ****)(signed int))*(this + 0x2E); /*0x899b9d*/
      while ( *v9 != a2 ) /*0x899ba5*/
      {
        ++v8; /*0x899ba7*/
        ++v9; /*0x899ba8*/
        if ( v8 >= v7 ) /*0x899bad*/
          goto LABEL_7; /*0x899bad*/
      }
    }
    v10 = *(this + 0x2F) - 1; /*0x899bb8*/
    *(this + 0x2F) = v10; /*0x899bb9*/
    *(_DWORD *)(*(this + 0x2E) + 4 * v8) = *(_DWORD *)(*(this + 0x2E) + 4 * v10); /*0x899bca*/
    v11 = *((_WORD *)a2 + 2) == 0; /*0x899bcd*/
    a2[2] = 0; /*0x899bd2*/
    if ( v11 ) /*0x899bd9*/
      ((void (__thiscall *)(int (__stdcall ***)(signed int)))(*a2)[0xB])(a2); /*0x899bdf*/
    sub_8BC730((int (__thiscall ***)(int (__stdcall ***)(signed int), int))a2); /*0x899be4*/
    v12 = *(this + 0x22) - 1; /*0x899bef*/
    *(this + 0x22) = v12; /*0x899bf1*/
    if ( !v12 ) /*0x899bf7*/
    {
      if ( *(this + 0x21) ) /*0x899bf9*/
      {
        if ( !*((_BYTE *)this + 0x90) ) /*0x899c03*/
          sub_899210((int)this); /*0x899c0f*/
      }
    }
  }
}
