0x765560: push    ebx
0x765561: push    esi
0x765562: mov     esi, [esp+8+a4]
0x765566: push    edi
0x765567: mov     edi, ecx
0x765569: mov     ecx, [edi+8ACh]
0x76556F: mov     eax, [ecx]
0x765571: mov     edx, [eax+34h]
0x765574: push    esi
0x765575: call    edx
0x765577: fld     dword ptr [esi+30h]
0x76557A: push    ecx
0x76557B: fstp    [esp+10h+var_10]; float
0x76557E: lea     eax, [esi+24h]
0x765581: push    eax; int
0x765582: lea     ecx, [edi+940h]
0x765588: push    esi; int
0x765589: push    ecx; int
0x76558A: call    sub_761AE0
0x76558F: mov     ebx, [esp+1Ch+a3]
0x765593: add     esp, 10h
0x765596: cmp     word ptr [ebx+20h], 4
0x76559B: ja      short loc_7655DE
0x76559D: mov     edx, [esp+0Ch+a2]
0x7655A1: push    ebp
0x7655A2: mov     ebp, [edx+20h]
0x7655A5: xor     esi, esi
0x7655A7: jmp     short loc_7655B0
0x7655A9: align 10h
0x7655B0: mov     edx, [ebx+4]
0x7655B3: movzx   edx, word ptr [edx+esi*2]
0x7655B7: mov     eax, [edi+280h]
0x7655BD: mov     ecx, [eax]
0x7655BF: shl     edx, 6
0x7655C2: add     edx, ebp
0x7655C4: push    edx
0x7655C5: lea     edx, [esi+100h]
0x7655CB: push    edx
0x7655CC: push    eax
0x7655CD: mov     eax, [ecx+0B0h]
0x7655D3: call    eax
0x7655D5: add     esi, 1
0x7655D8: cmp     esi, 4
0x7655DB: jl      short loc_7655B0
0x7655DD: pop     ebp
0x7655DE: pop     edi
0x7655DF: pop     esi
0x7655E0: pop     ebx
0x7655E1: retn    0Ch
