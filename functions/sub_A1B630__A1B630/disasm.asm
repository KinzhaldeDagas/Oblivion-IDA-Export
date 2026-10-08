0xA1B630: mov     eax, stru_B082F0.data; MEF PERF 2026-10-08: Verified strong-pointer16 array used by TESBoundObject_Create3DImpl4B39F7; clear4B26D5 and remove4D9849 are also observed. Its entire lifetime/population not sealed. Generic AddFirstEmpty patch must not assume every caller is a NiNode child array.
0xA1B635: test    eax, eax
0xA1B637: mov     stru_B082F0._vtbl, offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; MEF PERF 2026-10-08: Verified strong-pointer16 array used by TESBoundObject_Create3DImpl4B39F7; clear4B26D5 and remove4D9849 are also observed. Its entire lifetime/population not sealed. Generic AddFirstEmpty patch must not assume every caller is a NiNode child array.
0xA1B641: jz      short locret_A1B662
0xA1B643: mov     ecx, [eax-4]
0xA1B646: push    esi
0xA1B647: lea     esi, [eax-4]
0xA1B64A: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0xA1B64F: push    ecx; int
0xA1B650: push    4; unsigned int
0xA1B652: push    eax; void *
0xA1B653: call    $LN21
0xA1B658: push    esi
0xA1B659: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA1B65E: add     esp, 4
0xA1B661: pop     esi
0xA1B662: retn
