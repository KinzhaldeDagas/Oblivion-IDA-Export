char __userpurge sub_682820@<al>(int a1@<ecx>, int a2@<esi>, Actor *a3, _BYTE *a4)
{
  Actor *v4; // edi
  _DWORD *v6; // ebp
  Actor *v7; // esi
  int v8; // ebx
  int v9; // ecx
  void (__thiscall ***flags)(_DWORD, int); // ecx
  LowProcess *process; // esi
  _WORD *v13; // eax

  v4 = a3; /*0x682823*/
  if ( !a3 || !a3->members.super.process ) /*0x682833*/
    return 0; /*0x682837*/
  sub_49F470(&unk_B3C000); /*0x682843*/
  v6 = (_DWORD *)(a1 + 0x30); /*0x68284d*/
  a3 = 0; /*0x682853*/
  if ( !NiTMap_GetAt(v6, (int)v4, &a3) || (v7 = a3) == 0 ) /*0x68286e*/
  {
    process = v4->members.super.process; /*0x68290a*/
    if ( !Actor::GetProcessLevel(v4) ) /*0x68290f*/
    {
      v13 = OblivionDynamicCast( /*0x682925*/
              process,
              0,
              (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
              &HighProcess `RTTI Type Descriptor',
              0);
      if ( v13 ) /*0x68292f*/
        sub_628590(v13); /*0x682933*/
    }
    j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&unk_B3C000); /*0x68293d*/
    return 0; /*0x682945*/
  }
  v8 = ((int (__thiscall *)(LowProcess *, int))v4->members.super.process->CreatePath)(v4->members.super.process, a2); /*0x682881*/
  if ( !v8 ) /*0x682885*/
  {
    v4->members.super.process->Unk_101(v4->members.super.process); /*0x682892*/
    v8 = (int)v4->members.super.process->CreatePath(v4->members.super.process); /*0x6828a1*/
  }
  sub_68AE20((_DWORD *)v7->members.super.super.super.flags, &v7->members.super.super.super.modlist.next); /*0x6828aa*/
  (*(void (__thiscall **)(int, TESForm::FormFlags))(*(_DWORD *)v8 + 8))(v8, v7->members.super.super.super.flags); /*0x6828ba*/
  *a4 = LOBYTE(v7->members.super.super.rot.y); /*0x6828c3*/
  NiTMap_RemoveAt(v6, (int)v4); /*0x6828c8*/
  v9 = *(_DWORD *)&v7->members.super.super.super.type; /*0x6828cd*/
  if ( v9 ) /*0x6828d2*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x10))(v9, 1); /*0x6828db*/
  flags = (void (__thiscall ***)(_DWORD, int))v7->members.super.super.super.flags; /*0x6828dd*/
  if ( flags ) /*0x6828e2*/
    (**flags)(flags, 1); /*0x6828ea*/
  FormHeapFree((unsigned int)v7); /*0x6828ed*/
  j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&unk_B3C000); /*0x6828fc*/
  return 1; /*0x682902*/
}
