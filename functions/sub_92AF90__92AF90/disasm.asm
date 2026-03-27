0x92AF90: push    ebx
0x92AF91: push    ebp
0x92AF92: push    esi
0x92AF93: push    edi
0x92AF94: mov     edi, ecx
0x92AF96: mov     esi, [edi+10h]
0x92AF99: dec     esi
0x92AF9A: js      short loc_92AFD0
0x92AF9C: mov     ebx, [esp+10h+arg_14]
0x92AFA0: mov     ebp, [esp+10h+arg_10]
0x92AFA4: mov     eax, [edi+0Ch]
0x92AFA7: mov     eax, [eax+esi*4]
0x92AFAA: mov     edx, [eax+0Ch]
0x92AFAD: push    ebx
0x92AFAE: lea     ecx, [eax+0Ch]
0x92AFB1: mov     eax, [esp+14h+arg_C]
0x92AFB5: push    ebp
0x92AFB6: push    eax
0x92AFB7: mov     eax, [esp+1Ch+arg_8]
0x92AFBB: push    eax
0x92AFBC: mov     eax, [esp+20h+arg_4]
0x92AFC0: push    eax
0x92AFC1: lea     eax, [esp+24h+arg_14]
0x92AFC5: push    eax
0x92AFC6: call    dword ptr [edx]
0x92AFC8: cmp     byte ptr [eax], 0
0x92AFCB: jz      short loc_92AFDE
0x92AFCD: dec     esi
0x92AFCE: jns     short loc_92AFA4
0x92AFD0: mov     eax, [esp+10h+arg_0]
0x92AFD4: pop     edi
0x92AFD5: pop     esi
0x92AFD6: pop     ebp
0x92AFD7: mov     byte ptr [eax], 1
0x92AFDA: pop     ebx
0x92AFDB: retn    18h
0x92AFDE: mov     eax, [esp+10h+arg_0]
0x92AFE2: pop     edi
0x92AFE3: pop     esi
0x92AFE4: pop     ebp
0x92AFE5: mov     byte ptr [eax], 0
0x92AFE8: pop     ebx
0x92AFE9: retn    18h
