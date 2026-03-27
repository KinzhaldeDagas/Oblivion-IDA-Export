0x8A20A0: push    ebp
0x8A20A1: mov     ebp, esp
0x8A20A3: and     esp, 0FFFFFFF0h
0x8A20A6: sub     esp, 58h
0x8A20A9: mov     eax, ds:0B30AACh
0x8A20AE: xor     eax, esp
0x8A20B0: mov     [esp+58h+var_4], eax
0x8A20B4: push    esi
0x8A20B5: push    edi
0x8A20B6: mov     edi, [ebp+arg_0]
0x8A20B9: push    edi
0x8A20BA: mov     esi, ecx
0x8A20BC: call    sub_8A2690
0x8A20C1: test    esi, esi
0x8A20C3: jz      short loc_8A20D1
0x8A20C5: mov     eax, [esi+8]
0x8A20C8: test    eax, eax
0x8A20CA: jz      short loc_8A20D1
0x8A20CC: mov     eax, [eax+0Ch]
0x8A20CF: jmp     short loc_8A20D3
0x8A20D1: xor     eax, eax
0x8A20D3: test    esi, esi
0x8A20D5: mov     [edi+4], eax
0x8A20D8: jz      short loc_8A20E4
0x8A20DA: mov     esi, [esi+8]
0x8A20DD: test    esi, esi
0x8A20DF: lea     eax, [esi+20h]
0x8A20E2: jnz     short loc_8A20E9
0x8A20E4: mov     eax, offset xmmword_B2F090
0x8A20E9: movaps  xmm0, xmmword ptr [eax]
0x8A20EC: movaps  [esp+60h+var_50], xmm0
0x8A20F1: movaps  xmm0, xmmword ptr [eax+10h]
0x8A20F5: movaps  [esp+60h+var_40], xmm0
0x8A20FA: movaps  xmm0, xmmword ptr [eax+20h]
0x8A20FE: movaps  [esp+60h+var_30], xmm0
0x8A2103: movaps  xmm0, xmmword ptr [eax+30h]
0x8A2107: lea     eax, [esp+60h+var_50]
0x8A210B: lea     esi, [edi+10h]
0x8A210E: push    eax
0x8A210F: mov     ecx, esi
0x8A2111: movaps  [esp+64h+var_20], xmm0
0x8A2116: call    sub_47DCD0
0x8A211B: lea     ecx, [esp+60h+var_40]
0x8A211F: push    ecx
0x8A2120: lea     ecx, [esi+10h]
0x8A2123: call    sub_47DCD0
0x8A2128: lea     edx, [esp+60h+var_30]
0x8A212C: push    edx
0x8A212D: lea     ecx, [esi+20h]
0x8A2130: call    sub_47DCD0
0x8A2135: lea     eax, [esp+60h+var_20]
0x8A2139: push    eax
0x8A213A: lea     ecx, [esi+30h]
0x8A213D: call    sub_47DCD0
0x8A2142: mov     ecx, [esp+60h+var_4]
0x8A2146: pop     edi
0x8A2147: pop     esi
0x8A2148: xor     ecx, esp
0x8A214A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A214F: mov     esp, ebp
0x8A2151: pop     ebp
0x8A2152: retn    4
