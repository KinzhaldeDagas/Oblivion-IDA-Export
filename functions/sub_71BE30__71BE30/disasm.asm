0x71BE30: push    0FFFFFFFFh
0x71BE32: push    offset SEH_71BE30
0x71BE37: mov     eax, large fs:0
0x71BE3D: push    eax
0x71BE3E: push    ebx
0x71BE3F: push    ebp
0x71BE40: push    esi
0x71BE41: push    edi
0x71BE42: mov     eax, ds:0B30AACh
0x71BE47: xor     eax, esp
0x71BE49: push    eax
0x71BE4A: lea     eax, [esp+20h+var_C]
0x71BE4E: mov     large fs:0, eax
0x71BE54: mov     ebx, ecx
0x71BE56: mov     ecx, [esp+20h+arg_C]
0x71BE5A: mov     esi, [esp+20h+arg_8]
0x71BE5E: mov     edx, [esp+20h+arg_4]
0x71BE62: mov     eax, [ebx]
0x71BE64: push    ecx
0x71BE65: mov     ecx, [esp+24h+arg_0]
0x71BE69: lea     ebp, [esi+8]
0x71BE6C: push    ebp
0x71BE6D: push    edx
0x71BE6E: mov     edx, [eax+38h]
0x71BE71: push    ecx
0x71BE72: mov     ecx, ebx
0x71BE74: call    edx
0x71BE76: mov     edi, eax
0x71BE78: cmp     edi, ebp
0x71BE7A: jnz     short loc_71BE80
0x71BE7C: mov     eax, esi
0x71BE7E: jmp     short loc_71BEFC
0x71BE80: test    edi, edi
0x71BE82: jnz     short loc_71BE88
0x71BE84: xor     eax, eax
0x71BE86: jmp     short loc_71BEFC
0x71BE88: push    ebp
0x71BE89: mov     ecx, edi
0x71BE8B: call    sub_71AD40
0x71BE90: test    al, al
0x71BE92: jnz     short loc_71BE7C
0x71BE94: mov     eax, [ebx]
0x71BE96: mov     edx, [eax+0Ch]
0x71BE99: push    edi
0x71BE9A: push    ebp
0x71BE9B: mov     ecx, ebx
0x71BE9D: call    edx
0x71BE9F: test    al, al
0x71BEA1: jz      short loc_71BE84
0x71BEA3: push    70h ; 'p'; Size
0x71BEA5: call    FormHeapAlloc
0x71BEAA: add     esp, 4
0x71BEAD: mov     [esp+20h+arg_8], eax
0x71BEB1: test    eax, eax
0x71BEB3: mov     [esp+20h+var_4], 0
0x71BEBB: jz      short loc_71BEDF
0x71BEBD: mov     edx, [esi+6Ch]
0x71BEC0: mov     ebp, [esi+60h]
0x71BEC3: mov     eax, [esi+58h]
0x71BEC6: mov     eax, [eax]
0x71BEC8: mov     ecx, [esi+54h]
0x71BECB: mov     ecx, [ecx]
0x71BECD: push    edx
0x71BECE: push    ebp
0x71BECF: push    edi
0x71BED0: push    eax
0x71BED1: push    ecx
0x71BED2: mov     ecx, [esp+34h+arg_8]
0x71BED6: call    NiPixelData__NiPixelData
0x71BEDB: mov     edi, eax
0x71BEDD: jmp     short loc_71BEE1
0x71BEDF: xor     edi, edi
0x71BEE1: mov     edx, [ebx]
0x71BEE3: mov     eax, [edx+2Ch]
0x71BEE6: push    0FFFFFFFFh
0x71BEE8: push    esi
0x71BEE9: push    edi
0x71BEEA: mov     ecx, ebx
0x71BEEC: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x71BEF4: call    eax
0x71BEF6: neg     al
0x71BEF8: sbb     eax, eax
0x71BEFA: and     eax, edi
0x71BEFC: mov     ecx, [esp+20h+var_C]
0x71BF00: mov     large fs:0, ecx
0x71BF07: pop     ecx
0x71BF08: pop     edi
0x71BF09: pop     esi
0x71BF0A: pop     ebp
0x71BF0B: pop     ebx
0x71BF0C: add     esp, 0Ch
0x71BF0F: retn    10h
