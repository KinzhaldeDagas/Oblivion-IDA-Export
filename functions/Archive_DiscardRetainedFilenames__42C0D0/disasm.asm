0x42C0D0: push    esi
0x42C0D1: mov     esi, ecx
0x42C0D3: test    byte ptr [esi+194h], 4
0x42C0DA: jnz     short loc_42C14B
0x42C0DC: mov     eax, [esi+1A0h]
0x42C0E2: test    eax, eax
0x42C0E4: jz      short loc_42C0EF
0x42C0E6: push    eax
0x42C0E7: call    FormHeapFree
0x42C0EC: add     esp, 4
0x42C0EF: cmp     dword ptr [esi+1A4h], 0
0x42C0F6: mov     dword ptr [esi+1A0h], 0
0x42C100: jz      short loc_42C14B
0x42C102: cmp     [esp+4+arg_0], 0
0x42C107: jnz     short loc_42C14B
0x42C109: push    edi
0x42C10A: xor     edi, edi
0x42C10C: cmp     [esi+164h], edi
0x42C112: jbe     short loc_42C131
0x42C114: mov     eax, [esi+1A4h]
0x42C11A: mov     ecx, [eax+edi*4]
0x42C11D: push    ecx
0x42C11E: call    FormHeapFree
0x42C123: add     edi, 1
0x42C126: add     esp, 4
0x42C129: cmp     edi, [esi+164h]
0x42C12F: jb      short loc_42C114
0x42C131: mov     edx, [esi+1A4h]
0x42C137: push    edx
0x42C138: call    FormHeapFree
0x42C13D: add     esp, 4
0x42C140: mov     dword ptr [esi+1A4h], 0
0x42C14A: pop     edi
0x42C14B: and     byte ptr [esi+194h], 0DFh
0x42C152: pop     esi
0x42C153: retn    4
