0x83BE10: push    0FFFFFFFFh
0x83BE12: push    offset SEH_882120
0x83BE17: mov     eax, large fs:0
0x83BE1D: push    eax
0x83BE1E: push    ebx
0x83BE1F: push    ebp
0x83BE20: push    esi
0x83BE21: push    edi
0x83BE22: mov     eax, ds:0B30AACh
0x83BE27: xor     eax, esp
0x83BE29: push    eax
0x83BE2A: lea     eax, [esp+20h+var_C]
0x83BE2E: mov     large fs:0, eax
0x83BE34: mov     esi, ecx
0x83BE36: mov     ebx, [esp+20h+arg_8]
0x83BE3A: mov     eax, [ebx+10h]
0x83BE3D: mov     edi, ds:0B457B4h
0x83BE43: push    eax
0x83BE44: call    sub_848C40
0x83BE49: mov     ebx, [ebx+0Ch]
0x83BE4C: push    ebx
0x83BE4D: mov     ecx, esi
0x83BE4F: call    sub_848E50
0x83BE54: mov     ecx, [esp+20h+arg_0]
0x83BE58: mov     eax, [esi]
0x83BE5A: mov     edx, [eax+0BCh]
0x83BE60: push    0
0x83BE62: push    ebx
0x83BE63: push    ecx
0x83BE64: mov     ecx, esi
0x83BE66: call    edx
0x83BE68: mov     eax, [edi+24h]
0x83BE6B: mov     ebx, [esp+20h+arg_C]
0x83BE6F: mov     ebp, [eax]
0x83BE71: mov     edx, [ebx]
0x83BE73: mov     eax, [edx+88h]
0x83BE79: push    0
0x83BE7B: mov     ecx, ebx
0x83BE7D: mov     [esp+24h+arg_8], ebp
0x83BE81: call    eax
0x83BE83: mov     ebp, [ebp+4]
0x83BE86: cmp     ebp, eax
0x83BE88: mov     [esp+20h+arg_0], eax
0x83BE8C: jz      short loc_83BEC8
0x83BE8E: test    ebp, ebp
0x83BE90: jz      short loc_83BEB3
0x83BE92: lea     ecx, [ebp+4]
0x83BE95: push    ecx; lpAddend
0x83BE96: call    dword ptr ds:0A2807Ch
0x83BE9C: test    eax, eax
0x83BE9E: jnz     short loc_83BEAF
0x83BEA0: test    ebp, ebp
0x83BEA2: jz      short loc_83BEAF
0x83BEA4: mov     edx, [ebp+0]
0x83BEA7: mov     eax, [edx]
0x83BEA9: push    1
0x83BEAB: mov     ecx, ebp
0x83BEAD: call    eax
0x83BEAF: mov     eax, [esp+20h+arg_0]
0x83BEB3: test    eax, eax
0x83BEB5: mov     ecx, [esp+20h+arg_8]
0x83BEB9: mov     [ecx+4], eax
0x83BEBC: jz      short loc_83BEC8
0x83BEBE: add     eax, 4
0x83BEC1: push    eax; lpAddend
0x83BEC2: call    dword ptr ds:0A28078h
0x83BEC8: mov     edx, [esp+20h+arg_8]
0x83BECC: push    ebx
0x83BECD: push    edx
0x83BECE: mov     ecx, esi
0x83BED0: call    sub_848FA0
0x83BED5: mov     eax, [edi+24h]
0x83BED8: mov     ebp, [eax+4]
0x83BEDB: push    0
0x83BEDD: push    ebx
0x83BEDE: mov     ecx, esi
0x83BEE0: mov     [esp+28h+arg_8], ebp
0x83BEE4: call    sub_848FD0
0x83BEE9: mov     ebp, [ebp+4]
0x83BEEC: cmp     ebp, eax
0x83BEEE: mov     [esp+20h+arg_0], eax
0x83BEF2: jz      short loc_83BF2E
0x83BEF4: test    ebp, ebp
0x83BEF6: jz      short loc_83BF19
0x83BEF8: lea     ecx, [ebp+4]
0x83BEFB: push    ecx; lpAddend
0x83BEFC: call    dword ptr ds:0A2807Ch
0x83BF02: test    eax, eax
0x83BF04: jnz     short loc_83BF15
0x83BF06: test    ebp, ebp
0x83BF08: jz      short loc_83BF15
0x83BF0A: mov     edx, [ebp+0]
0x83BF0D: mov     eax, [edx]
0x83BF0F: push    1
0x83BF11: mov     ecx, ebp
0x83BF13: call    eax
0x83BF15: mov     eax, [esp+20h+arg_0]
0x83BF19: test    eax, eax
0x83BF1B: mov     ecx, [esp+20h+arg_8]
0x83BF1F: mov     [ecx+4], eax
0x83BF22: jz      short loc_83BF2E
0x83BF24: add     eax, 4
0x83BF27: push    eax; lpAddend
0x83BF28: call    dword ptr ds:0A28078h
0x83BF2E: mov     edx, [esp+20h+arg_8]
0x83BF32: push    ebx
0x83BF33: push    edx
0x83BF34: mov     ecx, esi
0x83BF36: call    sub_848FA0
0x83BF3B: mov     eax, [edi+24h]
0x83BF3E: mov     ebp, [eax+18h]
0x83BF41: mov     eax, ds:0B430E8h
0x83BF46: mov     ebx, [ebp+4]
0x83BF49: cmp     ebx, eax
0x83BF4B: mov     ecx, eax
0x83BF4D: mov     [esp+20h+arg_8], ecx
0x83BF51: jz      short loc_83BF88
0x83BF53: test    ebx, ebx
0x83BF55: jz      short loc_83BF77
0x83BF57: lea     ecx, [ebx+4]
0x83BF5A: push    ecx; lpAddend
0x83BF5B: call    dword ptr ds:0A2807Ch
0x83BF61: test    eax, eax
0x83BF63: jnz     short loc_83BF73
0x83BF65: test    ebx, ebx
0x83BF67: jz      short loc_83BF73
0x83BF69: mov     edx, [ebx]
0x83BF6B: mov     eax, [edx]
0x83BF6D: push    1
0x83BF6F: mov     ecx, ebx
0x83BF71: call    eax
0x83BF73: mov     ecx, [esp+20h+arg_8]
0x83BF77: test    ecx, ecx
0x83BF79: mov     [ebp+4], ecx
0x83BF7C: jz      short loc_83BF88
0x83BF7E: add     ecx, 4
0x83BF81: push    ecx; lpAddend
0x83BF82: call    dword ptr ds:0A28078h
0x83BF88: mov     ebx, 1
0x83BF8D: add     [edi+60h], ebx
0x83BF90: mov     [esp+20h+arg_8], edi
0x83BF94: mov     edx, [esi+38h]
0x83BF97: lea     ecx, [esp+20h+arg_8]
0x83BF9B: push    ecx
0x83BF9C: push    edx
0x83BF9D: lea     ecx, [esi+40h]
0x83BFA0: mov     [esp+28h+var_4], 0
0x83BFA8: call    sub_76CE40
0x83BFAD: or      eax, 0FFFFFFFFh
0x83BFB0: add     [edi+60h], eax
0x83BFB3: mov     [esp+20h+var_4], eax
0x83BFB7: jnz     short loc_83BFC0
0x83BFB9: mov     ecx, edi
0x83BFBB: call    sub_7604D0
0x83BFC0: add     [esi+38h], ebx
0x83BFC3: mov     ecx, [esp+20h+var_C]
0x83BFC7: mov     large fs:0, ecx
0x83BFCE: pop     ecx
0x83BFCF: pop     edi
0x83BFD0: pop     esi
0x83BFD1: pop     ebp
0x83BFD2: pop     ebx
0x83BFD3: add     esp, 0Ch
0x83BFD6: retn    10h
