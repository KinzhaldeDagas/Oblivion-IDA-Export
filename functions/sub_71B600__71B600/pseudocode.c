char __stdcall sub_71B600(int *a1, int a2)
{
  unsigned int v2; // ebp
  int v3; // ebx
  int v4; // eax
  char v6; // al
  unsigned int v8; // [esp+10h] [ebp-18h] BYREF
  int v9; // [esp+14h] [ebp-14h]
  int v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+1Ch] [ebp-Ch]

  v2 = *(_DWORD *)(a2 + 4); /*0x71b60b*/
  v3 = *(unsigned __int8 *)(a2 + 1); /*0x71b60e*/
  sub_71B4D0(&v8, (char *)a2); /*0x71b617*/
  if ( sub_71AD40(a1, a2) ) /*0x71b623*/
    return 1; /*0x71b62a*/
  if ( (*(_BYTE *)a1 & 1) == 0 ) /*0x71b633*/
    return 0; /*0x71b633*/
  if ( (*(_BYTE *)a2 & 1) == 0 ) /*0x71b63c*/
    return 0; /*0x71b63c*/
  v4 = *(_DWORD *)(a2 + 4); /*0x71b642*/
  if ( v4 >= 4 && v4 <= 6 ) /*0x71b64d*/
    return 0; /*0x71b64d*/
  if ( v3 == 0x18 && (v9 != 0xFF00 || v8 != 0xFF && v8 != 0xFF0000) ) /*0x71b676*/
    return 0; /*0x71b676*/
  if ( sub_71AD40(a1, (int)&unk_B25CE0) || sub_71AD40(a1, (int)&unk_B25D28) ) /*0x71b697*/
  {
    if ( v2 < 2 ) /*0x71b7e0*/
      return v3 == 0x18 || v3 == 0x20; /*0x71b806*/
    if ( !sub_70E260((_DWORD *)a2, (int)&unk_B25CE0) ) /*0x71b7f5*/
      return 1; /*0x71b7f5*/
    v6 = sub_70E260((_DWORD *)a2, (int)&unk_B25D28); /*0x71b7fc*/
  }
  else
  {
    if ( !sub_71AD40(a1, (int)&unk_B25D70) && !sub_71AD40(a1, (int)&unk_B25DB8) ) /*0x71b6bf*/
    {
      if ( !sub_71AD40(a1, (int)&unk_B25E48) && !sub_71AD40(a1, (int)&unk_B25E00) && !sub_70E240(a1) ) /*0x71b6f6*/
      {
        if ( !sub_71AD40(a1, (int)&unk_B25F20) && !sub_71AD40(a1, (int)&unk_B25F68) ) /*0x71b71a*/
        {
          if ( !sub_71AD40(a1, (int)&unk_B25E90) && !sub_71AD40(a1, (int)&unk_B25ED8) /*0x71b762*/
            || v3 != 0x10
            || v11 != 0x8000
            || v9 != 0x3E0 )
          {
            return 0; /*0x71b762*/
          }
          if ( v8 == 0x1F ) /*0x71b76b*/
          {
            return v10 == 0x7C00; /*0x71b76d*/
          }
          else
          {
            if ( v8 != 0x7C00 ) /*0x71b77c*/
              return 0; /*0x71b7db*/
            return v10 == 0x1F; /*0x71b77e*/
          }
        }
        goto LABEL_28; /*0x71b721*/
      }
      if ( v2 >= 2 ) /*0x71b7a0*/
      {
LABEL_28:
        if ( v2 != 8 && v2 != 9 ) /*0x71b78d*/
          return 0; /*0x71b78d*/
      }
LABEL_30:
      if ( v3 == 0x10 || v3 == 0x18 ) /*0x71b797*/
        return 1; /*0x71b797*/
      return v3 == 0x20; /*0x71b79c*/
    }
    if ( v2 < 2 ) /*0x71b7ab*/
      goto LABEL_30; /*0x71b7ab*/
    if ( !sub_70E260((_DWORD *)a2, (int)&unk_B25D70) ) /*0x71b7c0*/
      return 1; /*0x71b7c0*/
    v6 = sub_70E260((_DWORD *)a2, (int)&unk_B25DB8); /*0x71b7c9*/
  }
  return v6 == 0; /*0x71b7d0*/
}
