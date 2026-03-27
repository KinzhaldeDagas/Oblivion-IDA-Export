0x8C97B0: push    esi
0x8C97B1: push    edi
0x8C97B2: mov     edi, ecx
0x8C97B4: test    edi, edi
0x8C97B6: jz      short loc_8C97CB
0x8C97B8: mov     eax, [edi+8]
0x8C97BB: test    eax, eax
0x8C97BD: jz      short loc_8C97CB
0x8C97BF: mov     eax, [eax+10h]
0x8C97C2: test    eax, eax
0x8C97C4: jz      short loc_8C97CB
0x8C97C6: mov     eax, [eax+8]
0x8C97C9: jmp     short loc_8C97CD
0x8C97CB: xor     eax, eax
0x8C97CD: mov     esi, [esp+8+arg_0]
0x8C97D1: mov     edx, [esi]
0x8C97D3: push    eax
0x8C97D4: mov     eax, [edx+2Ch]
0x8C97D7: mov     ecx, esi
0x8C97D9: call    eax
0x8C97DB: push    esi
0x8C97DC: mov     ecx, edi
0x8C97DE: call    sub_8A2610
0x8C97E3: pop     edi
0x8C97E4: pop     esi
0x8C97E5: retn    4
