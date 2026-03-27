0x724190: push    ebx
0x724191: mov     ebx, [esp+4+arg_4]
0x724195: test    bl, bl
0x724197: push    esi
0x724198: mov     esi, ecx
0x72419A: jz      short loc_7241A6
0x72419C: or      word ptr [esi+0DCh], 2
0x7241A4: jmp     short loc_7241AF
0x7241A6: and     word ptr [esi+0DCh], 0FFFDh
0x7241AF: test    byte ptr [esi+0DCh], 1
0x7241B6: fld     [esp+8+arg_0]
0x7241BA: fst     dword ptr [esi+0E4h]
0x7241C0: jz      loc_724251
0x7241C6: add     dword ptr [esi+0E8h], 1
0x7241CD: test    bl, bl
0x7241CF: push    ebp
0x7241D0: lea     ebp, [esi+0E8h]
0x7241D6: jz      short loc_7241E5
0x7241D8: push    1; char
0x7241DA: push    ecx
0x7241DB: fstp    [esp+14h+var_14]; float
0x7241DE: call    sub_47C930
0x7241E3: jmp     short loc_7241E7
0x7241E5: fstp    st
0x7241E7: mov     eax, [esi]
0x7241E9: mov     edx, [eax+74h]
0x7241EC: mov     ecx, esi
0x7241EE: call    edx
0x7241F0: mov     eax, [esi+0E0h]
0x7241F6: test    eax, eax
0x7241F8: jl      short loc_72424B
0x7241FA: mov     ecx, [esi+0B0h]
0x724200: push    edi
0x724201: mov     edi, [ecx+eax*4]
0x724204: test    edi, edi
0x724206: jz      short loc_72424A
0x724208: mov     edx, [edi]
0x72420A: fld     [esp+10h+arg_0]
0x72420E: mov     eax, [edx+60h]
0x724211: push    ebx
0x724212: push    ecx
0x724213: mov     ecx, edi
0x724215: fstp    [esp+18h+var_18]
0x724218: call    eax
0x72421A: mov     ecx, [esi+0E0h]
0x724220: push    ebp
0x724221: push    ecx
0x724222: lea     ecx, [esi+0ECh]
0x724228: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72422D: mov     edx, [edi+20h]
0x724230: lea     eax, [edi+20h]
0x724233: lea     ecx, [esi+20h]
0x724236: mov     [ecx], edx
0x724238: mov     edx, [eax+4]
0x72423B: mov     [ecx+4], edx
0x72423E: mov     edx, [eax+8]
0x724241: mov     [ecx+8], edx
0x724244: mov     eax, [eax+0Ch]
0x724247: mov     [ecx+0Ch], eax
0x72424A: pop     edi
0x72424B: pop     ebp
0x72424C: pop     esi
0x72424D: pop     ebx
0x72424E: retn    8
0x724251: push    ebx; int
0x724252: push    ecx
0x724253: fstp    [esp+10h+var_10]; float
0x724256: call    sub_70A0D0
0x72425B: pop     esi
0x72425C: pop     ebx
0x72425D: retn    8
