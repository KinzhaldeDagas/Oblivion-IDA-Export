0x6A9B40: sub     esp, 0Ch
0x6A9B43: push    edi
0x6A9B44: mov     edi, ecx
0x6A9B46: mov     byte ptr [edi+0A4h], 1
0x6A9B4D: cmp     byte ptr ds:0B16178h, 0
0x6A9B54: mov     [esp+10h+var_C], 0
0x6A9B5C: jz      loc_6A9BF5
0x6A9B62: mov     ecx, [edi+300h]
0x6A9B68: mov     edx, [ecx+4]
0x6A9B6B: xor     eax, eax
0x6A9B6D: test    edx, edx
0x6A9B6F: push    esi
0x6A9B70: jbe     short loc_6A9B86
0x6A9B72: mov     esi, [ecx+8]
0x6A9B75: mov     ecx, esi
0x6A9B77: cmp     dword ptr [ecx], 0
0x6A9B7A: jnz     short loc_6A9BE1
0x6A9B7C: add     eax, 1
0x6A9B7F: add     ecx, 4
0x6A9B82: cmp     eax, edx
0x6A9B84: jb      short loc_6A9B77
0x6A9B86: xor     eax, eax
0x6A9B88: test    eax, eax
0x6A9B8A: mov     [esp+14h+var_8], eax
0x6A9B8E: jz      short loc_6A9BF4
0x6A9B90: lea     eax, [esp+14h+var_C]
0x6A9B94: push    eax
0x6A9B95: lea     ecx, [esp+18h+var_4]
0x6A9B99: push    ecx
0x6A9B9A: mov     ecx, [edi+300h]
0x6A9BA0: lea     edx, [esp+1Ch+var_8]
0x6A9BA4: push    edx
0x6A9BA5: call    sub_452600
0x6A9BAA: mov     esi, [esp+14h+var_C]
0x6A9BAE: mov     ecx, esi
0x6A9BB0: call    sub_6B6AF0
0x6A9BB5: test    al, al
0x6A9BB7: jz      short loc_6A9BED
0x6A9BB9: mov     eax, [esi]
0x6A9BBB: test    al, 20h
0x6A9BBD: jnz     short loc_6A9BED
0x6A9BBF: or      eax, 200h
0x6A9BC4: mov     ecx, esi
0x6A9BC6: mov     [esi], eax
0x6A9BC8: call    sub_6B7120
0x6A9BCD: test    al, al
0x6A9BCF: jz      short loc_6A9BE6
0x6A9BD1: test    byte ptr [esi], 1
0x6A9BD4: jz      short loc_6A9BE6
0x6A9BD6: push    1
0x6A9BD8: mov     ecx, esi
0x6A9BDA: call    sub_6B7130
0x6A9BDF: jmp     short loc_6A9BED
0x6A9BE1: mov     eax, [esi+eax*4]
0x6A9BE4: jmp     short loc_6A9B88
0x6A9BE6: mov     ecx, esi
0x6A9BE8: call    sub_6B6AA0
0x6A9BED: cmp     [esp+14h+var_8], 0
0x6A9BF2: jnz     short loc_6A9B90
0x6A9BF4: pop     esi
0x6A9BF5: pop     edi
0x6A9BF6: add     esp, 0Ch
0x6A9BF9: retn
