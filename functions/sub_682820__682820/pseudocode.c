char __userpurge sub_682820@<al>(int a1@<ecx>, int a2@<esi>, Actor *a3, _BYTE *a4)
{
  Actor *v4; // edi
  _DWORD *v6; // ebp
  unsigned int v7; // esi
  int v8; // ebx
  int v9; // ecx
  void (__thiscall ***v10)(_DWORD, int); // ecx
  LowProcess *process; // esi
  _WORD *v13; // eax

  v4 = a3;
  if ( !a3 || !a3->members.super.process )
    return 0;
  sub_49F470(&stru_B3C000);
  v6 = (_DWORD *)(a1 + 0x30);
  a3 = 0;
  if ( !NiTMap_GetAt(v6, (int)v4, &a3) || (v7 = (unsigned int)a3) == 0 )
  {
    process = v4->members.super.process;
    if ( !Actor::GetProcessLevel(v4) )
    {
      v13 = OblivionDynamicCast(
              process,
              0,
              (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
              &HighProcess `RTTI Type Descriptor',
              0);
      if ( v13 )
        sub_628590(v13);
    }
    j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&stru_B3C000);
    return 0;
  }
  v8 = ((int (__thiscall *)(LowProcess *, int))v4->members.super.process->CreatePath)(v4->members.super.process, a2);
  if ( !v8 )
  {
    v4->members.super.process->Unk_101(v4->members.super.process);
    v8 = (int)v4->members.super.process->CreatePath(v4->members.super.process);
  }
  sub_68AE20(*(_DWORD **)(v7 + 8), (_DWORD *)(v7 + 0x14));
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 8))(v8, *(_DWORD *)(v7 + 8));
  *a4 = *(_BYTE *)(v7 + 0x24);
  NiTMap_RemoveAt(v6, (int)v4);
  v9 = *(_DWORD *)(v7 + 4);
  if ( v9 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x10))(v9, 1);
  v10 = *(void (__thiscall ****)(_DWORD, int))(v7 + 8);
  if ( v10 )
    (**v10)(v10, 1);
  FormHeapFree(v7);
  j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&stru_B3C000);
  return 1;
}
