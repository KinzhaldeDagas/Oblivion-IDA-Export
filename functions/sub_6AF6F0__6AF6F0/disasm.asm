0x6AF6F0: push    esi
0x6AF6F1: push    edi
0x6AF6F2: mov     edi, [esp+8+arg_0]
0x6AF6F6: mov     esi, ecx
0x6AF6F8: add     [esi+4], edi
0x6AF6FB: xor     eax, eax
0x6AF6FD: test    edi, edi
0x6AF6FF: jbe     short loc_6AF74B
0x6AF701: push    ebx
0x6AF702: push    ebp
0x6AF703: cmp     dword ptr [esi+10h], 0
0x6AF707: jnz     short loc_6AF714
0x6AF709: add     dword ptr [esi+8], 1
0x6AF70D: mov     dword ptr [esi+10h], 8
0x6AF714: mov     ebx, [esi+10h]
0x6AF717: cmp     edi, ebx
0x6AF719: jnb     short loc_6AF71D
0x6AF71B: mov     ebx, edi
0x6AF71D: mov     ebp, [esi+8]
0x6AF720: mov     edx, [esi+0Ch]
0x6AF723: mov     ecx, [esi+10h]
0x6AF726: and     ebp, 0FFFh
0x6AF72C: mov     edx, [edx+ebp*4]
0x6AF72F: mov     ebp, [esi+14h]
0x6AF732: and     edx, [ebp+ecx*4+0]
0x6AF736: sub     ecx, ebx
0x6AF738: sar     edx, cl
0x6AF73A: sub     edi, ebx
0x6AF73C: mov     [esi+10h], ecx
0x6AF73F: mov     ecx, edi
0x6AF741: shl     edx, cl
0x6AF743: or      eax, edx
0x6AF745: test    edi, edi
0x6AF747: ja      short loc_6AF703
0x6AF749: pop     ebp
0x6AF74A: pop     ebx
0x6AF74B: pop     edi
0x6AF74C: pop     esi
0x6AF74D: retn    4
