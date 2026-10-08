0x7A3BD0: push    ebp; Exception-safe uninitialized deep copy of 0x54-byte SIdvLeafTexture records. Normal completion returns destination end; the separate SEH landing path destroys the constructed prefix and rethrows.
0x7A3BD1: mov     ebp, esp
0x7A3BD3: push    0FFFFFFFFh
0x7A3BD5: push    offset SEH_7A3BD0
0x7A3BDA: mov     eax, large fs:0
0x7A3BE0: push    eax
0x7A3BE1: sub     esp, 0Ch
0x7A3BE4: push    ebx
0x7A3BE5: push    esi
0x7A3BE6: push    edi
0x7A3BE7: mov     eax, ds:0B30AACh
0x7A3BEC: xor     eax, ebp
0x7A3BEE: push    eax
0x7A3BEF: lea     eax, [ebp+var_C]
0x7A3BF2: mov     large fs:0, eax
0x7A3BF8: mov     [ebp+var_10], esp
0x7A3BFB: mov     esi, [ebp+destinationFirst]
0x7A3BFE: mov     edi, [ebp+first]
0x7A3C01: xor     ebx, ebx
0x7A3C03: mov     [ebp+value], esi
0x7A3C06: mov     [ebp+var_4], ebx
0x7A3C09: lea     esp, [esp+0]
0x7A3C10: cmp     edi, [ebp+last]
0x7A3C13: jz      short loc_7A3C5E
0x7A3C15: mov     [ebp+first], esi
0x7A3C18: mov     [ebp+var_18], esi
0x7A3C1B: cmp     esi, ebx
0x7A3C1D: mov     byte ptr [ebp+var_4], 1
0x7A3C21: jz      short loc_7A3C2B
0x7A3C23: push    edi; source
0x7A3C24: mov     ecx, esi; this
0x7A3C26: call    OB_SIdvLeafTexture_CopyCtor_010201A0; Deep copy-constructs one compact 0x54 SIdvLeafTexture, including initialization and assignment of its owned 28-byte small string.
0x7A3C2B: add     esi, 54h ; 'T'
0x7A3C2E: mov     byte ptr [ebp+var_4], bl
0x7A3C31: mov     [ebp+destinationFirst], esi
0x7A3C34: add     edi, 54h ; 'T'
0x7A3C37: jmp     short loc_7A3C10
0x7A3C39: mov     esi, [ebp+value]; SEH-only cleanup landing path: destroy the prefix already copy-constructed, then rethrow. Normal flow branches to 0x7A3C5E.
0x7A3C3C: mov     edi, [ebp+destinationFirst]
0x7A3C3F: cmp     esi, edi
0x7A3C41: jz      short loc_7A3C55
0x7A3C43: mov     ebx, [ebp+arg_C]
0x7A3C46: push    esi; value
0x7A3C47: mov     ecx, ebx
0x7A3C49: call    OB_SIdvLeafTexture_Destroy_010201A0; Destroys one compact SIdvLeafTexture by releasing its filename only when the 28-byte small string is heap-backed.
0x7A3C4E: add     esi, 54h ; 'T'
0x7A3C51: cmp     esi, edi
0x7A3C53: jnz     short loc_7A3C46
0x7A3C55: xor     ebx, ebx
0x7A3C57: push    ebx
0x7A3C58: push    ebx
0x7A3C59: call    ThrowException??
0x7A3C5E: mov     eax, esi
0x7A3C60: mov     ecx, [ebp+var_C]
0x7A3C63: mov     large fs:0, ecx
0x7A3C6A: pop     ecx
0x7A3C6B: pop     edi
0x7A3C6C: pop     esi
0x7A3C6D: pop     ebx
0x7A3C6E: mov     esp, ebp
0x7A3C70: pop     ebp
0x7A3C71: retn
0x9CC9A0: mov     eax, [ebp+first]
0x9CC9A3: push    eax
0x9CC9A4: mov     ecx, [ebp+var_18]; this
0x9CC9A7: push    ecx
0x9CC9A8: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CC9AD: add     esp, 8
0x9CC9B0: retn
0x9CC9B1: mov     edx, [esp-4+last]
0x9CC9B5: lea     eax, [edx+0Ch]
0x9CC9B8: mov     ecx, [edx-1Ch]
0x9CC9BB: xor     ecx, eax
0x9CC9BD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC9C2: mov     eax, offset stru_AF5D60
0x9CC9C7: jmp     ___CxxFrameHandler3
