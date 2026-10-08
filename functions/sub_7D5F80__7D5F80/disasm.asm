0x7D5F80: push    0FFFFFFFFh; Searches a refcounted pointer list by payload identity, removes the first matching node through RemovePosition, and returns a strong reference. Used for active/full shadow lights and receiver geometry removal.
0x7D5F82: push    offset SEH_7D5F80
0x7D5F87: mov     eax, large fs:0
0x7D5F8D: push    eax
0x7D5F8E: sub     esp, 8
0x7D5F91: push    ebx
0x7D5F92: push    ebp
0x7D5F93: push    esi
0x7D5F94: push    edi
0x7D5F95: mov     eax, ds:0B30AACh
0x7D5F9A: xor     eax, esp
0x7D5F9C: push    eax
0x7D5F9D: lea     eax, [esp+28h+var_C]
0x7D5FA1: mov     large fs:0, eax
0x7D5FA7: xor     ebx, ebx
0x7D5FA9: mov     [esp+28h+var_14], ebx
0x7D5FAD: mov     eax, [ecx+4]
0x7D5FB0: test    eax, eax
0x7D5FB2: mov     ebp, [esp+28h+payload]
0x7D5FB6: jz      short loc_7D5FD0; MEF PERF 2026-10-07: Verified fallback semantics: no matching list node sets position null, then7D5FF4 selects original requested payload pointer as return source; result can still be a strong reference to the requested payload. A nonnull output does not prove removal succeeded. Preserve this in any compatibility fallback.
0x7D5FB8: mov     edi, [ebp+0]
0x7D5FBB: jmp     short loc_7D5FC0
0x7D5FC0: cmp     edi, [eax+8]
0x7D5FC3: lea     edx, [eax+8]
0x7D5FC6: mov     esi, eax
0x7D5FC8: mov     eax, [eax]
0x7D5FCA: jz      short loc_7D5FF0
0x7D5FCC: test    eax, eax
0x7D5FCE: jnz     short loc_7D5FC0
0x7D5FD0: xor     eax, eax; MEF PERF 2026-10-07: Verified fallback semantics: no matching list node sets position null, then7D5FF4 selects original requested payload pointer as return source; result can still be a strong reference to the requested payload. A nonnull output does not prove removal succeeded. Preserve this in any compatibility fallback.
0x7D5FD2: test    eax, eax
0x7D5FD4: mov     [esp+28h+payload], eax
0x7D5FD8: jz      short loc_7D5FF4
0x7D5FDA: lea     eax, [esp+28h+payload]
0x7D5FDE: push    eax; position
0x7D5FDF: lea     edx, [esp+2Ch+var_10]
0x7D5FE3: push    edx; result
0x7D5FE4: call    NiTRefPointerList__RemovePosition; Generic refcounted NiT pointer-list RemovePosition helper handling head, tail and middle nodes while returning a strong payload reference and preserving list links/count.
0x7D5FE9: mov     ebx, 1
0x7D5FEE: jmp     short loc_7D5FF6
0x7D5FF0: mov     eax, esi
0x7D5FF2: jmp     short loc_7D5FD2
0x7D5FF4: mov     eax, ebp
0x7D5FF6: mov     eax, [eax]
0x7D5FF8: test    eax, eax
0x7D5FFA: mov     edi, [esp+28h+result]
0x7D5FFE: mov     [edi], eax
0x7D6000: jz      short loc_7D600C
0x7D6002: add     eax, 4
0x7D6005: push    eax; lpAddend
0x7D6006: call    dword ptr ds:0A28078h
0x7D600C: or      ebx, 2
0x7D600F: test    bl, 1
0x7D6012: mov     [esp+28h+var_4], 0
0x7D601A: jz      short loc_7D6047
0x7D601C: mov     esi, [esp+28h+var_10]
0x7D6020: and     ebx, 0FFFFFFFEh
0x7D6023: test    esi, esi
0x7D6025: mov     [esp+28h+var_14], ebx
0x7D6029: jz      short loc_7D6047
0x7D602B: lea     eax, [esi+4]
0x7D602E: push    eax; lpAddend
0x7D602F: call    dword ptr ds:0A2807Ch
0x7D6035: test    eax, eax
0x7D6037: jnz     short loc_7D6047
0x7D6039: test    esi, esi
0x7D603B: jz      short loc_7D6047
0x7D603D: mov     edx, [esi]
0x7D603F: mov     eax, [edx]
0x7D6041: push    1
0x7D6043: mov     ecx, esi
0x7D6045: call    eax
0x7D6047: mov     eax, edi
0x7D6049: mov     ecx, dword ptr [esp+28h+var_C]
0x7D604D: mov     large fs:0, ecx
0x7D6054: pop     ecx
0x7D6055: pop     edi
0x7D6056: pop     esi
0x7D6057: pop     ebp
0x7D6058: pop     ebx
0x7D6059: add     esp, 14h
0x7D605C: retn    8
0x9CEC10: mov     eax, [ebp-14h]
0x9CEC13: and     eax, 2
0x9CEC16: jz      locret_9CEC28
0x9CEC1C: and     dword ptr [ebp-14h], 0FFFFFFFDh
0x9CEC20: mov     ecx, [ebp+4]; slot
0x9CEC23: jmp     NiPointerSlot_Release
0x9CEC28: retn
0x9CEC29: mov     edx, [esp+arg_4]
0x9CEC2D: lea     eax, [edx-18h]
0x9CEC30: mov     ecx, [edx-1Ch]
0x9CEC33: xor     ecx, eax
0x9CEC35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CEC3A: mov     eax, offset stru_AF7AA4
0x9CEC3F: jmp     ___CxxFrameHandler3
