0x91E9A0: push    ebp
0x91E9A1: mov     ebp, esp
0x91E9A3: and     esp, 0FFFFFFF0h
0x91E9A6: mov     eax, 8044h
0x91E9AB: call    __alloca_probe
0x91E9B0: push    ebx
0x91E9B1: mov     ebx, ds:0BA9DE4h
0x91E9B7: push    esi
0x91E9B8: push    edi
0x91E9B9: mov     edi, large fs:2Ch
0x91E9C0: mov     eax, [edi+ebx*4]
0x91E9C3: mov     edx, [eax+1A8h]
0x91E9C9: mov     [esp+8050h+var_8030], ecx
0x91E9CD: mov     ecx, [eax+1A4h]
0x91E9D3: cmp     ecx, edx
0x91E9D5: jnb     short loc_91E9FB
0x91E9D7: mov     esi, eax
0x91E9D9: mov     ecx, [esi+1A4h]
0x91E9DF: mov     dword ptr [ecx], offset aTthkbroadphase; "TthkBroadphaseViewer"
0x91E9E5: rdtsc
0x91E9E7: mov     [esp+8050h+var_8038], eax
0x91E9EB: mov     edx, [esp+8050h+var_8038]
0x91E9EF: mov     [ecx+4], edx
0x91E9F2: add     ecx, 0Ch
0x91E9F5: mov     [esi+1A4h], ecx
0x91E9FB: mov     ecx, [ebp+arg_0]
0x91E9FE: mov     ecx, [ecx+64h]
0x91EA01: lea     eax, [esp+8050h+var_8000]
0x91EA05: mov     [esp+8050h+var_8010], eax
0x91EA09: lea     eax, [esp+8050h+var_8010]
0x91EA0D: mov     [esp+8050h+var_800C], 0
0x91EA15: mov     [esp+8050h+var_8008], 80000400h
0x91EA1D: mov     edx, [ecx]
0x91EA1F: push    eax
0x91EA20: call    dword ptr [edx+20h]
0x91EA23: mov     eax, [esp+8050h+var_8030]
0x91EA27: mov     esi, [esp+8050h+var_800C]
0x91EA2B: cmp     esi, [eax+8]
0x91EA2E: jle     loc_91EBD4
0x91EA34: lea     ebx, [eax+4]
0x91EA37: mov     eax, [ebx+4]
0x91EA3A: cmp     esi, eax
0x91EA3C: mov     [esp+8050h+var_8038], esi
0x91EA40: mov     [esp+8050h+var_8034], eax
0x91EA44: jge     short loc_91EA6D
0x91EA46: mov     edi, esi
0x91EA48: shl     edi, 7
0x91EA4B: sub     eax, esi
0x91EA4D: mov     esi, eax
0x91EA4F: nop
0x91EA50: mov     ecx, [ebx]
0x91EA52: mov     edx, [ecx+edi]
0x91EA55: add     ecx, edi
0x91EA57: push    0
0x91EA59: call    dword ptr [edx]
0x91EA5B: add     edi, 80h ; '€'
0x91EA61: dec     esi
0x91EA62: jnz     short loc_91EA50
0x91EA64: mov     esi, [esp+8050h+var_800C]
0x91EA68: jmp     loc_91EBC0
0x91EA6D: mov     edi, [ebx+8]
0x91EA70: mov     ecx, edi
0x91EA72: and     ecx, 3FFFFFFFh
0x91EA78: cmp     esi, ecx
0x91EA7A: mov     [esp+8050h+var_803C], edi
0x91EA7E: jle     loc_91EB84
0x91EA84: add     ecx, ecx
0x91EA86: cmp     esi, ecx
0x91EA88: jl      short loc_91EA8C
0x91EA8A: mov     ecx, esi
0x91EA8C: test    ecx, ecx
0x91EA8E: mov     edx, [ebx]
0x91EA90: mov     [esp+8050h+var_801C], edx
0x91EA94: mov     dword ptr [ebx], 0
0x91EA9A: mov     dword ptr [ebx+4], 0
0x91EAA1: mov     dword ptr [ebx+8], 80000000h
0x91EAA8: jle     short loc_91EACB
0x91EAAA: xor     eax, eax
0x91EAAC: test    ecx, ecx
0x91EAAE: setl    al
0x91EAB1: push    80h ; '€'
0x91EAB6: dec     eax
0x91EAB7: and     eax, ecx
0x91EAB9: push    eax
0x91EABA: push    ebx
0x91EABB: call    sub_8A6E40
0x91EAC0: mov     esi, [esp+805Ch+var_800C]
0x91EAC4: mov     eax, [esp+805Ch+var_8034]
0x91EAC8: add     esp, 0Ch
0x91EACB: test    eax, eax
0x91EACD: mov     edx, [ebx]
0x91EACF: jle     short loc_91EB10
0x91EAD1: mov     ecx, [esp+8050h+var_801C]
0x91EAD5: sub     ecx, edx
0x91EAD7: mov     edi, edx
0x91EAD9: mov     [esp+8050h+var_8020], ecx
0x91EADD: mov     [esp+8050h+var_8040], eax
0x91EAE1: test    edi, edi
0x91EAE3: jz      short loc_91EAFB
0x91EAE5: add     ecx, edi
0x91EAE7: push    ecx
0x91EAE8: mov     ecx, edi
0x91EAEA: call    sub_9193A0
0x91EAEF: mov     esi, [esp+8050h+var_800C]
0x91EAF3: mov     eax, [esp+8050h+var_8034]
0x91EAF7: mov     ecx, [esp+8050h+var_8020]
0x91EAFB: mov     edx, [esp+8050h+var_8040]
0x91EAFF: add     edi, 80h ; '€'
0x91EB05: dec     edx
0x91EB06: mov     [esp+8050h+var_8040], edx
0x91EB0A: jnz     short loc_91EAE1
0x91EB0C: mov     edi, [esp+8050h+var_803C]
0x91EB10: test    eax, eax
0x91EB12: mov     [ebx+4], eax
0x91EB15: jle     short loc_91EB41
0x91EB17: mov     esi, [esp+8050h+var_801C]
0x91EB1B: mov     [esp+8050h+var_8040], eax
0x91EB1F: nop
0x91EB20: mov     eax, [esi]
0x91EB22: push    0
0x91EB24: mov     ecx, esi
0x91EB26: call    dword ptr [eax]
0x91EB28: mov     eax, [esp+8050h+var_8040]
0x91EB2C: add     esi, 80h ; '€'
0x91EB32: dec     eax
0x91EB33: mov     [esp+8050h+var_8040], eax
0x91EB37: jnz     short loc_91EB20
0x91EB39: mov     esi, [esp+8050h+var_800C]
0x91EB3D: mov     eax, [esp+8050h+var_8034]
0x91EB41: test    edi, edi
0x91EB43: js      short loc_91EB84
0x91EB45: mov     ecx, large fs:2Ch
0x91EB4C: mov     edx, ds:0BA9DE4h
0x91EB52: mov     eax, [ecx+edx*4]
0x91EB55: mov     eax, [eax+19Ch]
0x91EB5B: test    eax, eax
0x91EB5D: jnz     short loc_91EB64
0x91EB5F: mov     eax, ds:0BA7D9Ch
0x91EB64: mov     ecx, [esp+8050h+var_801C]
0x91EB68: and     edi, 3FFFFFFFh
0x91EB6E: push    14h
0x91EB70: shl     edi, 7
0x91EB73: push    edi
0x91EB74: push    ecx
0x91EB75: mov     ecx, eax
0x91EB77: call    sub_8A75D0
0x91EB7C: mov     esi, [esp+8050h+var_800C]
0x91EB80: mov     eax, [esp+8050h+var_8034]
0x91EB84: mov     edx, [esp+8050h+var_8038]
0x91EB88: cmp     eax, edx
0x91EB8A: mov     ecx, [ebx]
0x91EB8C: jge     short loc_91EBC0
0x91EB8E: mov     edi, eax
0x91EB90: shl     edi, 7
0x91EB93: add     edi, ecx
0x91EB95: mov     ecx, edx
0x91EB97: sub     ecx, eax
0x91EB99: mov     [esp+8050h+var_8040], ecx
0x91EB9D: lea     ecx, [ecx+0]
0x91EBA0: test    edi, edi
0x91EBA2: jz      short loc_91EBAF
0x91EBA4: mov     ecx, edi
0x91EBA6: call    sub_949300
0x91EBAB: mov     esi, [esp+8050h+var_800C]
0x91EBAF: mov     eax, [esp+8050h+var_8040]
0x91EBB3: add     edi, 80h ; '€'
0x91EBB9: dec     eax
0x91EBBA: mov     [esp+8050h+var_8040], eax
0x91EBBE: jnz     short loc_91EBA0
0x91EBC0: mov     edx, [esp+8050h+var_8038]
0x91EBC4: mov     edi, large fs:2Ch
0x91EBCB: mov     [ebx+4], edx
0x91EBCE: mov     ebx, ds:0BA9DE4h
0x91EBD4: xor     eax, eax
0x91EBD6: cmp     esi, eax
0x91EBD8: mov     [esp+8050h+var_802C], eax
0x91EBDC: mov     [esp+8050h+var_8028], eax
0x91EBE0: mov     [esp+8050h+var_8024], 80000000h
0x91EBE8: mov     [esp+8050h+var_803C], esi
0x91EBEC: jle     short loc_91EC0E
0x91EBEE: xor     ecx, ecx
0x91EBF0: cmp     esi, eax
0x91EBF2: setl    cl
0x91EBF5: push    4
0x91EBF7: lea     edx, [esp+8054h+var_802C]
0x91EBFB: dec     ecx
0x91EBFC: and     ecx, esi
0x91EBFE: mov     eax, ecx
0x91EC00: push    eax
0x91EC01: push    edx
0x91EC02: call    sub_8A6E40
0x91EC07: mov     esi, [esp+805Ch+var_800C]
0x91EC0B: add     esp, 0Ch
0x91EC0E: dec     esi
0x91EC0F: mov     eax, [esp+8050h+var_803C]
0x91EC13: mov     [esp+8050h+var_8028], eax
0x91EC17: js      short loc_91EC68
0x91EC19: mov     edi, esi
0x91EC1B: mov     ebx, esi
0x91EC1D: shl     edi, 7
0x91EC20: shl     ebx, 5
0x91EC23: mov     ecx, [esp+8050h+var_8010]
0x91EC27: lea     eax, [ebx+ecx]
0x91EC2A: lea     edx, [eax+10h]
0x91EC2D: push    edx
0x91EC2E: push    eax
0x91EC2F: mov     eax, [esp+8058h+var_8030]
0x91EC33: mov     ecx, [eax+4]
0x91EC36: add     ecx, edi
0x91EC38: call    sub_9492E0
0x91EC3D: mov     ecx, [esp+8050h+var_8030]
0x91EC41: mov     edx, [ecx+4]
0x91EC44: mov     eax, [esp+8050h+var_802C]
0x91EC48: add     edx, edi
0x91EC4A: mov     [eax+esi*4], edx
0x91EC4D: dec     esi
0x91EC4E: sub     ebx, 20h ; ' '
0x91EC51: sub     edi, 80h ; '€'
0x91EC57: test    esi, esi
0x91EC59: jge     short loc_91EC23
0x91EC5B: mov     edi, large fs:2Ch
0x91EC62: mov     ebx, ds:0BA9DE4h
0x91EC68: mov     eax, ds:0BA8460h
0x91EC6D: mov     ecx, [esp+8050h+var_8030]
0x91EC71: mov     ecx, [ecx-10h]
0x91EC74: mov     edx, [ecx]
0x91EC76: push    eax
0x91EC77: push    0FFFF0000h
0x91EC7C: lea     eax, [esp+8058h+var_802C]
0x91EC80: push    eax
0x91EC81: call    dword ptr [edx+24h]
0x91EC84: mov     eax, [edi+ebx*4]
0x91EC87: mov     ecx, [eax+1A4h]
0x91EC8D: cmp     ecx, [eax+1A8h]
0x91EC93: jnb     short loc_91ECB9
0x91EC95: mov     esi, eax
0x91EC97: mov     ecx, [esi+1A4h]
0x91EC9D: mov     dword ptr [ecx], offset aEt; "Et"
0x91ECA3: rdtsc
0x91ECA5: mov     [esp+8050h+var_803C], eax
0x91ECA9: mov     edx, [esp+8050h+var_803C]
0x91ECAD: mov     [ecx+4], edx
0x91ECB0: add     ecx, 0Ch
0x91ECB3: mov     [esi+1A4h], ecx
0x91ECB9: mov     eax, [esp+8050h+var_8024]
0x91ECBD: test    eax, eax
0x91ECBF: js      short loc_91ECE9
0x91ECC1: mov     ecx, [edi+ebx*4]
0x91ECC4: mov     ecx, [ecx+19Ch]
0x91ECCA: test    ecx, ecx
0x91ECCC: jnz     short loc_91ECD4
0x91ECCE: mov     ecx, ds:0BA7D9Ch
0x91ECD4: mov     edx, [esp+8050h+var_802C]
0x91ECD8: and     eax, 3FFFFFFFh
0x91ECDD: push    14h
0x91ECDF: shl     eax, 2
0x91ECE2: push    eax
0x91ECE3: push    edx
0x91ECE4: call    sub_8A75D0
0x91ECE9: mov     eax, [esp+8050h+var_8008]
0x91ECED: test    eax, eax
0x91ECEF: js      short loc_91ED19
0x91ECF1: mov     ecx, [edi+ebx*4]
0x91ECF4: mov     ecx, [ecx+19Ch]
0x91ECFA: test    ecx, ecx
0x91ECFC: jnz     short loc_91ED04
0x91ECFE: mov     ecx, ds:0BA7D9Ch
0x91ED04: mov     edx, [esp+8050h+var_8010]
0x91ED08: and     eax, 3FFFFFFFh
0x91ED0D: push    14h
0x91ED0F: shl     eax, 5
0x91ED12: push    eax
0x91ED13: push    edx
0x91ED14: call    sub_8A75D0
0x91ED19: pop     edi
0x91ED1A: pop     esi
0x91ED1B: pop     ebx
0x91ED1C: mov     esp, ebp
0x91ED1E: pop     ebp
0x91ED1F: retn    8
