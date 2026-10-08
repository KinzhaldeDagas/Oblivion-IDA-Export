0x46B4C0: mov     eax, [ecx+8]
0x46B4C3: mov     edx, eax
0x46B4C5: shr     edx, 0Eh
0x46B4C8: test    dl, 1
0x46B4CB: jz      short loc_46B4D2; Oblivion outer save/tombstone branch verified 2026-10-01: TESForm_SaveForm tests PARTIAL flag0x4000 here and returns false at0x46B4CD without invoking the virtual form writer. Otherwise deleted flag0x20 selects TESFile_WriteEmptyFormRecord at0x46B4E1 then closes; it never invokes TESWorldSpace_WriteRecord. A deleted WRLD emits no SNAM/payload, and partial+deleted is skipped. Non-deleted WRLD zero/nonzero SNAM policy is at TESWorldSpace_WriteRecord0x4F1214.
0x46B4CD: xor     al, al
0x46B4CF: retn    4
0x46B4D2: shr     eax, 5
0x46B4D5: test    al, 1
0x46B4D7: jz      short loc_46B4F3
0x46B4D9: push    esi
0x46B4DA: mov     esi, [esp+4+file]
0x46B4DE: push    ecx
0x46B4DF: mov     ecx, esi
0x46B4E1: call    TESFile_WriteEmptyFormRecord
0x46B4E6: mov     ecx, esi
0x46B4E8: call    TESFile_CloseForm; Closes the current form record: increments formCount, writes the final payload length into the saved record header, seeks back to its header offset, and rewrites the 0x14-byte header.
0x46B4ED: mov     al, 1
0x46B4EF: pop     esi
0x46B4F0: retn    4
0x46B4F3: mov     eax, [ecx]
0x46B4F5: mov     eax, [eax+20h]
0x46B4F8: jmp     eax
