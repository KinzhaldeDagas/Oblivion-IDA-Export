0x70A190: fld     [esp+arg_0]
0x70A194: push    ebx
0x70A195: push    edi
0x70A196: mov     edi, ecx
0x70A198: movzx   eax, byte ptr [edi+18h]
0x70A19C: shr     al, 3
0x70A19F: and     eax, 0FFFFFF01h
0x70A1A4: push    eax; char
0x70A1A5: push    ecx
0x70A1A6: fstp    [esp+10h+var_10]; float
0x70A1A9: call    sub_47C930
0x70A1AE: mov     cl, [edi+18h]
0x70A1B1: shr     cl, 2
0x70A1B4: test    cl, 1
0x70A1B7: jz      short loc_70A1C2
0x70A1B9: mov     edx, [edi]
0x70A1BB: mov     eax, [edx+74h]
0x70A1BE: mov     ecx, edi
0x70A1C0: call    eax
0x70A1C2: fldz
0x70A1C4: xor     ebx, ebx
0x70A1C6: cmp     [edi+0B6h], bx
0x70A1CD: fstp    dword ptr [edi+2Ch]
0x70A1D0: jbe     loc_70A26D
0x70A1D6: push    esi
0x70A1D7: jmp     short loc_70A1E0
0x70A1D9: align 10h
0x70A1E0: mov     ecx, [edi+0B0h]
0x70A1E6: mov     esi, [ecx+ebx*4]
0x70A1E9: test    esi, esi
0x70A1EB: jz      short loc_70A25A
0x70A1ED: movzx   eax, word ptr [esi+18h]
0x70A1F1: mov     dl, al
0x70A1F3: shr     dl, 1
0x70A1F5: test    dl, 1
0x70A1F8: jz      short loc_70A217
0x70A1FA: fld     [esp+0Ch+arg_0]
0x70A1FE: shr     al, 4
0x70A201: push    ecx
0x70A202: test    al, 1
0x70A204: fstp    [esp+10h+var_10]
0x70A207: mov     eax, [esi]
0x70A209: mov     ecx, esi
0x70A20B: jz      short loc_70A212
0x70A20D: mov     edx, [eax+68h]
0x70A210: jmp     short loc_70A215
0x70A212: mov     edx, [eax+64h]
0x70A215: call    edx
0x70A217: fldz
0x70A219: fcom    dword ptr [esi+2Ch]
0x70A21C: fnstsw  ax
0x70A21E: test    ah, 44h
0x70A221: jnp     short loc_70A258
0x70A223: fcomp   dword ptr [edi+2Ch]
0x70A226: fnstsw  ax
0x70A228: test    ah, 44h
0x70A22B: jp      short loc_70A24A
0x70A22D: mov     ecx, [esi+20h]
0x70A230: lea     eax, [esi+20h]
0x70A233: mov     [edi+20h], ecx
0x70A236: mov     edx, [eax+4]
0x70A239: mov     [edi+24h], edx
0x70A23C: mov     ecx, [eax+8]
0x70A23F: mov     [edi+28h], ecx
0x70A242: mov     edx, [eax+0Ch]
0x70A245: mov     [edi+2Ch], edx
0x70A248: jmp     short loc_70A25A
0x70A24A: add     esi, 20h ; ' '
0x70A24D: push    esi
0x70A24E: lea     ecx, [edi+20h]
0x70A251: call    sub_72A6B0
0x70A256: jmp     short loc_70A25A
0x70A258: fstp    st
0x70A25A: movzx   eax, word ptr [edi+0B6h]
0x70A261: add     ebx, 1
0x70A264: cmp     ebx, eax
0x70A266: jb      loc_70A1E0
0x70A26C: pop     esi
0x70A26D: pop     edi
0x70A26E: pop     ebx
0x70A26F: retn    4
