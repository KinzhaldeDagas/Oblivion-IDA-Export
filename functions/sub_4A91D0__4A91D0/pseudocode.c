void *__thiscall sub_4A91D0(TESForm *this, TESForm *a2)
{
  void *result; // eax
  void *v4; // esi

  result = OblivionDynamicCast( /*0x4a91e8*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESAmmo `RTTI Type Descriptor',
             0);
  v4 = result; /*0x4a91ed*/
  if ( result ) /*0x4a91f4*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4a91f9*/
    result = *((void **)v4 + 0x1F); /*0x4a91fe*/
    *((_DWORD *)this + 0x1F) = result; /*0x4a9201*/
    *((_DWORD *)this + 0x20) = *((_DWORD *)v4 + 0x20); /*0x4a920a*/
    this->member.type = *((_BYTE *)v4 + 4); /*0x4a9213*/
  }
  return result; /*0x4a9216*/
}
