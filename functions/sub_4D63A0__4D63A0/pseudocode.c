int __userpurge sub_4D63A0@<eax>(
        TESObjectCELL *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5)
{
  NiAVObject *v6; // edi
  BSExtraDataVtbl *v7; // ebp
  TESPathGrid *pathGrid; // ecx

  v6 = (NiAVObject *)sub_4D58B0(this); /*0x4d63ae*/
  this->members.cellProcessLevel = 5; /*0x4d63b0*/
  (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)a5 + 0x84))(a5, v6, 1); /*0x4d63bf*/
  if ( (this->members.flags0 & 1) != 0 ) /*0x4d63c5*/
    v7 = sub_424180(&this->members.extraData); /*0x4d63cf*/
  else
    v7 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4d63d3*/
  if ( v7 ) /*0x4d63db*/
  {
    if ( (this->members.flags0 & 1) == 0 ) /*0x4d63e1*/
      sub_4D4D00((ExtraDataList *)this); /*0x4d63e5*/
    BYTE1(v7[3].Destructor) = MEMORY[0xB33A34] == 0; /*0x4d63f4*/
    sub_88B680((int *)v7, havokDebug); /*0x4d6401*/
  }
  if ( sub_4E4980() ) /*0x4d6406*/
  {
    pathGrid = this->members.pathGrid; /*0x4d640f*/
    if ( pathGrid ) /*0x4d6414*/
      sub_4E5550(pathGrid); /*0x4d6416*/
  }
  TESObjectCELL_RegisterOrUnregisterAttachedLights(this, 1);// As the cell enters process level 5 and its scene node is attached, register ordinary attached light sources for every cell reference. /*0x4d641f*/
  sub_4CB590(this, st5_0, a3, a4, 1); /*0x4d6428*/
  NiAVObject_InitializePropertyState(v6); /*0x4d642f*/
  return NiAVObject_UpdateNiAVObject(v6, 0.0, 0); /*0x4d6443*/
}
