void __thiscall ScriptEffect_PreLoad(ScriptEventList **this, int a2)
{
  ScriptEventList *v3; // ecx

  nullsub_returnvVoid_1arg(a2); /*0x6a4568*/
  v3 = *(this + 0xF); /*0x6a456d*/
  if ( v3 ) /*0x6a4573*/
    ScriptEventList_Preload_(v3); /*0x6a4575*/
}
