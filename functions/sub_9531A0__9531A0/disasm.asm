0x9531A0: sub     esp, 84h
0x9531A6: push    ebx
0x9531A7: push    ebp
0x9531A8: push    esi
0x9531A9: push    edi
0x9531AA: lea     eax, [esp+94h+var_6C]
0x9531AE: xor     ebx, ebx
0x9531B0: mov     ebp, 80000000h
0x9531B5: push    eax
0x9531B6: lea     ecx, [esp+98h+var_20]
0x9531BA: mov     [esp+98h+var_6C], ebx
0x9531BE: mov     [esp+98h+var_68], ebx
0x9531C2: mov     [esp+98h+var_64], ebp
0x9531C6: call    sub_8BC270
0x9531CB: mov     esi, [esp+94h+arg_0]
0x9531D2: mov     edi, [esp+94h+arg_4]
0x9531D9: lea     ecx, [esp+94h+var_84]
0x9531DD: push    8
0x9531DF: push    ecx
0x9531E0: mov     [esp+9Ch+var_54], ebx
0x9531E4: mov     [esp+9Ch+var_50], ebx
0x9531E8: mov     [esp+9Ch+var_4C], ebp
0x9531EC: mov     [esp+9Ch+var_48], ebx
0x9531F0: mov     [esp+9Ch+var_44], ebx
0x9531F4: mov     [esp+9Ch+var_40], ebp
0x9531F8: mov     [esp+9Ch+var_3C], ebx
0x9531FC: mov     [esp+9Ch+var_38], ebx
0x953200: mov     [esp+9Ch+var_34], ebp
0x953204: mov     [esp+9Ch+var_30], ebx
0x953208: mov     [esp+9Ch+var_2C], ebx
0x95320C: mov     [esp+9Ch+var_28], ebp
0x953210: mov     [esp+9Ch+var_24], ebx
0x953214: mov     [esp+9Ch+var_84], ebx
0x953218: mov     [esp+9Ch+var_80], ebx
0x95321C: mov     [esp+9Ch+var_7C], ebp
0x953220: call    sub_8A6EE0
0x953225: mov     edx, [esp+9Ch+var_84]
0x953229: mov     eax, [esp+9Ch+var_80]
0x95322D: mov     [edx+eax*8], esi
0x953230: mov     ecx, [esp+9Ch+var_80]
0x953234: mov     edx, [esp+9Ch+var_84]
0x953238: mov     [edx+ecx*8+4], edi
0x95323C: mov     ecx, [esp+9Ch+var_80]
0x953240: add     esp, 8
0x953243: inc     ecx
0x953244: mov     [esp+94h+var_80], ecx
0x953248: lea     ecx, [esp+94h+var_60]
0x95324C: call    sub_8B0E10
0x953251: push    offset dword_B2FDE4
0x953256: lea     ecx, [esp+98h+var_70]
0x95325A: call    sub_90BBA0
0x95325F: push    offset dword_B2FDE4
0x953264: lea     ecx, [esp+98h+var_74]
0x953268: call    sub_90BBA0
0x95326D: lea     eax, [esp+94h+var_70]
0x953271: push    eax
0x953272: lea     ecx, [esp+98h+var_74]
0x953276: push    ecx
0x953277: lea     ecx, [esp+9Ch+var_14]
0x95327E: call    sub_953530
0x953283: mov     eax, [esp+94h+var_80]
0x953287: xor     edi, edi
0x953289: cmp     eax, ebx
0x95328B: mov     [esp+94h+var_70], edi
0x95328F: jle     loc_953385
0x953295: mov     edx, [esp+94h+var_68]
0x953299: mov     eax, [esp+94h+var_84]
0x95329D: mov     ecx, [eax+edi*8]
0x9532A0: push    edx
0x9532A1: push    ecx
0x9532A2: lea     ecx, [esp+9Ch+var_60]
0x9532A6: call    sub_8B0E80
0x9532AB: mov     ecx, [esp+94h+var_84]
0x9532AF: mov     eax, [ecx+edi*8+4]
0x9532B3: mov     esi, [esp+94h+var_44]
0x9532B7: lea     edx, [esp+94h+var_54]
0x9532BB: push    edx
0x9532BC: mov     edx, [esp+98h+var_18]
0x9532C3: push    eax
0x9532C4: push    edx
0x9532C5: push    eax
0x9532C6: mov     eax, [ecx+edi*8]
0x9532C9: push    eax
0x9532CA: lea     ecx, [esp+0A8h+var_14]
0x9532D1: call    sub_954620
0x9532D6: cmp     esi, [esp+94h+var_44]
0x9532DA: mov     [esp+94h+var_74], esi
0x9532DE: jge     loc_953374
0x9532E4: lea     edi, [esi+esi*2]
0x9532E7: shl     edi, 2
0x9532EA: lea     ebx, [ebx+0]
0x9532F0: mov     eax, [esp+94h+var_48]
0x9532F4: mov     esi, [edi+eax+4]
0x9532F8: mov     ebp, [edi+eax+8]
0x9532FC: push    esi
0x9532FD: lea     ecx, [esp+98h+var_60]
0x953301: call    sub_8B0F00
0x953306: push    eax
0x953307: lea     ecx, [esp+98h+var_75]
0x95330B: push    ecx
0x95330C: lea     ecx, [esp+9Ch+var_60]
0x953310: call    sub_8B0D80
0x953315: cmp     [esp+94h+var_75], bl
0x953319: jnz     short loc_953357
0x95331B: mov     edx, [esp+94h+var_7C]
0x95331F: mov     eax, [esp+94h+var_80]
0x953323: and     edx, 3FFFFFFFh
0x953329: cmp     eax, edx
0x95332B: jnz     short loc_95333C
0x95332D: lea     eax, [esp+94h+var_84]
0x953331: push    8
0x953333: push    eax
0x953334: call    sub_8A6EE0
0x953339: add     esp, 8
0x95333C: mov     ecx, [esp+94h+var_84]
0x953340: mov     edx, [esp+94h+var_80]
0x953344: mov     [ecx+edx*8], esi
0x953347: mov     eax, [esp+94h+var_80]
0x95334B: mov     ecx, [esp+94h+var_84]
0x95334F: mov     [ecx+eax*8+4], ebp
0x953353: inc     [esp+94h+var_80]
0x953357: mov     eax, [esp+94h+var_74]
0x95335B: mov     ecx, [esp+94h+var_44]
0x95335F: inc     eax
0x953360: add     edi, 0Ch
0x953363: cmp     eax, ecx
0x953365: mov     [esp+94h+var_74], eax
0x953369: jl      short loc_9532F0
0x95336B: mov     edi, [esp+94h+var_70]
0x95336F: mov     ebp, 80000000h
0x953374: mov     eax, [esp+94h+var_80]
0x953378: inc     edi
0x953379: cmp     edi, eax
0x95337B: mov     [esp+94h+var_70], edi
0x95337F: jl      loc_953295
0x953385: mov     eax, [esp+94h+var_68]
0x953389: cmp     eax, ebx
0x95338B: jz      loc_95349F
0x953391: mov     ecx, ds:0BA7D98h
0x953397: mov     edx, [ecx]
0x953399: push    5
0x95339B: push    eax
0x95339C: call    dword ptr [edx]
0x95339E: mov     ecx, [esp+94h+var_6C]
0x9533A2: mov     edi, eax
0x9533A4: mov     eax, [esp+94h+var_68]
0x9533A8: push    eax
0x9533A9: push    ecx
0x9533AA: push    edi
0x9533AB: call    sub_8B1890
0x9533B0: mov     ecx, [esp+0A0h+var_50]
0x9533B4: add     esp, 0Ch
0x9533B7: xor     eax, eax
0x9533B9: cmp     ecx, ebx
0x9533BB: jle     short loc_9533D9
0x9533BD: lea     ecx, [ecx+0]
0x9533C0: mov     ecx, [esp+94h+var_54]
0x9533C4: mov     edx, [ecx+eax*8+4]
0x9533C8: mov     ecx, [ecx+eax*8]
0x9533CB: add     edx, edi
0x9533CD: mov     [edi+ecx], edx
0x9533D0: mov     ecx, [esp+94h+var_50]
0x9533D4: inc     eax
0x9533D5: cmp     eax, ecx
0x9533D7: jl      short loc_9533C0
0x9533D9: mov     eax, [esp+94h+var_44]
0x9533DD: xor     ebp, ebp
0x9533DF: cmp     eax, ebx
0x9533E1: jle     short loc_953415
0x9533E3: mov     edx, [esp+94h+var_48]
0x9533E7: mov     esi, [ebx+edx+4]
0x9533EB: push    0FFFFFFFFh
0x9533ED: push    esi
0x9533EE: lea     ecx, [esp+9Ch+var_60]
0x9533F2: call    sub_8B1550
0x9533F7: cmp     eax, 0FFFFFFFFh
0x9533FA: jz      short loc_9533FF
0x9533FC: lea     esi, [eax+edi]
0x9533FF: mov     eax, [esp+94h+var_48]
0x953403: mov     ecx, [ebx+eax]
0x953406: mov     [edi+ecx], esi
0x953409: mov     eax, [esp+94h+var_44]
0x95340D: inc     ebp
0x95340E: add     ebx, 0Ch
0x953411: cmp     ebp, eax
0x953413: jl      short loc_9533E3
0x953415: lea     ecx, [esp+94h+var_14]
0x95341C: call    sub_4BFC40
0x953421: lea     ecx, [esp+94h+var_60]
0x953425: call    sub_8B0E60
0x95342A: mov     eax, [esp+94h+var_7C]
0x95342E: test    eax, eax
0x953430: mov     esi, ds:0BA9DE4h
0x953436: mov     ebx, large fs:2Ch
0x95343D: js      short loc_95345D
0x95343F: mov     edx, [esp+94h+var_84]
0x953443: and     eax, 3FFFFFFFh
0x953448: push    14h
0x95344A: shl     eax, 3
0x95344D: push    eax
0x95344E: mov     eax, [ebx+esi*4]
0x953451: mov     ecx, [eax+19Ch]
0x953457: push    edx
0x953458: call    sub_8A75D0
0x95345D: lea     ecx, [esp+94h+var_54]
0x953461: call    sub_941400
0x953466: lea     ecx, [esp+94h+var_20]
0x95346A: call    sub_8BC000
0x95346F: mov     eax, [esp+94h+var_64]
0x953473: test    eax, eax
0x953475: js      short loc_953492
0x953477: mov     ecx, [esp+94h+var_6C]
0x95347B: mov     edx, [ebx+esi*4]
0x95347E: push    14h
0x953480: and     eax, 3FFFFFFFh
0x953485: push    eax
0x953486: push    ecx
0x953487: mov     ecx, [edx+19Ch]
0x95348D: call    sub_8A75D0
0x953492: mov     eax, edi
0x953494: pop     edi
0x953495: pop     esi
0x953496: pop     ebp
0x953497: pop     ebx
0x953498: add     esp, 84h
0x95349E: retn
0x95349F: lea     ecx, [esp+94h+var_14]
0x9534A6: call    sub_4BFC40
0x9534AB: lea     ecx, [esp+94h+var_60]
0x9534AF: call    sub_8B0E60
0x9534B4: mov     eax, [esp+94h+var_7C]
0x9534B8: test    ebp, eax
0x9534BA: mov     esi, ds:0BA9DE4h
0x9534C0: mov     edi, large fs:2Ch
0x9534C7: jnz     short loc_9534E7
0x9534C9: mov     ecx, [edi+esi*4]
0x9534CC: mov     ecx, [ecx+19Ch]
0x9534D2: and     eax, 3FFFFFFFh
0x9534D7: push    14h
0x9534D9: shl     eax, 3
0x9534DC: push    eax
0x9534DD: mov     eax, [esp+9Ch+var_84]
0x9534E1: push    eax
0x9534E2: call    sub_8A75D0
0x9534E7: lea     ecx, [esp+94h+var_54]
0x9534EB: call    sub_941400
0x9534F0: lea     ecx, [esp+94h+var_20]
0x9534F4: call    sub_8BC000
0x9534F9: mov     eax, [esp+94h+var_64]
0x9534FD: test    ebp, eax
0x9534FF: jnz     short loc_95351C
0x953501: mov     edx, [esp+94h+var_6C]
0x953505: push    14h
0x953507: and     eax, 3FFFFFFFh
0x95350C: push    eax
0x95350D: mov     eax, [edi+esi*4]
0x953510: mov     ecx, [eax+19Ch]
0x953516: push    edx
0x953517: call    sub_8A75D0
0x95351C: pop     edi
0x95351D: pop     esi
0x95351E: pop     ebp
0x95351F: xor     eax, eax
0x953521: pop     ebx
0x953522: add     esp, 84h
0x953528: retn
