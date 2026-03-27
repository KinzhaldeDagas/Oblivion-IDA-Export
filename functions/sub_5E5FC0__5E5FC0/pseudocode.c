char __userpurge sub_5E5FC0@<al>(Actor *this@<ecx>, int ebx0@<ebx>, float a2)
{
  NiObject *v3; // eax
  const void **p_vftable; // esi
  NiObject *ExtraData; // eax
  float *v6; // eax
  float *v7; // eax

  v3 = (NiObject *)this->vtbl->super.super.GetNiNode(this);
  p_vftable = (const void **)&v3->__vftable;
  if ( v3 )
  {
    if ( a2 < 1.0 )
    {
      ExtraData = (NiObject *)NiObjectNET_GetExtraData((NiObjectNET *)v3, off_A3FA90);
      v3 = NiRTTI_Cast((BSStringT *)dword_B35294, ExtraData);
      if ( v3 )
      {
        *(float *)&v3[1].members.m_uiRefCount = a2;
      }
      else
      {
        v6 = (float *)FormHeapAlloc(0x10u);
        if ( v6 )
          v7 = sub_5E1570(v6, a2);
        else
          v7 = 0;
        LOBYTE(v3) = NiNode_AddNiExtraData(p_vftable, ebx0, (unsigned int *)v7);
      }
    }
    else
    {
      LOBYTE(v3) = sub_6FFAC0(v3, off_A3FA90);
    }
  }
  return (char)v3;
}
