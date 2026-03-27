0x450980: push    ebx
0x450981: push    esi
0x450982: push    edi
0x450983: mov     edi, [esp+0Ch+arg_0]
0x450987: push    edi
0x450988: mov     esi, ecx
0x45098A: call    TESFile_UpdateOpenGroups
0x45098F: mov     eax, [edi+8]
0x450992: and     eax, 30EE0h
0x450997: mov     [esi+270h], eax
0x45099D: movzx   eax, byte ptr [edi+4]
0x4509A1: lea     ecx, [eax+eax*2]
0x4509A4: mov     edx, ds:0B05E08h[ecx*4]
0x4509AB: mov     ecx, [esi+10h]
0x4509AE: mov     [esi+268h], edx
0x4509B4: mov     eax, [edi+0Ch]
0x4509B7: lea     ebx, [esi+268h]
0x4509BD: xor     edi, edi
0x4509BF: mov     [esi+274h], eax
0x4509C5: mov     [esi+26Ch], edi
0x4509CB: mov     eax, ds:0A853D8h
0x4509D0: mov     edx, [ecx]
0x4509D2: mov     edx, [edx+0Ch]
0x4509D5: push    eax
0x4509D6: push    edi
0x4509D7: call    edx
0x4509D9: mov     eax, [esi+10h]
0x4509DC: mov     ecx, [eax+30h]
0x4509DF: cmp     ecx, 0FFFFFFFFh
0x4509E2: jz      short loc_4509E8
0x4509E4: mov     eax, ecx
0x4509E6: jmp     short loc_4509EE
0x4509E8: mov     eax, [eax+148h]
0x4509EE: push    14h
0x4509F0: push    ebx
0x4509F1: mov     ecx, esi
0x4509F3: mov     [esi+27Ch], eax
0x4509F9: mov     [esi+280h], edi
0x4509FF: call    TESFile_WriteData
0x450A04: pop     edi
0x450A05: pop     esi
0x450A06: pop     ebx
0x450A07: retn    4
