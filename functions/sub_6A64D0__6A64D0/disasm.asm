0x6A64D0: sub     esp, 8
0x6A64D3: mov     eax, [esp+8+arg_4]
0x6A64D7: push    ebp
0x6A64D8: push    esi
0x6A64D9: mov     esi, [esp+10h+arg_0]
0x6A64DD: push    edi
0x6A64DE: push    eax
0x6A64DF: push    esi
0x6A64E0: lea     edx, [esp+1Ch+var_8]
0x6A64E4: push    edx
0x6A64E5: mov     [esp+20h+var_4], ecx
0x6A64E9: mov     [esp+20h+var_8], 0
0x6A64F1: call    sub_6A5510
0x6A64F6: mov     edi, eax
0x6A64F8: test    edi, edi
0x6A64FA: jle     loc_6A6598
0x6A6500: mov     ebp, [esp+14h+var_8]
0x6A6504: test    ebp, ebp
0x6A6506: jz      loc_6A6598
0x6A650C: push    ebx
0x6A650D: push    offset sub_6A5C00
0x6A6512: push    0Ch
0x6A6514: push    edi
0x6A6515: push    ebp
0x6A6516: mov     ds:0B3C0E4h, esi
0x6A651C: call    unknown_libname_60
0x6A6521: add     esp, 10h
0x6A6524: xor     esi, esi
0x6A6526: test    edi, edi
0x6A6528: jle     short loc_6A654D
0x6A652A: mov     ebx, ebp
0x6A652C: lea     esp, [esp+0]
0x6A6530: mov     eax, [esp+18h+arg_4]
0x6A6534: mov     ecx, [esp+18h+var_4]
0x6A6538: push    ebx
0x6A6539: push    eax
0x6A653A: call    sub_6A5EF0
0x6A653F: test    al, al
0x6A6541: jnz     short loc_6A6562
0x6A6543: add     esi, 1
0x6A6546: add     ebx, 0Ch
0x6A6549: cmp     esi, edi
0x6A654B: jl      short loc_6A6530
0x6A654D: push    ebp
0x6A654E: call    FormHeapFree
0x6A6553: add     esp, 4
0x6A6556: pop     ebx
0x6A6557: pop     edi
0x6A6558: pop     esi
0x6A6559: xor     al, al
0x6A655B: pop     ebp
0x6A655C: add     esp, 8
0x6A655F: retn    0Ch
0x6A6562: cmp     esi, edi
0x6A6564: jge     short loc_6A654D
0x6A6566: lea     ecx, [esi+esi*2]
0x6A6569: mov     edx, [ebp+ecx*4+0]
0x6A656D: lea     eax, [ebp+ecx*4+0]
0x6A6571: mov     ecx, [esp+18h+arg_8]
0x6A6575: mov     [ecx], edx
0x6A6577: mov     edx, [eax+4]
0x6A657A: mov     [ecx+4], edx
0x6A657D: mov     eax, [eax+8]
0x6A6580: push    ebp
0x6A6581: mov     [ecx+8], eax
0x6A6584: call    FormHeapFree
0x6A6589: add     esp, 4
0x6A658C: pop     ebx
0x6A658D: pop     edi
0x6A658E: pop     esi
0x6A658F: mov     al, 1
0x6A6591: pop     ebp
0x6A6592: add     esp, 8
0x6A6595: retn    0Ch
0x6A6598: pop     edi
0x6A6599: pop     esi
0x6A659A: xor     al, al
0x6A659C: pop     ebp
0x6A659D: add     esp, 8
0x6A65A0: retn    0Ch
