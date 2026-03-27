int __usercall MagicTarget_AddEffect@<eax>(
        int this@<ecx>,
        double a2@<st0>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  TESObjectREFR *v14; // ebx

  v14 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 4))(this);
  if ( v14 )
    return MagicTarget_AddEffect_::ModifyExtraData_(v14, a5, a4, this, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  else
    return MagicTarget_AddEffect_::GetSEFFAlwaysApplies(
             0,
             a5,
             a4,
             this,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13);
}
