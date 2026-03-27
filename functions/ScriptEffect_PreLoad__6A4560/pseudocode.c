void __thiscall ScriptEffect_PreLoad(ScriptEventList **this, int a2)
{
  ScriptEventList *v3; // ecx

  nullsub_returnvVoid_1arg(a2);
  v3 = *(this + 0xF);
  if ( v3 )
    ScriptEventList_Preload_(v3);
}
