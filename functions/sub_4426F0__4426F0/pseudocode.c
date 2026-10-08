void __userpurge sub_4426F0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESWorldSpace *a5)
{
  unsigned int i; // edi
  int v7; // eax
  TESObjectCELL *v8; // esi

  for ( i = 0; i < uExteriorCellBuffer; ++i ) /*0x4426fa*/
  {
    v7 = *(_DWORD *)(a1 + 0x3C); /*0x442708*/
    v8 = *(TESObjectCELL **)(v7 + 4 * i); /*0x44270b*/
    if ( v8 ) /*0x442710*/
    {
      if ( TESObjectCELL_GetWorldSpace(*(TESObjectCELL **)(v7 + 4 * i)) == a5 ) /*0x44271b*/
      {
        sub_4400A0(a1, a2, a3, a4, v8, 1); /*0x442722*/
        --i; /*0x442727*/
      }
    }
  }
}
