0x6BB490: push    esi
0x6BB491: mov     esi, [esp+4+arg_4]
0x6BB495: push    edi
0x6BB496: mov     edi, [esp+8+arg_0]
0x6BB49A: push    esi
0x6BB49B: push    edi
0x6BB49C: call    sub_6D3190
0x6BB4A1: add     esp, 8
0x6BB4A4: test    al, al
0x6BB4A6: jnz     short loc_6BB4AB
0x6BB4A8: pop     edi
0x6BB4A9: pop     esi
0x6BB4AA: retn
0x6BB4AB: fld     dword ptr [edi+4]
0x6BB4AE: fld     dword ptr [esi+4]
0x6BB4B1: fucompp
0x6BB4B3: fnstsw  ax
0x6BB4B5: test    ah, 44h
0x6BB4B8: jp      short loc_6BB4C2
0x6BB4BA: pop     edi
0x6BB4BB: mov     eax, 1
0x6BB4C0: pop     esi
0x6BB4C1: retn
0x6BB4C2: pop     edi
0x6BB4C3: xor     eax, eax
0x6BB4C5: pop     esi
0x6BB4C6: retn
