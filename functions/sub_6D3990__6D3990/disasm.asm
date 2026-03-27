0x6D3990: mov     eax, [esp+a2]
0x6D3994: test    eax, eax
0x6D3996: push    edi
0x6D3997: mov     edi, ecx
0x6D3999: jz      short loc_6D39A8
0x6D399B: push    eax; a2
0x6D399C: lea     ecx, [edi+40h]; this
0x6D399F: call    NiSmartPointer_Set??
0x6D39A4: pop     edi
0x6D39A5: retn    4
0x6D39A8: push    esi
0x6D39A9: mov     esi, [edi+40h]
0x6D39AC: test    esi, esi
0x6D39AE: jz      short loc_6D39D3
0x6D39B0: lea     eax, [esi+4]
0x6D39B3: push    eax; lpAddend
0x6D39B4: call    dword ptr ds:0A2807Ch
0x6D39BA: test    eax, eax
0x6D39BC: jnz     short loc_6D39CC
0x6D39BE: test    esi, esi
0x6D39C0: jz      short loc_6D39CC
0x6D39C2: mov     edx, [esi]
0x6D39C4: mov     eax, [edx]
0x6D39C6: push    1
0x6D39C8: mov     ecx, esi
0x6D39CA: call    eax
0x6D39CC: mov     dword ptr [edi+40h], 0
0x6D39D3: pop     esi
0x6D39D4: pop     edi
0x6D39D5: retn    4
