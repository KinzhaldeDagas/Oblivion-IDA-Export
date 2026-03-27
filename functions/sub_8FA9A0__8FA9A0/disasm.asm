0x8FA9A0: push    esi
0x8FA9A1: mov     esi, ecx
0x8FA9A3: xor     eax, eax
0x8FA9A5: mov     ax, [esi+0Ch]
0x8FA9A9: cmp     ax, 0FFFFh
0x8FA9AD: jz      short loc_8FA9B8
0x8FA9AF: mov     ecx, [esi+8]
0x8FA9B2: mov     edx, [ecx]
0x8FA9B4: push    eax
0x8FA9B5: call    dword ptr [edx+10h]
0x8FA9B8: mov     eax, [esi]
0x8FA9BA: push    1
0x8FA9BC: mov     ecx, esi
0x8FA9BE: call    dword ptr [eax]
0x8FA9C0: pop     esi
0x8FA9C1: retn
