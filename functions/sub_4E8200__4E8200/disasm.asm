0x4E8200: push    0FFFFFFFFh; Verified point cleanup called before freeing persistent or temporary TESPathGridPoint nodes: frees adjacency-list chain at +0x24, clears the per-point renderNode at +0x28, decrements g_PathGridPointLiveCount, and on the last node releases both shared marker-template references. It does not free the point allocation itself.
0x4E8202: push    offset SEH_4E8200
0x4E8207: mov     eax, large fs:0
0x4E820D: push    eax
0x4E820E: push    ecx
0x4E820F: push    ebx
0x4E8210: push    ebp
0x4E8211: push    esi
0x4E8212: push    edi
0x4E8213: mov     eax, ds:0B30AACh
0x4E8218: xor     eax, esp
0x4E821A: push    eax
0x4E821B: lea     eax, [esp+24h+var_C]
0x4E821F: mov     large fs:0, eax
0x4E8225: mov     esi, ecx
0x4E8227: mov     [esp+24h+var_10], esi
0x4E822B: xor     ebp, ebp
0x4E822D: cmp     [esi+24h], ebp
0x4E8230: mov     [esp+24h+var_4], ebp
0x4E8234: jz      short loc_4E824C
0x4E8236: mov     eax, [esi+24h]
0x4E8239: mov     edi, [eax+4]
0x4E823C: push    eax
0x4E823D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4E8242: add     esp, 4
0x4E8245: cmp     edi, ebp
0x4E8247: mov     [esi+24h], edi
0x4E824A: jnz     short loc_4E8236
0x4E824C: mov     ecx, esi; this
0x4E824E: mov     [esi+20h], ebp
0x4E8251: call    TESPathGridPoint_ClearRenderNode; Verified TESPathGridPoint_ClearRenderNode handles the per-point NiNode* at +0x28: clears/releases child objects, removes the node from its parent when attached, releases the returned parent reference, and nulls the field. This is the corrected interpretation of the former unknown28 field.
0x4E8256: sub     dword ptr ds:0B36080h, 1
0x4E825D: jnz     short loc_4E82B5
0x4E825F: mov     edi, ds:0B36084h
0x4E8265: cmp     edi, ebp
0x4E8267: mov     ebx, ds:0A2807Ch
0x4E826D: jz      short loc_4E828D
0x4E826F: lea     eax, [edi+4]
0x4E8272: push    eax; lpAddend
0x4E8273: call    ebx ; InterlockedDecrement
0x4E8275: test    eax, eax
0x4E8277: jnz     short loc_4E8287
0x4E8279: cmp     edi, ebp
0x4E827B: jz      short loc_4E8287
0x4E827D: mov     edx, [edi]
0x4E827F: mov     eax, [edx]
0x4E8281: push    1
0x4E8283: mov     ecx, edi
0x4E8285: call    eax
0x4E8287: mov     ds:0B36084h, ebp
0x4E828D: mov     edi, ds:0B36088h
0x4E8293: cmp     edi, ebp
0x4E8295: jz      short loc_4E82B5
0x4E8297: lea     ecx, [edi+4]
0x4E829A: push    ecx; lpAddend
0x4E829B: call    ebx ; InterlockedDecrement
0x4E829D: test    eax, eax
0x4E829F: jnz     short loc_4E82AF
0x4E82A1: cmp     edi, ebp
0x4E82A3: jz      short loc_4E82AF
0x4E82A5: mov     edx, [edi]
0x4E82A7: mov     eax, [edx]
0x4E82A9: push    1
0x4E82AB: mov     ecx, edi
0x4E82AD: call    eax
0x4E82AF: mov     ds:0B36088h, ebp
0x4E82B5: mov     ecx, esi; this
0x4E82B7: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4E82BF: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x4E82C4: mov     ecx, [esp+24h+var_C]
0x4E82C8: mov     large fs:0, ecx
0x4E82CF: pop     ecx
0x4E82D0: pop     edi
0x4E82D1: pop     esi
0x4E82D2: pop     ebp
0x4E82D3: pop     ebx
0x4E82D4: add     esp, 10h
0x4E82D7: retn
0x9B5EE0: mov     ecx, [ebp-10h]; this
0x9B5EE3: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9B5EE8: mov     edx, [esp+arg_4]
0x9B5EEC: lea     eax, [edx-14h]
0x9B5EEF: mov     ecx, [edx-18h]
0x9B5EF2: xor     ecx, eax
0x9B5EF4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5EF9: mov     eax, offset stru_AE0E48
0x9B5EFE: jmp     ___CxxFrameHandler3
