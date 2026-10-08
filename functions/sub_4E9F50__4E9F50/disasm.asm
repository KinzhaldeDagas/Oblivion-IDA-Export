0x4E9F50: push    0FFFFFFFFh; Verified root-data initializer allocates a 0x60-byte TESTerrainLODQuad object, initializes its root pointer and fields, and stores it in TESTerrainLODQuadRoot.quadData.
0x4E9F52: push    offset SEH_8C62B0
0x4E9F57: mov     eax, large fs:0
0x4E9F5D: push    eax
0x4E9F5E: push    ecx
0x4E9F5F: push    esi
0x4E9F60: mov     eax, ds:0B30AACh
0x4E9F65: xor     eax, esp
0x4E9F67: push    eax
0x4E9F68: lea     eax, [esp+18h+var_C]
0x4E9F6C: mov     large fs:0, eax
0x4E9F72: mov     esi, ecx
0x4E9F74: push    60h ; '`'; Size
0x4E9F76: call    FormHeapAlloc
0x4E9F7B: add     esp, 4
0x4E9F7E: mov     [esp+18h+var_10], eax
0x4E9F82: test    eax, eax
0x4E9F84: mov     [esp+18h+var_4], 0
0x4E9F8C: jz      short loc_4E9F98
0x4E9F8E: push    esi; root
0x4E9F8F: mov     ecx, eax; this
0x4E9F91: call    TESTerrainLODQuad_ctor; Verified quad-data layout at 0x60 bytes: root pointer +0, state +8, world origin +0x18/+0x1C, terrain mesh node +0x2C, and four child-quad pointers +0x30..+0x3C. The remaining bytes are Unknown.
0x4E9F96: jmp     short loc_4E9F9A
0x4E9F98: xor     eax, eax
0x4E9F9A: mov     [esi], eax
0x4E9F9C: mov     word ptr [esi+8], 0
0x4E9FA2: mov     word ptr [esi+0Ah], 0
0x4E9FA8: mov     ecx, [esp+18h+var_C]
0x4E9FAC: mov     large fs:0, ecx
0x4E9FB3: pop     ecx
0x4E9FB4: pop     esi
0x4E9FB5: add     esp, 10h
0x4E9FB8: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
