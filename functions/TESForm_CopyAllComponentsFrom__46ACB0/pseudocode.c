void __thiscall TESForm_CopyAllComponentsFrom(TESForm *this, TESForm *a2)
{
  _DWORD v3[26]; // [esp+8h] [ebp-DCh] BYREF
  _DWORD v4[26]; // [esp+70h] [ebp-74h] BYREF
  unsigned int v5; // [esp+E0h] [ebp-4h]

  FormComponentList_ZeroInit(v4);
  v5 = 0;
  FormComponentList_ZeroInit(v3);
  LOBYTE(v5) = 1;
  FormComponentList_Build(v4, this);
  FormComponentList_Build(v3, a2);
  FormComponentList_CopyFrom((char *)v4, (int)v3);
  LOBYTE(v5) = 0;
  TESTexture::ClearComponentReferences(v3);
  v5 = 0xFFFFFFFF;
  TESTexture::ClearComponentReferences(v4);
}
