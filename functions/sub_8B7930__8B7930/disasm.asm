0x8B7930: push    0FFFFFFFFh
0x8B7932: push    offset SEH_8B7930
0x8B7937: mov     eax, large fs:0
0x8B793D: push    eax
0x8B793E: sub     esp, 20h
0x8B7941: push    ebx
0x8B7942: push    esi
0x8B7943: push    edi
0x8B7944: mov     eax, ds:0B30AACh
0x8B7949: xor     eax, esp
0x8B794B: push    eax
0x8B794C: lea     eax, [esp+3Ch+var_C]
0x8B7950: mov     large fs:0, eax
0x8B7956: mov     esi, ecx
0x8B7958: mov     edi, [esp+3Ch+arg_0]
0x8B795C: push    edi
0x8B795D: call    sub_8A2650
0x8B7962: xor     ebx, ebx
0x8B7964: cmp     al, bl
0x8B7966: jz      loc_8B7A48
0x8B796C: mov     [esp+3Ch+var_1C], ebx
0x8B7970: mov     [esp+3Ch+var_18], ebx
0x8B7974: mov     [esp+3Ch+var_14], ebx
0x8B7978: mov     [esp+3Ch+var_10], 80000000h
0x8B7980: mov     [esp+3Ch+var_4], ebx
0x8B7984: mov     [esp+3Ch+var_2C], ebx
0x8B7988: mov     [esp+3Ch+var_28], ebx
0x8B798C: mov     [esp+3Ch+var_24], ebx
0x8B7990: mov     [esp+3Ch+var_20], 80000000h
0x8B7998: lea     eax, [esp+3Ch+var_1C]
0x8B799C: push    eax
0x8B799D: mov     ecx, esi
0x8B799F: mov     byte ptr [esp+40h+var_4], 1
0x8B79A4: call    sub_8B77A0
0x8B79A9: lea     ecx, [esp+3Ch+var_2C]
0x8B79AD: push    ecx
0x8B79AE: mov     ecx, edi
0x8B79B0: call    sub_8B77A0
0x8B79B5: lea     edx, [esp+3Ch+var_28]
0x8B79B9: push    edx
0x8B79BA: lea     eax, [esp+40h+var_18]
0x8B79BE: push    eax
0x8B79BF: call    sub_8E8140
0x8B79C4: mov     esi, ds:0BA9DE4h
0x8B79CA: mov     edi, large fs:2Ch
0x8B79D1: mov     byte ptr [esp+44h+arg_0], al
0x8B79D5: mov     eax, [esp+44h+var_20]
0x8B79D9: add     esp, 8
0x8B79DC: test    eax, eax
0x8B79DE: mov     byte ptr [esp+3Ch+var_4], bl
0x8B79E2: js      short loc_8B7A0C
0x8B79E4: mov     ecx, [edi+esi*4]
0x8B79E7: mov     ecx, [ecx+19Ch]
0x8B79ED: cmp     ecx, ebx
0x8B79EF: jnz     short loc_8B79F7
0x8B79F1: mov     ecx, ds:0BA7D9Ch
0x8B79F7: mov     edx, [esp+3Ch+var_28]
0x8B79FB: and     eax, 3FFFFFFFh
0x8B7A00: push    14h
0x8B7A02: shl     eax, 4
0x8B7A05: push    eax
0x8B7A06: push    edx
0x8B7A07: call    sub_8A75D0
0x8B7A0C: mov     eax, [esp+3Ch+var_10]
0x8B7A10: test    eax, eax
0x8B7A12: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x8B7A1A: js      short loc_8B7A44
0x8B7A1C: mov     ecx, [edi+esi*4]
0x8B7A1F: mov     ecx, [ecx+19Ch]
0x8B7A25: cmp     ecx, ebx
0x8B7A27: jnz     short loc_8B7A2F
0x8B7A29: mov     ecx, ds:0BA7D9Ch
0x8B7A2F: mov     edx, [esp+3Ch+var_18]
0x8B7A33: and     eax, 3FFFFFFFh
0x8B7A38: push    14h
0x8B7A3A: shl     eax, 4
0x8B7A3D: push    eax
0x8B7A3E: push    edx
0x8B7A3F: call    sub_8A75D0
0x8B7A44: mov     al, byte ptr [esp+3Ch+arg_0]
0x8B7A48: mov     ecx, [esp+3Ch+var_C]
0x8B7A4C: mov     large fs:0, ecx
0x8B7A53: pop     ecx
0x8B7A54: pop     edi
0x8B7A55: pop     esi
0x8B7A56: pop     ebx
0x8B7A57: add     esp, 2Ch
0x8B7A5A: retn    4
