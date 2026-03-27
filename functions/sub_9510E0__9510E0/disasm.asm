0x9510E0: mov     eax, [esp+arg_4]
0x9510E4: mov     edx, [eax+14h]
0x9510E7: mov     ecx, [eax+10h]
0x9510EA: mov     eax, [eax+18h]
0x9510ED: movzx   ecx, word ptr [ecx]
0x9510F0: push    ebx
0x9510F1: push    ebp
0x9510F2: movzx   ebp, word ptr [edx]
0x9510F5: push    esi
0x9510F6: push    edi
0x9510F7: movzx   edi, word ptr [eax]
0x9510FA: mov     eax, [esp+10h+arg_8]
0x9510FE: mov     edx, [eax+10h]
0x951101: movzx   esi, word ptr [edx]
0x951104: cmp     ecx, esi
0x951106: mov     edx, [eax+14h]
0x951109: mov     eax, [eax+18h]
0x95110C: movzx   ebx, word ptr [edx]
0x95110F: movzx   eax, word ptr [eax]
0x951112: mov     [esp+10h+arg_4], ebp
0x951116: mov     dl, 1
0x951118: jnz     short loc_951152
0x95111A: cmp     ebp, ebx
0x95111C: jz      short loc_951122
0x95111E: cmp     ebp, eax
0x951120: jnz     short loc_951136
0x951122: mov     ebp, [esp+10h+arg_C]
0x951126: cmp     byte ptr [ebp+0], 0
0x95112A: jz      short loc_95112E
0x95112C: xor     dl, dl
0x95112E: mov     byte ptr [ebp+0], 1
0x951132: mov     ebp, [esp+10h+arg_4]
0x951136: cmp     edi, ebx
0x951138: jz      short loc_95113E
0x95113A: cmp     edi, eax
0x95113C: jnz     short loc_951152
0x95113E: mov     ebp, [esp+10h+arg_10]
0x951142: cmp     byte ptr [ebp+0], 0
0x951146: jz      short loc_95114A
0x951148: xor     dl, dl
0x95114A: mov     byte ptr [ebp+0], 1
0x95114E: mov     ebp, [esp+10h+arg_4]
0x951152: cmp     ecx, ebx
0x951154: jnz     short loc_95117A
0x951156: cmp     ebp, eax
0x951158: jnz     short loc_951168
0x95115A: mov     ecx, [esp+10h+arg_C]
0x95115E: cmp     byte ptr [ecx], 0
0x951161: jz      short loc_951165
0x951163: xor     dl, dl
0x951165: mov     byte ptr [ecx], 1
0x951168: cmp     edi, eax
0x95116A: jnz     short loc_95117A
0x95116C: mov     ecx, [esp+10h+arg_10]
0x951170: cmp     byte ptr [ecx], 0
0x951173: jz      short loc_951177
0x951175: xor     dl, dl
0x951177: mov     byte ptr [ecx], 1
0x95117A: cmp     ebp, esi
0x95117C: jnz     short loc_951186
0x95117E: cmp     edi, ebx
0x951180: jz      short loc_95118E
0x951182: cmp     edi, eax
0x951184: jz      short loc_95118E
0x951186: cmp     ebp, ebx
0x951188: jnz     short loc_95119C
0x95118A: cmp     edi, eax
0x95118C: jnz     short loc_95119C
0x95118E: mov     eax, [esp+10h+arg_14]
0x951192: cmp     byte ptr [eax], 0
0x951195: jz      short loc_951199
0x951197: xor     dl, dl
0x951199: mov     byte ptr [eax], 1
0x95119C: mov     eax, [esp+10h+arg_0]
0x9511A0: pop     edi
0x9511A1: pop     esi
0x9511A2: pop     ebp
0x9511A3: mov     [eax], dl
0x9511A5: pop     ebx
0x9511A6: retn
