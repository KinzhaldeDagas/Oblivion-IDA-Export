0x7470B0: sub     esp, 8
0x7470B3: mov     eax, [esp+8+arg_0]
0x7470B7: push    ebx
0x7470B8: push    ebp
0x7470B9: push    edi
0x7470BA: mov     edi, [eax]
0x7470BC: mov     eax, [eax+8]
0x7470BF: mov     ecx, [eax+0Ch]
0x7470C2: mov     ebp, [eax]
0x7470C4: xor     edx, edx
0x7470C6: or      ebx, 0FFFFFFFFh
0x7470C9: xor     eax, eax
0x7470CB: cmp     ecx, edx
0x7470CD: mov     [esp+14h+var_4], ecx
0x7470D1: mov     [esp+14h+var_8], ebx
0x7470D5: mov     [esi+1448h], edx
0x7470DB: mov     dword ptr [esi+144Ch], 23Dh
0x7470E5: jle     short loc_74711E
0x7470E7: cmp     [edi+eax*4], dx
0x7470EB: jz      short loc_747110
0x7470ED: add     dword ptr [esi+1448h], 1
0x7470F4: mov     ecx, [esi+1448h]
0x7470FA: mov     [esi+ecx*4+0B54h], eax
0x747101: mov     [esp+14h+var_8], eax
0x747105: mov     [eax+esi+1450h], dl
0x74710C: mov     ebx, eax
0x74710E: jmp     short loc_747115
0x747110: mov     [edi+eax*4+2], dx
0x747115: add     eax, 1
0x747118: cmp     eax, [esp+14h+var_4]
0x74711C: jl      short loc_7470E7
0x74711E: cmp     dword ptr [esi+1448h], 2
0x747125: jge     short loc_747179
0x747127: cmp     ebx, 2
0x74712A: jge     short loc_747133
0x74712C: add     ebx, 1
0x74712F: mov     eax, ebx
0x747131: jmp     short loc_747135
0x747133: xor     eax, eax
0x747135: add     dword ptr [esi+1448h], 1
0x74713C: mov     ecx, [esi+1448h]
0x747142: mov     [esi+ecx*4+0B54h], eax
0x747149: mov     word ptr [edi+eax*4], 1
0x74714F: mov     [esi+eax+1450h], dl
0x747156: add     dword ptr [esi+16A0h], 0FFFFFFFFh
0x74715D: cmp     ebp, edx
0x74715F: jz      short loc_74716C
0x747161: movzx   eax, word ptr [ebp+eax*4+2]
0x747166: sub     [esi+16A4h], eax
0x74716C: cmp     dword ptr [esi+1448h], 2
0x747173: jl      short loc_747127
0x747175: mov     [esp+14h+var_8], ebx
0x747179: mov     ecx, [esp+14h+arg_0]
0x74717D: mov     [ecx+4], ebx
0x747180: mov     eax, [esi+1448h]
0x747186: cdq
0x747187: sub     eax, edx
0x747189: mov     ebp, eax
0x74718B: sar     ebp, 1
0x74718D: cmp     ebp, 1
0x747190: jl      short loc_7471A5
0x747192: push    ebp
0x747193: mov     eax, esi
0x747195: call    sub_745E20
0x74719A: sub     ebp, 1
0x74719D: add     esp, 4
0x7471A0: cmp     ebp, 1
0x7471A3: jge     short loc_747192
0x7471A5: mov     ebx, [esp+14h+var_4]
0x7471A9: lea     esp, [esp+0]
0x7471B0: mov     eax, [esi+1448h]
0x7471B6: mov     edx, [esi+eax*4+0B54h]
0x7471BD: mov     ebp, [esi+0B58h]
0x7471C3: add     eax, 0FFFFFFFFh
0x7471C6: mov     [esi+1448h], eax
0x7471CC: push    1
0x7471CE: mov     eax, esi
0x7471D0: mov     [esi+0B58h], edx
0x7471D6: call    sub_745E20
0x7471DB: mov     eax, [esi+0B58h]
0x7471E1: or      edx, 0FFFFFFFFh
0x7471E4: add     [esi+144Ch], edx
0x7471EA: mov     ecx, [esi+144Ch]
0x7471F0: mov     [esi+ecx*4+0B54h], ebp
0x7471F7: add     [esi+144Ch], edx
0x7471FD: mov     ecx, [esi+144Ch]
0x747203: mov     [esi+ecx*4+0B54h], eax
0x74720A: mov     cx, [edi+eax*4]
0x74720E: add     cx, [edi+ebp*4]
0x747212: add     esp, 4
0x747215: mov     [edi+ebx*4], cx
0x747219: mov     cl, [esi+eax+1450h]
0x747220: mov     dl, [esi+ebp+1450h]
0x747227: cmp     dl, cl
0x747229: jb      short loc_747230
0x74722B: movzx   ecx, dl
0x74722E: jmp     short loc_747233
0x747230: movzx   ecx, cl
0x747233: add     cl, 1
0x747236: mov     [esi+ebx+1450h], cl
0x74723D: movzx   ecx, bx
0x747240: mov     [edi+eax*4+2], cx
0x747245: mov     [edi+ebp*4+2], cx
0x74724A: mov     [esi+0B58h], ebx
0x747250: push    1
0x747252: mov     eax, esi
0x747254: add     ebx, 1
0x747257: call    sub_745E20
0x74725C: add     esp, 4
0x74725F: cmp     dword ptr [esi+1448h], 2
0x747266: jge     loc_7471B0
0x74726C: add     dword ptr [esi+144Ch], 0FFFFFFFFh
0x747273: mov     eax, [esi+144Ch]
0x747279: mov     edx, [esi+0B58h]
0x74727F: mov     ecx, [esp+14h+arg_0]
0x747283: mov     [esi+eax*4+0B54h], edx
0x74728A: mov     eax, esi
0x74728C: call    sub_745EF0
0x747291: mov     ebx, [esp+14h+var_8]
0x747295: lea     edx, [esi+0B34h]
0x74729B: call    sub_747020
0x7472A0: pop     edi
0x7472A1: pop     ebp
0x7472A2: pop     ebx
0x7472A3: add     esp, 8
0x7472A6: retn
