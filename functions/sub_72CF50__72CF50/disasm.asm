0x72CF50: sub     esp, 18h
0x72CF53: mov     eax, ds:0B30AACh
0x72CF58: xor     eax, esp
0x72CF5A: mov     [esp+18h+var_4], eax
0x72CF5E: mov     eax, [esp+18h+arg_0]
0x72CF62: push    ebx
0x72CF63: mov     ebx, [esp+1Ch+arg_4]
0x72CF67: push    ebp
0x72CF68: push    esi
0x72CF69: movzx   esi, word ptr [ebx+8]
0x72CF6D: mov     [esp+24h+var_18], ecx
0x72CF71: mov     [esp+24h+var_10], eax
0x72CF75: xor     ecx, ecx
0x72CF77: mov     eax, esi
0x72CF79: mov     edx, 2
0x72CF7E: mul     edx
0x72CF80: seto    cl
0x72CF83: push    edi
0x72CF84: mov     [esp+28h+var_14], esi
0x72CF88: neg     ecx
0x72CF8A: or      ecx, eax
0x72CF8C: push    ecx; Size
0x72CF8D: call    FormHeapAlloc
0x72CF92: mov     ecx, esi
0x72CF94: add     esp, 4
0x72CF97: test    ecx, ecx
0x72CF99: mov     ebp, eax
0x72CF9B: jbe     short loc_72CFAB
0x72CF9D: or      eax, 0FFFFFFFFh
0x72CFA0: shr     ecx, 1
0x72CFA2: mov     edi, ebp
0x72CFA4: rep stosd
0x72CFA6: adc     ecx, ecx
0x72CFA8: rep stosw
0x72CFAB: mov     eax, [esp+28h+var_18]
0x72CFAF: xor     esi, esi
0x72CFB1: xor     edi, edi
0x72CFB3: cmp     [eax+1Eh], si
0x72CFB7: jbe     short loc_72D01D
0x72CFB9: lea     esp, [esp+0]
0x72CFC0: mov     edx, [ebx]
0x72CFC2: mov     edx, [edx+60h]
0x72CFC5: lea     eax, [esp+28h+var_8]
0x72CFC9: push    eax
0x72CFCA: lea     ecx, [esp+2Ch+var_A]
0x72CFCE: push    ecx
0x72CFCF: mov     ecx, [esp+30h+var_10]
0x72CFD3: lea     eax, [esp+30h+var_C]
0x72CFD7: push    eax
0x72CFD8: mov     eax, [ecx]
0x72CFDA: movzx   ecx, word ptr [eax+edi*2]
0x72CFDE: push    ecx
0x72CFDF: mov     ecx, ebx
0x72CFE1: call    edx
0x72CFE3: xor     ecx, ecx
0x72CFE5: jmp     short loc_72CFF0
0x72CFE7: align 10h
0x72CFF0: movzx   eax, word ptr [esp+ecx*2+28h+var_C]
0x72CFF5: cmp     word ptr [ebp+eax*2+0], 0FFFFh
0x72CFFC: jnz     short loc_72D006
0x72CFFE: mov     [ebp+eax*2+0], si
0x72D003: add     esi, 1
0x72D006: add     ecx, 1
0x72D009: cmp     ecx, 3
0x72D00C: jb      short loc_72CFF0
0x72D00E: mov     eax, [esp+28h+var_18]
0x72D012: movzx   ecx, word ptr [eax+1Eh]
0x72D016: add     edi, 1
0x72D019: cmp     edi, ecx
0x72D01B: jb      short loc_72CFC0
0x72D01D: xor     ecx, ecx
0x72D01F: mov     eax, esi
0x72D021: mov     edx, 2
0x72D026: mul     edx
0x72D028: seto    cl
0x72D02B: neg     ecx
0x72D02D: or      ecx, eax
0x72D02F: push    ecx; Size
0x72D030: call    FormHeapAlloc
0x72D035: mov     edx, [esp+2Ch+var_18]
0x72D039: mov     [edx+1Ch], si
0x72D03D: mov     esi, [esp+2Ch+var_14]
0x72D041: mov     [edx+0Ch], eax
0x72D044: add     esp, 4
0x72D047: xor     eax, eax
0x72D049: test    esi, esi
0x72D04B: jbe     short loc_72D06D
0x72D04D: lea     ecx, [ecx+0]
0x72D050: movzx   ecx, word ptr [ebp+eax*2+0]
0x72D055: cmp     cx, 0FFFFh
0x72D05A: jz      short loc_72D066
0x72D05C: mov     edi, [edx+0Ch]
0x72D05F: movzx   ecx, cx
0x72D062: mov     [edi+ecx*2], ax
0x72D066: add     eax, 1
0x72D069: cmp     eax, esi
0x72D06B: jb      short loc_72D050
0x72D06D: mov     ecx, [esp+28h+var_4]
0x72D071: pop     edi
0x72D072: pop     esi
0x72D073: mov     eax, ebp
0x72D075: pop     ebp
0x72D076: pop     ebx
0x72D077: xor     ecx, esp
0x72D079: call    @__security_check_cookie@4; __security_check_cookie(x)
0x72D07E: add     esp, 18h
0x72D081: retn    8
