0x6E90A0: sub     esp, 0Ch
0x6E90A3: push    ebx
0x6E90A4: mov     ebx, [esp+10h+arg_0]
0x6E90A8: push    ebp
0x6E90A9: push    esi
0x6E90AA: push    edi
0x6E90AB: mov     edi, ecx
0x6E90AD: push    ebx
0x6E90AE: mov     [esp+20h+var_8], edi
0x6E90B2: call    sub_715E70
0x6E90B7: xor     ebp, ebp
0x6E90B9: cmp     [edi+4Eh], bp
0x6E90BD: jbe     short loc_6E90F9
0x6E90BF: nop
0x6E90C0: mov     eax, [edi+48h]
0x6E90C3: mov     esi, [eax+ebp*4]
0x6E90C6: test    esi, esi
0x6E90C8: jz      short loc_6E90EE
0x6E90CA: xor     edi, edi
0x6E90CC: cmp     [esi+8], edi
0x6E90CF: jbe     short loc_6E90EA
0x6E90D1: mov     ecx, ebx
0x6E90D3: call    sub_7124A0
0x6E90D8: cmp     edi, [esi+8]
0x6E90DB: jnb     short loc_6E90E2
0x6E90DD: mov     ecx, [esi]
0x6E90DF: mov     [ecx+edi*4], eax
0x6E90E2: add     edi, 1
0x6E90E5: cmp     edi, [esi+8]
0x6E90E8: jb      short loc_6E90D1
0x6E90EA: mov     edi, [esp+1Ch+var_8]
0x6E90EE: movzx   edx, word ptr [edi+4Eh]
0x6E90F2: add     ebp, 1
0x6E90F5: cmp     ebp, edx
0x6E90F7: jb      short loc_6E90C0
0x6E90F9: xor     eax, eax
0x6E90FB: cmp     [edi+5Eh], ax
0x6E90FF: mov     [esp+1Ch+var_4], eax
0x6E9103: jbe     loc_6E91B3
0x6E9109: lea     esp, [esp+0]
0x6E9110: mov     ecx, [edi+58h]
0x6E9113: mov     ebp, [ecx+eax*4]
0x6E9116: test    ebp, ebp
0x6E9118: jz      loc_6E91A0
0x6E911E: cmp     dword ptr [ebp+8], 0
0x6E9122: mov     [esp+1Ch+var_C], 0
0x6E912A: jbe     short loc_6E91A0
0x6E912C: lea     esp, [esp+0]
0x6E9130: mov     edx, [ebp+0]
0x6E9133: mov     eax, [esp+1Ch+var_C]
0x6E9137: mov     edi, [edx+eax*4]
0x6E913A: mov     ecx, ebx
0x6E913C: call    sub_7124A0
0x6E9141: mov     ecx, ebx
0x6E9143: mov     [edi], eax
0x6E9145: call    sub_7124A0
0x6E914A: mov     esi, [edi+4]
0x6E914D: mov     ebx, eax
0x6E914F: cmp     esi, ebx
0x6E9151: jz      short loc_6E9184
0x6E9153: test    esi, esi
0x6E9155: jz      short loc_6E9173
0x6E9157: lea     ecx, [esi+4]
0x6E915A: push    ecx; lpAddend
0x6E915B: call    dword ptr ds:0A2807Ch
0x6E9161: test    eax, eax
0x6E9163: jnz     short loc_6E9173
0x6E9165: test    esi, esi
0x6E9167: jz      short loc_6E9173
0x6E9169: mov     edx, [esi]
0x6E916B: mov     eax, [edx]
0x6E916D: push    1
0x6E916F: mov     ecx, esi
0x6E9171: call    eax
0x6E9173: test    ebx, ebx
0x6E9175: mov     [edi+4], ebx
0x6E9178: jz      short loc_6E9184
0x6E917A: add     ebx, 4
0x6E917D: push    ebx; lpAddend
0x6E917E: call    dword ptr ds:0A28078h
0x6E9184: mov     eax, [esp+1Ch+var_C]
0x6E9188: mov     ebx, [esp+1Ch+arg_0]
0x6E918C: add     eax, 1
0x6E918F: cmp     eax, [ebp+8]
0x6E9192: mov     [esp+1Ch+var_C], eax
0x6E9196: jb      short loc_6E9130
0x6E9198: mov     eax, [esp+1Ch+var_4]
0x6E919C: mov     edi, [esp+1Ch+var_8]
0x6E91A0: movzx   ecx, word ptr [edi+5Eh]
0x6E91A4: add     eax, 1
0x6E91A7: cmp     eax, ecx
0x6E91A9: mov     [esp+1Ch+var_4], eax
0x6E91AD: jb      loc_6E9110
0x6E91B3: xor     esi, esi
0x6E91B5: cmp     [edi+6Ch], esi
0x6E91B8: jbe     short loc_6E91DA
0x6E91BA: lea     ebx, [ebx+0]
0x6E91C0: mov     ecx, ebx
0x6E91C2: call    sub_7124A0
0x6E91C7: cmp     esi, [edi+6Ch]
0x6E91CA: jnb     short loc_6E91D2
0x6E91CC: mov     edx, [edi+64h]
0x6E91CF: mov     [edx+esi*4], eax
0x6E91D2: add     esi, 1
0x6E91D5: cmp     esi, [edi+6Ch]
0x6E91D8: jb      short loc_6E91C0
0x6E91DA: pop     edi
0x6E91DB: pop     esi
0x6E91DC: pop     ebp
0x6E91DD: pop     ebx
0x6E91DE: add     esp, 0Ch
0x6E91E1: retn    4
