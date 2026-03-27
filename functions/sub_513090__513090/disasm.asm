0x513090: sub     esp, 8
0x513093: mov     ecx, [esp+8+l]
0x513097: mov     edx, [esp+8+arg_10]
0x51309B: lea     eax, [esp+8+var_8]
0x51309E: push    eax; UInt16
0x51309F: mov     eax, [esp+0Ch+arg_C]
0x5130A3: push    ecx; l
0x5130A4: mov     ecx, [esp+10h+a4]
0x5130A8: push    edx; a6
0x5130A9: mov     edx, [esp+14h+a3]
0x5130AD: push    eax; a5
0x5130AE: mov     eax, [esp+18h+arg_4]
0x5130B2: push    ecx; a4
0x5130B3: mov     ecx, [esp+1Ch+a1]
0x5130B7: push    edx; a3
0x5130B8: push    eax; a2
0x5130B9: push    ecx; a1
0x5130BA: mov     dword ptr [esp+28h+var_8], 0
0x5130C2: call    Script_ExtractArgs
0x5130C7: add     esp, 20h
0x5130CA: test    al, al
0x5130CC: jnz     short loc_5130D2
0x5130CE: add     esp, 8
0x5130D1: retn
0x5130D2: mov     edx, dword ptr [esp+8+var_8]
0x5130D5: test    edx, edx
0x5130D7: jz      short loc_51314F
0x5130D9: movzx   eax, word ptr [edx+20h]
0x5130DD: cmp     ax, 0FFFFh
0x5130E1: jnz     short loc_5130FE
0x5130E3: mov     eax, [edx+1Ch]
0x5130E6: push    esi
0x5130E7: lea     esi, [eax+1]
0x5130EA: lea     ebx, [ebx+0]
0x5130F0: mov     cl, [eax]
0x5130F2: add     eax, 1
0x5130F5: test    cl, cl
0x5130F7: jnz     short loc_5130F0
0x5130F9: sub     eax, esi
0x5130FB: pop     esi
0x5130FC: jmp     short loc_513101
0x5130FE: movzx   eax, ax
0x513101: test    eax, eax
0x513103: jbe     short loc_51314F
0x513105: lea     ecx, [edx+18h]
0x513108: mov     edx, [ecx]
0x51310A: mov     eax, [edx+14h]
0x51310D: call    eax
0x51310F: mov     ecx, ds:0B33A1Ch
0x513115: push    eax
0x513116: call    ModelLoader_IsModelLoaded??
0x51311B: test    eax, eax
0x51311D: jnz     short loc_51314F
0x51311F: mov     ecx, dword ptr [esp+8+var_8]
0x513122: mov     edx, [ecx+18h]
0x513125: push    eax
0x513126: push    1
0x513128: push    eax
0x513129: push    eax
0x51312A: add     ecx, 18h
0x51312D: push    eax
0x51312E: mov     eax, [edx+14h]
0x513131: push    5
0x513133: call    eax
0x513135: push    eax
0x513136: lea     ecx, [esp+24h+var_4]
0x51313A: push    ecx
0x51313B: mov     ecx, ds:0B33A1Ch
0x513141: call    sub_43B420
0x513146: lea     ecx, [esp+8+var_4]; void *
0x51314A: call    sub_4BDDC0
0x51314F: mov     al, 1
0x513151: add     esp, 8
0x513154: retn
