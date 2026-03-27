char __userpurge sub_61D9B0@<al>(int a1@<ecx>, double a2@<st3>, char **a3)
{
  if ( !a3
    || !sub_419CF0(*a3)
    || (unsigned __int8)MagicTarget_HasMagicItem((void *)(*(_DWORD *)(a1 + 0x3C) + 0x68), (int)*a3)
    || !(*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C)
                                                                                           + 0x5C)
                                                                               + 0x1C))(
          *(_DWORD *)(a1 + 0x3C) + 0x5C,
          *a3,
          0,
          0,
          0) )
  {
    return 0;
  }
  sub_61D6B0(a1, a2, (int)a3);
  return 1;
}
