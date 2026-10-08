0x64B0B0: push    ebx
0x64B0B1: push    esi
0x64B0B2: mov     esi, [esp+8+arg_0]
0x64B0B6: mov     eax, [esi]
0x64B0B8: mov     edx, [eax+164h]
0x64B0BE: push    edi
0x64B0BF: mov     edi, ecx
0x64B0C1: mov     ecx, esi
0x64B0C3: call    edx
0x64B0C5: mov     ecx, ds:0B362C0h
0x64B0CB: mov     ebx, eax
0x64B0CD: mov     eax, [edi+120h]
0x64B0D3: push    eax
0x64B0D4: push    esi
0x64B0D5: call    TESIdleForm_FindIdleForActor; Idle root lookup for actor model path; rejects final candidate when ANAM high bit is set but model path is not .kf.
0x64B0DA: mov     edi, eax
0x64B0DC: test    edi, edi
0x64B0DE: jz      short loc_64B0FD
0x64B0E0: test    ebx, ebx
0x64B0E2: jz      short loc_64B0FD
0x64B0E4: mov     ecx, edi
0x64B0E6: call    TESIdleForm_GetQueuedAnimType; Returns TESIdleForm ANAM byte at +0x38 masked with 0x7F. This low-seven-bit value is passed as the queued idle slot/type; the high bit is handled separately by native idle selection.
0x64B0EB: push    eax
0x64B0EC: push    esi
0x64B0ED: push    edi
0x64B0EE: mov     ecx, ebx
0x64B0F0: call    ActorAnimData_LoadIdleKFWithoutPlayback; Loads an IDLE KF into ActorAnimData without playback. Allocates an AnimIdle for +0xD0, chooses immediate versus queued loading from the native save/load flag 0x800, then calls ActorAnimData_InstallQueuedIdleOnly. The observed caller preloads a furniture-selected TESIdleForm.
0x64B0F5: pop     edi
0x64B0F6: pop     esi
0x64B0F7: mov     al, 1
0x64B0F9: pop     ebx
0x64B0FA: retn    4
0x64B0FD: pop     edi
0x64B0FE: pop     esi
0x64B0FF: xor     al, al
0x64B101: pop     ebx
0x64B102: retn    4
