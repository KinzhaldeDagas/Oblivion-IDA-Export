// Verified destructor releases the seed table's backing buffer from TESObjectTREE+0x4C after restoring the NiTArray<unsigned int> vtable at +0x48, then destroys TESIconTree, TESModelTree, and TESObject bases.
void __thiscall TESObjectTREE_dtor(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *this)
{
  TESModel *v2; // edi
  unsigned __int8 *v3; // ebx
  unsigned int *seedValues; // [esp-4h] [ebp-2Ch]

  v2 = (TESModel *)&this->prefix_000_047[0x24]; /*0x4b9fbc*/
  v3 = &this->prefix_000_047[0x3C]; /*0x4b9fbf*/
  *(_DWORD *)this->prefix_000_047 = &TESObjectTREE::`vftable'{for `TESObjectTREE'}; /*0x4b9fc2*/
  *(_DWORD *)&this->prefix_000_047[0x24] = &TESObjectTREE::`vftable'{for `TESModelTree'}; /*0x4b9fc8*/
  *(_DWORD *)&this->prefix_000_047[0x3C] = &TESObjectTREE::`vftable'{for `TESIconTree'}; /*0x4b9fce*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4b9fdc*/
  seedValues = this->seedValues;                // Verified destructor restores the embedded NiTArray<unsigned int> vtable at +0x48 then frees its backing pointer at +0x4C. Constructor starts the array empty; no Oblivion TREE record path that populates this array was found in TESObjectTREE_LoadFormRecord. /*0x4b9fe4*/
  this->seedArrayVftable = &NiTArray<unsigned int>::`vftable'; /*0x4b9fe5*/
  FormHeapFree((unsigned int)seedValues); /*0x4b9fec*/
  TESTexture_destr(v3); /*0x4b9ffb*/
  TESModel::~TESModel(v2); /*0x4ba007*/
  TESObject_destr((TESForm *)this); /*0x4ba016*/
}
