void __thiscall TESForm_CopyAllComponentsFrom(TESForm *this, TESForm *a2)
{
  _DWORD v3[26]; // [esp+8h] [ebp-DCh] BYREF
  _DWORD v4[26]; // [esp+70h] [ebp-74h] BYREF
  unsigned int v5; // [esp+E0h] [ebp-4h]

  FormComponentList_ZeroInit(v4); /*0x46ace0*/
  v5 = 0; /*0x46ace9*/
  FormComponentList_ZeroInit(v3); /*0x46acf4*/
  LOBYTE(v5) = 1; /*0x46acfe*/
  FormComponentList_Build(v4, this); /*0x46ad06*/
  FormComponentList_Build(v3, a2); /*0x46ad17*/
  FormComponentList_CopyFrom((char *)v4, (int)v3); /*0x46ad25*/
  LOBYTE(v5) = 0; /*0x46ad2e*/
  Shared_NoOpVirtual_60D0A0(v3); /*0x46ad36*/
  v5 = 0xFFFFFFFF; /*0x46ad3f*/
  Shared_NoOpVirtual_60D0A0(v4); /*0x46ad4a*/
}
