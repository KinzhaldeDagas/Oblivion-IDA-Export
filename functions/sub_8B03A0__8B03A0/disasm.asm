0x8B03A0: push    esi
0x8B03A1: push    edi
0x8B03A2: mov     edi, ecx
0x8B03A4: test    edi, edi
0x8B03A6: jz      short loc_8B03B4
0x8B03A8: mov     eax, [edi+8]
0x8B03AB: test    eax, eax
0x8B03AD: jz      short loc_8B03B4
0x8B03AF: mov     eax, [eax+0Ch]
0x8B03B2: jmp     short loc_8B03B6
0x8B03B4: xor     eax, eax
0x8B03B6: test    eax, eax
0x8B03B8: mov     esi, [esp+8+arg_0]
0x8B03BC: jz      short loc_8B03CF
0x8B03BE: mov     eax, [eax+8]
0x8B03C1: test    eax, eax
0x8B03C3: jz      short loc_8B03CF
0x8B03C5: mov     edx, [esi]
0x8B03C7: push    eax
0x8B03C8: mov     eax, [edx+2Ch]
0x8B03CB: mov     ecx, esi
0x8B03CD: call    eax
0x8B03CF: push    esi
0x8B03D0: mov     ecx, edi
0x8B03D2: call    sub_8A2610
0x8B03D7: pop     edi
0x8B03D8: pop     esi
0x8B03D9: retn    4
