0x578960: push    0FFFFFFFFh
0x578962: push    offset SEH_578960
0x578967: mov     eax, large fs:0
0x57896D: push    eax
0x57896E: sub     esp, 48h
0x578971: push    ebx
0x578972: push    ebp
0x578973: push    esi
0x578974: push    edi
0x578975: mov     eax, ds:0B30AACh
0x57897A: xor     eax, esp
0x57897C: push    eax
0x57897D: lea     eax, [esp+68h+var_C]
0x578981: mov     large fs:0, eax
0x578987: mov     edi, [esp+68h+arg_0]
0x57898B: mov     eax, [edi]
0x57898D: xor     ebx, ebx
0x57898F: cmp     eax, ebx
0x578991: jnz     short loc_57899A
0x578993: xor     eax, eax
0x578995: jmp     loc_578BE8
0x57899A: mov     esi, [esp+68h+arg_4]
0x57899E: mov     eax, [esi+1Ch]
0x5789A1: cmp     eax, 2
0x5789A4: mov     edx, 7FFFFFFFh
0x5789A9: jge     short loc_5789AE
0x5789AB: mov     [esi+1Ch], edx
0x5789AE: cmp     dword ptr [esi+20h], 2
0x5789B2: jge     short loc_5789B7
0x5789B4: mov     [esi+20h], edx
0x5789B7: push    esi
0x5789B8: push    edi
0x5789B9: call    sub_577C10
0x5789BE: cmp     eax, ebx
0x5789C0: jnz     loc_578BE8
0x5789C6: push    1Ch; Size
0x5789C8: call    FormHeapAlloc
0x5789CD: add     esp, 4
0x5789D0: cmp     eax, ebx
0x5789D2: jz      short loc_5789FB
0x5789D4: mov     ecx, [esi+24h]
0x5789D7: mov     edx, [esi+20h]
0x5789DA: mov     ebp, [esi+1Ch]
0x5789DD: mov     [eax+0Ch], ebx
0x5789E0: mov     [eax+4], ebx
0x5789E3: mov     [eax+8], ebx
0x5789E6: mov     dword ptr [eax], offset ??_7?$NiTList@PAVTextPage@FontManager@@@@6B@; const NiTList<FontManager::TextPage *>::`vftable'
0x5789EC: mov     [eax+10h], ebp
0x5789EF: mov     [eax+14h], edx
0x5789F2: mov     [eax+18h], ecx
0x5789F5: mov     [esp+68h+arg_4], eax
0x5789F9: jmp     short loc_5789FF
0x5789FB: mov     [esp+68h+arg_4], ebx
0x5789FF: fld     dword ptr ds:0A68A90h
0x578A05: push    1
0x578A07: fstp    [esp+6Ch+var_54]
0x578A0B: mov     ecx, [esp+6Ch+var_54]
0x578A0F: fld     dword ptr ds:0A68A8Ch
0x578A15: sub     esp, 10h
0x578A18: fstp    [esp+7Ch+var_50]
0x578A1C: mov     edx, [esp+7Ch+var_50]
0x578A20: fld     dword ptr ds:0A68A88h
0x578A26: mov     eax, esp
0x578A28: mov     [eax], ecx
0x578A2A: fstp    [esp+7Ch+var_4C]
0x578A2E: fld1
0x578A30: mov     ecx, [esp+7Ch+var_4C]
0x578A34: mov     [eax+4], edx
0x578A37: fstp    [esp+7Ch+var_48]
0x578A3B: mov     edx, [esp+7Ch+var_48]
0x578A3F: mov     [eax+8], ecx
0x578A42: push    20h ; ' '
0x578A44: push    ebx
0x578A45: lea     ecx, [esp+84h+var_44]
0x578A49: mov     [eax+0Ch], edx
0x578A4C: call    sub_576F30
0x578A51: lea     ecx, [esp+68h+var_44]
0x578A55: mov     [esp+68h+var_4], ebx
0x578A59: call    sub_577690
0x578A5E: mov     eax, [esi]
0x578A60: mov     ecx, [esi+8]
0x578A63: mov     edx, [esi+0Ch]
0x578A66: mov     [esp+68h+var_44], eax
0x578A6A: mov     eax, [esi+10h]
0x578A6D: mov     [esp+68h+var_34], eax
0x578A71: movzx   eax, word ptr [edi+4]
0x578A75: cmp     ax, 0FFFFh
0x578A79: mov     [esp+68h+var_3C], ecx
0x578A7D: mov     ecx, [esi+14h]
0x578A80: mov     [esp+68h+var_38], edx
0x578A84: mov     edx, [esi+4]
0x578A87: mov     [esp+68h+var_30], ecx
0x578A8B: mov     [esp+68h+var_2C], edx
0x578A8F: jnz     short loc_578AA3
0x578A91: mov     eax, [edi]
0x578A93: lea     edx, [eax+1]
0x578A96: mov     cl, [eax]
0x578A98: add     eax, 1
0x578A9B: test    cl, cl
0x578A9D: jnz     short loc_578A96
0x578A9F: sub     eax, edx
0x578AA1: jmp     short loc_578AA6
0x578AA3: movzx   eax, ax
0x578AA6: cmp     eax, ebx
0x578AA8: ja      short loc_578AB7
0x578AAA: push    ebx; a3
0x578AAB: push    offset word_A36430; a2
0x578AB0: mov     ecx, edi; this
0x578AB2: call    BSStringT_Set
0x578AB7: mov     eax, [edi]
0x578AB9: push    ebx; a3
0x578ABA: lea     ecx, [esi+38h]; this
0x578ABD: push    eax; a2
0x578ABE: call    BSStringT_Set
0x578AC3: mov     ecx, edi
0x578AC5: xor     ebp, ebp
0x578AC7: call    BSStringT_GetLen
0x578ACC: test    eax, eax
0x578ACE: jbe     loc_578B50
0x578AD4: mov     eax, [edi]
0x578AD6: mov     ecx, eax
0x578AD8: neg     ecx
0x578ADA: sbb     ecx, ecx
0x578ADC: and     ecx, ebp
0x578ADE: mov     al, [ecx+eax]
0x578AE1: movzx   ecx, al
0x578AE4: add     ecx, 0FFFFFF6Fh; switch 4 cases
0x578AEA: cmp     ecx, 3
0x578AED: mov     byte ptr [esp+68h+arg_0], al
0x578AF1: ja      short def_578AF3
0x578AF3: jmp     ds:jpt_578AF3[ecx*4]; switch jump
0x578AFA: mov     al, 27h ; '''; jumptable 00578AF3 cases 145,146
0x578AFC: jmp     short loc_578B00
0x578AFE: mov     al, 22h ; '"'; jumptable 00578AF3 cases 147,148
0x578B00: mov     byte ptr [esp+68h+arg_0], al
