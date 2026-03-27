0x578B04: movsx   edx, byte ptr [esi+18h]; jumptable 00578AF3 default case
0x578B08: movzx   ecx, al
0x578B0B: cmp     ecx, edx
0x578B0D: jnz     short loc_578B14
0x578B0F: add     ebx, 1
0x578B12: jmp     short loc_578B42
0x578B14: cmp     al, 9
0x578B16: jz      short loc_578B1C
0x578B18: cmp     al, 20h ; ' '
0x578B1A: jb      short loc_578B42
0x578B1C: mov     edx, [esp+arg_68]
0x578B20: push    edx
0x578B21: lea     ecx, [esp+4+arg_20]
0x578B25: call    sub_577120
0x578B2A: push    0
0x578B2C: push    ebx
0x578B2D: lea     ecx, [esp+8+arg_20]
0x578B31: call    sub_577060
0x578B36: mov     ecx, [esp+8+arg_6C]
0x578B3A: push    eax
0x578B3B: call    sub_577B40
0x578B40: xor     ebx, ebx
0x578B42: mov     ecx, edi
0x578B44: add     ebp, 1
0x578B47: call    BSStringT_GetLen
0x578B4C: cmp     ebp, eax
0x578B4E: jb      short loc_578AD4
0x578B50: mov     ebp, [esp+arg_6C]
0x578B54: xor     edi, edi
0x578B56: cmp     ebp, edi
0x578B58: mov     byte ptr [esi+34h], 0
0x578B5C: mov     [esi+2Ch], edi
0x578B5F: mov     [esi+1Ch], edi
0x578B62: mov     [esi+20h], edi
0x578B65: mov     [esi+30h], edi
0x578B68: jz      short loc_578BD9
0x578B6A: mov     eax, [ebp+0Ch]
0x578B6D: mov     [esi+2Ch], eax
0x578B70: cmp     [ebp+0Ch], edi
0x578B73: jz      short loc_578BD9
0x578B75: mov     eax, [ebp+4]
0x578B78: cmp     eax, edi
0x578B7A: mov     ecx, [ebp+18h]
0x578B7D: jz      short loc_578BD9
0x578B7F: nop
0x578B80: mov     edx, ecx
0x578B82: sub     ecx, 1
0x578B85: test    edx, edx
0x578B87: jz      short loc_578B91
0x578B89: mov     eax, [eax]
0x578B8B: cmp     eax, edi
0x578B8D: jnz     short loc_578B80
0x578B8F: jmp     short loc_578BD9
0x578B91: cmp     eax, edi
0x578B93: jz      short loc_578BD9
0x578B95: mov     ebx, [eax+8]
0x578B98: cmp     ebx, edi
0x578B9A: jz      short loc_578BD9
0x578B9C: mov     [esi+20h], edi
0x578B9F: mov     [esi+1Ch], edi
0x578BA2: mov     eax, [ebx+4]
0x578BA5: cmp     eax, edi
0x578BA7: jz      short loc_578BD3
0x578BA9: lea     esp, [esp+0]
0x578BB0: lea     ecx, [eax+8]
0x578BB3: mov     ecx, [ecx]
0x578BB5: mov     edx, [ecx+20h]
0x578BB8: add     edx, [ecx+18h]
0x578BBB: mov     eax, [eax]
0x578BBD: add     [esi+20h], edx
0x578BC0: mov     edx, [esi+1Ch]
0x578BC3: mov     ecx, [ecx+10h]
0x578BC6: cmp     edx, ecx
0x578BC8: jle     short loc_578BCC
0x578BCA: mov     ecx, edx
0x578BCC: cmp     eax, edi
0x578BCE: mov     [esi+1Ch], ecx
0x578BD1: jnz     short loc_578BB0
0x578BD3: mov     eax, [ebx+0Ch]
0x578BD6: mov     [esi+30h], eax
0x578BD9: mov     ecx, [esp+arg_3C]
0x578BDD: push    ecx
0x578BDE: call    FormHeapFree
0x578BE3: add     esp, 4
0x578BE6: mov     eax, ebp
0x578BE8: mov     ecx, [esp+arg_58]
0x578BEC: mov     large fs:0, ecx
0x578BF3: pop     ecx
0x578BF4: pop     edi
0x578BF5: pop     esi
0x578BF6: pop     ebp
0x578BF7: pop     ebx
0x578BF8: add     esp, 54h
0x578BFB: retn    8
