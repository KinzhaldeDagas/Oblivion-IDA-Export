char __usercall sub_88C440@<al>(int a1@<ecx>, int a2@<ebp>)
{
  char v2; // bl
  int v4; // ecx
  int v5; // edi
  _DWORD **v6; // eax
  int v8; // [esp+4h] [ebp-114h]
  CHAR Caption[256]; // [esp+14h] [ebp-104h] BYREF

  v2 = 0;
  if ( !HavokGamePausedFlag )
  {
    v4 = dword_BA7924;
    if ( dword_BA7924 > (unsigned int)fromiMaxPickHavok )
    {
      if ( dword_BA7934 )
        _sprintf(
          Caption,
          "%d Havok picks (%d path, %d LOS, %d ViewCaster) used this frame. (Other type = %d)",
          v4,
          dword_BA7928,
          dword_BA792C,
          dword_BA7930,
          dword_BA7934);
      else
        _sprintf(
          Caption,
          "%d Havok picks (%d path, %d LOS, %d ViewCaster) used this frame.",
          v4,
          dword_BA7928,
          dword_BA792C,
          dword_BA7930);
      if ( off_B27E60 )
        ((void (__cdecl *)(LPCSTR, LPCSTR))off_B27E60)("WARNING", Caption);
    }
    dword_BA7924 = 0;
    dword_BA7928 = 0;
    dword_BA792C = 0;
    dword_BA7930 = 0;
  }
  if ( *(_DWORD *)(a1 + 0x2C) )
  {
    sub_889F20((int *)a1, 0);
    sub_88A120((_DWORD *)a1, a2);
  }
  if ( *(_BYTE *)(a1 + 0x19) )
  {
    v5 = dword_BA7914;
    if ( dword_BA7914 )
    {
      do
      {
        --v5;
        if ( *(_DWORD *)(a1 + 0x10) && *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1) + 0xB4) == 9 )
        {
          sub_8BAB10(*(_BYTE **)(a1 + 0x10), SLODWORD(flt_BA790C), SLODWORD(flt_BA790C));
          sub_8BAB60(*(_DWORD *)(a1 + 0x10));
        }
        else
        {
          *(float *)&v8 = flt_BA790C;
          v6 = (_DWORD **)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1);
          sub_898B70(v6, v8);
        }
      }
      while ( v5 );
      sub_88A660((_DWORD *)a1, flt_B2E2E0);
      if ( *(_DWORD *)(a1 + 0x14) )
      {
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 0x14) + 8))(0.0);
        sub_8BA9F0();
      }
      sub_88A790((_DWORD *)a1);
      v2 = 1;
    }
  }
  if ( *(_DWORD *)(a1 + 0x4C) )
    sub_88A280((unsigned int *)a1);
  return v2;
}
