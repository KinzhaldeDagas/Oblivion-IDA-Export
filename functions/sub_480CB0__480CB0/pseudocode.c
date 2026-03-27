void __cdecl sub_480CB0(Atmosphere *a1, int a2)
{
  int v2; // eax
  NiAVObject *v3; // eax
  int v4; // eax

  if ( (*(_BYTE *)(a2 + 0x18) & 1) == 0
    || !a1
    || (v2 = ((int (__thiscall *)(Atmosphere *))a1->__vftbl->Initialize)(a1)) == 0 )
  {
LABEL_6:
    if ( (*(_BYTE *)(a2 + 0x18) & 2) != 0 )
    {
      v3 = sub_452A60(a1);
      if ( v3 )
      {
        v4 = (int)v3->vtbl->super.GetType((NiObject *)v3);
        if ( v4 )
        {
          while ( (char *)v4 != dword_B35288 )
          {
            v4 = *(_DWORD *)(v4 + 4);
            if ( !v4 )
              goto LABEL_11;
          }
          return;
        }
      }
LABEL_11:
      if ( (*(_BYTE *)(a2 + 0x18) & 2) != 0
        && sub_452A60(a1)
        && sub_452A60(a1)->members.super.m_pcName
        && !strcmp(sub_452A60(a1)->members.super.m_pcName, "Arrow") )
      {
        return;
      }
    }
    if ( a1 == *(Atmosphere **)(a2 + 0x10) )
      *(_DWORD *)(a2 + 0x14) = *(_DWORD *)(a2 + 0xC);
    ++*(_DWORD *)(a2 + 0xC);
    return;
  }
  while ( (_UNKNOWN *)v2 != &unk_B365AC )
  {
    v2 = *(_DWORD *)(v2 + 4);
    if ( !v2 )
      goto LABEL_6;
  }
}
