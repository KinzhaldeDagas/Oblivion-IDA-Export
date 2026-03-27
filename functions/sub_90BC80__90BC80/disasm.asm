0x90BC80: mov     eax, [esp+arg_8]
0x90BC84: mov     eax, [eax]
0x90BC86: sub     esp, 224h
0x90BC8C: push    ebx
0x90BC8D: push    ebp
0x90BC8E: push    esi
0x90BC8F: xor     ebx, ebx
0x90BC91: xor     esi, esi
0x90BC93: dec     eax; switch 28 cases
0x90BC94: cmp     eax, 1Bh
0x90BC97: push    edi
0x90BC98: ja      def_90BCA5
0x90BC9E: movzx   ecx, ds:byte_90C004[eax]
0x90BCA5: jmp     ds:jpt_90BCA5[ecx*4]; switch jump
0x90BCAC: mov     ecx, [esp+234h+arg_4]; jumptable 0090BCA5 cases 1-18,24
0x90BCB3: call    sub_940B80
0x90BCB8: mov     esi, eax
0x90BCBA: pop     edi
0x90BCBB: pop     esi
0x90BCBC: pop     ebp
0x90BCBD: pop     ebx
0x90BCBE: add     esp, 224h
0x90BCC4: retn
0x90BCC5: mov     esi, [esp+234h+arg_4]; jumptable 0090BCA5 cases 20,21
0x90BCCC: mov     ecx, esi
0x90BCCE: call    sub_940B70
0x90BCD3: test    eax, eax
0x90BCD5: jz      short loc_90BCF3
0x90BCD7: mov     ecx, esi
0x90BCD9: call    sub_940B70
0x90BCDE: imul    eax, [esp+234h+arg_C]
0x90BCE6: mov     esi, eax
0x90BCE8: pop     edi
0x90BCE9: pop     esi
0x90BCEA: pop     ebp
0x90BCEB: pop     ebx
0x90BCEC: add     esp, 224h
0x90BCF2: retn
0x90BCF3: mov     eax, 1
0x90BCF8: imul    eax, [esp+234h+arg_C]
0x90BD00: mov     esi, eax
0x90BD02: pop     edi
0x90BD03: pop     esi
0x90BD04: pop     ebp
0x90BD05: pop     ebx
0x90BD06: add     esp, 224h
0x90BD0C: retn
0x90BD0D: mov     esi, [esp+234h+arg_C]; jumptable 0090BCA5 case 28
0x90BD14: add     esi, esi
0x90BD16: mov     eax, esi
0x90BD18: pop     edi
0x90BD19: pop     esi
0x90BD1A: pop     ebp
0x90BD1B: pop     ebx
0x90BD1C: add     esp, 224h
0x90BD22: retn
0x90BD23: mov     esi, 4; jumptable 0090BCA5 case 22
0x90BD28: mov     edx, [esp+234h+arg_C]; jumptable 0090BCA5 case 26
0x90BD2F: lea     esi, [esi+edx+4]
0x90BD33: mov     eax, esi
0x90BD35: pop     edi
0x90BD36: pop     esi
0x90BD37: pop     ebp
0x90BD38: pop     ebx
0x90BD39: add     esp, 224h
0x90BD3F: retn
0x90BD40: mov     ecx, [esp+234h+arg_4]; jumptable 0090BCA5 case 25
0x90BD47: call    sub_90D1F0
0x90BD4C: mov     edi, eax
0x90BD4E: mov     ecx, edi
0x90BD50: call    sub_90D240
0x90BD55: mov     ecx, large fs:2Ch
0x90BD5C: mov     esi, eax
0x90BD5E: mov     eax, ds:0BA9DE4h
0x90BD63: mov     ebp, [ecx+eax*4]
0x90BD66: mov     ecx, [ebp+19Ch]
0x90BD6C: mov     [esp+234h+var_214], ebx
0x90BD70: mov     [esp+234h+var_210], ebx
0x90BD74: mov     [esp+234h+var_20C], 80000000h
0x90BD7C: mov     edx, [ecx+20h]
0x90BD7F: lea     eax, ds:10h[esi*4]
0x90BD86: and     eax, 0FFFFFFF0h
0x90BD89: lea     ebx, [edx+eax]
0x90BD8C: cmp     ebx, [ecx+2Ch]
0x90BD8F: ja      short loc_90BD98
0x90BD91: mov     [ecx+20h], ebx
0x90BD94: mov     eax, edx
0x90BD96: jmp     short loc_90BD9E
0x90BD98: mov     edx, [ecx]
0x90BD9A: push    eax
0x90BD9B: call    dword ptr [edx+0Ch]
0x90BD9E: or      esi, 80000000h
0x90BDA4: mov     ecx, edi
0x90BDA6: mov     [esp+234h+var_214], eax
0x90BDAA: mov     [esp+234h+var_20C], esi
0x90BDAE: mov     [esp+234h+var_208], eax
0x90BDB2: call    sub_90D240
0x90BDB7: mov     esi, eax
0x90BDB9: mov     eax, [esp+234h+var_20C]
0x90BDBD: and     eax, 3FFFFFFFh
0x90BDC2: cmp     eax, esi
0x90BDC4: jge     short loc_90BDDE
0x90BDC6: add     eax, eax
0x90BDC8: cmp     esi, eax
0x90BDCA: jl      short loc_90BDCE
0x90BDCC: mov     eax, esi
0x90BDCE: push    4
0x90BDD0: push    eax
0x90BDD1: lea     eax, [esp+23Ch+var_214]
0x90BDD5: push    eax
0x90BDD6: call    sub_8A6E40
0x90BDDB: add     esp, 0Ch
0x90BDDE: mov     ecx, edi
0x90BDE0: mov     [esp+234h+var_210], esi
0x90BDE4: call    sub_90D200
0x90BDE9: mov     ecx, [ebp+19Ch]
0x90BDEF: mov     esi, eax
0x90BDF1: xor     eax, eax
0x90BDF3: mov     [esp+234h+var_224], eax
0x90BDF7: mov     [esp+234h+var_220], eax
0x90BDFB: mov     [esp+234h+var_21C], 80000000h
0x90BE03: mov     edx, [ecx+20h]
0x90BE06: lea     eax, ds:10h[esi*4]
0x90BE0D: and     eax, 0FFFFFFF0h
0x90BE10: lea     ebx, [edx+eax]
0x90BE13: cmp     ebx, [ecx+2Ch]
0x90BE16: ja      short loc_90BE1F
0x90BE18: mov     [ecx+20h], ebx
0x90BE1B: mov     eax, edx
0x90BE1D: jmp     short loc_90BE25
0x90BE1F: mov     edx, [ecx]
0x90BE21: push    eax
0x90BE22: call    dword ptr [edx+0Ch]
0x90BE25: or      esi, 80000000h
0x90BE2B: mov     ecx, edi
0x90BE2D: mov     [esp+234h+var_224], eax
0x90BE31: mov     [esp+234h+var_21C], esi
0x90BE35: mov     [esp+234h+var_218], eax
0x90BE39: call    sub_90D200
0x90BE3E: mov     esi, eax
0x90BE40: mov     eax, [esp+234h+var_21C]
0x90BE44: and     eax, 3FFFFFFFh
0x90BE49: cmp     eax, esi
0x90BE4B: jge     short loc_90BE65
0x90BE4D: add     eax, eax
0x90BE4F: cmp     esi, eax
0x90BE51: jl      short loc_90BE55
0x90BE53: mov     eax, esi
0x90BE55: push    4
0x90BE57: push    eax
0x90BE58: lea     eax, [esp+23Ch+var_224]
0x90BE5C: push    eax
0x90BE5D: call    sub_8A6E40
0x90BE62: add     esp, 0Ch
0x90BE65: mov     ecx, [esp+234h+var_224]
0x90BE69: mov     edx, [esp+234h+var_214]
0x90BE6D: push    ecx
0x90BE6E: mov     ecx, [esp+238h+arg_0]
0x90BE75: push    edx
0x90BE76: push    edi
0x90BE77: mov     [esp+240h+var_220], esi
0x90BE7B: call    sub_90C020
0x90BE80: mov     edi, [esp+234h+arg_4]
0x90BE87: mov     ecx, edi
0x90BE89: mov     esi, eax
0x90BE8B: call    sub_940B70
0x90BE90: test    eax, eax
0x90BE92: jz      short loc_90BE9D
0x90BE94: mov     ecx, edi
0x90BE96: call    sub_940B70
0x90BE9B: jmp     short loc_90BEA2
0x90BE9D: mov     eax, 1
0x90BEA2: mov     ecx, [ebp+19Ch]
0x90BEA8: imul    eax, esi
0x90BEAB: mov     edx, [ecx+28h]
0x90BEAE: mov     esi, eax
0x90BEB0: mov     eax, [esp+234h+var_218]
0x90BEB4: cmp     eax, edx
0x90BEB6: mov     [ecx+20h], eax
0x90BEB9: jnz     short loc_90BEC1
0x90BEBB: mov     edx, [ecx]
0x90BEBD: push    eax
0x90BEBE: call    dword ptr [edx+10h]
0x90BEC1: mov     eax, [esp+234h+var_21C]
0x90BEC5: test    eax, eax
0x90BEC7: js      short loc_90BEE4
0x90BEC9: mov     ecx, [ebp+19Ch]
0x90BECF: and     eax, 3FFFFFFFh
0x90BED4: push    14h
0x90BED6: shl     eax, 2
0x90BED9: push    eax
0x90BEDA: mov     eax, [esp+23Ch+var_224]
0x90BEDE: push    eax
0x90BEDF: call    sub_8A75D0
0x90BEE4: mov     ecx, [ebp+19Ch]
0x90BEEA: mov     eax, [esp+234h+var_208]
0x90BEEE: cmp     eax, [ecx+28h]
0x90BEF1: mov     [ecx+20h], eax
0x90BEF4: jnz     short loc_90BEFC
0x90BEF6: mov     edx, [ecx]
0x90BEF8: push    eax
0x90BEF9: call    dword ptr [edx+10h]
0x90BEFC: mov     eax, [esp+234h+var_20C]
0x90BF00: test    eax, eax
0x90BF02: js      loc_90BFD3; jumptable 0090BCA5 case 23
0x90BF08: mov     ecx, [ebp+19Ch]
0x90BF0E: and     eax, 3FFFFFFFh
0x90BF13: push    14h
0x90BF15: shl     eax, 2
0x90BF18: push    eax
0x90BF19: mov     eax, [esp+23Ch+var_214]
0x90BF1D: push    eax
0x90BF1E: call    sub_8A75D0
0x90BF23: mov     eax, esi
0x90BF25: pop     edi
0x90BF26: pop     esi
0x90BF27: pop     ebp
0x90BF28: pop     ebx
0x90BF29: add     esp, 224h
0x90BF2F: retn
0x90BF30: mov     eax, [esp+234h+arg_4]; jumptable 0090BCA5 case 19
0x90BF37: movzx   ecx, byte ptr [eax+0Dh]
0x90BF3B: mov     edx, [esp+234h+arg_C]
0x90BF42: push    edx
0x90BF43: mov     edx, [esp+238h+arg_0]
0x90BF4A: mov     [esp+238h+var_204], ecx
0x90BF4E: lea     ecx, [esp+238h+var_204]
0x90BF52: push    ecx
0x90BF53: push    eax
0x90BF54: push    edx
0x90BF55: call    sub_90BC80
0x90BF5A: add     esp, 10h
0x90BF5D: mov     esi, eax
0x90BF5F: pop     edi
0x90BF60: pop     esi
0x90BF61: pop     ebp
0x90BF62: pop     ebx
0x90BF63: add     esp, 224h
0x90BF69: retn
0x90BF6A: mov     esi, [esp+234h+arg_C]; jumptable 0090BCA5 case 27
0x90BF71: lea     esi, [esi+esi+4]
0x90BF75: mov     eax, esi
0x90BF77: pop     edi
0x90BF78: pop     esi
0x90BF79: pop     ebp
0x90BF7A: pop     ebx
0x90BF7B: add     esp, 224h
0x90BF81: retn
