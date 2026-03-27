0x76CA10: push    ebp
0x76CA11: push    edi
0x76CA12: mov     edi, ecx
0x76CA14: mov     ecx, [edi+3Ch]
0x76CA17: test    ecx, ecx
0x76CA19: jz      loc_76CBEB
0x76CA1F: mov     ebp, [esp+8+a3]
0x76CA23: xor     eax, eax
0x76CA25: test    ebp, ebp
0x76CA27: setnz   al
0x76CA2A: push    eax
0x76CA2B: push    1
0x76CA2D: call    sub_75FA00
0x76CA32: test    al, al
0x76CA34: jz      loc_76CBEB
0x76CA3A: push    ebx
0x76CA3B: lea     ecx, [esp+0Ch+a3]
0x76CA3F: push    esi
0x76CA40: push    ecx
0x76CA41: call    sub_772630
0x76CA46: mov     esi, [esp+14h+a3]
0x76CA4A: mov     ecx, [esi+0Ch]
0x76CA4D: add     esp, 4
0x76CA50: push    0
0x76CA52: mov     ebx, esi
0x76CA54: push    1
0x76CA56: add     esi, 0Ch
0x76CA59: push    1Ch
0x76CA5B: call    sub_772FF0
0x76CA60: test    ebp, ebp
0x76CA62: jz      loc_76CB44
0x76CA68: mov     eax, [ebp+8]
0x76CA6B: test    eax, eax
0x76CA6D: jz      loc_76CB44
0x76CA73: push    eax; a2
0x76CA74: mov     ecx, ebx; this
0x76CA76: call    sub_76C910
0x76CA7B: mov     edx, [esp+10h+arg_4]
0x76CA7F: mov     ecx, [esi]
0x76CA81: push    0
0x76CA83: push    edx
0x76CA84: push    0Bh
0x76CA86: call    sub_772FF0
0x76CA8B: mov     ecx, [esi]
0x76CA8D: push    0
0x76CA8F: push    2
0x76CA91: push    1
0x76CA93: call    sub_772FF0
0x76CA98: mov     ecx, [esi]
0x76CA9A: push    0
0x76CA9C: push    2
0x76CA9E: push    2
0x76CAA0: call    sub_772FF0
0x76CAA5: mov     ecx, [esi]
0x76CAA7: push    0
0x76CAA9: push    1
0x76CAAB: push    3
0x76CAAD: call    sub_772FF0
0x76CAB2: mov     ecx, [esi]
0x76CAB4: push    0
0x76CAB6: push    3
0x76CAB8: push    4
0x76CABA: call    sub_772FF0
0x76CABF: mov     ecx, [esi]
0x76CAC1: push    0
0x76CAC3: push    2
0x76CAC5: push    5
0x76CAC7: call    sub_772FF0
0x76CACC: cmp     byte ptr [edi+51h], 0
0x76CAD0: mov     ecx, [esi]
0x76CAD2: push    0
0x76CAD4: jz      short loc_76CAE5
0x76CAD6: push    0
0x76CAD8: push    6
0x76CADA: call    sub_772FF0
0x76CADF: mov     byte ptr [edi+51h], 0
0x76CAE3: jmp     short loc_76CAEE
0x76CAE5: push    1
0x76CAE7: push    6
0x76CAE9: call    sub_772FF0
0x76CAEE: movzx   eax, byte ptr [ebp+5]
0x76CAF2: and     eax, 0Fh
0x76CAF5: push    eax
0x76CAF6: mov     ecx, ebx
0x76CAF8: call    sub_771640
0x76CAFD: movzx   ecx, word ptr [ebp+4]
0x76CB01: shr     ecx, 0Ch
0x76CB04: and     ecx, 3
0x76CB07: push    ecx
0x76CB08: mov     ecx, ebx
0x76CB0A: call    sub_7715E0
0x76CB0F: mov     ebp, [ebp+0Ch]
0x76CB12: test    ebp, ebp
0x76CB14: jnz     short loc_76CB2E
0x76CB16: mov     ecx, [esi]
0x76CB18: push    ebp
0x76CB19: push    ebp
0x76CB1A: push    18h
0x76CB1C: mov     byte ptr [ebx+5Ah], 0
0x76CB20: call    sub_772FF0
0x76CB25: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x76CB29: jmp     loc_76CBB4
0x76CB2E: push    ebx
0x76CB2F: mov     ecx, ebp
0x76CB31: call    sub_76C710
0x76CB36: push    eax
0x76CB37: mov     ecx, edi
0x76CB39: call    sub_76C820
0x76CB3E: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x76CB42: jmp     short loc_76CBB4
0x76CB44: mov     ecx, [esi]
0x76CB46: push    0
0x76CB48: push    2
0x76CB4A: push    1
0x76CB4C: call    sub_772FF0
0x76CB51: mov     ecx, [esi]
0x76CB53: push    0
0x76CB55: push    0
0x76CB57: push    2
0x76CB59: call    sub_772FF0
0x76CB5E: mov     ecx, [esi]
0x76CB60: push    0
0x76CB62: push    1
0x76CB64: push    3
0x76CB66: call    sub_772FF0
0x76CB6B: cmp     byte ptr [edi+51h], 0
0x76CB6F: mov     ecx, [esi]
0x76CB71: push    0
0x76CB73: jz      short loc_76CB84
0x76CB75: push    2
0x76CB77: push    4
0x76CB79: call    sub_772FF0
0x76CB7E: mov     byte ptr [edi+51h], 0
0x76CB82: jmp     short loc_76CB8D
0x76CB84: push    3
0x76CB86: push    4
0x76CB88: call    sub_772FF0
0x76CB8D: mov     ecx, [esi]
0x76CB8F: push    0
0x76CB91: push    0
0x76CB93: push    5
0x76CB95: call    sub_772FF0
0x76CB9A: mov     ecx, [esi]
0x76CB9C: push    0
0x76CB9E: push    1
0x76CBA0: push    6
0x76CBA2: call    sub_772FF0
0x76CBA7: mov     eax, [edi+5Ch]
0x76CBAA: test    eax, eax
0x76CBAC: jz      short loc_76CBB4
0x76CBAE: add     eax, 0FFFFFFFFh
0x76CBB1: mov     [edi+5Ch], eax
0x76CBB4: add     dword ptr [edi+58h], 0FFFFFFFFh
0x76CBB8: mov     edi, [edi+3Ch]
0x76CBBB: mov     edx, [edi+14h]
0x76CBBE: push    ebx; a3
0x76CBBF: push    edx; a2
0x76CBC0: mov     ecx, edi; this
0x76CBC2: call    sub_760010
0x76CBC7: mov     eax, [esp+10h+a3]
0x76CBCB: test    eax, eax
0x76CBCD: jz      short loc_76CBE2
0x76CBCF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x76CBD3: mov     ecx, eax
0x76CBD5: add     eax, 5Ch ; '\'
0x76CBD8: cmp     dword ptr [eax], 0
0x76CBDB: jnz     short loc_76CBE2
0x76CBDD: call    sub_772560
0x76CBE2: pop     esi
0x76CBE3: mov     eax, ebx
0x76CBE5: pop     ebx
0x76CBE6: pop     edi
0x76CBE7: pop     ebp
0x76CBE8: retn    8
0x76CBEB: pop     edi
0x76CBEC: xor     eax, eax
0x76CBEE: pop     ebp
0x76CBEF: retn    8
