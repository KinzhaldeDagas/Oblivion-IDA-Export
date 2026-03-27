0x5FAA70: push    ebx
0x5FAA71: push    esi
0x5FAA72: mov     esi, ecx
0x5FAA74: mov     eax, [esi]
0x5FAA76: mov     edx, [eax+170h]
0x5FAA7C: push    edi
0x5FAA7D: xor     edi, edi
0x5FAA7F: call    edx
0x5FAA81: mov     ebx, eax
0x5FAA83: test    ebx, ebx
0x5FAA85: jz      short loc_5FAA99
0x5FAA87: mov     eax, [esi]
0x5FAA89: mov     edx, [eax+190h]
0x5FAA8F: mov     ecx, esi
0x5FAA91: call    edx
0x5FAA93: test    al, al
0x5FAA95: jz      short loc_5FAA99
0x5FAA97: mov     edi, ebx
0x5FAA99: movzx   edi, word ptr [edi+30h]
0x5FAA9D: lea     ecx, [esi+44h]
0x5FAAA0: call    sub_41E980
0x5FAAA5: mov     ecx, ds:0B333C4h
0x5FAAAB: mov     esi, eax
0x5FAAAD: movzx   eax, di
0x5FAAB0: push    1Dh
0x5FAAB2: add     esi, eax
0x5FAAB4: call    Actor_GetBaseCalcAVi
0x5FAAB9: push    eax
0x5FAABA: call    Calc_MasteryFromSkill
0x5FAABF: add     esp, 4
0x5FAAC2: cmp     eax, 4
0x5FAAC5: jnz     short loc_5FAACD
0x5FAAC7: add     esi, ds:0B375E8h
0x5FAACD: pop     edi
0x5FAACE: mov     eax, esi
0x5FAAD0: pop     esi
0x5FAAD1: pop     ebx
0x5FAAD2: retn
