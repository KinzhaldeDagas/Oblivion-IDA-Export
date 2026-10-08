char __thiscall sub_7AA3C0(int this, int a2, int a3)
{
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax

  if ( a2 == *(_DWORD *)(this + 0x223C) ) /*0x7aa3ce*/
    return *(_BYTE *)(this + 0x2240); /*0x7aa3d8*/
  v5 = *(_DWORD **)(this + 0x2230); /*0x7aa3db*/
  if ( !v5 ) /*0x7aa3e7*/
    return 0; /*0x7aa40b*/
  while ( 1 ) /*0x7aa3f0*/
  {
    v6 = v5[2]; /*0x7aa3f0*/
    v5 = (_DWORD *)*v5; /*0x7aa3f8*/
    if ( v6 ) /*0x7aa3fa*/
    {
      if ( *(_DWORD *)(v6 + 0x10) == a2 ) /*0x7aa3ff*/
        break; /*0x7aa3ff*/
    }
    if ( !v5 ) /*0x7aa403*/
      return 0; /*0x7aa403*/
  }
  if ( !*(_BYTE *)(v6 + 0x19) ) /*0x7aa411*/
    goto LABEL_20; /*0x7aa411*/
  if ( (_BYTE)a3 ) /*0x7aa417*/
  {
    if ( unk_B42CDE && *(_DWORD *)(v6 + 0x14) ) /*0x7aa421*/
    {
      do /*0x7aa444*/
      {
        v7 = (*(int (__stdcall **)(_DWORD, int *, int, int))(**(_DWORD **)(v6 + 0x14) + 0x1C))( /*0x7aa438*/
               *(_DWORD *)(v6 + 0x14),
               &a3,
               4,
               1);
        ++g_rendererBoundVolumeOcclusionWaitLoops; /*0x7aa43a*/
      }
      while ( v7 == 1 ); /*0x7aa444*/
      if ( !v7 ) /*0x7aa448*/
      {
        v8 = a3; /*0x7aa44a*/
        *(_BYTE *)(v6 + 0x18) = a3 == 0; /*0x7aa453*/
        *(_DWORD *)(v6 + 0x1C) = v8; /*0x7aa456*/
LABEL_18:
        *(_BYTE *)(v6 + 0x19) = 0; /*0x7aa47d*/
        goto LABEL_19; /*0x7aa47d*/
      }
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v6 + 0x14) + 8))(*(_DWORD *)(v6 + 0x14)); /*0x7aa464*/
      *(_DWORD *)(v6 + 0x14) = 0; /*0x7aa466*/
    }
    else if ( !unk_B42CDF ) /*0x7aa471*/
    {
      goto LABEL_18; /*0x7aa471*/
    }
    *(_DWORD *)(v6 + 0x1C) = 0xF423F; /*0x7aa473*/
    *(_BYTE *)(v6 + 0x18) = 0; /*0x7aa47a*/
    goto LABEL_18; /*0x7aa47a*/
  }
LABEL_19:
  if ( !*(_BYTE *)(v6 + 0x19) ) /*0x7aa480*/
  {
LABEL_20:
    *(_DWORD *)(this + 0x223C) = a2; /*0x7aa485*/
    *(_BYTE *)(this + 0x2240) = *(_BYTE *)(v6 + 0x18); /*0x7aa48e*/
  }
  return *(_BYTE *)(v6 + 0x18); /*0x7aa3d6*/
}
