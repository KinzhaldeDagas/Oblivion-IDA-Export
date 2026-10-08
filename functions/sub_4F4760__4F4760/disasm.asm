0x4F4760: fldz
0x4F4762: mov     ecx, [esp+arg_0]; this
0x4F4766: test    ecx, ecx
0x4F4768: push    esi
0x4F4769: mov     esi, [esp+4+arg_C]
0x4F476D: fstp    qword ptr [esi]
0x4F476F: jz      short loc_4F4789
0x4F4771: call    TESObjectREFR_GetEffectiveDoorLock; Verified: returns this reference's ExtraLockData* payload when present; otherwise, if its ExtraTeleport has a linked door, returns that linked reference's ExtraLockData* payload; null when neither exists. Directly supported by ExtraDataList_GetLock, ExtraDataList_GetTeleport, and TeleportData_GetLinkedDoor.
0x4F4776: test    eax, eax
0x4F4778: jz      short loc_4F4789
0x4F477A: mov     ecx, eax; this
0x4F477C: call    ExtraLockData_IsLocked; Verified runtime lock predicate: returns (ExtraLockData.flags & 0x01) != 0. ExtraDataList_Load sets this bit on accepted 12-byte and legacy 16-byte XLOC payloads; serialized flag bits are then preserved. This is a runtime normalization step.
0x4F4781: test    al, al
0x4F4783: jz      short loc_4F4789
0x4F4785: fld1
0x4F4787: fstp    qword ptr [esi]
0x4F4789: cmp     byte ptr ds:0B361ACh, 0
0x4F4790: jz      short loc_4F47A7
0x4F4792: fld     qword ptr [esi]
0x4F4794: sub     esp, 8
0x4F4797: fstp    [esp+0Ch+var_C]
0x4F479A: push    offset aGetlocked0_f; "GetLocked >> %0.f"
0x4F479F: call    Interface_ConsolePrint
0x4F47A4: add     esp, 0Ch
0x4F47A7: mov     al, 1
0x4F47A9: pop     esi
0x4F47AA: retn
