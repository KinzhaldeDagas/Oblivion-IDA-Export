char __cdecl sub_62E890(_BYTE *a1)
{
  int v1; // eax

  if ( a1 )
  {
    v1 = *((_DWORD *)a1 + 2);
    if ( (v1 & 0x20) == 0
      && (v1 & 0x4000) == 0
      && *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x18 )
    {
      if ( GetTeleportExtraData(a1) )
        BSSimpleList_PushFront(&dword_B3B944, (int)a1);
    }
  }
  return 0;
}
