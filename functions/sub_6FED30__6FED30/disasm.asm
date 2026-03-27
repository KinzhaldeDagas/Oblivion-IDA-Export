0x6FED30: push    0FFFFFFFFh
0x6FED32: push    offset SEH_7E5B50
0x6FED37: mov     eax, large fs:0
0x6FED3D: push    eax
0x6FED3E: push    ebx
0x6FED3F: push    ebp
0x6FED40: push    esi
0x6FED41: push    edi
0x6FED42: mov     eax, ds:0B30AACh
0x6FED47: xor     eax, esp
0x6FED49: push    eax
0x6FED4A: lea     eax, [esp+20h+var_C]
0x6FED4E: mov     large fs:0, eax
0x6FED54: mov     ebp, ecx
0x6FED56: mov     esi, [esp+20h+arg_0]
0x6FED5A: test    esi, esi
0x6FED5C: jz      loc_6FEE27
0x6FED62: mov     eax, [esi]
0x6FED64: mov     edx, [eax+8]
0x6FED67: mov     ecx, esi
0x6FED69: call    edx
0x6FED6B: cmp     esi, [ebp+50h]
0x6FED6E: mov     ebx, eax
0x6FED70: jz      loc_6FEE27
0x6FED76: mov     eax, [ebp+54h]
0x6FED79: sub     eax, 0
0x6FED7C: jz      short loc_6FED95
0x6FED7E: sub     eax, 1
0x6FED81: jz      short loc_6FED87
0x6FED83: test    ebx, ebx
0x6FED85: jmp     short loc_6FEDA0
0x6FED87: push    offset off_A7D44C
0x6FED8C: mov     ecx, esi
0x6FED8E: call    NiObjectNET_GetExtraData
0x6FED93: jmp     short loc_6FED9E
0x6FED95: mov     eax, [esi]
0x6FED97: mov     edx, [eax+0Ch]
0x6FED9A: mov     ecx, esi
0x6FED9C: call    edx
0x6FED9E: test    eax, eax
0x6FEDA0: setnz   al
0x6FEDA3: test    al, al
0x6FEDA5: jz      short loc_6FEDE7
0x6FEDA7: lea     edi, [esi+4]
0x6FEDAA: push    edi; lpAddend
0x6FEDAB: mov     [esp+24h+arg_0], esi
0x6FEDAF: call    dword ptr ds:0A28078h
0x6FEDB5: lea     eax, [esp+20h+arg_0]
0x6FEDB9: push    eax
0x6FEDBA: lea     ecx, [ebp+58h]
0x6FEDBD: mov     [esp+24h+var_4], 0
0x6FEDC5: call    sub_6FEB00
0x6FEDCA: push    edi; lpAddend
0x6FEDCB: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6FEDD3: call    dword ptr ds:0A2807Ch
0x6FEDD9: test    eax, eax
0x6FEDDB: jnz     short loc_6FEDE7
0x6FEDDD: mov     edx, [esi]
0x6FEDDF: mov     eax, [edx]
0x6FEDE1: push    1
0x6FEDE3: mov     ecx, esi
0x6FEDE5: call    eax
0x6FEDE7: test    ebx, ebx
0x6FEDE9: jz      short loc_6FEE27
0x6FEDEB: movzx   esi, word ptr [ebx+0B6h]
0x6FEDF2: test    esi, esi
0x6FEDF4: jz      short loc_6FEE27
0x6FEDF6: jmp     short loc_6FEE00
0x6FEDF8: align 10h
0x6FEE00: movzx   ecx, word ptr [ebx+0B6h]
0x6FEE07: sub     esi, 1
0x6FEE0A: cmp     ecx, esi
0x6FEE0C: ja      short loc_6FEE12
0x6FEE0E: xor     eax, eax
0x6FEE10: jmp     short loc_6FEE1B
0x6FEE12: mov     edx, [ebx+0B0h]
0x6FEE18: mov     eax, [edx+esi*4]
0x6FEE1B: push    eax
0x6FEE1C: mov     ecx, ebp
0x6FEE1E: call    sub_6FED30
0x6FEE23: test    esi, esi
0x6FEE25: jnz     short loc_6FEE00
0x6FEE27: mov     ecx, dword ptr [esp+20h+var_C]
0x6FEE2B: mov     large fs:0, ecx
0x6FEE32: pop     ecx
0x6FEE33: pop     edi
0x6FEE34: pop     esi
0x6FEE35: pop     ebp
0x6FEE36: pop     ebx
0x6FEE37: add     esp, 0Ch
0x6FEE3A: retn    4
