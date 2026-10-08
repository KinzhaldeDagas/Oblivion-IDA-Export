char __stdcall sub_625850(int a1)
{
  char v1; // bl
  int v3; // eax
  NiNode *v4; // eax
  NiAVObject *ChildAtIndex; // eax

  v1 = 0; /*0x625856*/
  if ( !a1 ) /*0x62585d*/
    return 0; /*0x625861*/
  v3 = sub_4A05E0(a1); /*0x625868*/
  ++unk_B3B918; /*0x62586d*/
  if ( v3 ) /*0x625879*/
  {
    --unk_B3B918; /*0x62587b*/
    return 1; /*0x625886*/
  }
  else
  {
    if ( unk_B3B918 < 4 ) /*0x625893*/
    {
      v4 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x62589c*/
      if ( v4 ) /*0x6258a0*/
      {
        ChildAtIndex = NiNode_GetChildAtIndex(v4, 0); /*0x6258a6*/
        v1 = sub_625850((int)ChildAtIndex); /*0x6258b3*/
      }
    }
    --unk_B3B918; /*0x6258b5*/
    return v1; /*0x6258be*/
  }
}
