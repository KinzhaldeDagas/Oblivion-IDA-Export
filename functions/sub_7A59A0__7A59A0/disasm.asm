0x7A59A0: push    ebp; Exception-safe uninitialized fill of count compact leaf textures. The normal path returns; the SEH landing path destroys the constructed prefix and rethrows.
0x7A59A1: mov     ebp, esp
0x7A59A3: push    0FFFFFFFFh
0x7A59A5: push    offset SEH_7A59A0
0x7A59AA: mov     eax, large fs:0
0x7A59B0: push    eax
0x7A59B1: sub     esp, 0Ch
0x7A59B4: push    ebx
0x7A59B5: push    esi
0x7A59B6: push    edi
0x7A59B7: mov     eax, ds:0B30AACh
0x7A59BC: xor     eax, ebp
0x7A59BE: push    eax
0x7A59BF: lea     eax, [ebp+var_C]
0x7A59C2: mov     large fs:0, eax
0x7A59C8: mov     [ebp+var_10], esp
0x7A59CB: mov     esi, [ebp+destination]
0x7A59CE: mov     edi, [ebp+count]
0x7A59D1: xor     ebx, ebx
0x7A59D3: mov     [ebp+var_14], esi
0x7A59D6: mov     [ebp+var_4], ebx
0x7A59D9: lea     esp, [esp+0]
0x7A59E0: cmp     edi, ebx
0x7A59E2: jbe     short loc_7A5A30
0x7A59E4: mov     [ebp+count], esi
0x7A59E7: mov     [ebp+var_18], esi
0x7A59EA: cmp     esi, ebx
0x7A59EC: mov     byte ptr [ebp+var_4], 1
0x7A59F0: jz      short loc_7A59FD
0x7A59F2: mov     eax, [ebp+value]
0x7A59F5: push    eax; source
0x7A59F6: mov     ecx, esi; this
0x7A59F8: call    OB_SIdvLeafTexture_CopyCtor_010201A0; Deep copy-constructs one compact 0x54 SIdvLeafTexture, including initialization and assignment of its owned 28-byte small string.
0x7A59FD: sub     edi, 1
0x7A5A00: add     esi, 54h ; 'T'
0x7A5A03: mov     byte ptr [ebp+var_4], bl
0x7A5A06: mov     [ebp+destination], esi
0x7A5A09: jmp     short loc_7A59E0
0x7A5A0B: mov     esi, [ebp+var_14]; SEH-only cleanup landing path: destroy the prefix already fill-constructed, then rethrow. Normal flow branches to 0x7A5A30.
0x7A5A0E: mov     edi, [ebp+destination]
0x7A5A11: cmp     esi, edi
0x7A5A13: jz      short loc_7A5A27
0x7A5A15: mov     ebx, [ebp+arg_C]
0x7A5A18: push    esi; value
0x7A5A19: mov     ecx, ebx
0x7A5A1B: call    OB_SIdvLeafTexture_Destroy_010201A0; Destroys one compact SIdvLeafTexture by releasing its filename only when the 28-byte small string is heap-backed.
0x7A5A20: add     esi, 54h ; 'T'
0x7A5A23: cmp     esi, edi
0x7A5A25: jnz     short loc_7A5A18
0x7A5A27: xor     ebx, ebx
0x7A5A29: push    ebx
0x7A5A2A: push    ebx
0x7A5A2B: call    ThrowException??
0x7A5A30: mov     ecx, [ebp+var_C]
0x7A5A33: mov     large fs:0, ecx
0x7A5A3A: pop     ecx
0x7A5A3B: pop     edi
0x7A5A3C: pop     esi
0x7A5A3D: pop     ebx
0x7A5A3E: mov     esp, ebp
0x7A5A40: pop     ebp
0x7A5A41: retn
0x9CCBE0: mov     eax, [ebp+count]
0x9CCBE3: push    eax
0x9CCBE4: mov     ecx, [ebp+var_18]; this
0x9CCBE7: push    ecx
0x9CCBE8: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CCBED: add     esp, 8
0x9CCBF0: retn
0x9CCBF1: mov     edx, [esp-4+count]
0x9CCBF5: lea     eax, [edx+0Ch]
0x9CCBF8: mov     ecx, [edx-1Ch]
0x9CCBFB: xor     ecx, eax
0x9CCBFD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCC02: mov     eax, offset stru_AF5F90
0x9CCC07: jmp     ___CxxFrameHandler3
