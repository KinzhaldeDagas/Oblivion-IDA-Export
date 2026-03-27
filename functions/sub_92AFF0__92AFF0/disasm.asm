0x92AFF0: push    ebx
0x92AFF1: push    ebp
0x92AFF2: push    esi
0x92AFF3: push    edi
0x92AFF4: mov     edi, ecx
0x92AFF6: mov     esi, [edi+0Ch]
0x92AFF9: dec     esi
0x92AFFA: js      short loc_92B026
0x92AFFC: mov     ebx, [esp+10h+arg_C]
0x92B000: mov     ebp, [esp+10h+arg_8]
0x92B004: mov     eax, [edi+8]
0x92B007: mov     eax, [eax+esi*4]
0x92B00A: mov     edx, [eax+10h]
0x92B00D: push    ebx
0x92B00E: lea     ecx, [eax+10h]
0x92B011: mov     eax, [esp+14h+arg_4]
0x92B015: push    ebp
0x92B016: push    eax
0x92B017: lea     eax, [esp+1Ch+arg_C]
0x92B01B: push    eax
0x92B01C: call    dword ptr [edx]
0x92B01E: cmp     byte ptr [eax], 0
0x92B021: jz      short loc_92B034
0x92B023: dec     esi
0x92B024: jns     short loc_92B004
0x92B026: mov     eax, [esp+10h+arg_0]
0x92B02A: pop     edi
0x92B02B: pop     esi
0x92B02C: pop     ebp
0x92B02D: mov     byte ptr [eax], 1
0x92B030: pop     ebx
0x92B031: retn    10h
0x92B034: mov     eax, [esp+10h+arg_0]
0x92B038: pop     edi
0x92B039: pop     esi
0x92B03A: pop     ebp
0x92B03B: mov     byte ptr [eax], 0
0x92B03E: pop     ebx
0x92B03F: retn    10h
