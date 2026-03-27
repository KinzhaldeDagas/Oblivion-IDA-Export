0x65D9E0: push    ebx
0x65D9E1: push    0
0x65D9E3: push    0Fh
0x65D9E5: push    ecx
0x65D9E6: mov     ecx, offset ActorProcessManager_ptr
0x65D9EB: xor     bl, bl
0x65D9ED: call    sub_6758E0
0x65D9F2: test    eax, eax
0x65D9F4: jz      short loc_65D9F8
0x65D9F6: mov     bl, 1
0x65D9F8: push    eax
0x65D9F9: call    FormHeapFree
0x65D9FE: add     esp, 4
0x65DA01: mov     al, bl
0x65DA03: pop     ebx
0x65DA04: retn
