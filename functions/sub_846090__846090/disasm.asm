0x846090: push    0FFFFFFFFh
0x846092: push    offset SEH_850270
0x846097: mov     eax, large fs:0
0x84609D: push    eax
0x84609E: sub     esp, 8
0x8460A1: push    ebx
0x8460A2: push    ebp
0x8460A3: push    esi
0x8460A4: push    edi
0x8460A5: mov     eax, ds:0B30AACh
0x8460AA: xor     eax, esp
0x8460AC: push    eax
0x8460AD: lea     eax, [esp+28h+var_C]
0x8460B1: mov     large fs:0, eax
0x8460B7: mov     ebx, ecx
0x8460B9: mov     eax, ds:0B42EB8h
0x8460BE: movzx   ecx, byte ptr [eax+9]
0x8460C2: mov     edx, [esp+28h+arg_8]
0x8460C6: mov     eax, [edx+0Ch]
0x8460C9: mov     esi, ds:0B45B84h
0x8460CF: mov     [esp+28h+var_14], ecx
0x8460D3: push    eax
0x8460D4: mov     ecx, ebx
0x8460D6: call    sub_848E50
0x8460DB: mov     eax, ds:0B430B0h
0x8460E0: mov     ebp, ds:0B45274h[eax*8]
0x8460E7: mov     edi, [esi+44h]
0x8460EA: cmp     edi, ebp
0x8460EC: jz      short loc_84611F
0x8460EE: test    edi, edi
0x8460F0: jz      short loc_84610E
0x8460F2: lea     ecx, [edi+4]
0x8460F5: push    ecx; lpAddend
0x8460F6: call    dword ptr ds:0A2807Ch
0x8460FC: test    eax, eax
0x8460FE: jnz     short loc_84610E
0x846100: test    edi, edi
0x846102: jz      short loc_84610E
0x846104: mov     edx, [edi]
0x846106: mov     eax, [edx]
0x846108: push    1
0x84610A: mov     ecx, edi
0x84610C: call    eax
0x84610E: test    ebp, ebp
0x846110: mov     [esi+44h], ebp
0x846113: jz      short loc_84611F
0x846115: add     ebp, 4
0x846118: push    ebp; lpAddend
0x846119: call    dword ptr ds:0A28078h
0x84611F: mov     ecx, ds:0B42EB8h
0x846125: mov     edx, [ecx+0Ch]
0x846128: mov     eax, [edx]
0x84612A: mov     ecx, [esi+24h]
0x84612D: mov     ebp, [ecx]
0x84612F: mov     ecx, [esp+28h+arg_C]
0x846133: mov     edx, [ecx]
0x846135: mov     edx, [edx+88h]
0x84613B: mov     [esp+28h+var_10], eax
0x84613F: mov     eax, [esp+28h+var_14]
0x846143: push    eax
0x846144: call    edx
0x846146: mov     edi, [ebp+4]
0x846149: cmp     edi, eax
0x84614B: mov     [esp+28h+arg_8], eax
0x84614F: jz      short loc_846186
0x846151: test    edi, edi
0x846153: jz      short loc_846175
0x846155: lea     eax, [edi+4]
0x846158: push    eax; lpAddend
0x846159: call    dword ptr ds:0A2807Ch
0x84615F: test    eax, eax
0x846161: jnz     short loc_846171
0x846163: test    edi, edi
0x846165: jz      short loc_846171
0x846167: mov     edx, [edi]
0x846169: mov     eax, [edx]
0x84616B: push    1
0x84616D: mov     ecx, edi
0x84616F: call    eax
0x846171: mov     eax, [esp+28h+arg_8]
0x846175: test    eax, eax
0x846177: mov     [ebp+4], eax
0x84617A: jz      short loc_846186
0x84617C: add     eax, 4
0x84617F: push    eax; lpAddend
0x846180: call    dword ptr ds:0A28078h
0x846186: mov     ecx, [esp+28h+arg_C]
0x84618A: push    ecx
0x84618B: push    ebp
0x84618C: mov     ecx, ebx
0x84618E: call    sub_848FA0
0x846193: mov     eax, [esp+28h+var_10]
0x846197: mov     edx, [esi+24h]
0x84619A: mov     ecx, [eax+114h]; this
0x8461A0: mov     ebp, [edx+18h]
0x8461A3: call    BSRenderedTexture__GetInnerTexture
0x8461A8: mov     edi, [ebp+4]
0x8461AB: cmp     edi, eax
0x8461AD: mov     [esp+28h+arg_C], eax
0x8461B1: jz      short loc_8461E8
0x8461B3: test    edi, edi
0x8461B5: jz      short loc_8461D7
0x8461B7: lea     ecx, [edi+4]
0x8461BA: push    ecx; lpAddend
0x8461BB: call    dword ptr ds:0A2807Ch
0x8461C1: test    eax, eax
0x8461C3: jnz     short loc_8461D3
0x8461C5: test    edi, edi
0x8461C7: jz      short loc_8461D3
0x8461C9: mov     edx, [edi]
0x8461CB: mov     eax, [edx]
0x8461CD: push    1
0x8461CF: mov     ecx, edi
0x8461D1: call    eax
0x8461D3: mov     eax, [esp+28h+arg_C]
0x8461D7: test    eax, eax
0x8461D9: mov     [ebp+4], eax
0x8461DC: jz      short loc_8461E8
0x8461DE: add     eax, 4
0x8461E1: push    eax; lpAddend
0x8461E2: call    dword ptr ds:0A28078h
0x8461E8: push    0
0x8461EA: mov     ecx, ebp
0x8461EC: call    sub_7715E0
0x8461F1: mov     edi, 1
0x8461F6: add     [esi+60h], edi
0x8461F9: mov     [esp+28h+arg_C], esi
0x8461FD: mov     edx, [ebx+38h]
0x846200: lea     ecx, [esp+28h+arg_C]
0x846204: push    ecx
0x846205: push    edx
0x846206: lea     ecx, [ebx+40h]
0x846209: mov     [esp+30h+var_4], 0
0x846211: call    sub_76CE40
0x846216: or      eax, 0FFFFFFFFh
0x846219: add     [esi+60h], eax
0x84621C: mov     [esp+28h+var_4], eax
0x846220: jnz     short loc_846229
0x846222: mov     ecx, esi
0x846224: call    sub_7604D0
0x846229: add     [ebx+38h], edi
0x84622C: mov     ecx, dword ptr [esp+28h+var_C]
0x846230: mov     large fs:0, ecx
0x846237: pop     ecx
0x846238: pop     edi
0x846239: pop     esi
0x84623A: pop     ebp
0x84623B: pop     ebx
0x84623C: add     esp, 14h
0x84623F: retn    10h
