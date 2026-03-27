0x7762D0: push    ebx
0x7762D1: push    ebp
0x7762D2: mov     ebp, ecx
0x7762D4: xor     ebx, ebx
0x7762D6: cmp     [ebp+1Ch], ebx
0x7762D9: jz      short loc_776331
0x7762DB: push    esi
0x7762DC: push    edi
0x7762DD: lea     esi, [ebp+10h]
0x7762E0: mov     eax, [esi+4]
0x7762E3: mov     ecx, [eax]
0x7762E5: cmp     ecx, ebx
0x7762E7: mov     [esi+4], ecx
0x7762EA: jz      short loc_7762F1
0x7762EC: mov     [ecx+4], ebx
0x7762EF: jmp     short loc_7762F4
0x7762F1: mov     [esi+8], ebx
0x7762F4: mov     edx, [esi]
0x7762F6: mov     edi, [eax+8]
0x7762F9: push    eax
0x7762FA: mov     eax, [edx+8]
0x7762FD: mov     ecx, esi
0x7762FF: call    eax
0x776301: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x776305: mov     edi, [edi+104h]
0x77630B: mov     eax, [ebp+20h]
0x77630E: mov     edx, [edi+6Ch]
0x776311: mov     ecx, [eax]
0x776313: push    ebx
0x776314: push    edx
0x776315: push    eax
0x776316: mov     eax, [ecx+0D4h]
0x77631C: call    eax
0x77631E: mov     [edi+71h], bl
0x776321: cmp     [ebp+1Ch], ebx
0x776324: jnz     short loc_7762E0
0x776326: mov     ecx, [ebp+28h]
0x776329: pop     edi
0x77632A: pop     esi
0x77632B: mov     [ebp+2Ch], ecx
0x77632E: pop     ebp
0x77632F: pop     ebx
0x776330: retn
0x776331: mov     edx, [ebp+28h]
0x776334: mov     [ebp+2Ch], edx
0x776337: pop     ebp
0x776338: pop     ebx
0x776339: retn
