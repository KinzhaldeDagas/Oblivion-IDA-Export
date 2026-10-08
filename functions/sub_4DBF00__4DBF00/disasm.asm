0x4DBF00: push    esi
0x4DBF01: mov     esi, [esp+4+arg_0]
0x4DBF05: test    esi, esi
0x4DBF07: push    edi
0x4DBF08: mov     edi, ecx
0x4DBF0A: jz      short loc_4DBF17
0x4DBF0C: mov     ecx, esi; this
0x4DBF0E: call    TESObjectREFR_IsPersistent
0x4DBF13: test    al, al
0x4DBF15: jz      short loc_4DBF20
0x4DBF17: push    esi; markerReference
0x4DBF18: lea     ecx, [edi+44h]; this
0x4DBF1B: call    ExtraDataList_SetRandomTeleportMarker; Verified ExtraDataList random-marker setter: null removes ExtraData type 0x43; non-null updates or allocates an ExtraRandomTeleportMarker and stores the TESObjectREFR* marker at +0x0C.
0x4DBF20: pop     edi
0x4DBF21: pop     esi
0x4DBF22: retn    4
