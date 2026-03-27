0x69CFB0: mov     eax, [esp+arg_4]
0x69CFB4: push    ebx
0x69CFB5: push    edi
0x69CFB6: mov     edi, ecx
0x69CFB8: mov     ecx, [esp+8+arg_0]
0x69CFBC: push    eax; int
0x69CFBD: push    ecx; int
0x69CFBE: mov     ecx, edi; int
0x69CFC0: call    MobilObject_PostLinkModifiedForm
0x69CFC5: mov     ecx, edi; this
0x69CFC7: call    MobileObject_GetCharProxy
0x69CFCC: mov     ebx, eax
0x69CFCE: test    ebx, ebx
0x69CFD0: jz      loc_69D100
0x69CFD6: mov     ecx, [edi+68h]
0x69CFD9: test    ecx, ecx
0x69CFDB: push    esi
0x69CFDC: jz      loc_69D062
0x69CFE2: mov     edx, [ecx]
0x69CFE4: mov     eax, [edx+20h]
0x69CFE7: call    eax
0x69CFE9: test    eax, eax
0x69CFEB: jz      short loc_69D062
0x69CFED: mov     ecx, [edi+68h]
0x69CFF0: mov     edx, [ecx]
0x69CFF2: mov     eax, [edx+20h]
0x69CFF5: call    eax
0x69CFF7: push    0; int
0x69CFF9: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x69CFFE: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x69D003: mov     esi, eax
0x69D005: push    0; int
0x69D007: push    esi; void *
0x69D008: call    OblivionDynamicCast
0x69D00D: add     esp, 14h
0x69D010: test    eax, eax
0x69D012: jz      short loc_69D029
0x69D014: lea     ecx, [esp+0Ch+arg_4]
0x69D018: push    ecx
0x69D019: mov     ecx, eax
0x69D01B: call    sub_65ABE0
0x69D020: movzx   esi, word ptr [eax+2]
0x69D024: jmp     loc_69D0BF
0x69D029: mov     edx, [esi]
0x69D02B: mov     eax, [edx+154h]
0x69D031: mov     ecx, esi
0x69D033: call    eax
0x69D035: push    eax
0x69D036: call    sub_480340
0x69D03B: add     esp, 4
0x69D03E: test    eax, eax
0x69D040: jz      short loc_69D059
0x69D042: mov     ecx, [eax+10h]
0x69D045: test    ecx, ecx
0x69D047: jz      short loc_69D059
0x69D049: lea     edx, [esp+0Ch+arg_4]
0x69D04D: push    edx
0x69D04E: call    sub_497340
0x69D053: movzx   esi, word ptr [eax+2]
0x69D057: jmp     short loc_69D0BF
0x69D059: call    sub_531D80
0x69D05E: mov     esi, eax
0x69D060: jmp     short loc_69D0BF
0x69D062: mov     eax, [edi]
0x69D064: mov     edx, [eax+154h]
0x69D06A: mov     ecx, edi
0x69D06C: call    edx
0x69D06E: push    eax
0x69D06F: call    sub_480340
0x69D074: add     esp, 4
0x69D077: test    eax, eax
0x69D079: jz      short loc_69D09D
0x69D07B: mov     eax, [eax+10h]
0x69D07E: test    eax, eax
0x69D080: jz      short loc_69D09D
0x69D082: mov     eax, [eax+8]
0x69D085: test    eax, eax
0x69D087: jz      short loc_69D096
0x69D089: add     eax, 14h
0x69D08C: jz      short loc_69D096
0x69D08E: mov     esi, [eax+1Ch]
0x69D091: shr     esi, 10h
0x69D094: jmp     short loc_69D0BF
0x69D096: xor     esi, esi
0x69D098: shr     esi, 10h
0x69D09B: jmp     short loc_69D0BF
0x69D09D: mov     esi, ds:0B2EB3Ch
0x69D0A3: add     esi, 1
0x69D0A6: and     esi, 0FFFFh
0x69D0AC: mov     ds:0B2EB3Ch, esi
0x69D0B2: jnz     short loc_69D0BF
0x69D0B4: mov     esi, 0Ah
0x69D0B9: mov     ds:0B2EB3Ch, esi
0x69D0BF: lea     eax, [esp+0Ch+arg_4]
0x69D0C3: push    eax
0x69D0C4: mov     ecx, ebx
0x69D0C6: call    sub_57E270
0x69D0CB: mov     eax, [esp+0Ch+arg_4]
0x69D0CF: mov     ecx, [ebx+364h]
0x69D0D5: and     eax, 0FFC0h
0x69D0DA: or      eax, 7
0x69D0DD: shl     esi, 10h
0x69D0E0: or      esi, eax
0x69D0E2: test    ecx, ecx
0x69D0E4: jz      short loc_69D0FF
0x69D0E6: mov     eax, [ecx+8]
0x69D0E9: test    eax, eax
0x69D0EB: jz      short loc_69D0F5
0x69D0ED: add     eax, 14h
0x69D0F0: jz      short loc_69D0F5
0x69D0F2: mov     [eax+1Ch], esi
0x69D0F5: mov     edx, [ecx]
0x69D0F7: mov     eax, [edx+80h]
0x69D0FD: call    eax
0x69D0FF: pop     esi
0x69D100: mov     ecx, [edi+68h]
0x69D103: test    ecx, ecx
0x69D105: pop     edi
0x69D106: pop     ebx
0x69D107: jz      short loc_69D112
0x69D109: mov     edx, [ecx]
0x69D10B: mov     eax, [edx+20h]
0x69D10E: call    eax
0x69D110: jmp     short loc_69D114
0x69D112: xor     eax, eax
0x69D114: cmp     eax, ds:0B333C4h
0x69D11A: jz      short locret_69D12E
0x69D11C: fld     dword ptr ds:0B38118h
0x69D122: fadd    dword ptr ds:0B3C0D0h
0x69D128: fstp    dword ptr ds:0B3C0D0h
0x69D12E: retn    8
