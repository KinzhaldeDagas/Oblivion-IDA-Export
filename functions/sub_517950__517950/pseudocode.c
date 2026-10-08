char __thiscall sub_517950(ScriptRunner **this, Script *a2, BSStringT *a3, ScriptEventList *a4)
{
  ScriptRunner *v5; // ebx
  ScriptRunner *v6; // eax
  int v7; // eax

  v5 = 0; /*0x517954*/
  if ( !*this ) /*0x517956*/
  {
    v6 = (ScriptRunner *)FormHeapAlloc(0xA4u); /*0x51795f*/
    if ( v6 ) /*0x517969*/
    {
      v6->unk18[2] = 0; /*0x51796d*/
      v6->unk18[0] = 0; /*0x517970*/
      v6->unk18[1] = 0; /*0x517973*/
      v6->unk18[3] = 0; /*0x517976*/
      v6->unk18[4] = 0; /*0x517979*/
      v6->unk18[5] = 0; /*0x51797c*/
      v6->unk18[6] = 0; /*0x51797f*/
      v6->unk18[7] = 0; /*0x517982*/
      v6->unk18[8] = 0; /*0x517985*/
      v6->unk18[9] = 0; /*0x517988*/
      v6->unk18[0xA] = 0; /*0x51798b*/
      v6->unk18[0xB] = 0; /*0x51798e*/
      v6->unk18[0xC] = 0; /*0x517991*/
      v6->unk00 = 0; /*0x517994*/
      v6->unk04 = 0; /*0x517996*/
      v6->eventList = 0; /*0x517999*/
      v6->unk10 = 0; /*0x51799c*/
      v6->script = 0; /*0x51799f*/
      v6->unkA0 = 0; /*0x5179a2*/
    }
    else
    {
      v6 = 0; /*0x5179aa*/
    }
    *this = v6; /*0x5179ac*/
  }
  if ( (*this)->script ) /*0x5179b0*/
  {
    v7 = FormHeapAlloc(0xA4u); /*0x5179ba*/
    if ( v7 ) /*0x5179c4*/
    {
      *(_DWORD *)(v7 + 0x20) = 0; /*0x5179c6*/
      *(_DWORD *)(v7 + 0x18) = 0; /*0x5179c9*/
      *(_DWORD *)(v7 + 0x1C) = 0; /*0x5179cc*/
      *(_DWORD *)(v7 + 0x24) = 0; /*0x5179d1*/
      *(_DWORD *)(v7 + 0x28) = 0; /*0x5179d4*/
      *(_DWORD *)(v7 + 0x2C) = 0; /*0x5179d7*/
      *(_DWORD *)(v7 + 0x30) = 0; /*0x5179da*/
      *(_DWORD *)(v7 + 0x34) = 0; /*0x5179dd*/
      *(_DWORD *)(v7 + 0x38) = 0; /*0x5179e0*/
      *(_DWORD *)(v7 + 0x3C) = 0; /*0x5179e3*/
      *(_DWORD *)(v7 + 0x40) = 0; /*0x5179e6*/
      *(_DWORD *)(v7 + 0x44) = 0; /*0x5179e9*/
      *(_DWORD *)(v7 + 0x48) = 0; /*0x5179ec*/
      *(_DWORD *)v7 = 0; /*0x5179ef*/
      *(_DWORD *)(v7 + 4) = 0; /*0x5179f1*/
      *(_DWORD *)(v7 + 8) = 0; /*0x5179f4*/
      *(_DWORD *)(v7 + 0x10) = 0; /*0x5179f7*/
      *(_DWORD *)(v7 + 0x14) = 0; /*0x5179fa*/
      *(_BYTE *)(v7 + 0xA0) = 0; /*0x5179fd*/
      v5 = (ScriptRunner *)v7; /*0x517a03*/
    }
    Script_RunSomethingElse__(v5, a2, a3, a4); /*0x517a16*/
    FormHeapFree((unsigned int)v5); /*0x517a1c*/
    return 1; /*0x517a25*/
  }
  else
  {
    Script_RunSomethingElse__(*this, a2, a3, a4); /*0x517a3a*/
    return 1; /*0x517a40*/
  }
}
