0x862660: push    ebx
0x862661: push    esi
0x862662: mov     esi, [esp+8+arg_4]
0x862666: mov     eax, [esi+1Ch]
0x862669: shr     eax, 1Ch
0x86266C: movzx   eax, ax
0x86266F: push    edi
0x862670: push    eax
0x862671: call    GetShadowSceneNode
0x862676: mov     ecx, [esp+10h+arg_8]
0x86267A: add     esp, 4
0x86267D: cmp     ecx, 148h
0x862683: jz      short loc_8626B1
0x862685: cmp     ecx, 14Ah
0x86268B: jz      short loc_8626B1
0x86268D: mov     esi, [esi+1Ch]
0x862690: test    esi, 20000h
0x862696: jbe     short loc_8626A0
0x862698: mov     esi, ds:0B43114h
0x86269E: jmp     short loc_8626D3
0x8626A0: cmp     byte ptr ds:0B43074h, 0
0x8626A7: jz      short loc_8626B1
0x8626A9: test    esi, 200000h
0x8626AF: ja      short loc_8626CD
0x8626B1: test    eax, eax
0x8626B3: jz      short loc_8626D7
0x8626B5: cmp     byte ptr ds:0B430ADh, 0
0x8626BC: jz      short loc_8626CD
0x8626BE: mov     ecx, [eax+120h]; this
0x8626C4: call    BSRenderedTexture__GetInnerTexture
0x8626C9: mov     esi, eax
0x8626CB: jmp     short loc_8626D3
0x8626CD: mov     esi, ds:0B430F4h
0x8626D3: test    esi, esi
0x8626D5: jnz     short loc_8626DD
0x8626D7: mov     esi, ds:0B430F4h
0x8626DD: mov     ecx, [esp+0Ch+arg_0]
0x8626E1: mov     edx, [ecx+24h]
0x8626E4: mov     ebx, [edx+4]
0x8626E7: mov     edi, [ebx+4]
0x8626EA: cmp     edi, esi
0x8626EC: jz      short loc_86271F
0x8626EE: test    edi, edi
0x8626F0: jz      short loc_86270E
0x8626F2: lea     eax, [edi+4]
0x8626F5: push    eax; lpAddend
0x8626F6: call    dword ptr ds:0A2807Ch
0x8626FC: test    eax, eax
0x8626FE: jnz     short loc_86270E
0x862700: test    edi, edi
0x862702: jz      short loc_86270E
0x862704: mov     edx, [edi]
0x862706: mov     eax, [edx]
0x862708: push    1
0x86270A: mov     ecx, edi
0x86270C: call    eax
0x86270E: test    esi, esi
0x862710: mov     [ebx+4], esi
0x862713: jz      short loc_86271F
0x862715: add     esi, 4
0x862718: push    esi; lpAddend
0x862719: call    dword ptr ds:0A28078h
0x86271F: push    0
0x862721: mov     ecx, ebx
0x862723: call    sub_7715E0
0x862728: pop     edi
0x862729: pop     esi
0x86272A: pop     ebx
0x86272B: retn    0Ch
