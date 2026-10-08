0x420E00: push    0FFFFFFFFh; Oblivion-specific friend-hit behavior: gets/creates ExtraFriendHitList and increments the hit count for the supplied actor, creating a {actor,count,timer} entry if needed.
0x420E02: push    offset SEH_8C8970
0x420E07: mov     eax, large fs:0
0x420E0D: push    eax
0x420E0E: push    ecx
0x420E0F: push    esi
0x420E10: push    edi
0x420E11: mov     eax, ___security_cookie
0x420E16: xor     eax, esp
0x420E18: push    eax
0x420E19: lea     eax, [esp+1Ch+var_C]
0x420E1D: mov     large fs:0, eax
0x420E23: mov     edi, ecx
0x420E25: push    4Eh ; 'N'; a2
0x420E27: call    BaseExtraList_GetExtraData
0x420E2C: mov     esi, eax
0x420E2E: test    esi, esi
0x420E30: jnz     short loc_420E65
0x420E32: push    10h; Size
0x420E34: call    FormHeapAlloc
0x420E39: add     esp, 4
0x420E3C: mov     [esp+1Ch+var_10], eax
0x420E40: test    eax, eax
0x420E42: mov     [esp+1Ch+var_4], esi
0x420E46: jz      short loc_420E51
0x420E48: mov     ecx, eax; this
0x420E4A: call    ??0ExtraFriendHitList@@QAE@XZ; ExtraFriendHitList::ExtraFriendHitList(void)
0x420E4F: jmp     short loc_420E53
0x420E51: xor     eax, eax
0x420E53: push    eax; BSExtraData *
0x420E54: mov     ecx, edi; ExtraDataList *
0x420E56: mov     [esp+20h+var_4], 0FFFFFFFFh
0x420E5E: mov     esi, eax
0x420E60: call    BaseExtraList_AddExtra
0x420E65: mov     eax, [esp+1Ch+arg_0]
0x420E69: push    eax
0x420E6A: mov     ecx, esi
0x420E6C: call    ExtraFriendHitList_AddHit; Adds or increments an Oblivion friend-hit entry keyed by actor: uint16 count at +4 and elapsed timer float at +8.
0x420E71: mov     ecx, [esp+1Ch+var_C]
0x420E75: mov     large fs:0, ecx
0x420E7C: pop     ecx
0x420E7D: pop     edi
0x420E7E: pop     esi
0x420E7F: add     esp, 10h
0x420E82: retn    4
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
