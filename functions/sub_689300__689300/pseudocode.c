void __thiscall sub_689300(float *this, TESChildCELL *a2, NiPoint3 *end, int extraCost)
{
  NiPoint3 *v5; // eax
  const char *v6; // eax
  NiPoint3 *v7; // eax
  const char *v8; // eax
  char v9; // dl
  bool CanTraverseSegment; // bl
  NiDX92DBufferData *Health; // eax
  TESObjectREFR *LinkedDoor; // eax
  TESObjectREFR *v13; // ebx
  float segmentQuery[6]; // [esp+14h] [ebp-244h] BYREF
  char v15; // [esp+2Ch] [ebp-22Ch]
  char Format[260]; // [esp+40h] [ebp-218h] BYREF
  char v17[260]; // [esp+144h] [ebp-114h] BYREF
  unsigned int v18; // [esp+254h] [ebp-4h]

  sub_684EC0((int **)this); /*0x68934b*/
  if ( Shared_GetDwordAtOffset40(a2) ) /*0x689352*/
  {
    if ( PlayerCharacter::IsSleeping_(reference) ) /*0x689365*/
    {
      sub_68B440((int *)this, (TESObjectREFR *)a2, &end->x, extraCost); /*0x68937a*/
      return; /*0x68937f*/
    }
    v5 = (NiPoint3 *)(*((int (__thiscall **)(TESChildCELL *))a2->vtbl + 0x5D))(a2); /*0x68938f*/
    if ( sub_689230(a2, v5, &end->x) ) /*0x689393*/
    {
      if ( MEMORY[0xB333B4] == a2 && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || unk_B3B908) ) /*0x6893bb*/
      {
        v6 = (const char *)(*((int (__thiscall **)(TESChildCELL *))a2->vtbl + 0x35))(a2); /*0x6893ce*/
        _sprintf(Format, "Actor '%s' building straight path.", v6); /*0x6893db*/
        Interface_ConsolePrint(Format); /*0x6893e5*/
      }
      sub_68C6E0((NiDX92DBufferData **)this + 5); /*0x6893f2*/
      v7 = (NiPoint3 *)(*((int (__thiscall **)(TESChildCELL *))a2->vtbl + 0x5D))(a2); /*0x689401*/
      sub_68BED0((TeleportData **)this + 5, v7); /*0x689406*/
      sub_68BED0((TeleportData **)this + 5, end); /*0x68940e*/
      if ( unk_B3C08A ) /*0x689413*/
        sub_685EA0(this, (int)a2); /*0x689423*/
    }
    else
    {
      if ( MEMORY[0xB333B4] == a2 && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || unk_B3B908) ) /*0x689445*/
      {
        v8 = (const char *)(*((int (__thiscall **)(TESChildCELL *))a2->vtbl + 0x35))(a2); /*0x689458*/
        _sprintf(v17, "Actor '%s' building full high level path.", v8); /*0x689468*/
        Interface_ConsolePrint(v17); /*0x689475*/
      }
      sub_67D760(segmentQuery); /*0x689481*/
      v9 = *((_BYTE *)this + 0x10); /*0x68948d*/
      v18 = 0; /*0x68949b*/
      v15 = v9; /*0x6894a6*/
      CanTraverseSegment = ConnectedPointGraph_CanTraverseSegment( /*0x6894b8*/
                             segmentQuery,
                             (const NiPoint3 *)&a2[0xB],
                             end,
                             (TESObjectREFR *)a2,
                             *(float *)&extraCost);
      sub_67E3D0((char *)segmentQuery, (NiDX92DBufferData **)this + 5, a2); /*0x6894ba*/
      if ( !CanTraverseSegment && !sub_5E34B0(a2) ) /*0x6894c5*/
      {
        Health = (NiDX92DBufferData *)TESHealthForm_GetHealth((TESHealthForm *)(this + 5)); /*0x6894d0*/
        sub_68C170((NiSurfaceData **)this + 5, Health); /*0x6894d8*/
        *((_BYTE *)this + 0x2C) |= 0x80u; /*0x6894dd*/
      }
      sub_686300((NiSurfaceData **)this, (TESObjectREFR *)a2); /*0x6894e4*/
      sub_684000((int *)this, (Actor *)a2); /*0x6894ec*/
      LinkedDoor = TeleportData_GetLinkedDoor((TeleportData *)(this + 5)); /*0x6894f3*/
      v13 = LinkedDoor; /*0x6894f8*/
      if ( LinkedDoor /*0x689537*/
        && (sub_68CAE0(LinkedDoor)
         || sub_68CAB0(v13) && (!Actor_CanSwim((Actor *)a2) || !sub_5E3400((Actor *)a2))
         || !sub_68CAB0(v13) && sub_5E1E90(a2)) )
      {
        sub_684EC0((int **)this); /*0x689542*/
        (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0x30))(this, 1); /*0x689550*/
        (*((void (__thiscall **)(TESChildCELL *, int))a2->vtbl + 0x60))(a2, 1); /*0x68955e*/
        v18 = 0xFFFFFFFF; /*0x689564*/
        Shared_NoOpVirtual_60D0A0(segmentQuery); /*0x68956f*/
        return; /*0x689574*/
      }
      if ( unk_B3C08A ) /*0x689576*/
        sub_685EA0(this, (int)a2); /*0x689582*/
      v18 = 0xFFFFFFFF; /*0x68958b*/
      Shared_NoOpVirtual_60D0A0(segmentQuery); /*0x689596*/
    }
    sub_6847B0((int *)this); /*0x68959d*/
  }
}
