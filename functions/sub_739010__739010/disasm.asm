0x739010: push    0FFFFFFFFh
0x739012: push    offset SEH_695A50
0x739017: mov     eax, large fs:0
0x73901D: push    eax
0x73901E: push    ebx
0x73901F: push    esi
0x739020: push    edi
0x739021: mov     eax, ds:0B30AACh
0x739026: xor     eax, esp
0x739028: push    eax
0x739029: lea     eax, [esp+1Ch+var_C]
0x73902D: mov     large fs:0, eax
0x739033: mov     esi, ecx
0x739035: mov     eax, [esp+1Ch+arg_4]
0x739039: mov     ebx, [esp+1Ch+arg_0]
0x73903D: push    eax
0x73903E: push    ebx
0x73903F: call    sub_700770
0x739044: push    30h ; '0'; Size
0x739046: call    FormHeapAlloc
0x73904B: add     esp, 4
0x73904E: mov     [esp+1Ch+arg_4], eax
0x739052: test    eax, eax
0x739054: mov     [esp+1Ch+var_4], 0
0x73905C: jz      short loc_73906D
0x73905E: mov     esi, [esi+8]
0x739061: push    esi
0x739062: mov     ecx, eax
0x739064: call    sub_731620
0x739069: mov     edi, eax
0x73906B: jmp     short loc_73906F
0x73906D: xor     edi, edi
0x73906F: mov     esi, [ebx+8]
0x739072: cmp     esi, edi
0x739074: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x73907C: jz      short loc_7390AF
0x73907E: test    esi, esi
0x739080: jz      short loc_73909E
0x739082: lea     ecx, [esi+4]
0x739085: push    ecx; lpAddend
0x739086: call    dword ptr ds:0A2807Ch
0x73908C: test    eax, eax
0x73908E: jnz     short loc_73909E
0x739090: test    esi, esi
0x739092: jz      short loc_73909E
0x739094: mov     edx, [esi]
0x739096: mov     eax, [edx]
0x739098: push    1
0x73909A: mov     ecx, esi
0x73909C: call    eax
0x73909E: test    edi, edi
0x7390A0: mov     [ebx+8], edi
0x7390A3: jz      short loc_7390AF
0x7390A5: add     edi, 4
0x7390A8: push    edi; lpAddend
0x7390A9: call    dword ptr ds:0A28078h
0x7390AF: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7390B3: mov     large fs:0, ecx
0x7390BA: pop     ecx
0x7390BB: pop     edi
0x7390BC: pop     esi
0x7390BD: pop     ebx
0x7390BE: add     esp, 0Ch
0x7390C1: retn    8
