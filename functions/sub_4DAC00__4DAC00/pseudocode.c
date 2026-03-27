char __cdecl sub_4DAC00(Atmosphere *a1, int a2)
{
  int v2; // edi
  int v3; // eax
  char *unk10; // eax
  char *v5; // ebx
  const char *v6; // esi
  _DWORD *v7; // ecx

  v2 = *(_DWORD *)(a2 + 0xC);
  a2 = v2;
  if ( a1 )
  {
    v3 = ((int (__thiscall *)(Atmosphere *))a1->__vftbl->Initialize)(a1);
    if ( v3 )
    {
      while ( (_UNKNOWN *)v3 != &unk_B365AC )
      {
        v3 = *(_DWORD *)(v3 + 4);
        if ( !v3 )
          goto LABEL_7;
      }
      *(_BYTE *)v2 |= 8u;
    }
  }
LABEL_7:
  unk10 = (char *)sub_452A60(a1);
  v5 = unk10;
  if ( a1 != *(Atmosphere **)(v2 + 0x10) )
  {
    if ( unk10 )
    {
      v6 = *((const char **)unk10 + 2);
      if ( v6 )
      {
        if ( !strcmp(v6, "Arrow") )
          return (char)unk10;
        v2 = a2;
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 8) + 0x190))(*(_DWORD *)(v2 + 8))
    && v5
    && (unk10 = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5)) != 0 )
  {
    while ( unk10 != dword_B35288 )
    {
      unk10 = *((char **)unk10 + 1);
      if ( !unk10 )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    unk10 = (char *)a1->unk10;
    if ( unk10 )
    {
      unk10 = (char *)NiRTTI_Cast((BSStringT *)dword_BA7D84, (NiObject *)a1->unk10);
      if ( unk10 )
      {
        if ( a1 == *(Atmosphere **)(v2 + 0x10) )
          *(_BYTE *)v2 |= 2u;
        v7 = *((_DWORD **)unk10 + 2);
        if ( v7 && (LOBYTE(unk10) = *sub_8A63F0(v7, &a2) != 0, (_BYTE)unk10) )
          ++*(_WORD *)(v2 + 2);
        else
          ++*(_WORD *)(v2 + 4);
      }
    }
  }
  return (char)unk10;
}
