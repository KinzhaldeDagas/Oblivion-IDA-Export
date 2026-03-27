0x8B05D0: push    ebp
0x8B05D1: mov     ebp, esp
0x8B05D3: and     esp, 0FFFFFFF0h
0x8B05D6: sub     esp, 8
0x8B05D9: push    esi
0x8B05DA: mov     esi, [ebp+arg_0]
0x8B05DD: push    edi
0x8B05DE: push    esi
0x8B05DF: mov     edi, ecx
0x8B05E1: call    sub_8B0280
0x8B05E6: mov     edi, [edi+8]
0x8B05E9: test    edi, edi
0x8B05EB: jz      short loc_8B0627
0x8B05ED: mov     edi, [edi+0Ch]
0x8B05F0: test    edi, edi
0x8B05F2: jz      short loc_8B0627
0x8B05F4: mov     eax, [edi+10h]
0x8B05F7: test    eax, eax
0x8B05F9: jz      short loc_8B0627
0x8B05FB: fld     dword ptr [eax+58h]
0x8B05FE: fadd    dword ptr [eax+14h]
0x8B0601: fstp    dword ptr [esi+2Ch]
0x8B0604: fld     dword ptr [eax+14h]
0x8B0607: fsub    dword ptr [eax+58h]
0x8B060A: fstp    dword ptr [esi+28h]
0x8B060D: movaps  xmm0, xmmword ptr [eax+20h]
0x8B0611: movaps  xmmword ptr [esi+10h], xmm0
0x8B0615: mov     ecx, [eax+0Ch]
0x8B0618: mov     [esi+20h], ecx
0x8B061B: mov     edx, [eax+10h]
0x8B061E: mov     [esi+24h], edx
0x8B0621: mov     eax, [eax+60h]
0x8B0624: mov     [esi+30h], eax
0x8B0627: pop     edi
0x8B0628: pop     esi
0x8B0629: mov     esp, ebp
0x8B062B: pop     ebp
0x8B062C: retn    4
