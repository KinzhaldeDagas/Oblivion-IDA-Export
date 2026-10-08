char __userpurge ScriptRunner_RunEvent@<al>(
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

  if ( !*this ) /*0x517816*/
  {
    v12 = (ScriptRunner *)FormHeapAlloc(0xA4u); /*0x51781f*/
    if ( v12 ) /*0x517829*/
    {
      v12->unk18[2] = 0; /*0x51782d*/
      v12->unk18[0] = 0; /*0x517830*/
      v12->unk18[1] = 0; /*0x517833*/
      v12->unk18[3] = 0; /*0x517836*/
      v12->unk18[4] = 0; /*0x517839*/
      v12->unk18[5] = 0; /*0x51783c*/
      v12->unk18[6] = 0; /*0x51783f*/
      v12->unk18[7] = 0; /*0x517842*/
      v12->unk18[8] = 0; /*0x517845*/
      v12->unk18[9] = 0; /*0x517848*/
      v12->unk18[0xA] = 0; /*0x51784b*/
      v12->unk18[0xB] = 0; /*0x51784e*/
      v12->unk18[0xC] = 0; /*0x517851*/
      v12->unk00 = 0; /*0x517854*/
      v12->unk04 = 0; /*0x517856*/
      v12->eventList = 0; /*0x517859*/
      v12->unk10 = 0; /*0x51785c*/
      v12->script = 0; /*0x51785f*/
      v12->unkA0 = 0; /*0x517862*/
    }
    else
    {
      v12 = 0; /*0x51786a*/
    }
    *this = v12; /*0x51786c*/
  }
  if ( !(*this)->script ) /*0x517870*/
    return ScriptRunner_RunEventScript(*this, a4, a5, (ScriptEventList *)a6, (TESFormVtbl *)a7, a8, a9, a10, a11); /*0x51793c*/
  v13 = (ScriptRunner *)FormHeapAlloc(0xA4u); /*0x51787e*/
  if ( v13 ) /*0x517888*/
  {
    v13->unk18[2] = 0; /*0x51788c*/
    v13->unk18[0] = 0; /*0x51788f*/
    v13->unk18[1] = 0; /*0x517892*/
    v13->unk18[3] = 0; /*0x517895*/
    v13->unk18[4] = 0; /*0x517898*/
    v13->unk18[5] = 0; /*0x51789b*/
    v13->unk18[6] = 0; /*0x51789e*/
    v13->unk18[7] = 0; /*0x5178a1*/
    v13->unk18[8] = 0; /*0x5178a4*/
    v13->unk18[9] = 0; /*0x5178a7*/
    v13->unk18[0xA] = 0; /*0x5178aa*/
    v13->unk18[0xB] = 0; /*0x5178ad*/
    v13->unk18[0xC] = 0; /*0x5178b0*/
    v13->unk00 = 0; /*0x5178b3*/
    v13->unk04 = 0; /*0x5178b5*/
    v13->eventList = 0; /*0x5178b8*/
    v13->unk10 = 0; /*0x5178bb*/
    v13->script = 0; /*0x5178be*/
    v13->unkA0 = 0; /*0x5178c1*/
    v14 = v13; /*0x5178c7*/
  }
  else
  {
    v14 = 0; /*0x5178cb*/
  }
  v15 = ScriptRunner_RunEventScript(v14, a4, a5, (ScriptEventList *)a6, (TESFormVtbl *)a7, a8, a9, a10, a11); /*0x517900*/
  FormHeapFree((unsigned int)v14); /*0x517902*/
  return v15; /*0x51790a*/
}
