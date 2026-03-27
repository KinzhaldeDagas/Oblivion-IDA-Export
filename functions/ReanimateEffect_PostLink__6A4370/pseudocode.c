NiNode *__thiscall ReanimateEffect_PostLink(volatile LONG ***this, Actor *a2)
{
  NiNode *result; // eax
  NiNode *v4; // edi
  UInt32 v5; // ecx
  void (__stdcall *v6)(int, int); // edx
  int v7; // eax
  volatile LONG **m_extraDataList; // ecx

  ActiveEffect_Base_PostLink(this, (int)a2);
  result = a2->vtbl->super.super.GetNiNode(a2);
  v4 = result;
  if ( result )
  {
    v5 = sub_5E12B0(a2);
    if ( v5 )
    {
      v6 = *(void (__stdcall **)(int, int))(*(_DWORD *)v5 + 0x9C);
      if ( (int)*(this + 0xF) >= 0x28 )
        v6(0, 0);
      else
        v6(1, 1);
    }
    if ( (int)*(this + 0xF) < 0x1E )
      sub_88D070(v4, 1, 1, 0);
    v7 = (int)v4->vtbl->super.GetObjectByName((NiAVObject *)v4, "Bip01 Spine2");
    if ( v7 )
    {
      result = (NiNode *)sub_47FAC0(v7);
      if ( result )
      {
        m_extraDataList = (volatile LONG **)result->members.super.super.m_extraDataList;
        *(this + 0xE) = m_extraDataList;
        return (NiNode *)(*((int (__thiscall **)(volatile LONG **, int))*m_extraDataList + 0x27))(m_extraDataList, 6);
      }
    }
    else
    {
      return (NiNode *)PrintError("No Bip01 Spine2 bone for reanimation. Need a backup bone!");
    }
  }
  return result;
}
