0x6D60B0: sub     esp, 18h
0x6D60B3: push    ebx
0x6D60B4: mov     ebx, ecx
0x6D60B6: fld     dword ptr [ebx+8]
0x6D60B9: push    esi
0x6D60BA: fld     [esp+20h+arg_0]
0x6D60BE: push    edi
0x6D60BF: fld     st
0x6D60C1: fucomp  st(2)
0x6D60C3: fnstsw  ax
0x6D60C5: fstp    st(1)
0x6D60C7: test    ah, 44h
0x6D60CA: jp      short loc_6D60F3
0x6D60CC: mov     edi, [esp+24h+arg_8]
0x6D60D0: fstp    st
0x6D60D2: lea     eax, [ebx+0Ch]
0x6D60D5: mov     esi, eax
0x6D60D7: mov     ecx, 8
0x6D60DC: rep movsd
0x6D60DE: mov     ecx, eax
0x6D60E0: call    sub_6CBC10
0x6D60E5: pop     edi
0x6D60E6: test    al, al
0x6D60E8: pop     esi
0x6D60E9: setz    al
0x6D60EC: pop     ebx
0x6D60ED: add     esp, 18h
0x6D60F0: retn    0Ch
0x6D60F3: mov     eax, [ebx+2Ch]
0x6D60F6: test    eax, eax
0x6D60F8: jz      short loc_6D614B
0x6D60FA: movzx   esi, word ptr [eax+0Ah]
0x6D60FE: test    esi, esi
0x6D6100: mov     cl, [eax+1Dh]
0x6D6103: mov     edi, [eax+14h]
0x6D6106: mov     eax, [eax+24h]
0x6D6109: mov     [esp+24h+var_14], cl
0x6D610D: jbe     short loc_6D614B
0x6D610F: movzx   edx, word ptr [ebx+30h]
0x6D6113: mov     ecx, dword ptr [esp+24h+var_14]
0x6D6117: push    ecx; char
0x6D6118: mov     [esp+28h+var_18], edx
0x6D611C: lea     edx, [esp+28h+var_18]
0x6D6120: push    edx; int
0x6D6121: push    esi; int
0x6D6122: push    edi; int
0x6D6123: push    eax; int
0x6D6124: push    ecx
0x6D6125: lea     eax, [esp+3Ch+var_10]
0x6D6129: fstp    [esp+3Ch+var_3C]; float
0x6D612C: push    eax; int
0x6D612D: call    sub_6BBBA0
0x6D6132: add     esp, 1Ch
0x6D6135: push    eax
0x6D6136: lea     ecx, [ebx+0Ch]
0x6D6139: call    sub_471390
0x6D613E: fld     [esp+24h+arg_0]
0x6D6142: mov     cx, word ptr [esp+24h+var_18]
0x6D6147: mov     [ebx+30h], cx
0x6D614B: mov     eax, [ebx+2Ch]
0x6D614E: test    eax, eax
0x6D6150: jz      short loc_6D61A3
0x6D6152: movzx   esi, word ptr [eax+8]
0x6D6156: test    esi, esi
0x6D6158: mov     dl, [eax+1Ch]
0x6D615B: mov     edi, [eax+10h]
0x6D615E: mov     eax, [eax+20h]
0x6D6161: mov     [esp+24h+var_14], dl
0x6D6165: jbe     short loc_6D61A3
0x6D6167: movzx   ecx, word ptr [ebx+32h]
0x6D616B: mov     edx, dword ptr [esp+24h+var_14]
0x6D616F: push    edx; char
0x6D6170: mov     [esp+28h+var_18], ecx
0x6D6174: lea     ecx, [esp+28h+var_18]
0x6D6178: push    ecx; int
0x6D6179: push    esi; int
0x6D617A: push    edi; int
0x6D617B: push    eax; int
0x6D617C: push    ecx
0x6D617D: lea     edx, [esp+3Ch+var_10]
0x6D6181: fstp    [esp+3Ch+var_3C]; float
0x6D6184: push    edx; int
0x6D6185: call    sub_6BCF70
0x6D618A: add     esp, 1Ch
0x6D618D: push    eax
0x6D618E: lea     ecx, [ebx+0Ch]
0x6D6191: call    sub_471430
0x6D6196: fld     [esp+24h+arg_0]
0x6D619A: mov     ax, word ptr [esp+24h+var_18]
0x6D619F: mov     [ebx+32h], ax
0x6D61A3: mov     eax, [ebx+2Ch]
0x6D61A6: test    eax, eax
0x6D61A8: jz      short loc_6D61F6
0x6D61AA: movzx   esi, word ptr [eax+0Ch]
0x6D61AE: test    esi, esi
0x6D61B0: mov     cl, [eax+1Eh]
0x6D61B3: mov     edi, [eax+18h]
0x6D61B6: mov     eax, [eax+28h]
0x6D61B9: mov     [esp+24h+var_14], cl
0x6D61BD: jbe     short loc_6D61F6
0x6D61BF: movzx   edx, word ptr [ebx+34h]
0x6D61C3: mov     ecx, dword ptr [esp+24h+var_14]
0x6D61C7: push    ecx; char
0x6D61C8: mov     [esp+28h+var_18], edx
0x6D61CC: lea     edx, [esp+28h+var_18]
0x6D61D0: push    edx; int
0x6D61D1: push    esi; int
0x6D61D2: push    edi; int
0x6D61D3: push    eax; int
0x6D61D4: push    ecx
0x6D61D5: fstp    [esp+3Ch+var_3C]; float
0x6D61D8: call    sub_6BB270
0x6D61DD: add     esp, 14h
0x6D61E0: lea     ecx, [ebx+0Ch]
0x6D61E3: fstp    [esp+28h+var_28]; float
0x6D61E6: call    sub_471560
0x6D61EB: mov     ax, word ptr [esp+24h+var_18]
0x6D61F0: mov     [ebx+34h], ax
0x6D61F4: jmp     short loc_6D61F8
0x6D61F6: fstp    st
0x6D61F8: mov     edi, [esp+24h+arg_8]
0x6D61FC: lea     eax, [ebx+0Ch]
0x6D61FF: mov     esi, eax
0x6D6201: mov     ecx, 8
0x6D6206: rep movsd
0x6D6208: mov     ecx, eax
0x6D620A: call    sub_6CBC10
0x6D620F: test    al, al
0x6D6211: jz      short loc_6D621E
0x6D6213: pop     edi
0x6D6214: pop     esi
0x6D6215: xor     al, al
0x6D6217: pop     ebx
0x6D6218: add     esp, 18h
0x6D621B: retn    0Ch
0x6D621E: fld     [esp+24h+arg_0]
0x6D6222: pop     edi
0x6D6223: pop     esi
0x6D6224: fstp    dword ptr [ebx+8]
0x6D6227: mov     al, 1
0x6D6229: pop     ebx
0x6D622A: add     esp, 18h
0x6D622D: retn    0Ch
