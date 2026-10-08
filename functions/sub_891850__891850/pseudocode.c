void __thiscall sub_891850(_DWORD *this, int a2)
{
  int *v2; // ecx
  int v3; // edi
  int v4; // edx
  int i; // eax
  int v6; // esi
  int v7; // edx
  int *j; // eax
  char *v9; // edx
  hkVector4 *v10; // edx
  hkVector4 v11; // xmm0
  _DWORD *v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // esi
  bool v17; // zf

  if ( *(this + 0x85) != 0x1E ) /*0x891865*/
  {
    v2 = *(int **)(a2 + 0x28); /*0x89186e*/
    v3 = 0x1F; /*0x891873*/
    if ( v2 ) /*0x891878*/
    {
      v4 = v2[3]; /*0x89187e*/
      for ( i = *(_DWORD *)(a2 + 0x28); v4; v4 = *(_DWORD *)(v4 + 0xC) ) /*0x891885*/
        i = v4; /*0x891887*/
      v6 = *(_DWORD *)(i + 0x1C) & 0x3F; /*0x891897*/
      *(this + 0x86) = v6; /*0x89189a*/
      v7 = v2[3]; /*0x8918a0*/
      for ( j = v2; v7; v7 = *(_DWORD *)(v7 + 0xC) ) /*0x8918a7*/
        j = (int *)v7; /*0x8918b0*/
      if ( *((_BYTE *)j + 0x18) == 1 && (v9 = (char *)j + j[4]) != 0 ) /*0x8918c4*/
        v10 = (hkVector4 *)(*((_DWORD *)v9 + 0x14) + 0xD0); /*0x8918c9*/
      else
        v10 = &unk_BA7A40; /*0x8918d1*/
      v11 = *v10; /*0x8918d6*/
      v12 = this; /*0x8918d9*/
      *((hkVector4 *)this + 0x22) = v11; /*0x8918dd*/
      if ( *(_DWORD *)(a2 + 0x2C) == 0xFFFFFFFF ) /*0x8918e8*/
      {
        v13 = *v2; /*0x8918ea*/
        if ( v13 ) /*0x8918ee*/
          v14 = *(_DWORD *)(v13 + 8); /*0x8918f0*/
        else
          v14 = 0; /*0x8918f5*/
        if ( v14 ) /*0x8918f9*/
        {
          v15 = *(_DWORD *)(v14 + 0x10); /*0x8918fb*/
          if ( v15 >= 0x1E ) /*0x891901*/
            v15 = 0x1E; /*0x891903*/
          v3 = v15; /*0x891908*/
        }
      }
      else if ( v6 != 0x11 ) /*0x89190f*/
      {
        v16 = sub_8AFBE0(v2); /*0x891917*/
        if ( v16 ) /*0x89191e*/
        {
          if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 0x9C))(v16, *(_DWORD *)(a2 + 0x2C)) >= 0x1E ) /*0x891933*/
            v3 = 0x1E; /*0x891949*/
          else
            v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 0x9C))(v16, *(_DWORD *)(a2 + 0x2C)); /*0x891945*/
        }
        v12 = this; /*0x89194e*/
      }
      if ( v12[0x85] == 0x1F || v3 == 0x1E ) /*0x89195e*/
      {
        v17 = (*((_BYTE *)v12 + 0x1F6) & 1) == 0; /*0x891960*/
        v12[0x85] = v3; /*0x891967*/
        if ( !v17 || v3 == 0x1E ) /*0x891972*/
        {
          if ( v3 == 0x1E ) /*0x891977*/
            v12[0x7D] |= 0x20000u; /*0x891979*/
          else
            v12[0x7D] &= ~0x20000u; /*0x89198c*/
        }
      }
    }
  }
}
