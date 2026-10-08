char __userpurge sub_5E5FC0@<al>(Actor *this@<ecx>, int ebx0@<ebx>, float a3)
{
  NiObject *v3; // eax
  const void **p_vftable; // esi
  NiObject *ExtraData; // eax
  NiObject *v6; // eax
  unsigned int *v7; // eax

  v3 = (NiObject *)this->vtbl->super.super.GetNiNode(this); /*0x5e5fea*/
  p_vftable = (const void **)&v3->__vftable; /*0x5e5fec*/
  if ( v3 ) /*0x5e5ff0*/
  {
    if ( a3 < 1.0 ) /*0x5e6008*/
    {
      ExtraData = (NiObject *)NiObjectNET_GetExtraData((NiObjectNET *)v3, off_A3FA90); /*0x5e6022*/
      v3 = NiRTTI_Cast((BSStringT *)&MEMORY[0xB33E90][0x1404], ExtraData); /*0x5e602d*/
      if ( v3 ) /*0x5e6037*/
      {
        *(float *)&v3[1].members.m_uiRefCount = a3; /*0x5e603d*/
      }
      else
      {
        v6 = (NiObject *)FormHeapAlloc(0x10u); /*0x5e6055*/
        if ( v6 ) /*0x5e606b*/
          v7 = (unsigned int *)sub_5E1570(v6, a3); /*0x5e6077*/
        else
          v7 = 0; /*0x5e607e*/
        LOBYTE(v3) = NiObjectNET_AddExtraData(p_vftable, ebx0, v7); /*0x5e608b*/
      }
    }
    else
    {
      LOBYTE(v3) = sub_6FFAC0(v3, off_A3FA90); /*0x5e600a*/
    }
  }
  return (char)v3; /*0x5e600f*/
}
