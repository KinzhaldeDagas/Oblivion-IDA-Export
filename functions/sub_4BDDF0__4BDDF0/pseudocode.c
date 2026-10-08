int __usercall sub_4BDDF0@<eax>(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // eax
  TESObjectCELL *v6; // edi
  _DWORD *v7; // eax
  int v8; // esi
  int v9; // eax

  if ( a1[3] != 6 ) /*0x4bddf7*/
  {
    v5 = a1[7]; /*0x4bddf9*/
    v6 = *(TESObjectCELL **)(v5 + 0xC); /*0x4bddfd*/
    if ( v6 ) /*0x4bde02*/
    {
      if ( *(_BYTE *)(v5 + 0x10) ) /*0x4bde04*/
      {
        if ( GetObjectPointerAt_054(*(TESObjectCELL **)(v5 + 0xC)) ) /*0x4bde0c*/
          sub_442740(MEMORY[0xB333A0], a2, a3, a4, v6); /*0x4bde1c*/
      }
    }
  }
  *(_BYTE *)(a1[7] + 0x10) = 0; /*0x4bde25*/
  v7 = (_DWORD *)a1[7]; /*0x4bde29*/
  v8 = a1[6]; /*0x4bde31*/
  v9 = TESObjectCELL_PackExteriorGroupLabel(*v7, v7[1]); /*0x4bde36*/
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x10))(v8, v9); /*0x4bde48*/
}
