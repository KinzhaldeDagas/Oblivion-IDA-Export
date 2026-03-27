0x790560: push    ebx
0x790561: mov     ebx, [esp+4+arg_0]
0x790565: push    esi
0x790566: push    edi
0x790567: mov     edi, [esp+0Ch+arg_4]
0x79056B: sub     edi, ebx
0x79056D: sar     edi, 2
0x790570: mov     eax, edi
0x790572: cdq
0x790573: sub     eax, edx
0x790575: mov     esi, eax
0x790577: sar     esi, 1
0x790579: test    esi, esi
0x79057B: jle     short loc_79059B
0x79057D: push    ebp
0x79057E: mov     ebp, [esp+10h+arg_8]
0x790582: mov     eax, [ebx+esi*4-4]
0x790586: sub     esi, 1
0x790589: push    ebp
0x79058A: push    eax
0x79058B: push    edi
0x79058C: push    esi
0x79058D: push    ebx
0x79058E: call    sub_7903B0
0x790593: add     esp, 14h
0x790596: test    esi, esi
0x790598: jg      short loc_790582
0x79059A: pop     ebp
0x79059B: pop     edi
0x79059C: pop     esi
0x79059D: pop     ebx
0x79059E: retn
