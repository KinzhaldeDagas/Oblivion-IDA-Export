0x680EE0: push    ebx
0x680EE1: push    esi
0x680EE2: mov     esi, [esp+8+arg_0]
0x680EE6: xor     bl, bl
0x680EE8: test    esi, esi
0x680EEA: jz      short loc_680F21
0x680EEC: mov     ecx, esi; this
0x680EEE: call    Actor_IsCreature
0x680EF3: test    al, al
0x680EF5: jz      short loc_680F1C
0x680EF7: mov     eax, [esi]
0x680EF9: mov     edx, [eax+284h]
0x680EFF: push    1
0x680F01: mov     ecx, esi
0x680F03: call    edx
0x680F05: mov     [esp+8+arg_0], eax
0x680F09: fild    [esp+8+arg_0]
0x680F0D: fld     dword ptr ds:0B3A4A0h
0x680F13: fcompp
0x680F15: fnstsw  ax
0x680F17: test    ah, 5
0x680F1A: jp      short loc_680F21
0x680F1C: pop     esi
0x680F1D: mov     al, 1
0x680F1F: pop     ebx
0x680F20: retn
0x680F21: pop     esi
0x680F22: mov     al, bl
0x680F24: pop     ebx
0x680F25: retn
