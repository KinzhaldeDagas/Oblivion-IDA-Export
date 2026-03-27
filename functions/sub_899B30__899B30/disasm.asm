0x899B30: sub     esp, 8
0x899B33: push    esi
0x899B34: mov     esi, ecx
0x899B36: mov     eax, [esi+88h]
0x899B3C: mov     ecx, [esi+8Ch]
0x899B42: add     ecx, eax
0x899B44: jz      short loc_899B6A
0x899B46: mov     edx, [esp+0Ch+arg_0]
0x899B4A: mov     ecx, [esi+80h]
0x899B50: lea     eax, [esp+0Ch+var_8]
0x899B54: push    eax
0x899B55: mov     [esp+10h+var_8], 0Eh
0x899B5A: mov     [esp+10h+var_4], edx
0x899B5E: call    sub_8D8830
0x899B63: pop     esi
0x899B64: add     esp, 8
0x899B67: retn    4
0x899B6A: push    edi
0x899B6B: mov     edi, [esp+10h+arg_0]
0x899B6F: inc     eax
0x899B70: push    edi
0x899B71: push    esi
0x899B72: mov     [esi+88h], eax
0x899B78: call    sub_8DC5C0
0x899B7D: add     esp, 8
0x899B80: mov     ecx, edi
0x899B82: call    sub_8DE520
0x899B87: push    edi
0x899B88: push    esi
0x899B89: call    sub_8CCB90
0x899B8E: mov     ecx, [esi+0BCh]
0x899B94: add     esp, 8
0x899B97: xor     eax, eax
0x899B99: test    ecx, ecx
0x899B9B: jle     short loc_899BAF
0x899B9D: mov     edx, [esi+0B8h]
0x899BA3: cmp     [edx], edi
0x899BA5: jz      short loc_899BB2
0x899BA7: inc     eax
0x899BA8: add     edx, 4
0x899BAB: cmp     eax, ecx
0x899BAD: jl      short loc_899BA3
0x899BAF: or      eax, 0FFFFFFFFh
0x899BB2: mov     ecx, [esi+0BCh]
0x899BB8: dec     ecx
0x899BB9: mov     [esi+0BCh], ecx
0x899BBF: mov     edx, ecx
0x899BC1: mov     ecx, [esi+0B8h]
0x899BC7: mov     edx, [ecx+edx*4]
0x899BCA: mov     [ecx+eax*4], edx
0x899BCD: cmp     word ptr [edi+4], 0
0x899BD2: mov     dword ptr [edi+8], 0
0x899BD9: jnz     short loc_899BE2
0x899BDB: mov     eax, [edi]
0x899BDD: mov     ecx, edi
0x899BDF: call    dword ptr [eax+2Ch]
0x899BE2: mov     ecx, edi
0x899BE4: call    sub_8BC730
0x899BE9: mov     eax, [esi+88h]
0x899BEF: dec     eax
0x899BF0: pop     edi
0x899BF1: mov     [esi+88h], eax
0x899BF7: jnz     short loc_899C14
0x899BF9: mov     eax, [esi+84h]
0x899BFF: test    eax, eax
0x899C01: jz      short loc_899C14
0x899C03: mov     al, [esi+90h]
0x899C09: test    al, al
0x899C0B: jnz     short loc_899C14
0x899C0D: mov     ecx, esi
0x899C0F: call    sub_899210
0x899C14: pop     esi
0x899C15: add     esp, 8
0x899C18: retn    4
