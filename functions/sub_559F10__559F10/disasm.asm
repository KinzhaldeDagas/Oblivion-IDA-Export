0x559F10: push    esi
0x559F11: push    edi
0x559F12: mov     edi, ecx
0x559F14: mov     esi, [edi+8]
0x559F17: test    esi, esi
0x559F19: jz      short loc_559F3F
0x559F1B: mov     eax, [esi+20h]
0x559F1E: test    eax, eax
0x559F20: jz      short loc_559F3F
0x559F22: cmp     dword ptr [eax+4], 1
0x559F26: jnz     short loc_559F3F
0x559F28: mov     ecx, esi
0x559F2A: call    sub_559CE0
0x559F2F: push    esi
0x559F30: call    FormHeapFree
0x559F35: add     esp, 4
0x559F38: mov     dword ptr [edi+8], 0
0x559F3F: pop     edi
0x559F40: pop     esi
0x559F41: retn
