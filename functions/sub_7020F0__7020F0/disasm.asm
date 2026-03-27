0x7020F0: push    0FFFFFFFFh
0x7020F2: push    offset SEH_7020F0
0x7020F7: mov     eax, large fs:0
0x7020FD: push    eax
0x7020FE: push    ecx
0x7020FF: push    esi
0x702100: push    edi
0x702101: mov     eax, ds:0B30AACh
0x702106: xor     eax, esp
0x702108: push    eax
0x702109: lea     eax, [esp+1Ch+var_C]
0x70210D: mov     large fs:0, eax
0x702113: mov     esi, ecx
0x702115: cmp     dword ptr [esi+34h], 0
0x702119: jz      short loc_702196
0x70211B: cmp     dword ptr [esi+3Ch], 0
0x70211F: lea     edi, [esi+3Ch]
0x702122: jnz     short loc_702196
0x702124: call    sub_71B280
0x702129: mov     ecx, [edi]
0x70212B: mov     edx, [eax]
0x70212D: mov     edx, [edx+8]
0x702130: push    ecx
0x702131: mov     ecx, [esi+38h]
0x702134: push    ecx
0x702135: mov     ecx, eax
0x702137: call    edx
0x702139: mov     esi, eax
0x70213B: test    esi, esi
0x70213D: mov     [esp+1Ch+var_10], esi
0x702141: jz      short loc_70214D
0x702143: lea     eax, [esi+4]
0x702146: push    eax; lpAddend
0x702147: call    dword ptr ds:0A28078h
0x70214D: mov     eax, [edi]
0x70214F: test    eax, eax
0x702151: mov     [esp+1Ch+var_4], 0
0x702159: jz      short loc_702166
0x70215B: cmp     esi, eax
0x70215D: jz      short loc_702172
0x70215F: lea     ecx, [esp+1Ch+var_10]
0x702163: push    ecx
0x702164: jmp     short loc_70216B
0x702166: lea     edx, [esp+1Ch+var_10]
0x70216A: push    edx
0x70216B: mov     ecx, edi
0x70216D: call    sub_55E2A0
0x702172: test    esi, esi
0x702174: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x70217C: jz      short loc_702196
0x70217E: lea     eax, [esi+4]
0x702181: push    eax; lpAddend
0x702182: call    dword ptr ds:0A2807Ch
0x702188: test    eax, eax
0x70218A: jnz     short loc_702196
0x70218C: mov     edx, [esi]
0x70218E: mov     eax, [edx]
0x702190: push    1
0x702192: mov     ecx, esi
0x702194: call    eax
0x702196: mov     ecx, [esp+1Ch+var_C]
0x70219A: mov     large fs:0, ecx
0x7021A1: pop     ecx
0x7021A2: pop     edi
0x7021A3: pop     esi
0x7021A4: add     esp, 10h
0x7021A7: retn
