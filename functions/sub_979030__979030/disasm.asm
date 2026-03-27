0x979030: push    ebx
0x979031: push    ebp
0x979032: push    esi
0x979033: push    edi
0x979034: mov     edi, [esp+10h+arg_14]
0x979038: mov     esi, ecx
0x97903A: cmp     edi, [esi+88h]
0x979040: jz      short loc_979058
0x979042: mov     eax, [esp+10h+arg_4]
0x979046: add     eax, 64h ; 'd'
0x979049: push    eax
0x97904A: lea     ecx, [esi+4]
0x97904D: call    sub_97AEC0
0x979052: mov     [esi+88h], edi
0x979058: mov     ebx, [esp+10h+arg_0]
0x97905C: mov     ebp, [esp+10h+arg_18]
0x979060: cmp     ebp, [ebx+88h]
0x979066: jz      short loc_97907E
0x979068: mov     ecx, [esp+10h+arg_8]
0x97906C: add     ecx, 64h ; 'd'
0x97906F: push    ecx
0x979070: lea     ecx, [ebx+4]
0x979073: call    sub_97AEC0
0x979078: mov     [ebx+88h], ebp
0x97907E: lea     edx, [ebx+4]
0x979081: push    edx
0x979082: lea     ecx, [esi+4]
0x979085: call    sub_97AFC0
0x97908A: test    eax, eax
0x97908C: jnz     short loc_979097
0x97908E: pop     edi
0x97908F: pop     esi
0x979090: pop     ebp
0x979091: xor     al, al
0x979093: pop     ebx
0x979094: retn    1Ch
0x979097: mov     eax, [ebx]
0x979099: mov     edx, [eax+4]
0x97909C: mov     ecx, ebx
0x97909E: call    edx
0x9790A0: test    al, al
0x9790A2: jnz     loc_979128
0x9790A8: mov     ecx, [esp+10h+arg_10]
0x9790AC: test    ecx, ecx
0x9790AE: jz      short loc_979128
0x9790B0: mov     eax, [ebx+80h]
0x9790B6: test    eax, eax
0x9790B8: jnz     short loc_9790C2
0x9790BA: cmp     [ebx+84h], eax
0x9790C0: jz      short loc_979128
0x9790C2: mov     edx, [esi]
0x9790C4: mov     edx, [edx+8]
0x9790C7: lea     edi, [ecx-1]
0x9790CA: mov     ecx, [esp+10h+arg_14]
0x9790CE: push    ebp
0x9790CF: push    ecx
0x9790D0: mov     ecx, [esp+18h+arg_C]
0x9790D4: push    edi
0x9790D5: push    ecx
0x9790D6: mov     ecx, [esp+20h+arg_8]
0x9790DA: push    ecx
0x9790DB: mov     ecx, [esp+24h+arg_4]
0x9790DF: push    ecx
0x9790E0: push    eax
0x9790E1: mov     ecx, esi
0x9790E3: call    edx
0x9790E5: test    al, al
0x9790E7: jnz     short loc_97911C
0x9790E9: mov     ecx, [esp+10h+arg_14]
0x9790ED: mov     edx, [esp+10h+arg_C]
0x9790F1: mov     ebx, [ebx+84h]
0x9790F7: mov     eax, [esi]
0x9790F9: mov     eax, [eax+8]
0x9790FC: push    ebp
0x9790FD: push    ecx
0x9790FE: mov     ecx, [esp+18h+arg_8]
0x979102: push    edi
0x979103: push    edx
0x979104: mov     edx, [esp+20h+arg_4]
0x979108: push    ecx
0x979109: push    edx
0x97910A: push    ebx
0x97910B: mov     ecx, esi
0x97910D: call    eax
0x97910F: test    al, al
0x979111: jnz     short loc_97911C
0x979113: pop     edi
0x979114: pop     esi
0x979115: pop     ebp
0x979116: xor     eax, eax
0x979118: pop     ebx
0x979119: retn    1Ch
0x97911C: pop     edi
0x97911D: pop     esi
0x97911E: pop     ebp
0x97911F: mov     eax, 1
0x979124: pop     ebx
0x979125: retn    1Ch
0x979128: pop     edi
0x979129: pop     esi
0x97912A: pop     ebp
0x97912B: mov     al, 1
0x97912D: pop     ebx
0x97912E: retn    1Ch
