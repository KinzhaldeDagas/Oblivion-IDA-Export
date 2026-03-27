0x480000: push    0FFFFFFFFh
0x480002: push    offset SEH_480000
0x480007: mov     eax, large fs:0
0x48000D: push    eax
0x48000E: sub     esp, 64h
0x480011: push    ebx
0x480012: push    ebp
0x480013: push    esi
0x480014: push    edi
0x480015: mov     eax, ds:0B30AACh
0x48001A: xor     eax, esp
0x48001C: push    eax
0x48001D: lea     eax, [esp+84h+var_C]
0x480021: mov     large fs:0, eax
0x480027: mov     eax, [esp+84h+arg_4]
0x48002E: mov     edi, ds:0B3F928h
0x480034: push    eax
0x480035: lea     ecx, [esp+88h+var_50]
0x480039: call    sub_70F010
0x48003E: mov     esi, [esp+84h+arg_0]
0x480045: test    esi, esi
0x480047: jz      loc_4802C9
0x48004D: test    edi, edi
0x48004F: jz      loc_4802C9
0x480055: lea     ecx, [esp+84h+var_50]
0x480059: push    ecx
0x48005A: call    sub_76BEF0
0x48005F: add     esp, 4
0x480062: cmp     eax, 31545844h
0x480067: mov     [esp+84h+var_6C], eax
0x48006B: jg      short loc_480087
0x48006D: jz      short loc_480099
0x48006F: cmp     eax, 15h
0x480072: jz      short loc_480099
0x480074: cmp     eax, 20h ; ' '
0x480077: jnz     loc_4802C9
0x48007D: mov     [esp+84h+var_6C], 15h
0x480085: jmp     short loc_480099
0x480087: cmp     eax, 33545844h
0x48008C: jz      short loc_480099
0x48008E: cmp     eax, 35545844h
0x480093: jnz     loc_4802C9
0x480099: mov     edx, [esi]
0x48009B: mov     eax, [edx+4Ch]
0x48009E: mov     edi, [edi+280h]
0x4800A4: mov     ecx, esi
0x4800A6: call    eax
0x4800A8: mov     edx, [esi]
0x4800AA: mov     ebx, eax
0x4800AC: mov     eax, [edx+50h]
0x4800AF: mov     ecx, esi
0x4800B1: call    eax
0x4800B3: mov     ebp, eax
0x4800B5: mov     eax, [esi+3Ch]
0x4800B8: test    eax, eax
0x4800BA: jz      short loc_4800C8
0x4800BC: mov     ecx, [eax+60h]
0x4800BF: mov     [esp+84h+arg_0], ecx
0x4800C6: jmp     short loc_4800D3
0x4800C8: mov     [esp+84h+arg_0], 1
0x4800D3: mov     ecx, [esi+24h]
0x4800D6: mov     edx, [ecx]
0x4800D8: mov     eax, [edx+14h]
0x4800DB: call    eax
0x4800DD: mov     esi, [esp+84h+arg_0]
0x4800E4: mov     ecx, [edi]
0x4800E6: mov     ecx, [ecx+5Ch]
0x4800E9: push    0
0x4800EB: lea     edx, [esp+88h+var_68]
0x4800EF: push    edx
0x4800F0: push    2
0x4800F2: mov     [esp+90h+var_60], eax
0x4800F6: mov     eax, [esp+90h+var_6C]
0x4800FA: push    eax
0x4800FB: push    0
0x4800FD: push    esi
0x4800FE: push    ebp
0x4800FF: push    ebx
0x480100: push    edi
0x480101: call    ecx
0x480103: xor     edi, edi
0x480105: cmp     eax, edi
0x480107: jnz     loc_4802C9
0x48010D: cmp     [esp+84h+var_68], edi
0x480111: jz      loc_4802C9
0x480117: push    70h ; 'p'; Size
0x480119: call    FormHeapAlloc
0x48011E: add     esp, 4
0x480121: mov     [esp+84h+var_5C], eax
0x480125: cmp     eax, edi
0x480127: mov     [esp+84h+var_4], edi
0x48012E: jz      short loc_480143
0x480130: push    1
0x480132: push    esi
0x480133: lea     edx, [esp+8Ch+var_50]
0x480137: push    edx
0x480138: push    ebp
0x480139: push    ebx
0x48013A: mov     ecx, eax
0x48013C: call    NiPixelData__NiPixelData
0x480141: mov     edi, eax
0x480143: mov     ebp, [esp+84h+arg_0]
0x48014A: xor     esi, esi
0x48014C: test    ebp, ebp
0x48014E: mov     [esp+84h+var_4], 0FFFFFFFFh
0x480159: jbe     loc_48028F
0x48015F: mov     eax, [esp+84h+var_60]
0x480163: mov     ecx, [eax]
0x480165: lea     edx, [esp+84h+var_64]
0x480169: push    edx
0x48016A: push    esi
0x48016B: push    eax
0x48016C: mov     eax, [ecx+48h]
0x48016F: call    eax
0x480171: mov     eax, [esp+84h+var_68]
0x480175: mov     ecx, [eax]
0x480177: lea     edx, [esp+84h+var_70]
0x48017B: push    edx
0x48017C: push    esi
0x48017D: push    eax
0x48017E: mov     eax, [ecx+48h]
0x480181: call    eax
0x480183: mov     ecx, [esp+84h+var_64]
0x480187: mov     edx, [esp+84h+var_70]
0x48018B: push    0
0x48018D: push    0FFFFFFFFh
0x48018F: push    0
0x480191: push    0
0x480193: push    ecx
0x480194: push    0
0x480196: push    0
0x480198: push    edx
0x480199: call    D3DXLoadSurfaceFromSurface_0
0x48019E: mov     eax, [esp+84h+var_70]
0x4801A2: mov     ecx, [eax]
0x4801A4: push    0
0x4801A6: push    0
0x4801A8: lea     edx, [esp+8Ch+var_58]
0x4801AC: push    edx
0x4801AD: push    eax
0x4801AE: mov     eax, [ecx+34h]
0x4801B1: call    eax
0x4801B3: mov     eax, [esp+84h+var_6C]
0x4801B7: cmp     eax, 15h
0x4801BA: jnz     short loc_48021B
0x4801BC: mov     ecx, [edi+58h]
0x4801BF: mov     edx, [ecx+esi*4]
0x4801C2: imul    edx, [esp+84h+var_58]
0x4801C7: mov     ecx, [edi+5Ch]
0x4801CA: mov     eax, [esp+84h+Src]
0x4801CE: push    edx; Size
0x4801CF: mov     edx, [ecx+esi*4]
0x4801D2: add     edx, [edi+50h]
0x4801D5: push    eax; Src
0x4801D6: push    edx; Dst
0x4801D7: call    _memcpy
0x4801DC: mov     ecx, [edi+54h]
0x4801DF: mov     ecx, [ecx+esi*4]
0x4801E2: mov     edx, [edi+58h]
0x4801E5: imul    ecx, [edx+esi*4]
0x4801E9: mov     eax, [edi+5Ch]
0x4801EC: mov     eax, [eax+esi*4]
0x4801EF: add     eax, [edi+50h]
0x4801F2: add     esp, 0Ch
0x4801F5: add     ecx, ecx
0x4801F7: add     ecx, ecx
0x4801F9: jz      short loc_480260
0x4801FB: add     ecx, 0FFFFFFFFh
0x4801FE: shr     ecx, 2
0x480201: add     eax, 2
0x480204: add     ecx, 1
0x480207: mov     dl, [eax-2]
0x48020A: mov     bl, [eax]
0x48020C: mov     [eax-2], bl
0x48020F: mov     [eax], dl
0x480211: add     eax, 4
0x480214: sub     ecx, 1
0x480217: jnz     short loc_480207
0x480219: jmp     short loc_480260
0x48021B: cmp     eax, 31545844h
0x480220: jz      short loc_480230
0x480222: cmp     eax, 33545844h
0x480227: jz      short loc_480230
0x480229: cmp     eax, 35545844h
0x48022E: jnz     short loc_480260
0x480230: mov     eax, [edi+5Ch]
0x480233: mov     ecx, [eax+esi*4]
0x480236: mov     edx, [edi+58h]
0x480239: mov     eax, [edx+esi*4]
0x48023C: add     ecx, [edi+50h]
0x48023F: cmp     eax, 4
0x480242: jnb     short loc_480249
0x480244: mov     eax, 4
0x480249: imul    eax, [esp+84h+var_58]
0x48024E: shr     eax, 2
0x480251: push    eax; Size
0x480252: mov     eax, [esp+88h+Src]
0x480256: push    eax; Src
0x480257: push    ecx; Dst
0x480258: call    _memcpy
0x48025D: add     esp, 0Ch
0x480260: mov     eax, [esp+84h+var_70]
0x480264: mov     ecx, [eax]
0x480266: mov     edx, [ecx+38h]
0x480269: push    eax
0x48026A: call    edx
0x48026C: mov     eax, [esp+84h+var_70]
0x480270: mov     ecx, [eax]
0x480272: mov     edx, [ecx+8]
0x480275: push    eax
0x480276: call    edx
0x480278: mov     eax, [esp+84h+var_64]
0x48027C: mov     ecx, [eax]
0x48027E: mov     edx, [ecx+8]
0x480281: push    eax
0x480282: call    edx
0x480284: add     esi, 1
0x480287: cmp     esi, ebp
0x480289: jb      loc_48015F
0x48028F: mov     eax, [esp+84h+var_68]
0x480293: mov     ecx, [eax]
0x480295: mov     edx, [ecx+8]
0x480298: push    eax
0x480299: call    edx
0x48029B: push    offset dword_B256D0; a2
0x4802A0: push    edi; a1
0x4802A1: call    NiSourceTexture__LoadTexturePixelData
0x4802A6: add     esp, 8
0x4802A9: cmp     ebp, 1
0x4802AC: setnbe  cl
0x4802AF: mov     ds:0B256CDh, cl
0x4802B5: mov     ecx, [esp+84h+var_C]
0x4802B9: mov     large fs:0, ecx
0x4802C0: pop     ecx
0x4802C1: pop     edi
0x4802C2: pop     esi
0x4802C3: pop     ebp
0x4802C4: pop     ebx
0x4802C5: add     esp, 70h
0x4802C8: retn
0x4802C9: xor     eax, eax
0x4802CB: mov     ecx, [esp+84h+var_C]
0x4802CF: mov     large fs:0, ecx
0x4802D6: pop     ecx
0x4802D7: pop     edi
0x4802D8: pop     esi
0x4802D9: pop     ebp
0x4802DA: pop     ebx
0x4802DB: add     esp, 70h
0x4802DE: retn
