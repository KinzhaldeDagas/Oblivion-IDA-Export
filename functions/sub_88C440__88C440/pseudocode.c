char __usercall sub_88C440@<al>(int a1@<ecx>, int a2@<ebp>)
{
  char v2; // bl
  int v4; // ecx
  int v5; // edi
  _DWORD **v6; // eax
  int v8; // [esp+4h] [ebp-114h]
  CHAR Caption[256]; // [esp+14h] [ebp-104h] BYREF

  v2 = 0; /*0x88c455*/
  if ( !MEMORY[0xBA790A] ) /*0x88c457*/
  {
    v4 = unk_BA7924; /*0x88c466*/
    if ( unk_BA7924 > (unsigned int)fromiMaxPickHavok ) /*0x88c472*/
    {
      if ( unk_BA7934 ) /*0x88c474*/
        _sprintf( /*0x88c49c*/
          Caption,
          "%d Havok picks (%d path, %d LOS, %d ViewCaster) used this frame. (Other type = %d)",
          v4,
          unk_BA7928,
          unk_BA792C,
          unk_BA7930,
          unk_BA7934);
      else
        _sprintf( /*0x88c4c5*/
          Caption,
          "%d Havok picks (%d path, %d LOS, %d ViewCaster) used this frame.",
          v4,
          unk_BA7928,
          unk_BA792C,
          unk_BA7930);
      if ( off_B27E60 ) /*0x88c4cd*/
        ((void (__cdecl *)(LPCSTR, LPCSTR))off_B27E60)("WARNING", Caption); /*0x88c4e2*/
    }
    unk_BA7924 = 0; /*0x88c4e7*/
    unk_BA7928 = 0; /*0x88c4f1*/
    unk_BA792C = 0; /*0x88c4fb*/
    unk_BA7930 = 0; /*0x88c505*/
  }
  if ( *(_DWORD *)(a1 + 0x2C) ) /*0x88c50f*/
  {
    sub_889F20((int *)a1, 0); /*0x88c519*/
    sub_88A120((_DWORD *)a1, a2); /*0x88c520*/
  }
  if ( *(_BYTE *)(a1 + 0x19) ) /*0x88c525*/
  {
    v5 = LODWORD(flt_BA790C[2]); /*0x88c530*/
    if ( LODWORD(flt_BA790C[2]) ) /*0x88c530*/
    {
      do /*0x88c59b*/
      {
        --v5; /*0x88c543*/
        if ( *(_DWORD *)(a1 + 0x10) && *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1) + 0xB4) == 9 ) /*0x88c55b*/
        {
          sub_8BAB10(*(_BYTE **)(a1 + 0x10), COERCE_INT(flt_BA790C[0]), COERCE_INT(flt_BA790C[0])); /*0x88c570*/
          sub_8BAB60(*(_DWORD *)(a1 + 0x10)); /*0x88c578*/
        }
        else
        {
          v8 = SLODWORD(flt_BA790C[0]); /*0x88c58d*/
          v6 = (_DWORD **)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1); /*0x88c590*/
          sub_898B70(v6, v8); /*0x88c594*/
        }
      }
      while ( v5 ); /*0x88c59b*/
      sub_88A660((_DWORD *)a1, flt_B2E2E0); /*0x88c5a9*/
      if ( *(_DWORD *)(a1 + 0x14) ) /*0x88c5ae*/
      {
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 0x14) + 8))(0.0); /*0x88c5c1*/
        sub_8BA9F0(); /*0x88c5c3*/
      }
      sub_88A790((_DWORD *)a1); /*0x88c5ca*/
      v2 = 1; /*0x88c5cf*/
    }
  }
  if ( *(_DWORD *)(a1 + 0x4C) ) /*0x88c5d2*/
    sub_88A280((unsigned int *)a1); /*0x88c5da*/
  return v2; /*0x88c5df*/
}
