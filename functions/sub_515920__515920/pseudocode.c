// Verified via SexChange string 0xA50D84 -> CommandInfo 0xB0BC68 -> execute pointer +0x18. Toggles actor base sex bit at NPC+0x28; component virtual +0x50 receives change mask 0x10. With 3D, detaches both face nodes through parent virtual +0x88 and releases temporary refs. Always clears NPC FaceGen nodes, then process virtual +0x5C(), +0x31C(1), +0x318(actor). Double invocation restores sex bit while repeating invalidation. Not proof of load defect or of immediate texture repair; dynamic process targets remain to be traced.
char __cdecl sub_515920(int a1, int a2, int a3)
{
  int v3; // edi
  Actor *v4; // esi
  TESForm *v5; // ebp
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  char *Name; // eax
  char *m_data; // esi
  UInt32 refID; // [esp+8h] [ebp-30h]
  const char *v16; // [esp+Ch] [ebp-2Ch]
  BSStringT Format; // [esp+24h] [ebp-14h] BYREF
  int v18; // [esp+34h] [ebp-4h]

  v3 = a3; /*0x515947*/
  v4 = (Actor *)reference; /*0x51594b*/
  if ( a3 ) /*0x515955*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x190))(a3) ) /*0x515961*/
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x170))(v3) + 4) == 0x23 ) /*0x515977*/
        v4 = (Actor *)v3; /*0x515979*/
    }
  }
  if ( v4 ) /*0x51597d*/
  {
    if ( Actor::HasNPCBaseForm(v4) ) /*0x515985*/
    {
      v5 = v4->vtbl->super.super.GetBaseForm((TESObjectREFR *)v4); /*0x51599e*/
      v6 = 0; /*0x5159aa*/
      v7 = (int)v4->vtbl->super.super.GetNiNode((TESObjectREFR *)v4); /*0x5159ac*/
      a3 = 0; /*0x5159b0*/
      if ( v7 ) /*0x5159b4*/
        a3 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x5159bf*/
      if ( !Actor_IsFemale(v4) ) /*0x5159c5*/
        v6 = 1; /*0x5159ce*/
      if ( v6 == 1 ) /*0x5159d9*/
        v5[1].member.modlist.data = (Data *)((int)v5[1].member.modlist.data | 1); /*0x5159db*/
      else
        v5[1].member.modlist.data = (Data *)((int)v5[1].member.modlist.data & ~1u); /*0x5159e0*/
      (*(void (__thiscall **)(UInt32 *, int))(v5[1].member.refID + 0x50))(&v5[1].member.refID, 0x10); /*0x5159eb*/
      if ( a3 ) /*0x5159f1*/
      {
        v8 = ((int (__thiscall *)(Actor *, _DWORD))v4->vtbl->super.super.Unk_4D)(v4, 0); /*0x5159fe*/
        if ( v8 ) /*0x515a02*/
        {
          v9 = *(_DWORD *)(v8 + 0x1C); /*0x515a04*/
          if ( v9 ) /*0x515a09*/
          {
            (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v9 + 0x88))(v9, &a3, v8); /*0x515a19*/
            NiPointerSlot_Release((NiD3DVertexShader *)&a3); /*0x515a1f*/
          }
        }
        v10 = ((int (__thiscall *)(Actor *, _DWORD))v4->vtbl->super.super.Unk_4C)(v4, 0); /*0x515a2f*/
        if ( v10 ) /*0x515a33*/
        {
          v11 = *(_DWORD *)(v10 + 0x1C); /*0x515a35*/
          if ( v11 ) /*0x515a3a*/
          {
            (*(void (__thiscall **)(int, BSStringT *, int))(*(_DWORD *)v11 + 0x88))(v11, &Format, v10); /*0x515a4a*/
            NiPointerSlot_Release((NiD3DVertexShader *)&Format); /*0x515a50*/
          }
        }
      }
      TESNPC_ClearFaceGenNodes(v5);             // SexChange reconstruction boundary: clears NPC cached face nodes (+0x1D4,+0x1D8) after detaching live nodes. Targeted OCO load investigation breakpoint: capture node identities, sex bit, age projections before/after. Candidate repair primitive only; not yet sufficient as standalone post-load correction. /*0x515a57*/
      v4->members.super.process->Unk_17(v4->members.super.process);// SexChange invokes actor->process vtable+0x5C with no explicit arguments. Record concrete process vtable/target during reproduction; do not assume semantic meaning from Unk_17. /*0x515a64*/
      ((void (__thiscall *)(LowProcess *, int))v4->members.super.process->SetUnk16C)(v4->members.super.process, 1);// SexChange invokes actor->process vtable+0x31C with integer 1, then +0x318(actor) at 0x515A81. Exact targets/lifecycle timing require runtime evidence. /*0x515a73*/
      ((void (__thiscall *)(LowProcess *, Actor *))v4->members.super.process->Unk_C5)(v4->members.super.process, v4); /*0x515a81*/
      Format.m_data = 0; /*0x515a83*/
      Format.m_dataLen = 0; /*0x515a87*/
      Format.m_bufLen = 0; /*0x515a8c*/
      v16 = *(const char **)(4 * v6 + 0xB10BC4); /*0x515a9b*/
      refID = v4->members.super.super.super.refID; /*0x515a9c*/
      v18 = 0; /*0x515a9f*/
      Name = TESObjectREFR_GetName((TESObjectREFR *)v4); /*0x515aa3*/
      BSStringT_Static_Format(&Format, "\"%s\" (%08x) is now %s", Name, refID, v16); /*0x515ab3*/
      m_data = Format.m_data; /*0x515ab8*/
      Interface_ConsolePrint(Format.m_data); /*0x515abd*/
      FormHeapFree((unsigned int)m_data); /*0x515ac3*/
    }
  }
  return 1; /*0x515acd*/
}
