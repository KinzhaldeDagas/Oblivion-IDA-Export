0x54E2B0: push    0FFFFFFFFh
0x54E2B2: push    offset ??0BSFaceGenImage@@QAE@XZ_SEH
0x54E2B7: mov     eax, large fs:0
0x54E2BD: push    eax
0x54E2BE: push    ecx
0x54E2BF: push    ebx
0x54E2C0: push    ebp
0x54E2C1: push    esi
0x54E2C2: push    edi
0x54E2C3: mov     eax, ds:0B30AACh
0x54E2C8: xor     eax, esp
0x54E2CA: push    eax
0x54E2CB: lea     eax, [esp+24h+var_C]
0x54E2CF: mov     large fs:0, eax
0x54E2D5: mov     esi, ecx
0x54E2D7: mov     [esp+24h+var_10], esi
0x54E2DB: xor     ebx, ebx
0x54E2DD: push    offset NiRefObject_objcount; lpAddend
0x54E2E2: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x54E2E8: mov     [esi+4], ebx
0x54E2EB: call    dword ptr ds:0A28078h
0x54E2F1: mov     dword ptr [esi], offset ??_7BSFaceGenImage@@6B@; const BSFaceGenImage::`vftable'
0x54E2F7: mov     [esp+24h+var_4], ebx
0x54E2FB: mov     [esi+8], ebx
0x54E2FE: mov     [esi+10h], ebx
0x54E301: mov     [esi+14h], ebx
0x54E304: mov     [esi+18h], ebx
0x54E307: mov     edi, [esi+8]
0x54E30A: mov     ebp, [esp+24h+arg_0]
0x54E30E: cmp     edi, ebp
0x54E310: mov     byte ptr [esp+24h+var_4], 2
0x54E315: jz      short loc_54E348
0x54E317: cmp     edi, ebx
0x54E319: jz      short loc_54E337
0x54E31B: lea     eax, [edi+4]
0x54E31E: push    eax; lpAddend
0x54E31F: call    dword ptr ds:0A2807Ch
0x54E325: test    eax, eax
0x54E327: jnz     short loc_54E337
0x54E329: cmp     edi, ebx
0x54E32B: jz      short loc_54E337
0x54E32D: mov     edx, [edi]
0x54E32F: mov     eax, [edx]
0x54E331: push    1
0x54E333: mov     ecx, edi
0x54E335: call    eax
0x54E337: cmp     ebp, ebx
0x54E339: mov     [esi+8], ebp
0x54E33C: jz      short loc_54E348
0x54E33E: add     ebp, 4
0x54E341: push    ebp; lpAddend
0x54E342: call    dword ptr ds:0A28078h
0x54E348: mov     ecx, [esi+8]
0x54E34B: cmp     ecx, ebx
0x54E34D: jz      short loc_54E368
0x54E34F: mov     edx, [ecx]
0x54E351: mov     eax, [edx+4Ch]
0x54E354: call    eax
0x54E356: mov     ecx, [esi+8]
0x54E359: mov     [esi+1Ch], eax
0x54E35C: mov     edx, [ecx]
0x54E35E: mov     eax, [edx+50h]
0x54E361: call    eax
0x54E363: mov     [esi+20h], eax
0x54E366: jmp     short loc_54E36E
0x54E368: mov     [esi+20h], ebx
0x54E36B: mov     [esi+1Ch], ebx
0x54E36E: mov     eax, esi
0x54E370: mov     ecx, dword ptr [esp+24h+var_C]
0x54E374: mov     large fs:0, ecx
0x54E37B: pop     ecx
0x54E37C: pop     edi
0x54E37D: pop     esi
0x54E37E: pop     ebp
0x54E37F: pop     ebx
0x54E380: add     esp, 10h
0x54E383: retn    4
