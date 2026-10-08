double __userpurge sub_61D9B0@<st0>(int a1@<ecx>, double a2@<st1>, char **a3)
{
  double result; // st7

  if ( a3 ) /*0x61d9bd*/
  {
    if ( sub_419CF0(*a3) ) /*0x61d9c1*/
    {
      if ( !(unsigned __int8)MagicTarget_HasMagicItem((void *)(*(_DWORD *)(a1 + 0x3C) + 0x68), (int)*a3) ) /*0x61d9d3*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) /*0x61d9f1*/
                                                                                                + 0x5C)
                                                                                    + 0x1C))(
               *(_DWORD *)(a1 + 0x3C) + 0x5C,
               *a3,
               0,
               0,
               0) )
        {
          return sub_61D6B0(a1, a2, (int)a3); /*0x61d9fa*/
        }
      }
    }
  }
  return result; /*0x61d9ff*/
}
