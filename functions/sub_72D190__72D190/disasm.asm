0x72D190: sub     esp, 0Ch
0x72D193: push    ebx
0x72D194: push    ebp
0x72D195: push    esi
0x72D196: xor     edx, edx
0x72D198: push    edi
0x72D199: mov     edi, [esp+1Ch+arg_0]
0x72D19D: mov     [esp+1Ch+var_C], edx
0x72D1A1: mov     eax, [esp+1Ch+arg_4]
0x72D1A5: movzx   eax, word ptr [eax+edx*2]
0x72D1A9: lea     ecx, [eax+eax*2]
0x72D1AC: mov     eax, [esp+1Ch+arg_8]
0x72D1B0: lea     eax, [eax+ecx*4]
0x72D1B3: mov     ecx, [eax+8]
0x72D1B6: xor     ebp, ebp
0x72D1B8: test    ecx, ecx
0x72D1BA: mov     [esp+1Ch+arg_0], eax
0x72D1BE: mov     [esp+1Ch+var_4], ecx
0x72D1C2: jbe     short loc_72D23E
0x72D1C4: jmp     short loc_72D1CA
0x72D1C6: mov     eax, [esp+1Ch+arg_0]
0x72D1CA: mov     ecx, [eax]
0x72D1CC: mov     ebx, [ecx+ebp*8]
0x72D1CF: mov     edx, [edi]
0x72D1D1: mov     eax, [edx+4]
0x72D1D4: push    ebx
0x72D1D5: mov     ecx, edi
0x72D1D7: call    eax
0x72D1D9: mov     ecx, [edi+8]
0x72D1DC: mov     esi, [ecx+eax*4]
0x72D1DF: test    esi, esi
0x72D1E1: jz      short loc_72D21B
0x72D1E3: mov     eax, [esi+4]
0x72D1E6: mov     edx, [edi]
0x72D1E8: mov     edx, [edx+8]
0x72D1EB: push    eax
0x72D1EC: push    ebx
0x72D1ED: mov     ecx, edi
0x72D1EF: call    edx
0x72D1F1: test    al, al
0x72D1F3: jnz     short loc_72D1FD
0x72D1F5: mov     esi, [esi]
0x72D1F7: test    esi, esi
0x72D1F9: jnz     short loc_72D1E3
0x72D1FB: jmp     short loc_72D21B
0x72D1FD: fld     dword ptr [esi+8]
0x72D200: mov     eax, [esp+1Ch+arg_0]
0x72D204: mov     ecx, [eax]
0x72D206: fstp    [esp+1Ch+var_8]
0x72D20A: fld     [esp+1Ch+var_8]
0x72D20E: fld     dword ptr [ecx+ebp*8+4]
0x72D212: fcompp
0x72D214: fnstsw  ax
0x72D216: test    ah, 41h
0x72D219: jnz     short loc_72D231
0x72D21B: mov     edx, [esp+1Ch+arg_0]
0x72D21F: mov     eax, [edx]
0x72D221: fld     dword ptr [eax+ebp*8+4]
0x72D225: push    ecx
0x72D226: fstp    [esp+20h+var_20]; float
0x72D229: push    ebx; int
0x72D22A: mov     ecx, edi
0x72D22C: call    sub_72CB90
0x72D231: add     ebp, 1
0x72D234: cmp     ebp, [esp+1Ch+var_4]
0x72D238: jb      short loc_72D1C6
0x72D23A: mov     edx, [esp+1Ch+var_C]
0x72D23E: add     edx, 1
0x72D241: cmp     edx, 3
0x72D244: mov     [esp+1Ch+var_C], edx
0x72D248: jb      loc_72D1A1
0x72D24E: pop     edi
0x72D24F: pop     esi
0x72D250: pop     ebp
0x72D251: pop     ebx
0x72D252: add     esp, 0Ch
0x72D255: retn    0Ch
