0x850270: push    0FFFFFFFFh
0x850272: push    offset SEH_850270
0x850277: mov     eax, large fs:0
0x85027D: push    eax
0x85027E: sub     esp, 8
0x850281: push    ebx
0x850282: push    ebp
0x850283: push    esi
0x850284: push    edi
0x850285: mov     eax, ds:0B30AACh
0x85028A: xor     eax, esp
0x85028C: push    eax
0x85028D: lea     eax, [esp+28h+var_C]
0x850291: mov     large fs:0, eax
0x850297: mov     [esp+28h+var_10], ecx
0x85029B: mov     ebp, [esp+28h+arg_C]
0x85029F: mov     eax, [ebp+1Ch]
0x8502A2: mov     edi, ds:0B45BA8h
0x8502A8: shr     eax, 1Ch
0x8502AB: movzx   eax, ax
0x8502AE: push    eax
0x8502AF: call    GetShadowSceneNode
0x8502B4: add     esp, 4
0x8502B7: test    eax, eax
0x8502B9: jz      short loc_8502E1
0x8502BB: cmp     byte ptr ds:0B430ADh, 0
0x8502C2: jz      short loc_8502D5
0x8502C4: mov     ecx, [eax+120h]; this
0x8502CA: call    BSRenderedTexture__GetInnerTexture
0x8502CF: mov     [esp+28h+arg_C], eax
0x8502D3: jmp     short loc_8502EB
0x8502D5: mov     ecx, ds:0B430F4h
0x8502DB: mov     [esp+28h+arg_C], ecx
0x8502DF: jmp     short loc_8502EB
0x8502E1: mov     edx, ds:0B430F4h
0x8502E7: mov     [esp+28h+arg_C], edx
0x8502EB: fld     dword ptr [ebp+0A4h]
0x8502F1: push    0
0x8502F3: fmul    dword ptr ds:0B464A4h
0x8502F9: mov     ecx, ebp
0x8502FB: fstp    dword ptr ds:0B464A4h
0x850301: mov     eax, [edi+24h]
0x850304: mov     esi, [eax]
0x850306: mov     edx, [ebp+0]
0x850309: mov     eax, [edx+8Ch]
0x85030F: mov     [esp+2Ch+var_14], esi
0x850313: call    eax
0x850315: test    eax, eax
0x850317: jz      short loc_85032C
0x850319: mov     edx, [ebp+0]
0x85031C: mov     eax, [edx+8Ch]
0x850322: push    0
0x850324: mov     ecx, ebp
0x850326: call    eax
0x850328: mov     ebx, eax
0x85032A: jmp     short loc_850341
0x85032C: test    dword ptr [ebp+1Ch], 80h
0x850333: mov     ebx, ds:0B430F0h
0x850339: ja      short loc_850341
0x85033B: mov     ebx, ds:0B430DCh
0x850341: mov     esi, [esi+4]
0x850344: cmp     esi, ebx
0x850346: jz      short loc_85037F
0x850348: test    esi, esi
0x85034A: jz      short loc_850368
0x85034C: lea     ecx, [esi+4]
0x85034F: push    ecx; lpAddend
0x850350: call    dword ptr ds:0A2807Ch
0x850356: test    eax, eax
0x850358: jnz     short loc_850368
0x85035A: test    esi, esi
0x85035C: jz      short loc_850368
0x85035E: mov     edx, [esi]
0x850360: mov     eax, [edx]
0x850362: push    1
0x850364: mov     ecx, esi
0x850366: call    eax
0x850368: test    ebx, ebx
0x85036A: mov     esi, [esp+28h+var_14]
0x85036E: mov     [esi+4], ebx
0x850371: jz      short loc_850383
0x850373: add     ebx, 4
0x850376: push    ebx; lpAddend
0x850377: call    dword ptr ds:0A28078h
0x85037D: jmp     short loc_850383
0x85037F: mov     esi, [esp+28h+var_14]
0x850383: test    esi, esi
0x850385: jz      short loc_8503A2
0x850387: cmp     byte ptr ds:0B42CDDh, 0
0x85038E: jz      short loc_8503A2
0x850390: mov     edx, [ebp+0]
0x850393: mov     eax, [edx+78h]
0x850396: mov     ecx, ebp
0x850398: call    eax
0x85039A: push    eax
0x85039B: mov     ecx, esi
0x85039D: call    sub_7715E0
0x8503A2: mov     ecx, [edi+24h]
0x8503A5: mov     ebp, [ecx+0Ch]
0x8503A8: mov     esi, [ebp+4]
0x8503AB: mov     ebx, [esp+28h+arg_C]
0x8503AF: cmp     esi, ebx
0x8503B1: jz      short loc_8503E4
0x8503B3: test    esi, esi
0x8503B5: jz      short loc_8503D3
0x8503B7: lea     edx, [esi+4]
0x8503BA: push    edx; lpAddend
0x8503BB: call    dword ptr ds:0A2807Ch
0x8503C1: test    eax, eax
0x8503C3: jnz     short loc_8503D3
0x8503C5: test    esi, esi
0x8503C7: jz      short loc_8503D3
0x8503C9: mov     eax, [esi]
0x8503CB: mov     edx, [eax]
0x8503CD: push    1
0x8503CF: mov     ecx, esi
0x8503D1: call    edx
0x8503D3: test    ebx, ebx
0x8503D5: mov     [ebp+4], ebx
0x8503D8: jz      short loc_8503E4
0x8503DA: add     ebx, 4
0x8503DD: push    ebx; lpAddend
0x8503DE: call    dword ptr ds:0A28078h
0x8503E4: mov     ebx, 1
0x8503E9: add     [edi+60h], ebx
0x8503EC: mov     [esp+28h+arg_C], edi
0x8503F0: mov     esi, [esp+28h+var_10]
0x8503F4: mov     ecx, [esi+38h]
0x8503F7: lea     eax, [esp+28h+arg_C]
0x8503FB: push    eax
0x8503FC: push    ecx
0x8503FD: lea     ecx, [esi+40h]
0x850400: mov     [esp+30h+var_4], 0
0x850408: call    sub_76CE40
0x85040D: or      eax, 0FFFFFFFFh
0x850410: add     [edi+60h], eax
0x850413: mov     [esp+28h+var_4], eax
0x850417: jnz     short loc_850420
0x850419: mov     ecx, edi
0x85041B: call    sub_7604D0
0x850420: add     [esi+38h], ebx
0x850423: mov     ecx, [esp+28h+var_C]
0x850427: mov     large fs:0, ecx
0x85042E: pop     ecx
0x85042F: pop     edi
0x850430: pop     esi
0x850431: pop     ebp
0x850432: pop     ebx
0x850433: add     esp, 14h
0x850436: retn    10h
