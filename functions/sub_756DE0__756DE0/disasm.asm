0x756DE0: push    esi
0x756DE1: push    edi
0x756DE2: mov     edi, [esp+8+arg_0]
0x756DE6: push    edi
0x756DE7: mov     esi, ecx
0x756DE9: call    sub_752CD0
0x756DEE: test    al, al
0x756DF0: jz      short loc_756E2B
0x756DF2: fld     dword ptr [esi+18h]
0x756DF5: fld     dword ptr [edi+18h]
0x756DF8: fucompp
0x756DFA: fnstsw  ax
0x756DFC: test    ah, 44h
0x756DFF: jp      short loc_756E2B
0x756E01: mov     ax, [esi+1Ch]
0x756E05: cmp     ax, [edi+1Ch]
0x756E09: jnz     short loc_756E2B
0x756E0B: fld     dword ptr [esi+20h]
0x756E0E: fld     dword ptr [edi+20h]
0x756E11: fucompp
0x756E13: fnstsw  ax
0x756E15: test    ah, 44h
0x756E18: jp      short loc_756E2B
0x756E1A: mov     cx, [esi+24h]
0x756E1E: cmp     cx, [edi+24h]
0x756E22: jnz     short loc_756E2B
0x756E24: pop     edi
0x756E25: mov     al, 1
0x756E27: pop     esi
0x756E28: retn    4
0x756E2B: pop     edi
0x756E2C: xor     al, al
0x756E2E: pop     esi
0x756E2F: retn    4
