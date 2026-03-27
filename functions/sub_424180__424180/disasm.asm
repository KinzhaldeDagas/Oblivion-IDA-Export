0x424180: push    ecx
0x424181: push    ebx
0x424182: push    esi
0x424183: push    edi
0x424184: xor     ebx, ebx
0x424186: push    2; a2
0x424188: mov     [esp+14h+var_4], ebx
0x42418C: call    BaseExtraList_GetExtraData
0x424191: test    eax, eax
0x424193: jz      short loc_42419E
0x424195: mov     esi, [esp+10h+var_4]
0x424199: add     eax, 0Ch
0x42419C: jmp     short loc_4241AD
0x42419E: xor     esi, esi
0x4241A0: mov     [esp+10h+var_4], esi
0x4241A4: lea     eax, [esp+10h+var_4]
0x4241A8: mov     ebx, 1
0x4241AD: test    bl, 1
0x4241B0: mov     edi, [eax]
0x4241B2: jz      short loc_4241D0
0x4241B4: test    esi, esi
0x4241B6: jz      short loc_4241D0
0x4241B8: lea     eax, [esi+4]
0x4241BB: push    eax; lpAddend
0x4241BC: call    ds:InterlockedDecrement
0x4241C2: test    eax, eax
0x4241C4: jnz     short loc_4241D0
0x4241C6: mov     edx, [esi]
0x4241C8: mov     eax, [edx]
0x4241CA: push    1
0x4241CC: mov     ecx, esi
0x4241CE: call    eax
0x4241D0: mov     eax, edi
0x4241D2: pop     edi
0x4241D3: pop     esi
0x4241D4: pop     ebx
0x4241D5: pop     ecx
0x4241D6: retn
