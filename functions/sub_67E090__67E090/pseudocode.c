void __userpurge sub_67E090(_DWORD *a1@<eax>, int a2@<ecx>, Sky *a3)
{
  Actor *v4; // ecx

  if ( a3 )
  {
    if ( *(_DWORD *)(a2 + 0x24) )
    {
      v4 = *(Actor **)(a2 + 0x28);
      LOBYTE(a1) = v4 && Actor_IsCreature(v4);
      sub_68C4E0(a3, *(char **)(a2 + 0x24), 0, a1);
    }
    sub_68BED0(a3, (_DWORD *)(a2 + 0xC));
    sub_67DE90((char *)a2, a3);
  }
}
