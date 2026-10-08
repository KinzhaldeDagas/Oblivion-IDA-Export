0x98E673: mov     ecx, [ebp-18h]
0x98E676: test    cx, cx
0x98E679: jns     loc_98E7C2
0x98E67F: mov     eax, [edi]
0x98E681: mov     edx, [edi+4]
0x98E684: add     edi, 8
0x98E687: jmp     loc_98E7F7
0x98E7C2: test    cx, 1000h
0x98E7C7: jnz     loc_98E67F
0x98E7CD: add     edi, 4
0x98E7D0: test    cl, 20h
0x98E7D3: jz      short loc_98E7EA
0x98E7D5: test    cl, 40h
0x98E7D8: mov     [ebp-2Ch], edi
0x98E7DB: jz      short loc_98E7E3
0x98E7DD: movsx   eax, word ptr [edi-4]
0x98E7E1: jmp     short loc_98E7E7
0x98E7E3: movzx   eax, word ptr [edi-4]
0x98E7E7: cdq
0x98E7E8: jmp     short loc_98E7FA
0x98E7EA: test    cl, 40h
0x98E7ED: mov     eax, [edi-4]
0x98E7F0: jz      short loc_98E7F5
0x98E7F2: cdq
0x98E7F3: jmp     short loc_98E7F7
0x98E7F5: xor     edx, edx
0x98E7F7: mov     [ebp-2Ch], edi
0x98E7FA: test    cl, 40h
0x98E7FD: jz      short loc_98E817
0x98E7FF: cmp     edx, esi
0x98E801: jg      short loc_98E817
0x98E803: jl      short loc_98E809
0x98E805: cmp     eax, esi
0x98E807: jnb     short loc_98E817
0x98E809: neg     eax
0x98E80B: adc     edx, 0
0x98E80E: neg     edx
0x98E810: or      dword ptr [ebp-18h], 100h
0x98E817: test    word ptr [ebp-18h], 9000h
0x98E81D: mov     ebx, edx
0x98E81F: mov     edi, eax
0x98E821: jnz     short loc_98E825
0x98E823: xor     ebx, ebx
0x98E825: cmp     dword ptr [ebp-20h], 0
0x98E829: jge     short loc_98E834
0x98E82B: mov     dword ptr [ebp-20h], 1
0x98E832: jmp     short loc_98E845
0x98E834: and     dword ptr [ebp-18h], 0FFFFFFF7h
0x98E838: mov     eax, 200h
0x98E83D: cmp     [ebp-20h], eax
0x98E840: jle     short loc_98E845
0x98E842: mov     [ebp-20h], eax
0x98E845: mov     eax, edi
0x98E847: or      eax, ebx
0x98E849: jnz     short loc_98E84F
0x98E84B: and     dword ptr [ebp-3Ch], 0
0x98E84F: lea     esi, [ebp+1EBh]
0x98E855: mov     eax, [ebp-20h]
0x98E858: dec     dword ptr [ebp-20h]
0x98E85B: test    eax, eax
0x98E85D: jg      short loc_98E865
0x98E85F: mov     eax, edi
0x98E861: or      eax, ebx
0x98E863: jz      short loc_98E889
0x98E865: mov     eax, [ebp-28h]
0x98E868: cdq
0x98E869: push    edx
0x98E86A: push    eax
0x98E86B: push    ebx
0x98E86C: push    edi
0x98E86D: call    __aulldvrm
0x98E872: add     ecx, 30h ; '0'
0x98E875: cmp     ecx, 39h ; '9'
0x98E878: mov     [ebp-68h], ebx
0x98E87B: mov     edi, eax
0x98E87D: mov     ebx, edx
0x98E87F: jle     short loc_98E884
0x98E881: add     ecx, [ebp-4Ch]
0x98E884: mov     [esi], cl
0x98E886: dec     esi
0x98E887: jmp     short loc_98E855
0x98E889: lea     eax, [ebp+1EBh]
0x98E88F: sub     eax, esi
0x98E891: inc     esi
0x98E892: test    word ptr [ebp-18h], 200h
0x98E898: mov     [ebp-28h], eax
0x98E89B: mov     [ebp-24h], esi
0x98E89E: jz      short loc_98E8EC
0x98E8A0: test    eax, eax
0x98E8A2: jz      short loc_98E8AB
0x98E8A4: mov     ecx, esi
0x98E8A6: cmp     byte ptr [ecx], 30h ; '0'
0x98E8A9: jz      short loc_98E8EC
0x98E8AB: dec     dword ptr [ebp-24h]
0x98E8AE: mov     ecx, [ebp-24h]
0x98E8B1: mov     byte ptr [ecx], 30h ; '0'
0x98E8B4: inc     eax
0x98E8B5: jmp     short loc_98E8E9
0x98E8E9: mov     [ebp+1F8h+SizeConverted], eax
0x98E8EC: cmp     [ebp+1F8h+var_248], 0
0x98E8F0: jnz     loc_98E9F1
0x98E8F6: mov     eax, [ebp+1F8h+var_210]
0x98E8F9: test    al, 40h
0x98E8FB: jz      short loc_98E922
0x98E8FD: test    ax, 100h
0x98E901: jz      short loc_98E909
0x98E903: mov     [ebp+1F8h+var_230], 2Dh ; '-'
0x98E907: jmp     short loc_98E91B
0x98E909: test    al, 1
0x98E90B: jz      short loc_98E913
0x98E90D: mov     [ebp+1F8h+var_230], 2Bh ; '+'
0x98E911: jmp     short loc_98E91B
0x98E913: test    al, 2
0x98E915: jz      short loc_98E922
0x98E917: mov     [ebp+1F8h+var_230], 20h ; ' '
0x98E91B: mov     [ebp+1F8h+var_234], 1
0x98E922: mov     ebx, [ebp+1F8h+var_238]
0x98E925: sub     ebx, [ebp+1F8h+SizeConverted]
0x98E928: sub     ebx, [ebp+1F8h+var_234]
0x98E92B: test    byte ptr [ebp+1F8h+var_210], 0Ch
0x98E92F: jnz     short loc_98E942
0x98E931: push    [ebp+1F8h+File]; File
0x98E934: lea     eax, [ebp+1F8h+var_22C]
0x98E937: push    ebx; int
0x98E938: push    20h ; ' '; char
0x98E93A: call    _write_multi_char
0x98E93F: add     esp, 0Ch
0x98E942: push    [ebp+1F8h+var_234]
0x98E945: mov     edi, [ebp+1F8h+File]
0x98E948: lea     eax, [ebp+1F8h+var_22C]
0x98E94B: lea     ecx, [ebp+1F8h+var_230]
0x98E94E: call    _write_string
0x98E953: test    byte ptr [ebp+1F8h+var_210], 8
0x98E957: pop     ecx
0x98E958: jz      short loc_98E96F
0x98E95A: test    byte ptr [ebp+1F8h+var_210], 4
0x98E95E: jnz     short loc_98E96F
0x98E960: push    edi; File
0x98E961: push    ebx; int
0x98E962: push    30h ; '0'; char
0x98E964: lea     eax, [ebp+1F8h+var_22C]
0x98E967: call    _write_multi_char
0x98E96C: add     esp, 0Ch
0x98E96F: cmp     [ebp+1F8h+var_23C], 0
0x98E973: mov     eax, [ebp+1F8h+SizeConverted]
0x98E976: jz      short loc_98E9C9
0x98E978: test    eax, eax
0x98E97A: jle     short loc_98E9C9
0x98E97C: mov     esi, [ebp+1F8h+var_21C]
0x98E97F: mov     [ebp+1F8h+var_260], eax
0x98E982: movzx   eax, word ptr [esi]
0x98E985: dec     [ebp+1F8h+var_260]
0x98E988: push    eax; WCh
0x98E989: push    6; SizeInBytes
0x98E98B: lea     eax, [ebp+1F8h+var_C]
0x98E991: push    eax; MbCh
0x98E992: lea     eax, [ebp+1F8h+var_268]
0x98E995: inc     esi
0x98E996: push    eax; SizeConverted
0x98E997: inc     esi
0x98E998: call    _wctomb_s
0x98E99D: add     esp, 10h
0x98E9A0: test    eax, eax
0x98E9A2: jnz     short loc_98E9C3
0x98E9A4: cmp     [ebp+1F8h+var_268], eax
0x98E9A7: jz      short loc_98E9C3
0x98E9A9: push    [ebp+1F8h+var_268]
0x98E9AC: lea     eax, [ebp+1F8h+var_22C]
0x98E9AF: lea     ecx, [ebp+1F8h+var_C]
0x98E9B5: call    _write_string
0x98E9BA: cmp     [ebp+1F8h+var_260], 0
0x98E9BE: pop     ecx
0x98E9BF: jnz     short loc_98E982
0x98E9C1: jmp     short loc_98E9D6
0x98E9C3: or      [ebp+1F8h+var_22C], 0FFFFFFFFh
0x98E9C7: jmp     short loc_98E9D6
0x98E9C9: mov     ecx, [ebp+1F8h+var_21C]
0x98E9CC: push    eax
0x98E9CD: lea     eax, [ebp+1F8h+var_22C]
0x98E9D0: call    _write_string
0x98E9D5: pop     ecx
0x98E9D6: cmp     [ebp+1F8h+var_22C], 0
0x98E9DA: jl      short loc_98E9F1
0x98E9DC: test    byte ptr [ebp+1F8h+var_210], 4
0x98E9E0: jz      short loc_98E9F1
0x98E9E2: push    edi; File
0x98E9E3: push    ebx; int
0x98E9E4: push    20h ; ' '; char
0x98E9E6: lea     eax, [ebp+1F8h+var_22C]
0x98E9E9: call    _write_multi_char
0x98E9EE: add     esp, 0Ch
0x98E9F1: cmp     [ebp+1F8h+Memory], 0
0x98E9F5: jz      short __output_l___def_98E289
0x98E9F7: push    [ebp+1F8h+Memory]; Memory
0x98E9FA: call    _free
0x98E9FF: and     [ebp+1F8h+Memory], 0
0x98EA03: pop     ecx
