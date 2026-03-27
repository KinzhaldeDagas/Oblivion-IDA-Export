0x737B60: push    0FFFFFFFFh
0x737B62: push    offset SEH_737B60
0x737B67: mov     eax, large fs:0
0x737B6D: push    eax
0x737B6E: sub     esp, 474h
0x737B74: push    ebx
0x737B75: push    ebp
0x737B76: push    esi
0x737B77: push    edi
0x737B78: mov     eax, ds:0B30AACh
0x737B7D: xor     eax, esp
0x737B7F: push    eax
0x737B80: lea     eax, [esp+494h+var_C]
0x737B87: mov     large fs:0, eax
0x737B8D: mov     ebp, ecx
0x737B8F: lea     ecx, [esp+494h+var_450]
0x737B93: call    InitSurfacEData
0x737B98: lea     ebx, [ebp+80h]
0x737B9E: push    ebx; lpCriticalSection
0x737B9F: mov     [esp+498h+lpCriticalSection], ebx
0x737BA3: call    dword ptr ds:0A2806Ch
0x737BA9: call    dword ptr ds:0A2808Ch
0x737BAF: mov     esi, [esp+494h+arg_0]
0x737BB6: lea     ecx, [esp+494h+var_45C]
0x737BBA: push    ecx
0x737BBB: lea     edx, [esp+498h+var_465]
0x737BBF: push    edx
0x737BC0: lea     ecx, [esp+49Ch+var_450]
0x737BC4: push    ecx
0x737BC5: lea     edx, [esp+4A0h+var_454]
0x737BC9: push    edx
0x737BCA: mov     edi, 1
0x737BCF: add     [ebx+7Ch], edi
0x737BD2: lea     ecx, [esp+4A4h+var_458]
0x737BD6: mov     [ebx+78h], eax
0x737BD9: mov     eax, [ebp+0]
0x737BDC: mov     edx, [eax+0Ch]
0x737BDF: push    ecx
0x737BE0: push    esi
0x737BE1: mov     ecx, ebp
0x737BE3: call    edx
0x737BE5: test    al, al
0x737BE7: jnz     short loc_737C04
0x737BE9: add     dword ptr [ebx+7Ch], 0FFFFFFFFh
0x737BED: jnz     short loc_737BF6
0x737BEF: mov     dword ptr [ebx+78h], 0
0x737BF6: push    ebx; lpCriticalSection
0x737BF7: call    dword ptr ds:0A28074h
0x737BFD: xor     eax, eax
0x737BFF: jmp     loc_737F6B
0x737C04: mov     ebx, [esp+494h+arg_4]
0x737C0B: test    ebx, ebx
0x737C0D: jz      short loc_737C42
0x737C0F: mov     eax, [ebx+54h]
0x737C12: mov     eax, [eax]
0x737C14: cmp     eax, [ebp+100h]
0x737C1A: jnz     short loc_737C42
0x737C1C: mov     ecx, [ebx+58h]
0x737C1F: mov     eax, [ecx]
0x737C21: cmp     eax, [ebp+104h]
0x737C27: jnz     short loc_737C42
0x737C29: lea     edx, [ebp+108h]
0x737C2F: push    edx
0x737C30: lea     ecx, [ebx+8]
0x737C33: call    sub_71AD40
0x737C38: test    al, al
0x737C3A: jz      short loc_737C42
0x737C3C: mov     [esp+494h+var_478], ebx
0x737C40: jmp     short loc_737C92
0x737C42: push    70h ; 'p'; Size
0x737C44: call    FormHeapAlloc
0x737C49: add     esp, 4
0x737C4C: mov     [esp+494h+var_47C], eax
0x737C50: test    eax, eax
0x737C52: mov     [esp+494h+var_4], 0
0x737C5D: jz      short loc_737C7F
0x737C5F: mov     edx, [ebp+104h]
0x737C65: push    edi
0x737C66: push    edi
0x737C67: lea     ecx, [ebp+108h]
0x737C6D: push    ecx
0x737C6E: mov     ecx, [ebp+100h]
0x737C74: push    edx
0x737C75: push    ecx
0x737C76: mov     ecx, eax
0x737C78: call    NiPixelData__NiPixelData
0x737C7D: jmp     short loc_737C81
0x737C7F: xor     eax, eax
0x737C81: mov     [esp+494h+var_4], 0FFFFFFFFh
0x737C8C: mov     [esp+494h+var_478], eax
0x737C90: mov     ebx, eax
0x737C92: lea     ecx, [ebp+108h]
0x737C98: push    offset unk_B25D70
0x737C9D: call    sub_71AD40
0x737CA2: test    al, al
0x737CA4: jz      loc_737D88
0x737CAA: mov     eax, [ebp+150h]
0x737CB0: mov     ecx, [esi+4]
0x737CB3: push    edi
0x737CB4: add     eax, eax
0x737CB6: lea     edx, [esp+498h+var_474]
0x737CBA: push    edx
0x737CBB: add     eax, eax
0x737CBD: push    eax
0x737CBE: lea     eax, [esp+4A0h+Src]
0x737CC5: push    eax
0x737CC6: push    esi
0x737CC7: mov     [esp+4A8h+var_474], edi
0x737CCB: call    ecx
0x737CCD: mov     ecx, [ebp+150h]
0x737CD3: add     esp, 14h
0x737CD6: test    ecx, ecx
0x737CD8: jbe     short loc_737CFE
0x737CDA: lea     eax, [esp+494h+var_40A]
0x737CE1: mov     edi, ecx
0x737CE3: mov     cl, [eax-2]
0x737CE6: mov     dl, [eax]
0x737CE8: mov     [eax-2], dl
0x737CEB: mov     [eax], cl
0x737CED: mov     byte ptr [eax+1], 0FFh
0x737CF1: add     eax, 4
0x737CF4: sub     edi, 1
0x737CF7: jnz     short loc_737CE3
0x737CF9: mov     edi, 1
0x737CFE: push    24h ; '$'; Size
0x737D00: call    FormHeapAlloc
0x737D05: add     esp, 4
0x737D08: mov     [esp+494h+var_47C], eax
0x737D0C: test    eax, eax
0x737D0E: mov     [esp+494h+var_4], edi
0x737D15: jz      short loc_737D33
0x737D17: lea     ecx, [esp+494h+Src]
0x737D1E: push    ecx; Src
0x737D1F: push    100h; int
0x737D24: push    0; char
0x737D26: mov     ecx, eax
0x737D28: call    sub_732750
0x737D2D: mov     [esp+494h+var_480], eax
0x737D31: jmp     short loc_737D3F
0x737D33: mov     [esp+494h+var_480], 0
0x737D3B: mov     eax, [esp+494h+var_480]
0x737D3F: mov     edi, [ebx+4Ch]
0x737D42: cmp     edi, eax
0x737D44: mov     [esp+494h+var_4], 0FFFFFFFFh
0x737D4F: jz      short loc_737DA3
0x737D51: test    edi, edi
0x737D53: jz      short loc_737D75
0x737D55: lea     edx, [edi+4]
0x737D58: push    edx; lpAddend
0x737D59: call    dword ptr ds:0A2807Ch
0x737D5F: test    eax, eax
0x737D61: jnz     short loc_737D71
0x737D63: test    edi, edi
0x737D65: jz      short loc_737D71
0x737D67: mov     eax, [edi]
0x737D69: mov     edx, [eax]
0x737D6B: push    1
0x737D6D: mov     ecx, edi
0x737D6F: call    edx
0x737D71: mov     eax, [esp+494h+var_480]
0x737D75: test    eax, eax
0x737D77: mov     [ebx+4Ch], eax
0x737D7A: jz      short loc_737DA3
0x737D7C: add     eax, 4
0x737D7F: push    eax; lpAddend
0x737D80: call    dword ptr ds:0A28078h
0x737D86: jmp     short loc_737DA3
0x737D88: mov     edx, [ebp+150h]
0x737D8E: mov     ecx, ds:0A853D4h
0x737D94: mov     eax, [esi]
0x737D96: mov     eax, [eax+0Ch]
0x737D99: add     edx, edx
0x737D9B: push    ecx
0x737D9C: add     edx, edx
0x737D9E: push    edx
0x737D9F: mov     ecx, esi
0x737DA1: call    eax
0x737DA3: mov     ecx, [ebp+150h]
0x737DA9: mov     eax, [ebp+154h]
0x737DAF: add     ecx, ecx
0x737DB1: add     ecx, ecx
0x737DB3: sub     eax, ecx
0x737DB5: sub     eax, 36h ; '6'
0x737DB8: test    eax, eax
0x737DBA: jle     short loc_737DCD
0x737DBC: mov     ecx, ds:0A853D4h
0x737DC2: mov     edx, [esi]
0x737DC4: mov     edx, [edx+0Ch]
0x737DC7: push    ecx
0x737DC8: push    eax
0x737DC9: mov     ecx, esi
0x737DCB: call    edx
0x737DCD: movzx   edx, word ptr [ebp+14Ch]
0x737DD4: mov     edi, [ebx+54h]
0x737DD7: mov     ecx, [ebp+104h]
0x737DDD: mov     edi, [edi]
0x737DDF: imul    edi, [ebx+64h]
0x737DE3: movzx   eax, dx
0x737DE6: imul    eax, [ebp+100h]
0x737DED: add     eax, 1Fh
0x737DF0: shr     eax, 3
0x737DF3: and     eax, 1FFFFFFCh
0x737DF8: imul    eax, ecx
0x737DFB: cmp     dx, 4
0x737DFF: jnz     loc_737F87
0x737E05: mov     ecx, [ebp+100h]
0x737E0B: mov     eax, ecx
0x737E0D: shr     eax, 1
0x737E0F: and     ecx, 1
0x737E12: add     eax, ecx
0x737E14: mov     edx, eax
0x737E16: and     edx, 3
0x737E19: mov     [esp+494h+var_47C], eax
0x737E1D: jz      short loc_737E28
0x737E1F: mov     ecx, 4
0x737E24: sub     ecx, edx
0x737E26: jmp     short loc_737E2A
0x737E28: xor     ecx, ecx
0x737E2A: add     eax, ecx
0x737E2C: push    eax; Size
0x737E2D: mov     [esp+498h+var_470], eax
0x737E31: call    FormHeapAlloc
0x737E36: add     esp, 4
0x737E39: cmp     byte ptr [ebp+158h], 0
0x737E40: mov     [esp+494h+var_480], eax
0x737E44: jz      short loc_737E61
0x737E46: mov     eax, [ebx+58h]
0x737E49: mov     ebx, [eax]
0x737E4B: mov     eax, [esp+494h+var_478]
0x737E4F: mov     ecx, [eax+5Ch]
0x737E52: sub     ebx, 1
0x737E55: imul    ebx, edi
0x737E58: add     ebx, [ecx]
0x737E5A: add     ebx, [eax+50h]
0x737E5D: neg     edi
0x737E5F: jmp     short loc_737E6D
0x737E61: mov     edx, [ebx+5Ch]
0x737E64: mov     ebx, [edx]
0x737E66: mov     eax, [esp+494h+var_478]
0x737E6A: add     ebx, [eax+50h]
0x737E6D: cmp     dword ptr [ebp+104h], 0
0x737E74: mov     [esp+494h+var_474], edi
0x737E78: mov     [esp+494h+var_46C], 0
0x737E80: jbe     short loc_737EE7
0x737E82: mov     edx, [esp+494h+var_470]
0x737E86: mov     eax, [esp+494h+var_480]
0x737E8A: push    1
0x737E8C: lea     ecx, [esp+498h+var_464]
0x737E90: push    ecx
0x737E91: mov     ecx, [esi+4]
0x737E94: push    edx
0x737E95: push    eax
0x737E96: push    esi
0x737E97: mov     [esp+4A8h+var_464], 1
0x737E9F: call    ecx
0x737EA1: mov     edi, [esp+4A8h+var_47C]
0x737EA5: mov     ecx, [esp+4A8h+var_480]
0x737EA9: add     esp, 14h
0x737EAC: test    edi, edi
0x737EAE: mov     eax, ebx
0x737EB0: jbe     short loc_737ED0
0x737EB2: movzx   edx, byte ptr [ecx]
0x737EB5: shr     dl, 4
0x737EB8: mov     [eax], dl
0x737EBA: movzx   edx, byte ptr [ecx]
0x737EBD: add     eax, 1
0x737EC0: and     dl, 0Fh
0x737EC3: mov     [eax], dl
0x737EC5: add     eax, 1
0x737EC8: add     ecx, 1
0x737ECB: sub     edi, 1
0x737ECE: jnz     short loc_737EB2
0x737ED0: mov     eax, [esp+494h+var_46C]
0x737ED4: add     ebx, [esp+494h+var_474]
0x737ED8: add     eax, 1
0x737EDB: cmp     eax, [ebp+104h]
0x737EE1: mov     [esp+494h+var_46C], eax
0x737EE5: jb      short loc_737E82
0x737EE7: mov     eax, [esp+494h+var_480]
0x737EEB: push    eax
0x737EEC: call    FormHeapFree
0x737EF1: add     esp, 4
0x737EF4: mov     ebx, [esp+494h+var_478]
0x737EF8: lea     esi, [ebp+108h]
0x737EFE: push    offset unk_B25E48
0x737F03: mov     ecx, esi
0x737F05: call    sub_71AD40
0x737F0A: test    al, al
0x737F0C: jnz     short loc_737F1E
0x737F0E: push    offset unk_B25E00
0x737F13: mov     ecx, esi
0x737F15: call    sub_71AD40
0x737F1A: test    al, al
0x737F1C: jz      short loc_737F51
0x737F1E: mov     ecx, [ebp+104h]
0x737F24: imul    ecx, [ebp+100h]
0x737F2B: mov     edx, [ebx+5Ch]
0x737F2E: mov     eax, [edx]
0x737F30: add     eax, [ebx+50h]
0x737F33: test    ecx, ecx
0x737F35: mov     esi, [ebx+64h]
0x737F38: jbe     short loc_737F51
0x737F3A: mov     edi, ecx
0x737F3C: lea     esp, [esp+0]
0x737F40: mov     cl, [eax]
0x737F42: mov     dl, [eax+2]
0x737F45: mov     [eax], dl
0x737F47: mov     [eax+2], cl
0x737F4A: add     eax, esi
0x737F4C: sub     edi, 1
0x737F4F: jnz     short loc_737F40
0x737F51: mov     eax, [esp+494h+lpCriticalSection]
0x737F55: add     dword ptr [eax+7Ch], 0FFFFFFFFh
0x737F59: jnz     short loc_737F62
0x737F5B: mov     dword ptr [eax+78h], 0
0x737F62: push    eax; lpCriticalSection
0x737F63: call    dword ptr ds:0A28074h
0x737F69: mov     eax, ebx
0x737F6B: mov     ecx, dword ptr [esp+494h+var_C]
0x737F72: mov     large fs:0, ecx
0x737F79: pop     ecx
0x737F7A: pop     edi
0x737F7B: pop     esi
0x737F7C: pop     ebp
0x737F7D: pop     ebx
0x737F7E: add     esp, 480h
0x737F84: retn    8
0x737F87: cmp     byte ptr [ebp+158h], 0
0x737F8E: jz      loc_738064
0x737F94: mov     eax, [esp+494h+var_478]
0x737F98: mov     edx, [eax+5Ch]
0x737F9B: lea     ebx, [ecx-1]
0x737F9E: imul    ebx, edi
0x737FA1: add     ebx, [edx]
0x737FA3: mov     [esp+494h+var_480], 0
0x737FAB: add     ebx, [eax+50h]
0x737FAE: mov     eax, edi
0x737FB0: and     eax, 3
0x737FB3: jz      short loc_738023
0x737FB5: mov     edx, 4
0x737FBA: sub     edx, eax
0x737FBC: test    ecx, ecx
0x737FBE: mov     [esp+494h+var_470], edx
0x737FC2: jbe     loc_737EF4
0x737FC8: jmp     short loc_737FD0
0x737FCA: align 10h
0x737FD0: mov     ecx, [esi+4]
0x737FD3: push    1
0x737FD5: lea     eax, [esp+498h+var_47C]
0x737FD9: push    eax
0x737FDA: push    edi
0x737FDB: push    ebx
0x737FDC: push    esi
0x737FDD: mov     [esp+4A8h+var_47C], 1
0x737FE5: call    ecx
0x737FE7: mov     eax, [esp+4A8h+var_470]
0x737FEB: push    1
0x737FED: lea     edx, [esp+4ACh+var_47C]
0x737FF1: push    edx
0x737FF2: mov     edx, [esi+4]
0x737FF5: push    eax
0x737FF6: lea     ecx, [esp+4B4h+var_464]
0x737FFA: push    ecx
0x737FFB: push    esi
0x737FFC: mov     [esp+4BCh+var_47C], 1
0x738004: call    edx
0x738006: mov     eax, [esp+4BCh+var_480]
0x73800A: add     eax, 1
0x73800D: add     esp, 28h
0x738010: sub     ebx, edi
0x738012: cmp     eax, [ebp+104h]
0x738018: mov     [esp+494h+var_480], eax
0x73801C: jb      short loc_737FD0
0x73801E: jmp     loc_737EF4
0x738023: test    ecx, ecx
0x738025: jbe     loc_737EF4
0x73802B: jmp     short loc_738030
0x73802D: align 10h
0x738030: mov     ecx, [esi+4]
0x738033: push    1
0x738035: lea     eax, [esp+498h+var_47C]
0x738039: push    eax
0x73803A: push    edi
0x73803B: push    ebx
0x73803C: push    esi
0x73803D: mov     [esp+4A8h+var_47C], 1
0x738045: call    ecx
0x738047: mov     eax, [esp+4A8h+var_480]
0x73804B: add     eax, 1
0x73804E: add     esp, 14h
0x738051: sub     ebx, edi
0x738053: cmp     eax, [ebp+104h]
0x738059: mov     [esp+494h+var_480], eax
0x73805D: jb      short loc_738030
0x73805F: jmp     loc_737EF4
0x738064: mov     edx, edi
0x738066: and     edx, 3
0x738069: jz      short loc_7380E5
0x73806B: mov     eax, 4
0x738070: sub     eax, edx
0x738072: mov     edx, [ebx+5Ch]
0x738075: mov     ebx, [edx]
0x738077: mov     [esp+494h+var_470], eax
0x73807B: mov     eax, [esp+494h+var_478]
0x73807F: add     ebx, [eax+50h]
0x738082: test    ecx, ecx
0x738084: mov     [esp+494h+var_474], 0
0x73808C: jbe     loc_737EF4
0x738092: mov     edx, [esi+4]
0x738095: push    1
0x738097: lea     ecx, [esp+498h+var_47C]
0x73809B: push    ecx
0x73809C: push    edi
0x73809D: push    ebx
0x73809E: push    esi
0x73809F: mov     [esp+4A8h+var_47C], 1
0x7380A7: call    edx
0x7380A9: mov     ecx, [esp+4A8h+var_470]
0x7380AD: push    1
0x7380AF: lea     eax, [esp+4ACh+var_47C]
0x7380B3: push    eax
0x7380B4: mov     eax, [esi+4]
0x7380B7: push    ecx
0x7380B8: lea     edx, [esp+4B4h+var_464]
0x7380BC: push    edx
0x7380BD: push    esi
0x7380BE: mov     [esp+4BCh+var_47C], 1
0x7380C6: call    eax
0x7380C8: mov     eax, [esp+4BCh+var_474]
0x7380CC: add     eax, 1
0x7380CF: add     esp, 28h
0x7380D2: add     ebx, edi
0x7380D4: cmp     eax, [ebp+104h]
0x7380DA: mov     [esp+494h+var_474], eax
0x7380DE: jb      short loc_738092
0x7380E0: jmp     loc_737EF4
0x7380E5: mov     edx, [ebx+5Ch]
0x7380E8: push    1
0x7380EA: lea     ecx, [esp+498h+var_46C]
0x7380EE: push    ecx
0x7380EF: mov     ecx, [esi+4]
0x7380F2: push    eax
0x7380F3: mov     eax, [edx]
0x7380F5: add     eax, [ebx+50h]
0x7380F8: mov     [esp+4A0h+var_46C], 1
0x738100: push    eax
0x738101: push    esi
0x738102: call    ecx
0x738104: add     esp, 14h
0x738107: jmp     loc_737EF8
