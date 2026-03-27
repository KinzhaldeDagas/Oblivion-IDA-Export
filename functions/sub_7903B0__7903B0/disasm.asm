0x7903B0: mov     edx, [esp+arg_4]
0x7903B4: push    ebx
0x7903B5: push    esi
0x7903B6: mov     esi, [esp+8+arg_0]
0x7903BA: push    edi
0x7903BB: mov     edi, [esp+0Ch+arg_8]
0x7903BF: lea     ecx, [edx+edx+2]
0x7903C3: cmp     ecx, edi
0x7903C5: mov     ebx, edx
0x7903C7: jge     short loc_7903F9
0x7903C9: lea     esp, [esp+0]
0x7903D0: mov     eax, [esi+ecx*4]
0x7903D3: fld     dword ptr [eax+2Ch]
0x7903D6: mov     eax, [esi+ecx*4-4]
0x7903DA: fld     dword ptr [eax+2Ch]
0x7903DD: fcompp
0x7903DF: fnstsw  ax
0x7903E1: test    ah, 5
0x7903E4: jp      short loc_7903E9
0x7903E6: sub     ecx, 1
0x7903E9: mov     eax, [esi+ecx*4]
0x7903EC: mov     [esi+edx*4], eax
0x7903EF: mov     edx, ecx
0x7903F1: lea     ecx, [ecx+ecx+2]
0x7903F5: cmp     ecx, edi
0x7903F7: jl      short loc_7903D0
0x7903F9: jnz     short loc_790405
0x7903FB: mov     ecx, [esi+edi*4-4]
0x7903FF: mov     [esi+edx*4], ecx
0x790402: lea     edx, [edi-1]
0x790405: mov     eax, [esp+0Ch+arg_10]
0x790409: mov     ecx, [esp+0Ch+arg_C]
0x79040D: push    eax
0x79040E: push    ecx
0x79040F: push    ebx
0x790410: push    edx
0x790411: push    esi
0x790412: call    sub_78FBC0
0x790417: add     esp, 14h
0x79041A: pop     edi
0x79041B: pop     esi
0x79041C: pop     ebx
0x79041D: retn
