// positive sp value has been detected, the output may be wrong!
int __userpurge def_6832F4@<eax>(int a1@<ebx>, int *a2@<edi>, _DWORD *a3@<esi>, int a4)
{
  TESPackage *v4; // ecx
  int v5; // ebp
  int v6; // eax
  void (__cdecl ***v7)(int); // ecx

  v4 = (TESPackage *)a3[2];
  if ( v4 )
  {
    if ( v4->members.type == 1 && !sub_5660A0(v4) )
    {
      v5 = *a2;
      a2[2] = a3[2];
      v6 = (*(int (__thiscall **)(_DWORD *))(*a3 + 0xCC))(a3);
      (*(void (__thiscall **)(int *, int))(v5 + 0xD0))(a2, v6);
    }
  }
  v7 = *(void (__cdecl ****)(int))(a1 + 0x58);
  if ( v7 )
    (**v7)(1);
  *(_DWORD *)(a1 + 0x58) = a2;
  return a1;
}
