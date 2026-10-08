0x6FD660: push    0FFFFFFFFh
0x6FD662: push    offset SEH_8C8970
0x6FD667: mov     eax, large fs:0
0x6FD66D: push    eax
0x6FD66E: push    ecx
0x6FD66F: push    esi
0x6FD670: push    edi
0x6FD671: mov     eax, ds:0B30AACh
0x6FD676: xor     eax, esp
0x6FD678: push    eax
0x6FD679: lea     eax, [esp+1Ch+var_C]
0x6FD67D: mov     large fs:0, eax
0x6FD683: mov     edi, ecx
0x6FD685: push    54h ; 'T'; Size
0x6FD687: call    FormHeapAlloc
0x6FD68C: add     esp, 4
0x6FD68F: mov     [esp+1Ch+var_10], eax
0x6FD693: xor     esi, esi
0x6FD695: cmp     eax, esi
0x6FD697: mov     [esp+1Ch+var_4], esi
0x6FD69B: jz      short loc_6FD6A6
0x6FD69D: mov     ecx, eax
0x6FD69F: call    sub_6FD530
0x6FD6A4: mov     esi, eax
0x6FD6A6: mov     eax, [esp+1Ch+arg_0]
0x6FD6AA: push    eax
0x6FD6AB: push    esi
0x6FD6AC: mov     ecx, edi
0x6FD6AE: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6FD6B6: call    NiTimeController_CopyMembers; Copies flags and timing values through +0x24. Remaps target +0x30 through the clone map only when runtime types match, and clones the refcounted next-controller chain at +0x34. Runtime cache +0x28 and update/force bytes are not copied here.
0x6FD6BB: mov     ecx, [edi+3Ch]
0x6FD6BE: mov     [esi+3Ch], ecx
0x6FD6C1: mov     edx, [edi+40h]
0x6FD6C4: mov     [esi+40h], edx
0x6FD6C7: mov     eax, esi
0x6FD6C9: mov     ecx, [esp+1Ch+var_C]
0x6FD6CD: mov     large fs:0, ecx
0x6FD6D4: pop     ecx
0x6FD6D5: pop     edi
0x6FD6D6: pop     esi
0x6FD6D7: add     esp, 10h
0x6FD6DA: retn    4
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
