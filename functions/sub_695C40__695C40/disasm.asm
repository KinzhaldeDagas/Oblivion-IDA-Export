0x695C40: mov     eax, [esp+arg_4]
0x695C44: push    ebx
0x695C45: push    edi
0x695C46: mov     edi, ecx
0x695C48: mov     ecx, [esp+8+arg_0]
0x695C4C: push    eax; int
0x695C4D: push    ecx; int
0x695C4E: mov     ecx, edi; int
0x695C50: call    MobilObject_PostLinkModifiedForm
0x695C55: mov     ecx, edi; this
0x695C57: call    MobileObject_GetCharProxy
0x695C5C: mov     ebx, eax
0x695C5E: test    ebx, ebx
0x695C60: jz      loc_695D85
0x695C66: mov     ecx, [edi+68h]
0x695C69: test    ecx, ecx
0x695C6B: push    esi
0x695C6C: jz      short loc_695CE7
0x695C6E: mov     edx, [ecx]
0x695C70: mov     eax, [edx+20h]
0x695C73: call    eax
0x695C75: test    eax, eax
0x695C77: jz      short loc_695CE7
0x695C79: mov     ecx, [edi+68h]
0x695C7C: mov     edx, [ecx]
0x695C7E: mov     eax, [edx+20h]
0x695C81: call    eax
0x695C83: mov     esi, eax
0x695C85: mov     edx, [esi]
0x695C87: mov     eax, [edx+190h]
0x695C8D: mov     ecx, esi
0x695C8F: call    eax
0x695C91: neg     al
0x695C93: sbb     eax, eax
0x695C95: and     eax, esi
0x695C97: mov     ecx, eax
0x695C99: jz      short loc_695CAE
0x695C9B: lea     edx, [esp+0Ch+arg_4]
0x695C9F: push    edx
0x695CA0: call    sub_65ABE0
0x695CA5: movzx   esi, word ptr [eax+2]
0x695CA9: jmp     loc_695D44
0x695CAE: mov     eax, [esi]
0x695CB0: mov     edx, [eax+154h]
0x695CB6: mov     ecx, esi
0x695CB8: call    edx
0x695CBA: push    eax
0x695CBB: call    sub_480340
0x695CC0: add     esp, 4
0x695CC3: test    eax, eax
0x695CC5: jz      short loc_695CDE
0x695CC7: mov     ecx, [eax+10h]
0x695CCA: test    ecx, ecx
0x695CCC: jz      short loc_695CDE
0x695CCE: lea     eax, [esp+0Ch+arg_4]
0x695CD2: push    eax
0x695CD3: call    sub_497340
0x695CD8: movzx   esi, word ptr [eax+2]
0x695CDC: jmp     short loc_695D44
0x695CDE: call    sub_531D80
0x695CE3: mov     esi, eax
0x695CE5: jmp     short loc_695D44
0x695CE7: mov     edx, [edi]
0x695CE9: mov     eax, [edx+154h]
0x695CEF: mov     ecx, edi
0x695CF1: call    eax
0x695CF3: push    eax
0x695CF4: call    sub_480340
0x695CF9: add     esp, 4
0x695CFC: test    eax, eax
0x695CFE: jz      short loc_695D22
0x695D00: mov     eax, [eax+10h]
0x695D03: test    eax, eax
0x695D05: jz      short loc_695D22
0x695D07: mov     eax, [eax+8]
0x695D0A: test    eax, eax
0x695D0C: jz      short loc_695D1B
0x695D0E: add     eax, 14h
0x695D11: jz      short loc_695D1B
0x695D13: mov     esi, [eax+1Ch]
0x695D16: shr     esi, 10h
0x695D19: jmp     short loc_695D44
0x695D1B: xor     esi, esi
0x695D1D: shr     esi, 10h
0x695D20: jmp     short loc_695D44
0x695D22: mov     esi, ds:0B2EB3Ch
0x695D28: add     esi, 1
0x695D2B: and     esi, 0FFFFh
0x695D31: mov     ds:0B2EB3Ch, esi
0x695D37: jnz     short loc_695D44
0x695D39: mov     esi, 0Ah
0x695D3E: mov     ds:0B2EB3Ch, esi
0x695D44: lea     ecx, [esp+0Ch+arg_4]
0x695D48: push    ecx
0x695D49: mov     ecx, ebx
0x695D4B: call    sub_57E270
0x695D50: mov     eax, [esp+0Ch+arg_4]
0x695D54: mov     ecx, [ebx+364h]
0x695D5A: and     eax, 0FFC0h
0x695D5F: or      eax, 7
0x695D62: shl     esi, 10h
0x695D65: or      esi, eax
0x695D67: test    ecx, ecx
0x695D69: jz      short loc_695D84
0x695D6B: mov     eax, [ecx+8]
0x695D6E: test    eax, eax
0x695D70: jz      short loc_695D7A
0x695D72: add     eax, 14h
0x695D75: jz      short loc_695D7A
0x695D77: mov     [eax+1Ch], esi
0x695D7A: mov     edx, [ecx]
0x695D7C: mov     eax, [edx+80h]
0x695D82: call    eax
0x695D84: pop     esi
0x695D85: mov     ecx, [edi+68h]
0x695D88: test    ecx, ecx
0x695D8A: pop     edi
0x695D8B: pop     ebx
0x695D8C: jz      short loc_695D97
0x695D8E: mov     edx, [ecx]
0x695D90: mov     eax, [edx+20h]
0x695D93: call    eax
0x695D95: jmp     short loc_695D99
0x695D97: xor     eax, eax
0x695D99: cmp     eax, ds:0B333C4h
0x695D9F: jz      short locret_695DB3
0x695DA1: fld     dword ptr ds:0B38108h
0x695DA7: fadd    dword ptr ds:0B3C0D0h
0x695DAD: fstp    dword ptr ds:0B3C0D0h
0x695DB3: retn    8
