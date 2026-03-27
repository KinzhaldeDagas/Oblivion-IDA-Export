char __cdecl sub_4F7FA0(_DWORD *a1, int a2, int a3, double *a4)
{
  _DWORD *v7; // edi
  int v8; // ebx
  TESPackage *v9; // eax
  BSExtraDataVtbl *ExtraPackage; // esi
  ExtraDataList *v11; // edi

  *a4 = 0.0;
  v7 = 0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) )
      v7 = a1;
  }
  v8 = 0;
  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 4) == 0x3D )
      v8 = a2;
  }
  if ( v7 )
  {
    if ( v8 )
    {
      v9 = (TESPackage *)sub_5E03A0(v7);
      ExtraPackage = (BSExtraDataVtbl *)v9;
      if ( v9 )
      {
        if ( sub_5660A0(v9) )
        {
          v11 = (ExtraDataList *)(v7 + 0x11);
          if ( ExtraDataList::GetExtraPackage(v11) )
            ExtraPackage = ExtraDataList::GetExtraPackage(v11);
        }
      }
      if ( ExtraPackage == (BSExtraDataVtbl *)v8 )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsCurrentPackage >> %0.2f", *a4);
  return 1;
}
