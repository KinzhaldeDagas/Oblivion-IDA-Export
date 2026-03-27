0x56B6A0: push    esi
0x56B6A1: mov     esi, ecx
0x56B6A3: mov     ecx, [esi]
0x56B6A5: test    ecx, ecx
0x56B6A7: jz      short loc_56B6C5
0x56B6A9: cmp     dword ptr [ecx-4], 0
0x56B6AD: lea     eax, [ecx-4]
0x56B6B0: jz      short loc_56B6BC
0x56B6B2: mov     eax, [ecx]
0x56B6B4: mov     edx, [eax]
0x56B6B6: push    3
0x56B6B8: call    edx
0x56B6BA: jmp     short loc_56B6C5
0x56B6BC: push    eax
0x56B6BD: call    FormHeapFree
0x56B6C2: add     esp, 4
0x56B6C5: mov     esi, [esi+8]
0x56B6C8: test    esi, esi
0x56B6CA: jz      short loc_56B6DC
0x56B6CC: mov     ecx, esi
0x56B6CE: call    sub_56B6A0
0x56B6D3: push    esi
0x56B6D4: call    FormHeapFree
0x56B6D9: add     esp, 4
0x56B6DC: pop     esi
0x56B6DD: retn
