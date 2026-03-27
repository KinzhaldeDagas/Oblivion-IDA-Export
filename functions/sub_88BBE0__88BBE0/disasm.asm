0x88BBE0: push    ebx
0x88BBE1: push    esi
0x88BBE2: mov     esi, [esp+8+arg_0]
0x88BBE6: xor     bl, bl
0x88BBE8: test    esi, esi
0x88BBEA: jz      short loc_88BC16
0x88BBEC: push    esi
0x88BBED: call    sub_6FA970
0x88BBF2: add     esp, 4
0x88BBF5: test    eax, eax
0x88BBF7: jz      short loc_88BC16
0x88BBF9: mov     eax, [eax+0Ch]
0x88BBFC: and     eax, 2
0x88BBFF: jz      short loc_88BC16
0x88BC01: mov     eax, [esp+8+arg_8]
0x88BC05: mov     ecx, [esp+8+arg_4]
0x88BC09: push    eax
0x88BC0A: push    ecx
0x88BC0B: push    esi
0x88BC0C: mov     bl, 1
0x88BC0E: call    sub_88A7D0
0x88BC13: add     esp, 0Ch
0x88BC16: pop     esi
0x88BC17: mov     al, bl
0x88BC19: pop     ebx
0x88BC1A: retn
