0x85BF40: push    0FFFFFFFFh
0x85BF42: push    offset SEH_85C7D0
0x85BF47: mov     eax, large fs:0
0x85BF4D: push    eax
0x85BF4E: push    esi
0x85BF4F: push    edi
0x85BF50: mov     eax, ds:0B30AACh
0x85BF55: xor     eax, esp
0x85BF57: push    eax
0x85BF58: lea     eax, [esp+18h+var_C]
0x85BF5C: mov     large fs:0, eax
0x85BF62: mov     edi, ecx
0x85BF64: cmp     byte ptr [esp+18h+arg_10], 0
0x85BF69: jnz     short loc_85BFB2
0x85BF6B: mov     eax, ds:0B47790h
0x85BF70: test    eax, eax
0x85BF72: mov     esi, eax
0x85BF74: mov     [esp+18h+arg_10], esi
0x85BF78: jz      short loc_85BF7E
0x85BF7A: add     dword ptr [eax+60h], 1
0x85BF7E: mov     ecx, [edi+38h]
0x85BF81: lea     eax, [esp+18h+arg_10]
0x85BF85: push    eax
0x85BF86: push    ecx
0x85BF87: lea     ecx, [edi+40h]
0x85BF8A: mov     [esp+20h+var_4], 0
0x85BF92: call    sub_76CE40
0x85BF97: or      eax, 0FFFFFFFFh
0x85BF9A: test    esi, esi
0x85BF9C: mov     [esp+18h+var_4], eax
0x85BFA0: jz      short loc_85BFAE
0x85BFA2: add     [esi+60h], eax
0x85BFA5: jnz     short loc_85BFAE
0x85BFA7: mov     ecx, esi
0x85BFA9: call    sub_7604D0
0x85BFAE: add     dword ptr [edi+38h], 1
0x85BFB2: mov     ecx, [esp+18h+var_C]
0x85BFB6: mov     large fs:0, ecx
0x85BFBD: pop     ecx
0x85BFBE: pop     edi
0x85BFBF: pop     esi
0x85BFC0: add     esp, 0Ch
0x85BFC3: retn    14h
