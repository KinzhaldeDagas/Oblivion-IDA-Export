0x802E00: push    0FFFFFFFFh
0x802E02: push    offset SEH_802E00
0x802E07: mov     eax, large fs:0
0x802E0D: push    eax
0x802E0E: push    ecx
0x802E0F: push    ebx
0x802E10: push    ebp
0x802E11: push    esi
0x802E12: push    edi
0x802E13: mov     eax, ds:0B30AACh
0x802E18: xor     eax, esp
0x802E1A: push    eax
0x802E1B: lea     eax, [esp+24h+var_C]
0x802E1F: mov     large fs:0, eax
0x802E25: mov     esi, ecx
0x802E27: mov     [esp+24h+var_10], esi
0x802E2B: xor     ebp, ebp
0x802E2D: mov     [esi], ebp
0x802E2F: mov     [esp+24h+var_4], ebp
0x802E33: mov     [esi+4], ebp
0x802E36: mov     [esi+8], ebp
0x802E39: lea     ecx, [esi+18h]
0x802E3C: mov     byte ptr [esp+24h+var_4], 2
0x802E41: call    sub_7B20B0
0x802E46: mov     ebx, [esp+24h+arg_0]
0x802E4A: mov     ax, [ebx+2Ch]
0x802E4E: mov     [esi+0Ch], ax
0x802E52: mov     edi, [esi+4]
0x802E55: cmp     edi, ebx
0x802E57: jz      short loc_802E86
0x802E59: cmp     edi, ebp
0x802E5B: jz      short loc_802E79
0x802E5D: lea     ecx, [edi+4]
0x802E60: push    ecx; lpAddend
0x802E61: call    dword ptr ds:0A2807Ch
0x802E67: test    eax, eax
0x802E69: jnz     short loc_802E79
0x802E6B: cmp     edi, ebp
0x802E6D: jz      short loc_802E79
0x802E6F: mov     edx, [edi]
0x802E71: mov     eax, [edx]
0x802E73: push    1
0x802E75: mov     ecx, edi
0x802E77: call    eax
0x802E79: lea     ecx, [ebx+4]
0x802E7C: push    ecx; lpAddend
0x802E7D: mov     [esi+4], ebx
0x802E80: call    dword ptr ds:0A28078h
0x802E86: mov     edx, [esp+24h+arg_4]
0x802E8A: movzx   eax, word ptr [esi+0Ch]
0x802E8E: mov     [esi+24h], edx
0x802E91: xor     ecx, ecx
0x802E93: mov     edx, 10h
0x802E98: mul     edx
0x802E9A: seto    cl
0x802E9D: neg     ecx
0x802E9F: or      ecx, eax
0x802EA1: push    ecx; Size
0x802EA2: call    FormHeapAlloc
0x802EA7: mov     [esi+10h], eax
0x802EAA: movzx   eax, word ptr [esi+0Ch]
0x802EAE: xor     ecx, ecx
0x802EB0: mov     edx, 4
0x802EB5: mul     edx
0x802EB7: seto    cl
0x802EBA: neg     ecx
0x802EBC: or      ecx, eax
0x802EBE: push    ecx; Size
0x802EBF: call    FormHeapAlloc
0x802EC4: fldz
0x802EC6: xor     ebp, ebp
0x802EC8: add     esp, 8
0x802ECB: xor     ecx, ecx
0x802ECD: cmp     [esi+0Ch], bp
0x802ED1: mov     [esi+14h], eax
0x802ED4: jbe     short loc_802F07
0x802ED6: xor     eax, eax
0x802ED8: mov     edx, [esi+10h]
0x802EDB: fst     dword ptr [eax+edx]
0x802EDE: mov     edx, [esi+10h]
0x802EE1: fst     dword ptr [eax+edx+4]
0x802EE5: mov     edx, [esi+10h]
0x802EE8: fst     dword ptr [eax+edx+8]
0x802EEC: mov     edx, [esi+10h]
0x802EEF: fst     dword ptr [eax+edx+0Ch]
0x802EF3: mov     edx, [esi+14h]
0x802EF6: mov     [edx+ecx*4], ebp
0x802EF9: movzx   edx, word ptr [esi+0Ch]
0x802EFD: add     ecx, 1
0x802F00: add     eax, 10h
0x802F03: cmp     ecx, edx
0x802F05: jl      short loc_802ED8
0x802F07: movzx   ecx, word ptr [esi+0Ch]
0x802F0B: xor     eax, eax
0x802F0D: cmp     cx, bp
0x802F10: mov     [esi+0Eh], cx
0x802F14: jbe     short loc_802F3A
0x802F16: xor     ecx, ecx
0x802F18: mov     edx, [esi+10h]
0x802F1B: fst     dword ptr [ecx+edx+8]
0x802F1F: mov     edx, [esi+10h]
0x802F22: fst     dword ptr [ecx+edx+0Ch]
0x802F26: mov     edx, [esi+14h]
0x802F29: mov     [edx+eax*4], ebp
0x802F2C: movzx   edx, word ptr [esi+0Eh]
0x802F30: add     eax, 1
0x802F33: add     ecx, 10h
0x802F36: cmp     eax, edx
0x802F38: jl      short loc_802F18
0x802F3A: mov     ecx, esi
0x802F3C: fstp    st
0x802F3E: mov     [esi+0Eh], bp
0x802F42: call    sub_802AE0
0x802F47: mov     edi, [esi]
0x802F49: cmp     edi, ebp
0x802F4B: jz      short loc_802F6B
0x802F4D: lea     eax, [edi+4]
0x802F50: push    eax; lpAddend
0x802F51: call    dword ptr ds:0A2807Ch
0x802F57: test    eax, eax
0x802F59: jnz     short loc_802F69
0x802F5B: cmp     edi, ebp
0x802F5D: jz      short loc_802F69
0x802F5F: mov     edx, [edi]
0x802F61: mov     eax, [edx]
0x802F63: push    1
0x802F65: mov     ecx, edi
0x802F67: call    eax
0x802F69: mov     [esi], ebp
0x802F6B: cmp     byte ptr [ebx+0Ch], 1
0x802F6F: mov     edi, [ebx+8]
0x802F72: push    0D4h ; 'Ô'; Size
0x802F77: jnz     short loc_802F98
0x802F79: call    FormHeapAlloc
0x802F7E: add     esp, 4
0x802F81: mov     [esp+24h+arg_4], eax
0x802F85: cmp     eax, ebp
0x802F87: mov     byte ptr [esp+24h+var_4], 3
0x802F8C: jz      short loc_802FB7
0x802F8E: push    edi
0x802F8F: mov     ecx, eax
0x802F91: call    sub_864430
0x802F96: jmp     short loc_802FB5
0x802F98: call    FormHeapAlloc
0x802F9D: add     esp, 4
0x802FA0: mov     [esp+24h+arg_4], eax
0x802FA4: cmp     eax, ebp
0x802FA6: mov     byte ptr [esp+24h+var_4], 4
0x802FAB: jz      short loc_802FB7
0x802FAD: push    edi
0x802FAE: mov     ecx, eax
0x802FB0: call    sub_8645D0
0x802FB5: mov     ebp, eax
0x802FB7: mov     edi, [esi]
0x802FB9: cmp     edi, ebp
0x802FBB: mov     byte ptr [esp+24h+var_4], 2
0x802FC0: jz      short loc_802FF2
0x802FC2: test    edi, edi
0x802FC4: jz      short loc_802FE2
0x802FC6: lea     ecx, [edi+4]
0x802FC9: push    ecx; lpAddend
0x802FCA: call    dword ptr ds:0A2807Ch
0x802FD0: test    eax, eax
0x802FD2: jnz     short loc_802FE2
0x802FD4: test    edi, edi
0x802FD6: jz      short loc_802FE2
0x802FD8: mov     edx, [edi]
0x802FDA: mov     eax, [edx]
0x802FDC: push    1
0x802FDE: mov     ecx, edi
0x802FE0: call    eax
0x802FE2: test    ebp, ebp
0x802FE4: mov     [esi], ebp
0x802FE6: jz      short loc_802FF2
0x802FE8: add     ebp, 4
0x802FEB: push    ebp; lpAddend
0x802FEC: call    dword ptr ds:0A28078h
0x802FF2: cmp     dword ptr ds:0B42F48h, 2
0x802FF9: jge     short loc_803000
0x802FFB: mov     eax, [ebx+20h]
0x802FFE: jmp     short loc_803003
0x803000: mov     eax, [ebx+1Ch]
0x803003: test    eax, eax
0x803005: jz      short loc_80300F
0x803007: mov     ecx, [esi]; this
0x803009: push    eax; a2
0x80300A: call    sub_405680
0x80300F: mov     eax, [ebx+24h]
0x803012: test    eax, eax
0x803014: jz      short loc_80301E
0x803016: mov     ecx, [esi]; this
0x803018: push    eax; a2
0x803019: call    sub_405680
0x80301E: push    0ACh ; '¬'; Size
0x803023: call    FormHeapAlloc
0x803028: add     esp, 4
0x80302B: mov     [esp+24h+arg_4], eax
0x80302F: test    eax, eax
0x803031: mov     byte ptr [esp+24h+var_4], 5
0x803036: jz      short loc_803043
0x803038: mov     ecx, eax
0x80303A: call    sub_7B22C0
0x80303F: mov     edi, eax
0x803041: jmp     short loc_803045
0x803043: xor     edi, edi
0x803045: mov     ebp, [edi+0A0h]
0x80304B: cmp     ebp, [ebx+18h]
0x80304E: mov     byte ptr [esp+24h+var_4], 2
0x803053: jz      short loc_80308D
0x803055: test    ebp, ebp
0x803057: jz      short loc_803076
0x803059: lea     ecx, [ebp+4]
0x80305C: push    ecx; lpAddend
0x80305D: call    dword ptr ds:0A2807Ch
0x803063: test    eax, eax
0x803065: jnz     short loc_803076
0x803067: test    ebp, ebp
0x803069: jz      short loc_803076
0x80306B: mov     edx, [ebp+0]
0x80306E: mov     eax, [edx]
0x803070: push    1
0x803072: mov     ecx, ebp
0x803074: call    eax
0x803076: mov     eax, [ebx+18h]
0x803079: test    eax, eax
0x80307B: mov     [edi+0A0h], eax
0x803081: jz      short loc_80308D
0x803083: add     eax, 4
0x803086: push    eax; lpAddend
0x803087: call    dword ptr ds:0A28078h
0x80308D: cmp     byte ptr [esp+24h+arg_8], 0
0x803092: mov     [edi+9Ch], esi
0x803098: jz      short loc_8030A0
0x80309A: or      dword ptr [edi+1Ch], 4
0x80309E: jmp     short loc_8030A4
0x8030A0: and     dword ptr [edi+1Ch], 0FFFFFFFBh
0x8030A4: xor     eax, eax
0x8030A6: mov     [edi+24h], eax
0x8030A9: cmp     [ebx+30h], al
0x8030AC: jz      short loc_8030B7
0x8030AE: or      dword ptr [edi+1Ch], 2000h
0x8030B5: jmp     short loc_8030BE
0x8030B7: and     dword ptr [edi+1Ch], 0FFFFDFFFh
0x8030BE: mov     [edi+24h], eax
0x8030C1: mov     ecx, [esi]; this
0x8030C3: push    edi; a2
0x8030C4: call    sub_405680
0x8030C9: mov     ebp, [esi+8]
0x8030CC: cmp     ebp, edi
0x8030CE: jz      short loc_8030FE
0x8030D0: test    ebp, ebp
0x8030D2: jz      short loc_8030F1
0x8030D4: lea     ecx, [ebp+4]
0x8030D7: push    ecx; lpAddend
0x8030D8: call    dword ptr ds:0A2807Ch
0x8030DE: test    eax, eax
0x8030E0: jnz     short loc_8030F1
0x8030E2: test    ebp, ebp
0x8030E4: jz      short loc_8030F1
0x8030E6: mov     edx, [ebp+0]
0x8030E9: mov     eax, [edx]
0x8030EB: push    1
0x8030ED: mov     ecx, ebp
0x8030EF: call    eax
0x8030F1: mov     [esi+8], edi
0x8030F4: add     edi, 4
0x8030F7: push    edi; lpAddend
0x8030F8: call    dword ptr ds:0A28078h
0x8030FE: push    3; a1
0x803100: call    GetShaderDefinition
0x803105: mov     ebx, eax
0x803107: mov     eax, [esi]
0x803109: mov     ebp, [ebx+4]
0x80310C: mov     edi, [eax+0BCh]
0x803112: add     esp, 4
0x803115: cmp     edi, ebp
0x803117: mov     [esp+24h+arg_8], eax
0x80311B: jz      short loc_803155
0x80311D: test    edi, edi
0x80311F: jz      short loc_80313D
0x803121: lea     ecx, [edi+4]
0x803124: push    ecx; lpAddend
0x803125: call    dword ptr ds:0A2807Ch
0x80312B: test    eax, eax
0x80312D: jnz     short loc_80313D
0x80312F: test    edi, edi
0x803131: jz      short loc_80313D
0x803133: mov     edx, [edi]
0x803135: mov     eax, [edx]
0x803137: push    1
0x803139: mov     ecx, edi
0x80313B: call    eax
0x80313D: test    ebp, ebp
0x80313F: mov     ecx, [esp+24h+arg_8]
0x803143: mov     [ecx+0BCh], ebp
0x803149: jz      short loc_803155
0x80314B: add     ebp, 4
0x80314E: push    ebp; lpAddend
0x80314F: call    dword ptr ds:0A28078h
0x803155: mov     ecx, [ebx+4]
0x803158: mov     eax, [esi]
0x80315A: mov     edx, [ecx]
0x80315C: push    eax
0x80315D: mov     eax, [edx+18h]
0x803160: call    eax
0x803162: mov     eax, [esi]
0x803164: mov     eax, [eax+0B4h]
0x80316A: test    eax, eax
0x80316C: jz      short loc_803174
0x80316E: cmp     dword ptr [eax+34h], 0
0x803172: jnz     short loc_8031ED
0x803174: mov     ebx, [esp+24h+arg_0]
0x803178: mov     ebp, [ebx+14h]
0x80317B: imul    ebp, [ebx+2Ch]
0x80317F: push    2Ch ; ','; Size
0x803181: call    FormHeapAlloc
0x803186: add     esp, 4
0x803189: mov     [esp+24h+arg_8], eax
0x80318D: test    eax, eax
0x80318F: mov     byte ptr [esp+24h+var_4], 6
0x803194: jz      short loc_8031A4
0x803196: push    1
0x803198: push    ebp
0x803199: mov     ecx, eax
0x80319B: call    sub_7E3AE0
0x8031A0: mov     edi, eax
0x8031A2: jmp     short loc_8031A6
0x8031A4: xor     edi, edi
0x8031A6: push    1
0x8031A8: mov     ecx, edi
0x8031AA: mov     byte ptr [esp+28h+var_4], 2
0x8031AF: call    sub_7263B0
0x8031B4: mov     edx, [ebx+10h]
0x8031B7: push    0; char
0x8031B9: lea     ecx, ds:0[ebp*4]
0x8031C0: push    ecx; Src
0x8031C1: push    edx; char
0x8031C2: push    0; int
0x8031C4: mov     ecx, edi
0x8031C6: call    sub_7260B0
0x8031CB: push    4
0x8031CD: push    4
0x8031CF: push    ebp
0x8031D0: push    1
0x8031D2: push    0
0x8031D4: push    0
0x8031D6: push    0
0x8031D8: mov     ecx, edi
0x8031DA: call    sub_7262A0
0x8031DF: mov     eax, [esi]
0x8031E1: mov     ecx, [eax+0B4h]
0x8031E7: push    edi
0x8031E8: call    sub_6C61E0
0x8031ED: mov     eax, esi
0x8031EF: mov     ecx, [esp+24h+var_C]
0x8031F3: mov     large fs:0, ecx
0x8031FA: pop     ecx
0x8031FB: pop     edi
0x8031FC: pop     esi
0x8031FD: pop     ebp
0x8031FE: pop     ebx
0x8031FF: add     esp, 10h
0x803202: retn    0Ch
