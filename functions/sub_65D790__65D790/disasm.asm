0x65D790: push    ebx
0x65D791: mov     ebx, [esp+4+arg_0]
0x65D795: push    ebp
0x65D796: push    esi
0x65D797: push    edi
0x65D798: push    ebx
0x65D799: mov     edi, ecx
0x65D79B: call    sub_51AA00
0x65D7A0: mov     ebp, [edi+5CCh]
0x65D7A6: lea     esi, [eax+eax*8]
0x65D7A9: add     esi, esi
0x65D7AB: add     esi, esi
0x65D7AD: add     esp, 4
0x65D7B0: cmp     ds:byte_B102E4[esi], 0
0x65D7B7: jz      short loc_65D7E0
0x65D7B9: mov     ecx, edi
0x65D7BB: call    TESObjectREFR_GetAnimData
0x65D7C0: mov     ecx, ds:dword_B102E8[esi]
0x65D7C6: push    ecx
0x65D7C7: mov     ecx, eax
0x65D7C9: call    sub_4706E0
0x65D7CE: push    ebx
0x65D7CF: push    eax
0x65D7D0: mov     ecx, ebp
0x65D7D2: call    sub_474BE0
0x65D7D7: test    eax, eax
0x65D7D9: setnz   al
0x65D7DC: test    al, al
0x65D7DE: jnz     short loc_65D7FB
0x65D7E0: push    ebx
0x65D7E1: mov     ecx, ebp
0x65D7E3: call    sub_470D00
0x65D7E8: test    al, al
0x65D7EA: jz      short loc_65D7FB
0x65D7EC: mov     edx, [esp+10h+arg_4]
0x65D7F0: push    0FFFFFFFFh
0x65D7F2: push    edx
0x65D7F3: push    ebx
0x65D7F4: mov     ecx, ebp
0x65D7F6: call    ActorAnimData_PlayAnimGroup
0x65D7FB: pop     edi
0x65D7FC: pop     esi
0x65D7FD: pop     ebp
0x65D7FE: pop     ebx
0x65D7FF: retn    8
