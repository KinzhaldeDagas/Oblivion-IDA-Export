void __userpurge sub_4426F0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESWorldSpace *a5)
{
  unsigned int i; // edi
  int v7; // eax
  TESObjectCELL *v8; // esi

  for ( i = 0; i < uExteriorCellBuffer; ++i )
  {
    v7 = *(_DWORD *)(a1 + 0x3C);
    v8 = *(TESObjectCELL **)(v7 + 4 * i);
    if ( v8 )
    {
      if ( TESObjectCELL_GetWorldSpace(*(TESObjectCELL **)(v7 + 4 * i)) == a5 )
      {
        sub_4400A0(a1, a2, a3, a4, v8, 1);
        --i;
      }
    }
  }
}
