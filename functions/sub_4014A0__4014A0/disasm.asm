0x4014A0: mov     eax, ds:0B33398h; MEF v57 IMPLEMENTED 2026-10-08: v57 pressure boundary: allocator401830 reaches this dispatcher via40187E; optional arbitrary callbackB02184 invoked401522 after entering recovery critical section. Entry detour invalidates actor/map/light/property optimization state BEFORE callback and replays original Main* load, continues4014A5. Do not restart partially completed native operations after reentry.
0x4014A5: push    ebx
0x4014A6: push    esi
0x4014A7: push    edi
0x4014A8: mov     edi, [esp+0Ch+arg_0]
0x4014AC: mov     dword_B32B08, edi
0x4014B2: mov     esi, [eax+10h]
0x4014B5: call    ds:GetCurrentThreadId
0x4014BB: cmp     esi, eax
0x4014BD: setz    al
0x4014C0: cmp     dword_B32B04, 0
0x4014C7: jnz     short loc_4014D0
0x4014C9: mov     byte_B32B01, 1
0x4014D0: xor     bl, bl
0x4014D2: test    al, al
0x4014D4: jnz     short loc_4014E7
0x4014D6: cmp     ds:0B350D5h, al
0x4014DC: jz      short loc_4014E7
0x4014DE: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x4014E3: test    al, al
0x4014E5: jz      short loc_4014F3
0x4014E7: push    3
0x4014E9: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x4014EE: add     esp, 4
0x4014F1: mov     bl, al
0x4014F3: push    offset aMemoryheapMemo
0x4014F8: mov     ecx, offset unk_B32C00
0x4014FD: call    NiEnterCriticalSection
0x401502: mov     eax, dword_B02184
0x401507: test    eax, eax
0x401509: mov     byte_B32B00, 1
0x401510: jz      short loc_40152C
0x401512: mov     ecx, dword_B32B04
0x401518: push    ecx
0x401519: push    edi
0x40151A: push    0
0x40151C: call    eax ; dword_B02184
0x40151E: add     esp, 0Ch
0x401521: pop     edi
0x401522: mov     dword_B32B04, eax
0x401527: pop     esi
0x401528: mov     al, bl
0x40152A: pop     ebx
0x40152B: retn
0x40152C: pop     edi
0x40152D: pop     esi
0x40152E: mov     al, bl
0x401530: mov     dword_B32B04, 0
0x40153A: pop     ebx
0x40153B: retn
