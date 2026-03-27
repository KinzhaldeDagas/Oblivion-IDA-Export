NiAVObject *__cdecl sub_480DE0(Atmosphere *a1, int a2)
{
  NiAVObject *result; // eax
  NiAVObject *v3; // eax
  int v4; // eax

  if ( (*(_BYTE *)(a2 + 0x18) & 1) == 0
    || !a1
    || (result = (NiAVObject *)((int (__thiscall *)(Atmosphere *))a1->__vftbl->Initialize)(a1)) == 0 )
  {
LABEL_6:
    if ( (*(_BYTE *)(a2 + 0x18) & 2) != 0 )
    {
      v3 = sub_452A60(a1);
      if ( v3 )
      {
        result = (NiAVObject *)v3->vtbl->super.GetType((NiObject *)v3);
        if ( result )
        {
          while ( result != (NiAVObject *)dword_B35288 )
          {
            result = (NiAVObject *)result->members.super.super.m_uiRefCount;
            if ( !result )
              goto LABEL_11;
          }
          return result;
        }
      }
LABEL_11:
      if ( (*(_BYTE *)(a2 + 0x18) & 2) != 0 )
      {
        if ( sub_452A60(a1) )
        {
          if ( sub_452A60(a1)->members.super.m_pcName )
          {
            result = sub_452A60(a1);
            if ( !strcmp(result->members.super.m_pcName, "Arrow") )
              return result;
          }
        }
      }
    }
    v4 = *(_DWORD *)(a2 + 0xC);
    if ( v4 == *(_DWORD *)(a2 + 0x14) )
      *(_DWORD *)(a2 + 0x10) = a1;
    result = (NiAVObject *)(v4 + 1);
    *(_DWORD *)(a2 + 0xC) = result;
    return result;
  }
  while ( result != (NiAVObject *)&unk_B365AC )
  {
    result = (NiAVObject *)result->members.super.super.m_uiRefCount;
    if ( !result )
      goto LABEL_6;
  }
  return result;
}
