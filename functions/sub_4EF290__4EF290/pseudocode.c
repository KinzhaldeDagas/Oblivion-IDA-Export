void __usercall sub_4EF290(int a1@<ecx>, double a2@<st0>)
{
  TESObjectCELL *v3; // ecx

  v3 = *(TESObjectCELL **)(a1 + 0x34);
  if ( v3 )
    sub_4CB980(v3, a2, a1);
}
