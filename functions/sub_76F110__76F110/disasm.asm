0x76F110: push    esi
0x76F111: mov     esi, [esp+4+arg_0]
0x76F115: mov     ecx, [esi+10h]
0x76F118: mov     edx, [esi+24h]
0x76F11B: push    edi
0x76F11C: mov     di, [esi+4]
0x76F120: sub     di, 0Ch
0x76F124: movzx   edi, di
0x76F127: xor     eax, eax
0x76F129: mov     [esp+8+arg_0], edi
0x76F12D: xor     edi, edi
0x76F12F: cmp     [esi+8], ax
0x76F133: jbe     short loc_76F1AF
0x76F135: push    ebx
0x76F136: push    ebp
0x76F137: cmp     word ptr [esp+10h+arg_0], 3
0x76F13D: jnz     short loc_76F15C
0x76F13F: test    ecx, ecx
0x76F141: jz      short loc_76F154
0x76F143: movsx   ebx, word ptr [ecx]
0x76F146: and     ebx, 0FFFFFF00h
0x76F14C: or      ebx, 0FFFF0000h
0x76F152: jmp     short loc_76F178
0x76F154: mov     dword ptr [edx], 0FFFFFFF0h
0x76F15A: jmp     short loc_76F19E
0x76F15C: test    ecx, ecx
0x76F15E: jz      short loc_76F154
0x76F160: movsx   ebx, word ptr [ecx+6]
0x76F164: movzx   ebp, word ptr [ecx]
0x76F167: and     ebx, 0FFFFFF00h
0x76F16D: shl     ebx, 8
0x76F170: and     ebp, 0FF00h
0x76F176: or      ebx, ebp
0x76F178: movzx   ebp, word ptr [ecx+2]
0x76F17C: and     ebp, 0FF00h
0x76F182: shl     ebx, 8
0x76F185: or      ebx, ebp
0x76F187: movzx   ebp, word ptr [ecx+4]
0x76F18B: sar     ebp, 4
0x76F18E: shl     ebx, 4
0x76F191: and     ebp, 0FF0h
0x76F197: or      ebx, ebp
0x76F199: mov     [edx], ebx
0x76F19B: add     ecx, [esi+18h]
0x76F19E: add     edx, [esi+20h]
0x76F1A1: add     eax, [esi+1Ch]
0x76F1A4: add     edi, 1
0x76F1A7: cmp     di, [esi+8]
0x76F1AB: jb      short loc_76F137
0x76F1AD: pop     ebp
0x76F1AE: pop     ebx
0x76F1AF: pop     edi
0x76F1B0: pop     esi
0x76F1B1: retn
