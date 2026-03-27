0x781FE0: push    ebx
0x781FE1: push    esi
0x781FE2: mov     esi, [esp+8+arg_0]
0x781FE6: mov     eax, [esi]
0x781FE8: mov     edx, [eax+18h]
0x781FEB: mov     ebx, ecx
0x781FED: push    edi
0x781FEE: mov     ecx, esi
0x781FF0: call    edx
0x781FF2: mov     edi, eax
0x781FF4: test    edi, edi
0x781FF6: jnz     short loc_782000
0x781FF8: pop     edi
0x781FF9: pop     esi
0x781FFA: xor     al, al
0x781FFC: pop     ebx
0x781FFD: retn    4
0x782000: mov     eax, [esi]
0x782002: mov     edx, [eax+48h]
0x782005: mov     ecx, esi
0x782007: call    edx
0x782009: push    0
0x78200B: mov     [esp+10h+arg_0], eax
0x78200F: mov     eax, [esi]
0x782011: mov     edx, [eax+38h]
0x782014: push    0
0x782016: push    0
0x782018: mov     ecx, esi
0x78201A: call    edx
0x78201C: push    eax
0x78201D: lea     eax, [esp+1Ch+arg_0]
0x782021: push    eax
0x782022: push    edi
0x782023: mov     ecx, ebx
0x782025: call    sub_783BF0
0x78202A: test    eax, eax
0x78202C: jz      short loc_781FF8
0x78202E: mov     edx, [esi]
0x782030: push    eax
0x782031: mov     eax, [edx+44h]
0x782034: mov     ecx, esi
0x782036: call    eax
0x782038: pop     edi
0x782039: pop     esi
0x78203A: mov     al, 1
0x78203C: pop     ebx
0x78203D: retn    4
