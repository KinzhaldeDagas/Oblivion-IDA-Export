0x747020: sub     esp, 24h
0x747023: mov     eax, ds:0B30AACh
0x747028: xor     eax, esp
0x74702A: mov     [esp+24h+var_4], eax
0x74702E: push    esi
0x74702F: lea     esi, [esp+28h+var_22]
0x747033: xor     ecx, ecx
0x747035: mov     eax, 1
0x74703A: sub     edx, esi
0x74703C: lea     esp, [esp+0]
0x747040: lea     esi, [edx+eax*2]
0x747043: mov     si, [esp+esi+28h+var_24]
0x747048: add     si, cx
0x74704B: add     si, si
0x74704E: movzx   ecx, si
0x747051: mov     [esp+eax*2+28h+var_24], cx
0x747056: add     eax, 1
0x747059: cmp     eax, 0Fh
0x74705C: jle     short loc_747040
0x74705E: xor     esi, esi
0x747060: test    ebx, ebx
0x747062: jl      short loc_7470A0
0x747064: push    ebp
0x747065: movzx   edx, word ptr [edi+esi*4+2]
0x74706A: test    edx, edx
0x74706C: jz      short loc_747098
0x74706E: movzx   eax, [esp+edx*2+2Ch+var_24]
0x747073: movzx   ecx, ax
0x747076: add     eax, 1
0x747079: mov     [esp+edx*2+2Ch+var_24], ax
0x74707E: xor     eax, eax
0x747080: mov     ebp, ecx
0x747082: and     ebp, 1
0x747085: or      eax, ebp
0x747087: sub     edx, 1
0x74708A: shr     ecx, 1
0x74708C: add     eax, eax
0x74708E: test    edx, edx
0x747090: jg      short loc_747080
0x747092: shr     eax, 1
0x747094: mov     [edi+esi*4], ax
0x747098: add     esi, 1
0x74709B: cmp     esi, ebx
0x74709D: jle     short loc_747065
0x74709F: pop     ebp
0x7470A0: mov     ecx, [esp+28h+var_4]
0x7470A4: pop     esi
0x7470A5: xor     ecx, esp
0x7470A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7470AC: add     esp, 24h
0x7470AF: retn
