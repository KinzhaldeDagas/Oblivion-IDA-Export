0x60BF2F: mov     eax, [esi+5Ch]; jumptable 0060BEF2 default case
0x60BF32: test    eax, eax
0x60BF34: jz      short loc_60BF46
0x60BF36: push    eax
0x60BF37: call    FormHeapFree
0x60BF3C: add     esp, 4
0x60BF3F: mov     dword ptr [esi+5Ch], 0
0x60BF46: mov     dword ptr [esi+60h], 0
0x60BF4D: pop     esi
0x60BF4E: mov     al, bl
0x60BF50: pop     ebx
0x60BF51: retn
