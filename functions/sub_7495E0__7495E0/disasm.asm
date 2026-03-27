0x7495E0: sub     esp, 0Ch
0x7495E3: push    ebx
0x7495E4: push    ebp
0x7495E5: push    esi
0x7495E6: push    edi
0x7495E7: mov     edi, [esp+1Ch+arg_0]
0x7495EB: push    edi
0x7495EC: mov     ebp, ecx
0x7495EE: call    sub_723050
0x7495F3: mov     ecx, [edi]
0x7495F5: lea     eax, [esp+1Ch+arg_0]
0x7495F9: push    eax
0x7495FA: push    ebp
0x7495FB: call    NiTMap_GetAt
0x749600: mov     ecx, [ebp+0D8h]
0x749606: lea     esi, [ebp+0D4h]
0x74960C: xor     eax, eax
0x74960E: test    ecx, ecx
0x749610: jbe     short loc_74962A
0x749612: mov     ebx, [esi+8]
0x749615: mov     edx, ebx
0x749617: cmp     dword ptr [edx], 0
0x74961A: jnz     loc_7496BC
0x749620: add     eax, 1
0x749623: add     edx, 4
0x749626: cmp     eax, ecx
0x749628: jb      short loc_749617
0x74962A: xor     eax, eax
0x74962C: test    eax, eax
0x74962E: mov     [esp+1Ch+var_C], eax
0x749632: jz      short loc_74967F
0x749634: mov     ebx, [esp+1Ch+arg_0]
0x749638: add     ebx, 0D4h ; 'Ô'
0x74963E: mov     edi, edi
0x749640: lea     ecx, [esp+1Ch+var_8]
0x749644: push    ecx
0x749645: lea     edx, [esp+20h+var_4]
0x749649: push    edx
0x74964A: lea     eax, [esp+24h+var_C]
0x74964E: push    eax
0x74964F: mov     ecx, esi
0x749651: call    sub_452600
0x749656: mov     edx, [esp+1Ch+var_8]
0x74965A: lea     ecx, [esp+1Ch+arg_0]
0x74965E: push    ecx
0x74965F: mov     ecx, [edi]
0x749661: push    edx
0x749662: call    NiTMap_GetAt
0x749667: mov     eax, [esp+1Ch+arg_0]
0x74966B: mov     ecx, [esp+1Ch+var_4]
0x74966F: push    eax
0x749670: push    ecx
0x749671: mov     ecx, ebx
0x749673: call    sub_412D30
0x749678: cmp     [esp+1Ch+var_C], 0
0x74967D: jnz     short loc_749640
0x74967F: mov     esi, [ebp+0C8h]
0x749685: test    esi, esi
0x749687: jz      short loc_7496A4
0x749689: lea     esp, [esp+0]
0x749690: mov     ecx, [esi+8]
0x749693: mov     edx, [ecx]
0x749695: lea     eax, [esi+8]
0x749698: mov     eax, [edx+38h]
0x74969B: mov     esi, [esi]
0x74969D: push    edi
0x74969E: call    eax
0x7496A0: test    esi, esi
0x7496A2: jnz     short loc_749690
0x7496A4: mov     ecx, [ebp+0B4h]
0x7496AA: mov     edx, [ecx]
0x7496AC: mov     eax, [edx+38h]
0x7496AF: push    edi
0x7496B0: call    eax
0x7496B2: pop     edi
0x7496B3: pop     esi
0x7496B4: pop     ebp
0x7496B5: pop     ebx
0x7496B6: add     esp, 0Ch
0x7496B9: retn    4
0x7496BC: mov     eax, [ebx+eax*4]
0x7496BF: jmp     loc_74962C
