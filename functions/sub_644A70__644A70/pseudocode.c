void __userpurge sub_644A70(TESObjectREFR **this@<ecx>, double a2@<st1>, Actor *a3)
{
  TESPackage *v5; // ebx
  Atmosphere *target; // ecx
  TESObjectREFR *v7; // eax
  float v8; // [esp+1Ch] [ebp+4h]

  v5 = (TESPackage *)((int (__thiscall *)(TESObjectREFR **))LODWORD((*this)[4].member.rot.y))(this);
  if ( !*(this + 0xB) )
    ((void (__thiscall *)(TESObjectREFR **, Actor *))LODWORD((*this)[0xF].member.pos[1]))(this, a3);
  ((void (__thiscall *)(TESObjectREFR **, Actor *))LODWORD((*this)[0xF].member.pos[2]))(this, a3);
  target = (Atmosphere *)v5->members.target;
  v8 = 0.0;
  if ( target )
    v8 = (float)(int)sub_452A60(target);
  v7 = *(this + 0xB);
  if ( !v7 || (a2 = v8, v8 >= TesObjectREF_GetDistance((TESObjectREFR *)a3, v7, 0)) )
  {
    if ( !*(this + 0xB) )
      sub_566DC0(v5, flt_A30634, a2, a3, 0, flt_A30634);
  }
}
