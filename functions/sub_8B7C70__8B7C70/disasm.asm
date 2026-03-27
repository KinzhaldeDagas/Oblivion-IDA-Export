0x8B7C70: push    esi
0x8B7C71: mov     esi, ecx
0x8B7C73: cmp     dword ptr [esi+0Ch], 0
0x8B7C77: jnz     short loc_8B7CC5
0x8B7C79: push    10h; Size
0x8B7C7B: call    FormHeapAlloc
0x8B7C80: add     esp, 4
0x8B7C83: test    eax, eax
0x8B7C85: jz      short loc_8B7CA4
0x8B7C87: mov     dword ptr [eax], 0
0x8B7C8D: mov     dword ptr [eax+4], 0
0x8B7C94: mov     dword ptr [eax+8], 0
0x8B7C9B: mov     dword ptr [eax+0Ch], 80000000h
0x8B7CA2: jmp     short loc_8B7CA6
0x8B7CA4: xor     eax, eax
0x8B7CA6: cmp     dword ptr [esi+8], 0
0x8B7CAA: mov     [esi+0Ch], eax
0x8B7CAD: jz      short loc_8B7CB7
0x8B7CAF: push    eax
0x8B7CB0: mov     ecx, esi
0x8B7CB2: call    sub_8B77A0
0x8B7CB7: mov     eax, [esp+4+arg_0]
0x8B7CBB: mov     byte ptr [eax], 1
0x8B7CBE: mov     eax, [esi+0Ch]
0x8B7CC1: pop     esi
0x8B7CC2: retn    4
0x8B7CC5: mov     ecx, [esp+4+arg_0]
0x8B7CC9: mov     byte ptr [ecx], 0
0x8B7CCC: mov     eax, [esi+0Ch]
0x8B7CCF: pop     esi
0x8B7CD0: retn    4
