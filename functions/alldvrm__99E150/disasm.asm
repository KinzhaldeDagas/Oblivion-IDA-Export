0x99E150: push    edi
0x99E151: push    esi
0x99E152: push    ebp
0x99E153: xor     edi, edi
0x99E155: xor     ebp, ebp
0x99E157: mov     eax, [esp+0Ch+arg_4]
0x99E15B: or      eax, eax
0x99E15D: jge     short loc_99E174
0x99E15F: inc     edi
0x99E160: inc     ebp
0x99E161: mov     edx, [esp+0Ch+arg_0]
0x99E165: neg     eax
0x99E167: neg     edx
0x99E169: sbb     eax, 0
0x99E16C: mov     [esp+0Ch+arg_4], eax
0x99E170: mov     [esp+0Ch+arg_0], edx
0x99E174: mov     eax, [esp+0Ch+arg_C]
0x99E178: or      eax, eax
0x99E17A: jge     short loc_99E190
0x99E17C: inc     edi
0x99E17D: mov     edx, [esp+0Ch+arg_8]
0x99E181: neg     eax
0x99E183: neg     edx
0x99E185: sbb     eax, 0
0x99E188: mov     [esp+0Ch+arg_C], eax
0x99E18C: mov     [esp+0Ch+arg_8], edx
0x99E190: or      eax, eax
0x99E192: jnz     short loc_99E1BC
0x99E194: mov     ecx, [esp+0Ch+arg_8]
0x99E198: mov     eax, [esp+0Ch+arg_4]
0x99E19C: xor     edx, edx
0x99E19E: div     ecx
0x99E1A0: mov     ebx, eax
0x99E1A2: mov     eax, [esp+0Ch+arg_0]
0x99E1A6: div     ecx
0x99E1A8: mov     esi, eax
0x99E1AA: mov     eax, ebx
0x99E1AC: mul     [esp+0Ch+arg_8]
0x99E1B0: mov     ecx, eax
0x99E1B2: mov     eax, esi
0x99E1B4: mul     [esp+0Ch+arg_8]
0x99E1B8: add     edx, ecx
0x99E1BA: jmp     short loc_99E203
0x99E1BC: mov     ebx, eax
0x99E1BE: mov     ecx, [esp+0Ch+arg_8]
0x99E1C2: mov     edx, [esp+0Ch+arg_4]
0x99E1C6: mov     eax, [esp+0Ch+arg_0]
0x99E1CA: shr     ebx, 1
0x99E1CC: rcr     ecx, 1
0x99E1CE: shr     edx, 1
0x99E1D0: rcr     eax, 1
0x99E1D2: or      ebx, ebx
0x99E1D4: jnz     short loc_99E1CA
0x99E1D6: div     ecx
0x99E1D8: mov     esi, eax
0x99E1DA: mul     [esp+0Ch+arg_C]
0x99E1DE: mov     ecx, eax
0x99E1E0: mov     eax, [esp+0Ch+arg_8]
0x99E1E4: mul     esi
0x99E1E6: add     edx, ecx
0x99E1E8: jb      short loc_99E1F8
0x99E1EA: cmp     edx, [esp+0Ch+arg_4]
0x99E1EE: ja      short loc_99E1F8
0x99E1F0: jb      short loc_99E201
0x99E1F2: cmp     eax, [esp+0Ch+arg_0]
0x99E1F6: jbe     short loc_99E201
0x99E1F8: dec     esi
0x99E1F9: sub     eax, [esp+0Ch+arg_8]
0x99E1FD: sbb     edx, [esp+0Ch+arg_C]
0x99E201: xor     ebx, ebx
0x99E203: sub     eax, [esp+0Ch+arg_0]
0x99E207: sbb     edx, [esp+0Ch+arg_4]
0x99E20B: dec     ebp
0x99E20C: jns     short loc_99E215
0x99E20E: neg     edx
0x99E210: neg     eax
0x99E212: sbb     edx, 0
0x99E215: mov     ecx, edx
0x99E217: mov     edx, ebx
0x99E219: mov     ebx, ecx
0x99E21B: mov     ecx, eax
0x99E21D: mov     eax, esi
0x99E21F: dec     edi
0x99E220: jnz     short loc_99E229
0x99E222: neg     edx
0x99E224: neg     eax
0x99E226: sbb     edx, 0
0x99E229: pop     ebp
0x99E22A: pop     esi
0x99E22B: pop     edi
0x99E22C: retn    10h
