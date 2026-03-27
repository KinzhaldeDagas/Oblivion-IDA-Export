bool __stdcall sub_71B600(int *a1, int a2)
{
  unsigned int v2; // ebp
  int v3; // ebx
  int v4; // eax
  char v6; // al
  unsigned int v8; // [esp+10h] [ebp-18h] BYREF
  int v9; // [esp+14h] [ebp-14h]
  int v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+1Ch] [ebp-Ch]

  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(unsigned __int8 *)(a2 + 1);
  sub_71B4D0(&v8, (char *)a2);
  if ( sub_71AD40(a1, a2) )
    return 1;
  if ( (*(_BYTE *)a1 & 1) == 0 )
    return 0;
  if ( (*(_BYTE *)a2 & 1) == 0 )
    return 0;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 >= 4 && v4 <= 6 )
    return 0;
  if ( v3 == 0x18 && (v9 != 0xFF00 || v8 != 0xFF && v8 != 0xFF0000) )
    return 0;
  if ( sub_71AD40(a1, (int)&unk_B25CE0) || sub_71AD40(a1, (int)&unk_B25D28) )
  {
    if ( v2 < 2 )
      return v3 == 0x18 || v3 == 0x20;
    if ( !sub_70E260((_DWORD *)a2, (int)&unk_B25CE0) )
      return 1;
    v6 = sub_70E260((_DWORD *)a2, (int)&unk_B25D28);
  }
  else
  {
    if ( !sub_71AD40(a1, (int)&unk_B25D70) && !sub_71AD40(a1, (int)&unk_B25DB8) )
    {
      if ( !sub_71AD40(a1, (int)&unk_B25E48) && !sub_71AD40(a1, (int)&unk_B25E00) && !sub_70E240(a1) )
      {
        if ( !sub_71AD40(a1, (int)&unk_B25F20) && !sub_71AD40(a1, (int)&unk_B25F68) )
        {
          if ( !sub_71AD40(a1, (int)&unk_B25E90) && !sub_71AD40(a1, (int)&unk_B25ED8)
            || v3 != 0x10
            || v11 != 0x8000
            || v9 != 0x3E0 )
          {
            return 0;
          }
          if ( v8 == 0x1F )
          {
            return v10 == 0x7C00;
          }
          else
          {
            if ( v8 != 0x7C00 )
              return 0;
            return v10 == 0x1F;
          }
        }
        goto LABEL_28;
      }
      if ( v2 >= 2 )
      {
LABEL_28:
        if ( v2 != 8 && v2 != 9 )
          return 0;
      }
LABEL_30:
      if ( v3 == 0x10 || v3 == 0x18 )
        return 1;
      return v3 == 0x20;
    }
    if ( v2 < 2 )
      goto LABEL_30;
    if ( !sub_70E260((_DWORD *)a2, (int)&unk_B25D70) )
      return 1;
    v6 = sub_70E260((_DWORD *)a2, (int)&unk_B25DB8);
  }
  return v6 == 0;
}
