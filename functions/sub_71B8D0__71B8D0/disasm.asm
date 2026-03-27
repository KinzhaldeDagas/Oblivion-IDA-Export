0x71B8D0: push    0FFFFFFFFh
0x71B8D2: push    offset SEH_71B8D0
0x71B8D7: mov     eax, large fs:0
0x71B8DD: push    eax
0x71B8DE: sub     esp, 5Ch
0x71B8E1: push    ebx
0x71B8E2: push    ebp
0x71B8E3: push    esi
0x71B8E4: push    edi
0x71B8E5: mov     eax, ds:0B30AACh
0x71B8EA: xor     eax, esp
0x71B8EC: push    eax
0x71B8ED: lea     eax, [esp+7Ch+var_C]
0x71B8F1: mov     large fs:0, eax
0x71B8F7: mov     esi, ecx
0x71B8F9: mov     [esp+7Ch+var_58], esi
0x71B8FD: mov     ebx, [esp+7Ch+arg_0]
0x71B904: lea     ecx, [esp+7Ch+var_50]
0x71B908: lea     edi, [ebx+8]
0x71B90B: call    InitSurfacEData
0x71B910: mov     eax, [esi]
0x71B912: mov     edx, [eax+20h]
0x71B915: push    edi
0x71B916: mov     ecx, esi
0x71B918: call    edx
0x71B91A: test    al, al
0x71B91C: jz      short loc_71B925
0x71B91E: mov     esi, offset unk_B25E48
0x71B923: jmp     short loc_71B93C
0x71B925: mov     eax, [esi]
0x71B927: mov     edx, [eax+1Ch]
0x71B92A: push    edi
0x71B92B: mov     ecx, esi
0x71B92D: call    edx
0x71B92F: test    al, al
0x71B931: jz      loc_71BE10
0x71B937: mov     esi, offset unk_B25E00
0x71B93C: mov     ebp, [esp+7Ch+arg_4]
0x71B943: test    ebp, ebp
0x71B945: mov     ecx, 11h
0x71B94A: lea     edi, [esp+7Ch+var_50]
0x71B94E: rep movsd
0x71B950: jz      short loc_71B971
0x71B952: lea     eax, [esp+7Ch+var_50]
0x71B956: push    eax
0x71B957: lea     ecx, [ebp+8]
0x71B95A: call    sub_71AD40
0x71B95F: test    al, al
0x71B961: jz      short loc_71B971
0x71B963: cmp     dword ptr [ebp+60h], 1
0x71B967: jbe     short loc_71B971
0x71B969: mov     eax, [ebp+6Ch]
0x71B96C: cmp     eax, [ebx+6Ch]
0x71B96F: jz      short loc_71B9BA
0x71B971: push    70h ; 'p'; Size
0x71B973: call    FormHeapAlloc
0x71B978: add     esp, 4
0x71B97B: mov     [esp+7Ch+arg_4], eax
0x71B982: test    eax, eax
0x71B984: mov     [esp+7Ch+var_4], 0
0x71B98C: jz      short loc_71B9AE
0x71B98E: mov     edx, [ebx+6Ch]
0x71B991: mov     ecx, [ebx+58h]
0x71B994: mov     esi, [ecx]
0x71B996: mov     ecx, [ebx+54h]
0x71B999: mov     edi, [ecx]
0x71B99B: push    edx
0x71B99C: push    0
0x71B99E: lea     edx, [esp+84h+var_50]
0x71B9A2: push    edx
0x71B9A3: push    esi
0x71B9A4: push    edi
0x71B9A5: mov     ecx, eax
0x71B9A7: call    NiPixelData__NiPixelData
0x71B9AC: jmp     short loc_71B9B0
0x71B9AE: xor     eax, eax
0x71B9B0: mov     [esp+7Ch+var_4], 0FFFFFFFFh
0x71B9B8: mov     ebp, eax
0x71B9BA: cmp     ebx, ebp
0x71B9BC: mov     esi, [ebp+60h]
0x71B9BF: mov     [esp+7Ch+var_68], esi
0x71B9C3: jz      short loc_71B9DC
0x71B9C5: mov     ecx, [esp+7Ch+var_58]
0x71B9C9: mov     eax, [ecx]
0x71B9CB: mov     edx, [eax+2Ch]
0x71B9CE: push    0
0x71B9D0: push    ebx
0x71B9D1: push    ebp
0x71B9D2: call    edx
0x71B9D4: test    al, al
0x71B9D6: jz      loc_71BE10
0x71B9DC: cmp     dword ptr [ebx+6Ch], 0
0x71B9E0: mov     [esp+7Ch+arg_4], 0
0x71B9EB: jbe     loc_71BE0C
0x71B9F1: jmp     short loc_71B9F7
0x71B9F3: mov     esi, [esp+7Ch+var_68]
0x71B9F7: push    offset unk_B25E48
0x71B9FC: lea     ecx, [esp+80h+var_50]
0x71BA00: call    sub_71AD40
0x71BA05: test    al, al
0x71BA07: jz      loc_71BBCB
0x71BA0D: mov     ebx, 1
0x71BA12: cmp     esi, ebx
0x71BA14: mov     [esp+7Ch+var_58], ebx
0x71BA18: jbe     loc_71BDEB
0x71BA1E: mov     edx, [ebp+5Ch]
0x71BA21: mov     eax, [ebp+60h]
0x71BA24: mov     eax, [edx+eax*4]
0x71BA27: imul    eax, [esp+7Ch+arg_4]
0x71BA2F: mov     esi, [edx+ebx*4-4]
0x71BA33: mov     ecx, [ebp+50h]
0x71BA36: add     esi, ecx
0x71BA38: add     ecx, eax
0x71BA3A: add     ecx, [edx+ebx*4]
0x71BA3D: mov     edx, [ebp+54h]
0x71BA40: add     esi, eax
0x71BA42: lea     eax, [edx+ebx*4]
0x71BA45: mov     edx, [eax]
0x71BA47: mov     eax, [eax-4]
0x71BA4A: cmp     eax, 1
0x71BA4D: mov     [esp+7Ch+var_60], edx
0x71BA51: mov     edx, [ebp+58h]
0x71BA54: mov     edi, [edx+ebx*4]
0x71BA57: lea     edx, [edx+ebx*4]
0x71BA5A: mov     [esp+7Ch+var_64], edi
0x71BA5E: lea     edi, [eax+eax*2]
0x71BA61: mov     [esp+7Ch+var_54], edi
0x71BA65: jnz     short loc_71BAB3
0x71BA67: mov     edi, [esp+7Ch+var_64]
0x71BA6B: test    edi, edi
0x71BA6D: jbe     loc_71BBB5
0x71BA73: movzx   edx, byte ptr [esi]
0x71BA76: movzx   eax, byte ptr [esi+3]
0x71BA7A: add     eax, edx
0x71BA7C: shr     eax, 1
0x71BA7E: mov     [ecx], al
0x71BA80: movzx   edx, byte ptr [esi+1]
0x71BA84: movzx   eax, byte ptr [esi+4]
0x71BA88: add     eax, edx
0x71BA8A: shr     eax, 1
0x71BA8C: mov     [ecx+1], al
0x71BA8F: movzx   eax, byte ptr [esi+5]
0x71BA93: movzx   edx, byte ptr [esi+2]
0x71BA97: add     ecx, 1
0x71BA9A: add     eax, edx
0x71BA9C: add     ecx, 1
0x71BA9F: shr     eax, 1
0x71BAA1: mov     [ecx], al
0x71BAA3: add     ecx, 1
0x71BAA6: add     esi, 6
0x71BAA9: sub     edi, 1
0x71BAAC: jnz     short loc_71BA73
0x71BAAE: jmp     loc_71BBB5
0x71BAB3: cmp     dword ptr [edx-4], 1
0x71BAB7: jnz     short loc_71BB05
0x71BAB9: mov     edi, [esp+7Ch+var_60]
0x71BABD: test    edi, edi
0x71BABF: jbe     loc_71BBB5
0x71BAC5: movzx   edx, byte ptr [esi]
0x71BAC8: movzx   eax, byte ptr [esi+3]
0x71BACC: add     eax, edx
0x71BACE: shr     eax, 1
0x71BAD0: mov     [ecx], al
0x71BAD2: movzx   edx, byte ptr [esi+1]
0x71BAD6: movzx   eax, byte ptr [esi+4]
0x71BADA: add     eax, edx
0x71BADC: shr     eax, 1
0x71BADE: mov     [ecx+1], al
0x71BAE1: movzx   eax, byte ptr [esi+5]
0x71BAE5: movzx   edx, byte ptr [esi+2]
0x71BAE9: add     ecx, 1
0x71BAEC: add     eax, edx
0x71BAEE: add     ecx, 1
0x71BAF1: shr     eax, 1
0x71BAF3: mov     [ecx], al
0x71BAF5: add     ecx, 1
0x71BAF8: add     esi, 6
0x71BAFB: sub     edi, 1
0x71BAFE: jnz     short loc_71BAC5
0x71BB00: jmp     loc_71BBB5
0x71BB05: mov     eax, [esp+7Ch+var_64]
0x71BB09: test    eax, eax
0x71BB0B: jbe     loc_71BBB5
0x71BB11: mov     [esp+7Ch+var_5C], eax
0x71BB15: jmp     short loc_71BB20
0x71BB17: align 10h
0x71BB20: mov     edx, [esp+7Ch+var_60]
0x71BB24: test    edx, edx
0x71BB26: jbe     loc_71BBA8
0x71BB2C: lea     eax, [edi+esi]
0x71BB2F: neg     edi
0x71BB31: mov     [esp+7Ch+var_64], edx
0x71BB35: movzx   ebx, byte ptr [eax+3]
0x71BB39: movzx   edx, byte ptr [edi+eax+3]
0x71BB3E: add     edx, ebx
0x71BB40: movzx   ebx, byte ptr [eax]
0x71BB43: add     edx, ebx
0x71BB45: movzx   ebx, byte ptr [esi]
0x71BB48: add     edx, ebx
0x71BB4A: shr     edx, 2
0x71BB4D: mov     [ecx], dl
0x71BB4F: movzx   ebx, byte ptr [edi+eax+4]
0x71BB54: movzx   edx, byte ptr [edi+eax+1]
0x71BB59: add     edx, ebx
0x71BB5B: movzx   ebx, byte ptr [eax+4]
0x71BB5F: add     edx, ebx
0x71BB61: movzx   ebx, byte ptr [eax+1]
0x71BB65: add     edx, ebx
0x71BB67: shr     edx, 2
0x71BB6A: mov     [ecx+1], dl
0x71BB6D: movzx   ebx, byte ptr [edi+eax+5]
0x71BB72: movzx   edx, byte ptr [edi+eax+2]
0x71BB77: add     ecx, 1
0x71BB7A: add     edx, ebx
0x71BB7C: movzx   ebx, byte ptr [eax+5]
0x71BB80: add     edx, ebx
0x71BB82: movzx   ebx, byte ptr [eax+2]
0x71BB86: add     edx, ebx
0x71BB88: add     ecx, 1
0x71BB8B: shr     edx, 2
0x71BB8E: mov     [ecx], dl
0x71BB90: add     ecx, 1
0x71BB93: add     esi, 6
0x71BB96: add     eax, 6
0x71BB99: sub     [esp+7Ch+var_64], 1
0x71BB9E: jnz     short loc_71BB35
0x71BBA0: mov     edi, [esp+7Ch+var_54]
0x71BBA4: mov     ebx, [esp+7Ch+var_58]
0x71BBA8: add     esi, edi
0x71BBAA: sub     [esp+7Ch+var_5C], 1
0x71BBAF: jnz     loc_71BB20
0x71BBB5: add     ebx, 1
0x71BBB8: cmp     ebx, [esp+7Ch+var_68]
0x71BBBC: mov     [esp+7Ch+var_58], ebx
0x71BBC0: jb      loc_71BA1E
0x71BBC6: jmp     loc_71BDEB
0x71BBCB: push    offset unk_B25E00
0x71BBD0: lea     ecx, [esp+80h+var_50]
0x71BBD4: call    sub_71AD40
0x71BBD9: test    al, al
0x71BBDB: jz      loc_71BDF2
0x71BBE1: mov     ebx, 1
0x71BBE6: cmp     esi, ebx
0x71BBE8: mov     [esp+7Ch+var_64], ebx
0x71BBEC: jbe     loc_71BDEB
0x71BBF2: mov     edx, [ebp+5Ch]
0x71BBF5: mov     eax, [ebp+60h]
0x71BBF8: mov     eax, [edx+eax*4]
0x71BBFB: imul    eax, [esp+7Ch+arg_4]
0x71BC03: mov     esi, [edx+ebx*4-4]
0x71BC07: mov     ecx, [ebp+50h]
0x71BC0A: add     esi, ecx
0x71BC0C: add     ecx, eax
0x71BC0E: add     ecx, [edx+ebx*4]
0x71BC11: mov     edx, [ebp+54h]
0x71BC14: add     esi, eax
0x71BC16: lea     eax, [edx+ebx*4]
0x71BC19: mov     edx, [eax]
0x71BC1B: mov     eax, [eax-4]
0x71BC1E: cmp     eax, 1
0x71BC21: mov     [esp+7Ch+var_5C], edx
0x71BC25: mov     edx, [ebp+58h]
0x71BC28: mov     edi, [edx+ebx*4]
0x71BC2B: lea     edx, [edx+ebx*4]
0x71BC2E: mov     [esp+7Ch+var_58], edi
0x71BC32: lea     edi, ds:0[eax*4]
0x71BC39: mov     [esp+7Ch+var_54], edi
0x71BC3D: jnz     short loc_71BCA2
0x71BC3F: mov     edi, [esp+7Ch+var_58]
0x71BC43: test    edi, edi
0x71BC45: jbe     loc_71BDDA
0x71BC4B: jmp     short loc_71BC50
0x71BC4D: align 10h
0x71BC50: movzx   edx, byte ptr [esi]
0x71BC53: movzx   eax, byte ptr [esi+4]
0x71BC57: add     eax, edx
0x71BC59: shr     eax, 1
0x71BC5B: mov     [ecx], al
0x71BC5D: movzx   edx, byte ptr [esi+1]
0x71BC61: movzx   eax, byte ptr [esi+5]
0x71BC65: add     eax, edx
0x71BC67: shr     eax, 1
0x71BC69: mov     [ecx+1], al
0x71BC6C: movzx   edx, byte ptr [esi+2]
0x71BC70: movzx   eax, byte ptr [esi+6]
0x71BC74: add     ecx, 1
0x71BC77: add     eax, edx
0x71BC79: shr     eax, 1
0x71BC7B: mov     [ecx+1], al
0x71BC7E: movzx   eax, byte ptr [esi+7]
0x71BC82: movzx   edx, byte ptr [esi+3]
0x71BC86: add     ecx, 1
0x71BC89: add     eax, edx
0x71BC8B: add     ecx, 1
0x71BC8E: shr     eax, 1
0x71BC90: mov     [ecx], al
0x71BC92: add     ecx, 1
0x71BC95: add     esi, 8
0x71BC98: sub     edi, 1
0x71BC9B: jnz     short loc_71BC50
0x71BC9D: jmp     loc_71BDDA
0x71BCA2: cmp     dword ptr [edx-4], 1
0x71BCA6: jnz     short loc_71BD06
0x71BCA8: mov     edi, [esp+7Ch+var_5C]
0x71BCAC: test    edi, edi
0x71BCAE: jbe     loc_71BDDA
0x71BCB4: movzx   edx, byte ptr [esi]
0x71BCB7: movzx   eax, byte ptr [esi+4]
0x71BCBB: add     eax, edx
0x71BCBD: shr     eax, 1
0x71BCBF: mov     [ecx], al
0x71BCC1: movzx   edx, byte ptr [esi+1]
0x71BCC5: movzx   eax, byte ptr [esi+5]
0x71BCC9: add     eax, edx
0x71BCCB: shr     eax, 1
0x71BCCD: mov     [ecx+1], al
0x71BCD0: movzx   edx, byte ptr [esi+2]
0x71BCD4: movzx   eax, byte ptr [esi+6]
0x71BCD8: add     ecx, 1
0x71BCDB: add     eax, edx
0x71BCDD: shr     eax, 1
0x71BCDF: mov     [ecx+1], al
0x71BCE2: movzx   eax, byte ptr [esi+7]
0x71BCE6: movzx   edx, byte ptr [esi+3]
0x71BCEA: add     ecx, 1
0x71BCED: add     eax, edx
0x71BCEF: add     ecx, 1
0x71BCF2: shr     eax, 1
0x71BCF4: mov     [ecx], al
0x71BCF6: add     ecx, 1
0x71BCF9: add     esi, 8
0x71BCFC: sub     edi, 1
0x71BCFF: jnz     short loc_71BCB4
0x71BD01: jmp     loc_71BDDA
0x71BD06: mov     eax, [esp+7Ch+var_58]
0x71BD0A: test    eax, eax
0x71BD0C: jbe     loc_71BDDA
0x71BD12: mov     [esp+7Ch+var_60], eax
0x71BD16: jmp     short loc_71BD20
0x71BD18: align 10h
0x71BD20: mov     edx, [esp+7Ch+var_5C]
0x71BD24: test    edx, edx
0x71BD26: jbe     loc_71BDCD
0x71BD2C: lea     eax, [edi+esi]
0x71BD2F: neg     edi
0x71BD31: mov     [esp+7Ch+var_58], edx
0x71BD35: movzx   ebx, byte ptr [eax+4]
0x71BD39: movzx   edx, byte ptr [edi+eax+4]
0x71BD3E: add     edx, ebx
0x71BD40: movzx   ebx, byte ptr [esi]
0x71BD43: add     edx, ebx
0x71BD45: movzx   ebx, byte ptr [eax]
0x71BD48: add     edx, ebx
0x71BD4A: shr     edx, 2
0x71BD4D: mov     [ecx], dl
0x71BD4F: movzx   ebx, byte ptr [edi+eax+5]
0x71BD54: movzx   edx, byte ptr [edi+eax+1]
0x71BD59: add     edx, ebx
0x71BD5B: movzx   ebx, byte ptr [eax+5]
0x71BD5F: add     edx, ebx
0x71BD61: movzx   ebx, byte ptr [eax+1]
0x71BD65: add     edx, ebx
0x71BD67: shr     edx, 2
0x71BD6A: mov     [ecx+1], dl
0x71BD6D: movzx   ebx, byte ptr [edi+eax+6]
0x71BD72: movzx   edx, byte ptr [edi+eax+2]
0x71BD77: add     edx, ebx
0x71BD79: movzx   ebx, byte ptr [eax+6]
0x71BD7D: add     ecx, 1
0x71BD80: add     edx, ebx
0x71BD82: movzx   ebx, byte ptr [eax+2]
0x71BD86: add     edx, ebx
0x71BD88: shr     edx, 2
0x71BD8B: mov     [ecx+1], dl
0x71BD8E: movzx   ebx, byte ptr [edi+eax+7]
0x71BD93: movzx   edx, byte ptr [edi+eax+3]
0x71BD98: add     ecx, 1
0x71BD9B: add     edx, ebx
0x71BD9D: movzx   ebx, byte ptr [eax+7]
0x71BDA1: add     edx, ebx
0x71BDA3: movzx   ebx, byte ptr [eax+3]
0x71BDA7: add     edx, ebx
0x71BDA9: add     ecx, 1
0x71BDAC: shr     edx, 2
0x71BDAF: mov     [ecx], dl
0x71BDB1: add     ecx, 1
0x71BDB4: add     esi, 8
0x71BDB7: add     eax, 8
0x71BDBA: sub     [esp+7Ch+var_58], 1
0x71BDBF: jnz     loc_71BD35
0x71BDC5: mov     edi, [esp+7Ch+var_54]
0x71BDC9: mov     ebx, [esp+7Ch+var_64]
0x71BDCD: add     esi, edi
0x71BDCF: sub     [esp+7Ch+var_60], 1
0x71BDD4: jnz     loc_71BD20
0x71BDDA: add     ebx, 1
0x71BDDD: cmp     ebx, [esp+7Ch+var_68]
0x71BDE1: mov     [esp+7Ch+var_64], ebx
0x71BDE5: jb      loc_71BBF2
0x71BDEB: mov     ebx, [esp+7Ch+arg_0]
0x71BDF2: mov     eax, [esp+7Ch+arg_4]
0x71BDF9: add     eax, 1
0x71BDFC: cmp     eax, [ebx+6Ch]
0x71BDFF: mov     [esp+7Ch+arg_4], eax
0x71BE06: jb      loc_71B9F3
0x71BE0C: mov     eax, ebp
0x71BE0E: jmp     short loc_71BE12
0x71BE10: xor     eax, eax
0x71BE12: mov     ecx, [esp+7Ch+var_C]
0x71BE16: mov     large fs:0, ecx
0x71BE1D: pop     ecx
0x71BE1E: pop     edi
0x71BE1F: pop     esi
0x71BE20: pop     ebp
0x71BE21: pop     ebx
0x71BE22: add     esp, 68h
0x71BE25: retn    8
