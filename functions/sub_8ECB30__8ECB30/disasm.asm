0x8ECB30: mov     eax, [esp+arg_0]
0x8ECB34: mov     edx, eax
0x8ECB36: shr     edx, 17h
0x8ECB39: push    ebx
0x8ECB3A: and     edx, 0FFh
0x8ECB40: sub     edx, 7Fh
0x8ECB43: push    ebp
0x8ECB44: push    esi
0x8ECB45: push    edi
0x8ECB46: mov     edi, eax
0x8ECB48: lea     ebx, [edx-17h]
0x8ECB4B: lea     ecx, [ebx-1]
0x8ECB4E: sar     ecx, 1Fh
0x8ECB51: mov     ebp, ecx
0x8ECB53: and     edi, 7FFFFFFFh
0x8ECB59: mov     [esp+10h+arg_0], eax
0x8ECB5D: not     ebp
0x8ECB5F: and     ebx, ebp
0x8ECB61: mov     esi, 17h
0x8ECB66: sub     esi, edx
0x8ECB68: and     esi, ecx
0x8ECB6A: dec     edi
0x8ECB6B: sar     edi, 1Fh
0x8ECB6E: not     edi
0x8ECB70: and     eax, edi
0x8ECB72: and     ecx, 17h
0x8ECB75: sub     ecx, esi
0x8ECB77: mov     edi, 0FF800000h
0x8ECB7C: sar     edi, cl
0x8ECB7E: mov     ecx, eax
0x8ECB80: and     eax, 7FFFFFh
0x8ECB85: or      eax, offset loc_800000
0x8ECB8A: or      edi, ebp
0x8ECB8C: and     eax, edi
0x8ECB8E: mov     edi, eax
0x8ECB90: sar     ecx, 1Fh
0x8ECB93: lea     eax, [edi+edi-1]
0x8ECB97: or      eax, ecx
0x8ECB99: sub     eax, edi
0x8ECB9B: inc     eax
0x8ECB9C: sar     edx, 1Fh
0x8ECB9F: not     edx
0x8ECBA1: mov     ecx, esi
0x8ECBA3: and     eax, edx
0x8ECBA5: pop     edi
0x8ECBA6: sar     eax, cl
0x8ECBA8: pop     esi
0x8ECBA9: mov     ecx, ebx
0x8ECBAB: pop     ebp
0x8ECBAC: shl     eax, cl
0x8ECBAE: pop     ebx
0x8ECBAF: retn
