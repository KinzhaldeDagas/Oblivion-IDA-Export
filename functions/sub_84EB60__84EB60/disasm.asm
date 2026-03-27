0x84EB60: push    0FFFFFFFFh
0x84EB62: push    offset SEH_851CA0
0x84EB67: mov     eax, large fs:0
0x84EB6D: push    eax
0x84EB6E: push    ecx
0x84EB6F: push    ebx
0x84EB70: push    ebp
0x84EB71: push    esi
0x84EB72: push    edi
0x84EB73: mov     eax, ds:0B30AACh
0x84EB78: xor     eax, esp
0x84EB7A: push    eax
0x84EB7B: lea     eax, [esp+24h+var_C]
0x84EB7F: mov     large fs:0, eax
0x84EB85: mov     ebp, ecx
0x84EB87: mov     esi, ds:0B45928h
0x84EB8D: mov     eax, [esi+24h]
0x84EB90: mov     ebx, [esp+24h+arg_C]
0x84EB94: mov     edi, [eax]
0x84EB96: mov     edx, [ebx]
0x84EB98: mov     eax, [edx+8Ch]
0x84EB9E: push    0
0x84EBA0: mov     ecx, ebx
0x84EBA2: mov     [esp+28h+var_10], edi
0x84EBA6: call    eax
0x84EBA8: test    eax, eax
0x84EBAA: jz      short loc_84EBBE
0x84EBAC: mov     edx, [ebx]
0x84EBAE: mov     eax, [edx+8Ch]
0x84EBB4: push    0
0x84EBB6: mov     ecx, ebx
0x84EBB8: call    eax
0x84EBBA: mov     ebx, eax
0x84EBBC: jmp     short loc_84EBD3
0x84EBBE: test    dword ptr [ebx+1Ch], 80h
0x84EBC5: mov     ebx, ds:0B430F0h
0x84EBCB: ja      short loc_84EBD3
0x84EBCD: mov     ebx, ds:0B430DCh
0x84EBD3: mov     edi, [edi+4]
0x84EBD6: cmp     edi, ebx
0x84EBD8: jz      short loc_84EC11
0x84EBDA: test    edi, edi
0x84EBDC: jz      short loc_84EBFA
0x84EBDE: lea     ecx, [edi+4]
0x84EBE1: push    ecx; lpAddend
0x84EBE2: call    dword ptr ds:0A2807Ch
0x84EBE8: test    eax, eax
0x84EBEA: jnz     short loc_84EBFA
0x84EBEC: test    edi, edi
0x84EBEE: jz      short loc_84EBFA
0x84EBF0: mov     edx, [edi]
0x84EBF2: mov     eax, [edx]
0x84EBF4: push    1
0x84EBF6: mov     ecx, edi
0x84EBF8: call    eax
0x84EBFA: test    ebx, ebx
0x84EBFC: mov     edi, [esp+24h+var_10]
0x84EC00: mov     [edi+4], ebx
0x84EC03: jz      short loc_84EC15
0x84EC05: add     ebx, 4
0x84EC08: push    ebx; lpAddend
0x84EC09: call    dword ptr ds:0A28078h
0x84EC0F: jmp     short loc_84EC15
0x84EC11: mov     edi, [esp+24h+var_10]
0x84EC15: test    edi, edi
0x84EC17: jz      short loc_84EC35
0x84EC19: cmp     byte ptr ds:0B42CDDh, 0
0x84EC20: jz      short loc_84EC35
0x84EC22: mov     ecx, [esp+24h+arg_C]
0x84EC26: mov     edx, [ecx]
0x84EC28: mov     eax, [edx+78h]
0x84EC2B: call    eax
0x84EC2D: push    eax
0x84EC2E: mov     ecx, edi
0x84EC30: call    sub_7715E0
0x84EC35: mov     edi, 1
0x84EC3A: add     [esi+60h], edi
0x84EC3D: mov     [esp+24h+arg_C], esi
0x84EC41: mov     edx, [ebp+38h]
0x84EC44: lea     ecx, [esp+24h+arg_C]
0x84EC48: push    ecx
0x84EC49: push    edx
0x84EC4A: lea     ecx, [ebp+40h]
0x84EC4D: mov     [esp+2Ch+var_4], 0
0x84EC55: call    sub_76CE40
0x84EC5A: or      eax, 0FFFFFFFFh
0x84EC5D: add     [esi+60h], eax
0x84EC60: mov     [esp+24h+var_4], eax
0x84EC64: jnz     short loc_84EC6D
0x84EC66: mov     ecx, esi
0x84EC68: call    sub_7604D0
0x84EC6D: add     [ebp+38h], edi
0x84EC70: mov     ecx, dword ptr [esp+24h+var_C]
0x84EC74: mov     large fs:0, ecx
0x84EC7B: pop     ecx
0x84EC7C: pop     edi
0x84EC7D: pop     esi
0x84EC7E: pop     ebp
0x84EC7F: pop     ebx
0x84EC80: add     esp, 10h
0x84EC83: retn    10h
