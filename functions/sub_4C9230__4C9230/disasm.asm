0x4C9230: push    ecx
0x4C9231: push    edi
0x4C9232: mov     edi, ecx
0x4C9234: mov     eax, [edi+24h]
0x4C9237: test    eax, eax
0x4C9239: jnz     short loc_4C9240
0x4C923B: xor     al, al
0x4C923D: pop     edi
0x4C923E: pop     ecx
0x4C923F: retn
0x4C9240: push    esi
0x4C9241: lea     ecx, [esp+0Ch+var_4]
0x4C9245: push    ecx
0x4C9246: push    eax
0x4C9247: mov     ecx, offset off_B09414
0x4C924C: mov     [esp+14h+var_4], 0
0x4C9254: call    NiTMap_GetAt
0x4C9259: cmp     dword ptr ds:0B35300h, 0
0x4C9260: mov     eax, [edi+24h]
0x4C9263: mov     ecx, [esp+0Ch+var_4]
0x4C9267: jz      short loc_4C929C
0x4C9269: lea     edx, [ecx+1]
0x4C926C: cmp     [eax+4], edx
0x4C926F: jnz     short loc_4C92EF
0x4C9271: sub     ecx, 1
0x4C9274: jz      short loc_4C9284
0x4C9276: push    ecx; a3
0x4C9277: push    eax; a2
0x4C9278: mov     ecx, offset off_B09414; this
0x4C927D: call    NiTMap_SetAt
0x4C9282: jmp     short loc_4C928F
0x4C9284: push    eax
0x4C9285: mov     ecx, offset off_B09414
0x4C928A: call    NiTMap_RemoveAt
0x4C928F: mov     esi, [edi+24h]
0x4C9292: test    esi, esi
0x4C9294: jz      short loc_4C92E9
0x4C9296: lea     eax, [esi+4]
0x4C9299: push    eax
0x4C929A: jmp     short loc_4C92CA
0x4C929C: cmp     [eax+4], ecx
0x4C929F: jnz     short loc_4C92EF
0x4C92A1: sub     ecx, 1
0x4C92A4: jz      short loc_4C92B4
0x4C92A6: push    ecx; a3
0x4C92A7: push    eax; a2
0x4C92A8: mov     ecx, offset off_B09414; this
0x4C92AD: call    NiTMap_SetAt
0x4C92B2: jmp     short loc_4C92BF
0x4C92B4: push    eax
0x4C92B5: mov     ecx, offset off_B09414
0x4C92BA: call    NiTMap_RemoveAt
0x4C92BF: mov     esi, [edi+24h]
0x4C92C2: test    esi, esi
0x4C92C4: jz      short loc_4C92E9
0x4C92C6: lea     ecx, [esi+4]
0x4C92C9: push    ecx; lpAddend
0x4C92CA: call    dword ptr ds:0A2807Ch
0x4C92D0: test    eax, eax
0x4C92D2: jnz     short loc_4C92E2
0x4C92D4: test    esi, esi
0x4C92D6: jz      short loc_4C92E2
0x4C92D8: mov     edx, [esi]
0x4C92DA: mov     eax, [edx]
0x4C92DC: push    1
0x4C92DE: mov     ecx, esi
0x4C92E0: call    eax
0x4C92E2: mov     dword ptr [edi+24h], 0
0x4C92E9: pop     esi
0x4C92EA: mov     al, 1
0x4C92EC: pop     edi
0x4C92ED: pop     ecx
0x4C92EE: retn
0x4C92EF: pop     esi
0x4C92F0: xor     al, al
0x4C92F2: pop     edi
0x4C92F3: pop     ecx
0x4C92F4: retn
