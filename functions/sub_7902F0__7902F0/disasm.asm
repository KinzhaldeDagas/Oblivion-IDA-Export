0x7902F0: sub     esp, 8
0x7902F3: mov     edx, [esp+8+arg_8]
0x7902F7: push    ebx
0x7902F8: mov     ebx, [esp+0Ch+arg_0]
0x7902FC: push    esi
0x7902FD: mov     esi, [esp+10h+arg_4]
0x790301: push    edi
0x790302: mov     edi, [esp+14h+arg_8]
0x790306: xor     al, al
0x790308: mov     byte ptr [esp+14h+var_4], al
0x79030C: mov     ecx, [esp+14h+var_4]
0x790310: mov     byte ptr [esp+14h+var_8], al
0x790314: mov     eax, [esp+14h+var_8]
0x790318: push    eax
0x790319: push    ecx
0x79031A: push    edx
0x79031B: push    edi
0x79031C: push    esi
0x79031D: push    ebx
0x79031E: call    sub_7841C0
0x790323: sub     esi, ebx
0x790325: mov     eax, 2AAAAAABh
0x79032A: imul    esi
0x79032C: sar     edx, 2
0x79032F: mov     eax, edx
0x790331: shr     eax, 1Fh
0x790334: add     eax, edx
0x790336: lea     eax, [eax+eax*2]
0x790339: add     eax, eax
0x79033B: add     eax, eax
0x79033D: add     eax, eax
0x79033F: add     esp, 18h
0x790342: mov     ecx, eax
0x790344: mov     eax, edi
0x790346: pop     edi
0x790347: pop     esi
0x790348: sub     eax, ecx
0x79034A: pop     ebx
0x79034B: add     esp, 8
0x79034E: retn
