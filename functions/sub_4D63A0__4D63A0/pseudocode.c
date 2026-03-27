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

  v6 = sub_4D58B0(this);
  this->members.cellProcessLevel = 5;
  (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)a5 + 0x84))(a5, v6, 1);
  if ( (this->members.flags0 & 1) != 0 )
    v7 = sub_424180(&this->members.extraData);
  else
    v7 = (BSExtraDataVtbl *)bhkWorldM;
  if ( v7 )
  {
    if ( (this->members.flags0 & 1) == 0 )
      sub_4D4D00((ExtraDataList *)this);
    BYTE1(v7[3].Destructor) = IsCollisionOn == 0;
    sub_88B680((int *)v7, havokDebug);
  }
  if ( sub_4E4980() )
  {
    pathGrid = this->members.pathGrid;
    if ( pathGrid )
      sub_4E5550(pathGrid);
  }
  sub_4CB670(this, 1);
  sub_4CB590(this, st5_0, a3, a4, 1);
  NiAVObject_InitializePropertyState(v6);
  return NiAVObject_UpdateNiAVObject(v6, 0.0, 0);
}
