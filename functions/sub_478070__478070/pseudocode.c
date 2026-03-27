int __thiscall sub_478070(int *this, _DWORD *a1)
{
  char **v3; // edi
  int *v4; // ebx
  int v5; // eax
  volatile LONG *v6; // esi

  *this = NiObjectNET_LookupObjectByName(a1, "Bip01");
  v3 = off_B06550;
  v4 = this + 1;
  do
  {
    v5 = NiObjectNET_LookupObjectByName(a1, *v3);
    v6 = (volatile LONG *)v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
    if ( v6 && (*(int (__thiscall **)(volatile LONG *))(*v6 + 8))(v6) )
    {
      *(_BYTE *)v4 |= 1u;
      v4[1] = (int)v6;
    }
    else
    {
      PrintError("Missing bone '%s' for '%s'", *v3, (const char *)a1[2]);
    }
    if ( v6 )
    {
      if ( !InterlockedDecrement(v6 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
    }
    ++v3;
    v4 += 2;
  }
  while ( (int)v3 < (int)&unk_B06574 );
  sub_897A90(*(this + 0xA), 0);
  return sub_897A90(*(this + 0xC), 0);
}
