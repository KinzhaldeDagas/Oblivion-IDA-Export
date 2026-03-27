BSStringT *__thiscall sub_590330(BSStringT *this, int a2)
{
  _DWORD *v2; // ebx
  int v4; // edi
  int v5; // eax
  BSStringT *v6; // eax
  BSStringT *v7; // esi
  BSStringT *v9; // [esp+10h] [ebp-4h]

  v2 = *(_DWORD **)(a2 + 0x10);
  v9 = 0;
  if ( !v2 )
    return v9;
  while ( 1 )
  {
    v4 = v2[2];
    v2 = (_DWORD *)*v2;
    if ( *(_DWORD *)v4 != 0x28 )
    {
      if ( *(_DWORD *)v4 == 0x2D )
        this = *((BSStringT **)this + 4);
      goto LABEL_9;
    }
    v5 = Double_To_SInt32(*(float *)(v4 + 4));
    v6 = (BSStringT *)sub_5902A0((TileWindow *)this, v5);
    v7 = v6;
    if ( !v6 )
      break;
    (*((void (__thiscall **)(BSStringT *, BSStringT *, _DWORD, _DWORD))v6->m_data + 1))(v6, this, 0, 0);
    BSStringT_Set(v7 + 1, *(const char **)(v4 + 8), 0);
    if ( !v9 )
      v9 = v7;
    *(_DWORD *)(v4 + 0x10) = v7;
    this = v7;
LABEL_9:
    if ( !v2 )
      return v9;
  }
  PrintError("Unable to create tile. Aborting menu creation.");
  return 0;
}
