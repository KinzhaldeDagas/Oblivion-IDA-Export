0x676940: cmp     [esp+arg_0], 0
0x676945: push    ebp
0x676946: mov     ebp, ecx
0x676948: jz      loc_676A36
0x67694E: mov     eax, ds:0B333C4h
0x676953: cmp     byte ptr [eax+116h], 0
0x67695A: jnz     loc_676A36
0x676960: push    ebx
0x676961: push    esi
0x676962: push    edi; int
0x676963: xor     ebx, ebx
0x676965: test    ebx, ebx
0x676967: jnz     short loc_67696C
0x676969: push    ebx
0x67696A: jmp     short loc_67697E
0x67696C: cmp     ebx, 1
0x67696F: jnz     short loc_676974
0x676971: push    ebx
0x676972: jmp     short loc_67697E
0x676974: cmp     ebx, 2
0x676977: jnz     short loc_67697C
0x676979: push    ebx
0x67697A: jmp     short loc_67697E
0x67697C: push    3; a2
0x67697E: mov     ecx, ebp; this
0x676980: call    sub_673A50
0x676985: mov     ecx, eax; this
0x676987: call    sub_7616D0
0x67698C: mov     edi, eax
0x67698E: test    edi, edi
0x676990: jz      loc_676A27
0x676996: mov     ecx, [edi]
0x676998: test    ecx, ecx
0x67699A: jz      loc_676A27
0x6769A0: mov     edx, [ecx]
0x6769A2: mov     eax, [edx+190h]
0x6769A8: xor     esi, esi
0x6769AA: call    eax
0x6769AC: test    al, al
0x6769AE: jz      short loc_6769B2
0x6769B0: mov     esi, [edi]
0x6769B2: test    esi, esi
0x6769B4: mov     edi, [edi+4]
0x6769B7: jz      short loc_676A1F
0x6769B9: mov     ecx, [esi+58h]
0x6769BC: test    ecx, ecx
0x6769BE: jz      short loc_6769E8
0x6769C0: mov     edx, [ecx]
0x6769C2: mov     eax, [edx+184h]
0x6769C8: call    eax
0x6769CA: test    eax, eax
0x6769CC: jz      short loc_6769E8
0x6769CE: cmp     byte ptr [eax+20h], 16h
0x6769D2: jnz     short loc_6769E8
0x6769D4: mov     edx, [esi]
0x6769D6: mov     eax, [edx+380h]
0x6769DC: mov     ecx, esi
0x6769DE: call    eax
0x6769E0: push    eax
0x6769E1: mov     ecx, esi
0x6769E3: call    sub_602050
0x6769E8: mov     edx, [esi]
0x6769EA: mov     eax, [edx+198h]
0x6769F0: push    0
0x6769F2: mov     ecx, esi
0x6769F4: call    eax
0x6769F6: test    al, al
0x6769F8: jnz     short loc_676A1F
0x6769FA: mov     ecx, ds:0B333C4h
0x676A00: push    0; char
0x676A02: push    esi; Concurrency::details::SchedulerBase *
0x676A03: call    sub_660F10
0x676A08: test    al, al
0x676A0A: jz      short loc_676A1F
0x676A0C: mov     ecx, esi; int
0x676A0E: call    sub_5EAE70
0x676A13: mov     ecx, [esp+10h+arg_0]
0x676A17: push    ecx; int
0x676A18: mov     ecx, esi; int
0x676A1A: call    sub_5F9200
0x676A1F: test    edi, edi
0x676A21: jnz     loc_676996
0x676A27: add     ebx, 1
0x676A2A: cmp     ebx, 4
0x676A2D: jl      loc_676965
0x676A33: pop     edi
0x676A34: pop     esi
0x676A35: pop     ebx
0x676A36: pop     ebp
0x676A37: retn    4
