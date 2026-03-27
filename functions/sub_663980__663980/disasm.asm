0x663980: push    esi
0x663981: mov     esi, ecx
0x663983: cmp     dword ptr [esi+5B4h], 0
0x66398A: jz      short loc_6639F6
0x66398C: lea     esp, [esp+0]
0x663990: mov     eax, [esi+5B4h]
0x663996: cmp     dword ptr [eax+4], 0
0x66399A: jnz     short loc_6639A1
0x66399C: cmp     dword ptr [eax], 0
0x66399F: jz      short loc_6639DD
0x6639A1: mov     eax, [eax]
0x6639A3: push    eax
0x6639A4: call    FormHeapFree
0x6639A9: mov     eax, [esi+5B4h]
0x6639AF: mov     ecx, [eax+4]
0x6639B2: add     esp, 4
0x6639B5: test    ecx, ecx
0x6639B7: jz      short loc_6639CE
0x6639B9: mov     edx, [ecx+4]
0x6639BC: mov     [eax+4], edx
0x6639BF: mov     edx, [ecx]
0x6639C1: push    ecx
0x6639C2: mov     [eax], edx
0x6639C4: call    FormHeapFree
0x6639C9: add     esp, 4
0x6639CC: jmp     short loc_6639D4
0x6639CE: mov     dword ptr [eax], 0
0x6639D4: cmp     dword ptr [esi+5B4h], 0
0x6639DB: jnz     short loc_663990
0x6639DD: mov     eax, [esi+5B4h]
0x6639E3: push    eax
0x6639E4: call    FormHeapFree
0x6639E9: add     esp, 4
0x6639EC: mov     dword ptr [esi+5B4h], 0
0x6639F6: pop     esi
0x6639F7: retn
