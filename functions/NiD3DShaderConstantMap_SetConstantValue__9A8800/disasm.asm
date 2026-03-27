0x9A8800: push    esi
0x9A8801: push    edi; Src
0x9A8802: push    38h ; '8'; Size
0x9A8804: mov     edi, ecx
0x9A8806: call    FormHeapAlloc
0x9A880B: add     esp, 4
0x9A880E: test    eax, eax
0x9A8810: jz      short loc_9A881D
0x9A8812: mov     ecx, eax; this
0x9A8814: call    sub_9A84B0
0x9A8819: mov     esi, eax
0x9A881B: jmp     short loc_9A881F
0x9A881D: xor     esi, esi
0x9A881F: mov     eax, [esp+8+keyName]
0x9A8823: push    eax; Src
0x9A8824: mov     ecx, esi; this
0x9A8826: call    NiD3DShaderConstantMapEntry__SetKeyStringCopy
0x9A882B: mov     ecx, [esp+8+flags]
0x9A882F: mov     eax, [esp+8+constName]
0x9A8833: mov     edx, [esp+8+register_1]
0x9A8837: mov     [esi+18h], ecx
0x9A883A: push    eax; Src
0x9A883B: mov     ecx, esi
0x9A883D: mov     [esi+1Ch], edx
0x9A8840: call    sub_9A85C0
0x9A8845: mov     dword ptr [esi+14h], 20000000h
0x9A884C: mov     edx, [edi]
0x9A884E: mov     eax, [edx+50h]
0x9A8851: push    esi
0x9A8852: mov     ecx, edi
0x9A8854: call    eax
0x9A8856: test    eax, eax
0x9A8858: mov     [edi+24h], eax
0x9A885B: jnz     short loc_9A886F
0x9A885D: mov     edx, [edi]
0x9A885F: mov     eax, [edx+4Ch]
0x9A8862: push    esi
0x9A8863: mov     ecx, edi
0x9A8865: call    eax
0x9A8867: mov     [edi+24h], eax
0x9A886A: pop     edi
0x9A886B: pop     esi
0x9A886C: retn    10h
0x9A886F: mov     edx, [esi]
0x9A8871: mov     eax, [edx]
0x9A8873: push    1
0x9A8875: mov     ecx, esi
0x9A8877: call    eax
0x9A8879: mov     eax, [edi+24h]
0x9A887C: pop     edi
0x9A887D: pop     esi
0x9A887E: retn    10h
