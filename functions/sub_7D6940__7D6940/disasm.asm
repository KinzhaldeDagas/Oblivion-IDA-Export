0x7D6940: push    0FFFFFFFFh; Remove one receiver geometry from both the property-side shadow-light association and the light-local object list.
0x7D6942: push    offset SEH_7E5B50
0x7D6947: mov     eax, large fs:0
0x7D694D: push    eax
0x7D694E: push    ecx
0x7D694F: push    ebx
0x7D6950: push    esi
0x7D6951: push    edi
0x7D6952: mov     eax, ds:0B30AACh
0x7D6957: xor     eax, esp
0x7D6959: push    eax
0x7D695A: lea     eax, [esp+20h+var_C]
0x7D695E: mov     large fs:0, eax
0x7D6964: mov     edi, ecx
0x7D6966: mov     ebx, [esp+20h+payload]
0x7D696A: push    4
0x7D696C: mov     ecx, ebx
0x7D696E: call    NiNode_GetNiPropertyByID;
0x7D6973: mov     esi, eax
0x7D6975: test    esi, esi
0x7D6977: jz      short loc_7D69AE
0x7D6979: mov     eax, [esi]
0x7D697B: mov     edx, [eax+54h]
0x7D697E: mov     ecx, esi
0x7D6980: call    edx
0x7D6982: cmp     eax, 1
0x7D6985: jl      short loc_7D699C
0x7D6987: mov     eax, [esi]
0x7D6989: mov     edx, [eax+54h]
0x7D698C: mov     ecx, esi
0x7D698E: call    edx
0x7D6990: cmp     eax, 0Ah
0x7D6993: jg      short loc_7D699C
0x7D6995: mov     eax, 1
0x7D699A: jmp     short loc_7D699E
0x7D699C: xor     eax, eax
0x7D699E: neg     eax
0x7D69A0: sbb     eax, eax
0x7D69A2: and     eax, esi
0x7D69A4: jz      short loc_7D69AE
0x7D69A6: push    edi
0x7D69A7: mov     ecx, eax
0x7D69A9: call    BSShaderProperty_RemoveShadowLight; Remove the paired ShadowSceneLight association from BSShaderProperty+0x6C.
0x7D69AE: test    ebx, ebx
0x7D69B0: mov     [esp+20h+payload], ebx
0x7D69B4: jz      short loc_7D69C0
0x7D69B6: add     ebx, 4
0x7D69B9: push    ebx; lpAddend
0x7D69BA: call    dword ptr ds:0A28078h
0x7D69C0: lea     eax, [esp+20h+payload]
0x7D69C4: push    eax; payload
0x7D69C5: lea     ecx, [esp+24h+result]
0x7D69C9: push    ecx; result
0x7D69CA: lea     ecx, [edi+0E4h]; self
0x7D69D0: mov     [esp+28h+var_4], 0
0x7D69D8: call    NiTRefPointerList__RemoveFirstByValue; MEF PERF 2026-10-07 PASS2: PERF-13 positional removal gate: this full-list RemoveFirstByValue call occurs AFTER property-side RemoveShadowLight7D69A9. That operation and refcount/destructor callbacks must remain ordered. A captured stale node is usable only with lifetime/mutation proof and matching first-occurrence semantics. Duplicates require fallback, not arbitrary current-node removal.
0x7D69DD: mov     eax, [esp+20h+result]
0x7D69E1: test    eax, eax
0x7D69E3: mov     edi, ds:0A2807Ch
0x7D69E9: jz      short loc_7D6A05
0x7D69EB: mov     esi, eax
0x7D69ED: add     eax, 4
0x7D69F0: push    eax; lpAddend
0x7D69F1: call    edi ; InterlockedDecrement
0x7D69F3: test    eax, eax
0x7D69F5: jnz     short loc_7D6A05
0x7D69F7: test    esi, esi
0x7D69F9: jz      short loc_7D6A05
0x7D69FB: mov     edx, [esi]
0x7D69FD: mov     eax, [edx]
0x7D69FF: push    1
0x7D6A01: mov     ecx, esi
0x7D6A03: call    eax
0x7D6A05: mov     esi, [esp+20h+payload]
0x7D6A09: test    esi, esi
0x7D6A0B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7D6A13: jz      short loc_7D6A29
0x7D6A15: lea     ecx, [esi+4]
0x7D6A18: push    ecx; lpAddend
0x7D6A19: call    edi ; InterlockedDecrement
0x7D6A1B: test    eax, eax
0x7D6A1D: jnz     short loc_7D6A29
0x7D6A1F: mov     edx, [esi]
0x7D6A21: mov     eax, [edx]
0x7D6A23: push    1
0x7D6A25: mov     ecx, esi
0x7D6A27: call    eax
0x7D6A29: mov     ecx, dword ptr [esp+20h+var_C]
0x7D6A2D: mov     large fs:0, ecx
0x7D6A34: pop     ecx
0x7D6A35: pop     edi
0x7D6A36: pop     esi
0x7D6A37: pop     ebx
0x7D6A38: add     esp, 10h
0x7D6A3B: retn    4
0x9CF800: lea     ecx, [ebp+4]; slot
0x9CF803: jmp     NiPointerSlot_Release
0x9CF808: mov     edx, [esp+arg_4]
0x9CF80C: lea     eax, [edx-10h]
0x9CF80F: mov     ecx, [edx-14h]
0x9CF812: xor     ecx, eax
0x9CF814: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CF819: mov     eax, offset stru_AF8414
0x9CF81E: jmp     ___CxxFrameHandler3
