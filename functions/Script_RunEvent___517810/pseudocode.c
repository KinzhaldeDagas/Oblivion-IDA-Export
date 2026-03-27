char __userpurge Script_RunEvent__@<al>(
        ScriptRunner **this@<ecx>,
        double st6_0@<st1>,
        double a3@<st0>,
        Script *a4,
        TESObjectREFR *a5,
        char **a6,
        int a7,
        char a8,
        char a9,
        char a10,
        float a11)
{
  ScriptRunner *v12; // eax
  ScriptRunner *v13; // eax
  ScriptRunner *v14; // esi
  UInt8 v15; // bl

  if ( !*this )
  {
    v12 = (ScriptRunner *)FormHeapAlloc(0xA4u);
    if ( v12 )
    {
      v12->unk18[2] = 0;
      v12->unk18[0] = 0;
      v12->unk18[1] = 0;
      v12->unk18[3] = 0;
      v12->unk18[4] = 0;
      v12->unk18[5] = 0;
      v12->unk18[6] = 0;
      v12->unk18[7] = 0;
      v12->unk18[8] = 0;
      v12->unk18[9] = 0;
      v12->unk18[0xA] = 0;
      v12->unk18[0xB] = 0;
      v12->unk18[0xC] = 0;
      v12->unk00 = 0;
      v12->unk04 = 0;
      v12->eventList = 0;
      v12->unk10 = 0;
      v12->script = 0;
      v12->unkA0 = 0;
    }
    else
    {
      v12 = 0;
    }
    *this = v12;
  }
  if ( !(*this)->script )
    return Script_RunSomething__(*this, a4, a5, (ScriptEventList *)a6, (TESFormVtbl *)a7, a8, a9, a10, a11);
  v13 = (ScriptRunner *)FormHeapAlloc(0xA4u);
  if ( v13 )
  {
    v13->unk18[2] = 0;
    v13->unk18[0] = 0;
    v13->unk18[1] = 0;
    v13->unk18[3] = 0;
    v13->unk18[4] = 0;
    v13->unk18[5] = 0;
    v13->unk18[6] = 0;
    v13->unk18[7] = 0;
    v13->unk18[8] = 0;
    v13->unk18[9] = 0;
    v13->unk18[0xA] = 0;
    v13->unk18[0xB] = 0;
    v13->unk18[0xC] = 0;
    v13->unk00 = 0;
    v13->unk04 = 0;
    v13->eventList = 0;
    v13->unk10 = 0;
    v13->script = 0;
    v13->unkA0 = 0;
    v14 = v13;
  }
  else
  {
    v14 = 0;
  }
  v15 = Script_RunSomething__(v14, a4, a5, (ScriptEventList *)a6, (TESFormVtbl *)a7, a8, a9, a10, a11);
  FormHeapFree((unsigned int)v14);
  return v15;
}
