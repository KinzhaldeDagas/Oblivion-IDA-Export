int __thiscall sub_948E80(_DWORD *this, const char *a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  signed int v8; // ebx
  int v9; // esi
  int v10; // [esp+Ch] [ebp+8h]

  result = *(this + 3) & 0x3FFFFFFF; /*0x948e89*/
  if ( result > *(this + 2) + 0x46 && (a3 & *(this + 7)) != 0 ) /*0x948ea0*/
  {
    v8 = 0; /*0x948eac*/
    if ( a5 || a6 ) /*0x948eb9*/
    {
      v10 = 0; /*0x948ec5*/
      if ( a2 ) /*0x948ec9*/
      {
        v8 = sub_8B1860(a2) + 1; /*0x948ed6*/
        v10 = v8 % 2; /*0x948ee5*/
      }
      v9 = sub_948DF0((int)(this + 1), v8 + v10); /*0x948efc*/
      *(_BYTE *)v9 = 0x43; /*0x948f07*/
      *(_BYTE *)(v9 + 1) = v10 + v8; /*0x948f0a*/
      *(_WORD *)(v9 + 2) = a5; /*0x948f0d*/
      if ( a6 ) /*0x948f11*/
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)unk_BA7D98 + 0x28))(unk_BA7D98, a6); /*0x948f20*/
      else
        result = 0; /*0x948f13*/
      *(_WORD *)(v9 + 4) = result; /*0x948f25*/
      if ( v8 > 0 ) /*0x948f29*/
      {
        sub_8B1890((void *)(v9 + 6), a2, v8); /*0x948f35*/
        result = v10; /*0x948f3a*/
        if ( v10 ) /*0x948f43*/
          *(_BYTE *)(v9 + v8 + 6) = 0; /*0x948f45*/
      }
    }
  }
  return result; /*0x948f4d*/
}
