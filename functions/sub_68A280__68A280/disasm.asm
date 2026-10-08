0x68A280: push    0FFFFFFFFh; Verified appends the final destination as a kind-1 TravelPathNode with its own copied NiPoint3 payload, even if low-path A* produced no reference nodes.
0x68A282: push    offset SEH_8C8970
0x68A287: mov     eax, large fs:0
0x68A28D: push    eax
0x68A28E: push    ecx
0x68A28F: push    esi
0x68A290: push    edi
0x68A291: mov     eax, ds:0B30AACh
0x68A296: xor     eax, esp
0x68A298: push    eax
0x68A299: lea     eax, [esp+1Ch+var_C]
0x68A29D: mov     large fs:0, eax
0x68A2A3: mov     edi, ecx
0x68A2A5: push    8; Size
0x68A2A7: call    FormHeapAlloc
0x68A2AC: add     esp, 4
0x68A2AF: mov     [esp+1Ch+var_10], eax
0x68A2B3: xor     esi, esi
0x68A2B5: cmp     eax, esi
0x68A2B7: mov     [esp+1Ch+var_4], esi
0x68A2BB: jz      short loc_68A2C6
0x68A2BD: mov     ecx, eax; this
0x68A2BF: call    TravelPathNode_Init; Verified TravelPathNode_Init sets payload +0 to null and kind +4 to 0xFF (uninitialized sentinel); the three bytes at +5..+7 are not written.
0x68A2C4: mov     esi, eax
0x68A2C6: push    1; kind
0x68A2C8: mov     ecx, esi; this
0x68A2CA: mov     [esp+20h+var_4], 0FFFFFFFFh
0x68A2D2: call    TravelPathNode_SetKind; Verified kind setter writes the low byte at +4; when switching away from kind 1 it frees the owned NiPoint3* payload, then clears payload and stores the new kind. Observed kinds are 0=reference, 1=owned position, initial sentinel 0xFF.
0x68A2D7: mov     eax, [esp+1Ch+position]
0x68A2DB: push    eax; position
0x68A2DC: mov     ecx, esi; this
0x68A2DE: call    TravelPathNode_SetOwnedPosition; Verified for kind 1 allocates a 12-byte NiPoint3 when payload is null and copies xyz from the supplied position; this record owns that copy until cleared.
0x68A2E3: push    esi
0x68A2E4: lea     ecx, [edi+4]
0x68A2E7: call    BSSimpleList_PushBack
0x68A2EC: mov     ecx, [esp+1Ch+var_C]
0x68A2F0: mov     large fs:0, ecx
0x68A2F7: pop     ecx
0x68A2F8: pop     edi
0x68A2F9: pop     esi
0x68A2FA: add     esp, 10h
0x68A2FD: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
