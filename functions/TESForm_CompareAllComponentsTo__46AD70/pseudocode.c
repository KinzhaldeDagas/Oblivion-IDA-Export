char __thiscall TESForm_CompareAllComponentsTo(TESForm *this, TESForm *a2)
{
  char v4; // bl
  _DWORD v5[26]; // [esp+10h] [ebp-DCh] BYREF
  _DWORD v6[26]; // [esp+78h] [ebp-74h] BYREF
  unsigned int v7; // [esp+E8h] [ebp-4h]

  if ( !a2 )
    return 1;
  FormComponentList_ZeroInit(v6);
  v7 = 0;
  FormComponentList_ZeroInit(v5);
  LOBYTE(v7) = 1;
  FormComponentList_Build(v6, this);
  FormComponentList_Build(v5, a2);
  v4 = FormComponentList_CompareTo((char *)v6, (int)v5);
  LOBYTE(v7) = 0;
  TESTexture::ClearComponentReferences(v5);
  v7 = 0xFFFFFFFF;
  TESTexture::ClearComponentReferences(v6);
  return v4;
}
