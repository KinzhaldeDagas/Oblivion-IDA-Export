0x7B0170: sub     esp, 28h
0x7B0173: mov     eax, ds:0B43104h
0x7B0178: push    ebx
0x7B0179: push    ebp
0x7B017A: push    esi
0x7B017B: push    edi
0x7B017C: push    0Fh; a3
0x7B017E: mov     esi, ecx
0x7B0180: mov     ecx, ds:0B42F50h; this
0x7B0186: xor     ebp, ebp
0x7B0188: push    eax; a2
0x7B0189: mov     [esp+40h+var_14], ebp
0x7B018D: call    BSTextureManager_GetDefaultRenderTarget
0x7B0192: mov     ecx, ds:0B43104h
0x7B0198: push    0Fh; a3
0x7B019A: push    ecx; a2
0x7B019B: mov     ecx, ds:0B42F50h; this
0x7B01A1: mov     [esp+40h+a2], eax
0x7B01A5: call    BSTextureManager_GetDefaultRenderTarget
0x7B01AA: mov     ecx, ds:0B3F928h
0x7B01B0: mov     edx, [ecx]
0x7B01B2: mov     [esp+38h+var_24], eax
0x7B01B6: mov     eax, [edx+7Ch]
0x7B01B9: call    eax
0x7B01BB: mov     ebx, [esp+38h+arg_4]
0x7B01BF: mov     edi, eax
0x7B01C1: mov     eax, [ebx]
0x7B01C3: mov     ecx, [eax+20h]
0x7B01C6: cmp     ecx, ebp
0x7B01C8: jz      short loc_7B01D3
0x7B01CA: mov     edx, [ecx]
0x7B01CC: mov     eax, [edx+4Ch]
0x7B01CF: call    eax
0x7B01D1: mov     ebp, eax
0x7B01D3: mov     edx, [edi]
0x7B01D5: mov     eax, [edx+4Ch]
0x7B01D8: push    0
0x7B01DA: mov     ecx, edi
0x7B01DC: call    eax
0x7B01DE: test    eax, eax
0x7B01E0: mov     [esp+38h+var_18], eax
0x7B01E4: fild    [esp+38h+var_18]
0x7B01E8: jge     short loc_7B01F0
0x7B01EA: fadd    dword ptr ds:0A2FC78h
0x7B01F0: test    ebp, ebp
0x7B01F2: mov     [esp+38h+var_18], ebp
0x7B01F6: fild    [esp+38h+var_18]
0x7B01FA: jge     short loc_7B0202
0x7B01FC: fadd    dword ptr ds:0A2FC78h
0x7B0202: fdivp   st(1), st
0x7B0204: mov     ecx, ds:0B3F928h
0x7B020A: mov     edx, [ecx]
0x7B020C: mov     eax, [edx+7Ch]
0x7B020F: fstp    [esp+38h+var_1C]
0x7B0213: call    eax
0x7B0215: mov     edi, eax
0x7B0217: mov     eax, [ebx]
0x7B0219: mov     ecx, [eax+20h]
0x7B021C: test    ecx, ecx
0x7B021E: jz      short loc_7B022B
0x7B0220: mov     edx, [ecx]
0x7B0222: mov     eax, [edx+50h]
0x7B0225: call    eax
0x7B0227: mov     ebp, eax
0x7B0229: jmp     short loc_7B022D
0x7B022B: xor     ebp, ebp
0x7B022D: mov     edx, [edi]
0x7B022F: mov     eax, [edx+50h]
0x7B0232: push    0
0x7B0234: mov     ecx, edi
0x7B0236: call    eax
0x7B0238: test    eax, eax
0x7B023A: mov     [esp+38h+var_18], eax
0x7B023E: fild    [esp+38h+var_18]
0x7B0242: jge     short loc_7B024A
0x7B0244: fadd    dword ptr ds:0A2FC78h
0x7B024A: test    ebp, ebp
0x7B024C: mov     [esp+38h+var_18], ebp
0x7B0250: fild    [esp+38h+var_18]
0x7B0254: jge     short loc_7B025C
0x7B0256: fadd    dword ptr ds:0A2FC78h
0x7B025C: fdivp   st(1), st
0x7B025E: mov     cl, ds:0B43075h
0x7B0264: mov     ebp, [esp+38h+arg_0]
0x7B0268: neg     cl
0x7B026A: mov     ebx, 1
0x7B026F: sbb     ecx, ecx
0x7B0271: and     ecx, 7
0x7B0274: xor     eax, eax
0x7B0276: mov     [esp+38h+a1], ecx
0x7B027A: fstp    [esp+38h+var_18]
0x7B027E: fldz
0x7B0280: fst     [esp+38h+var_10]
0x7B0284: fld1
0x7B0286: fst     [esp+38h+var_C]
0x7B028A: fstp    [esp+38h+var_8]
0x7B028E: fst     [esp+38h+var_4]
0x7B0292: fst     dword ptr [esi+0DCh]
0x7B0298: fst     dword ptr [esi+0D8h]
0x7B029E: fst     dword ptr [esi+0D4h]
0x7B02A4: fst     dword ptr [esi+0D0h]
0x7B02AA: cmp     ds:0B2C1E8h, eax
0x7B02B0: fld     [esp+38h+var_18]
0x7B02B4: jbe     loc_7B04A8
0x7B02BA: fld     [esp+38h+var_1C]
0x7B02BE: mov     edx, [esp+38h+arg_4]
0x7B02C2: fstp    dword ptr ds:0B2C2D4h
0x7B02C8: mov     ecx, esi; this
0x7B02CA: fst     dword ptr ds:0B2C2D8h
0x7B02D0: fxch    st(1)
0x7B02D2: fstp    dword ptr ds:0B2C2DCh
0x7B02D8: fld1
0x7B02DA: fsubrp  st(1), st
0x7B02DC: fstp    dword ptr ds:0B2C2E0h
0x7B02E2: mov     [esi+0ACh], eax
0x7B02E8: mov     [esi+90h], eax
0x7B02EE: mov     eax, [edx]
0x7B02F0: push    eax; a2
0x7B02F1: call    sub_802890
0x7B02F6: mov     edi, [esp+38h+a2]
0x7B02FA: mov     ecx, edi
0x7B02FC: call    BSRenderedTexture__UseTextureToRender
0x7B0301: push    eax; a2
0x7B0302: push    ebx; a1
0x7B0303: call    NiRenderer_BeginScene
0x7B0308: mov     ecx, ds:0B3F928h
0x7B030E: add     esp, 8
0x7B0311: cmp     [ecx+200h], ebx
0x7B0317: jz      short loc_7B0321
0x7B0319: cmp     [ecx+204h], ebx
0x7B031F: jnz     short loc_7B033B
0x7B0321: cmp     [ecx+20Ch], bl
0x7B0327: jnz     short loc_7B033B
0x7B0329: mov     edx, [ecx]
0x7B032B: mov     eax, [edx+144h]
0x7B0331: push    0
0x7B0333: call    eax
0x7B0335: mov     ecx, ds:0B3F928h
0x7B033B: push    ecx
0x7B033C: mov     ecx, ebp; this
0x7B033E: call    sub_709C60
0x7B0343: call    NiRenderer_EndScene
0x7B0348: fld1
0x7B034A: cmp     dword ptr ds:0B2C1E8h, 0
0x7B0351: fst     dword ptr ds:0B2C2D4h
0x7B0357: fst     dword ptr ds:0B2C2D8h
0x7B035D: mov     [esp+38h+arg_0], 0
0x7B0365: fldz
0x7B0367: fst     dword ptr ds:0B2C2DCh
0x7B036D: fst     dword ptr ds:0B2C2E0h
0x7B0373: fst     dword ptr ds:0B2C2ECh
0x7B0379: fstp    dword ptr ds:0B2C2F0h
0x7B037F: fst     dword ptr ds:0B2C2E4h
0x7B0385: fstp    dword ptr ds:0B2C2E8h
0x7B038B: jbe     loc_7B04B0
0x7B0391: mov     ecx, [esp+38h+var_24]
0x7B0395: call    BSRenderedTexture__UseTextureToRender
0x7B039A: mov     ecx, [esp+38h+a1]
0x7B039E: push    eax; a2
0x7B039F: push    ecx; a1
0x7B03A0: call    NiRenderer_BeginScene
0x7B03A5: mov     ecx, ds:0B3F928h
0x7B03AB: add     esp, 8
0x7B03AE: cmp     [ecx+200h], ebx
0x7B03B4: jz      short loc_7B03BE
0x7B03B6: cmp     [ecx+204h], ebx
0x7B03BC: jnz     short loc_7B03D2
0x7B03BE: cmp     [ecx+20Ch], bl
0x7B03C4: jnz     short loc_7B03D2
0x7B03C6: mov     edx, [ecx]
0x7B03C8: mov     eax, [edx+144h]
0x7B03CE: push    0
0x7B03D0: call    eax
0x7B03D2: push    edi; a2
0x7B03D3: mov     ecx, esi; this
0x7B03D5: call    sub_802890
0x7B03DA: mov     [esi+0ACh], ebx
0x7B03E0: mov     [esi+90h], ebx
0x7B03E6: mov     ecx, ds:0B3F928h
0x7B03EC: push    ecx
0x7B03ED: mov     ecx, ebp; this
0x7B03EF: call    sub_709C60
0x7B03F4: mov     dword ptr [esi+0ACh], 2
0x7B03FE: mov     edx, ds:0B3F928h
0x7B0404: push    edx
0x7B0405: mov     ecx, ebp; this
0x7B0407: call    sub_709C60
0x7B040C: call    NiRenderer_EndScene
0x7B0411: mov     ecx, edi
0x7B0413: call    BSRenderedTexture__UseTextureToRender
0x7B0418: push    eax; a2
0x7B0419: mov     eax, [esp+3Ch+a1]
0x7B041D: push    eax; a1
0x7B041E: call    NiRenderer_BeginScene
0x7B0423: mov     ecx, ds:0B3F928h
0x7B0429: add     esp, 8
0x7B042C: cmp     [ecx+200h], ebx
0x7B0432: jz      short loc_7B043C
0x7B0434: cmp     [ecx+204h], ebx
0x7B043A: jnz     short loc_7B0450
0x7B043C: cmp     [ecx+20Ch], bl
0x7B0442: jnz     short loc_7B0450
0x7B0444: mov     edx, [ecx]
0x7B0446: mov     eax, [edx+144h]
0x7B044C: push    0
0x7B044E: call    eax
0x7B0450: mov     ecx, [esp+38h+var_24]
0x7B0454: push    ecx; a2
0x7B0455: mov     ecx, esi; this
0x7B0457: call    sub_802890
0x7B045C: mov     dword ptr [esi+0ACh], 3
0x7B0466: mov     edx, ds:0B3F928h
0x7B046C: push    edx
0x7B046D: mov     ecx, ebp; this
0x7B046F: call    sub_709C60
0x7B0474: mov     dword ptr [esi+0ACh], 4
0x7B047E: mov     eax, ds:0B3F928h
0x7B0483: push    eax
0x7B0484: mov     ecx, ebp; this
0x7B0486: call    sub_709C60
0x7B048B: call    NiRenderer_EndScene
0x7B0490: mov     eax, [esp+38h+arg_0]
0x7B0494: add     eax, ebx
0x7B0496: cmp     eax, ds:0B2C1E8h
0x7B049C: mov     [esp+38h+arg_0], eax
0x7B04A0: jb      loc_7B0391
0x7B04A6: jmp     short loc_7B04B0
0x7B04A8: mov     edi, [esp+38h+a2]
0x7B04AC: fstp    st(1)
0x7B04AE: fstp    st
0x7B04B0: push    edi; a2
0x7B04B1: mov     ecx, esi; this
0x7B04B3: mov     dword ptr [esi+0ACh], 0
0x7B04BD: mov     dword ptr [esi+90h], 2
0x7B04C7: call    sub_802890
0x7B04CC: mov     ecx, [esp+38h+arg_4]
0x7B04D0: mov     eax, [ecx]
0x7B04D2: test    eax, eax
0x7B04D4: jz      short loc_7B04E3
0x7B04D6: mov     edi, [esp+38h+arg_4]
0x7B04DA: mov     cl, byte ptr [esp+38h+var_14]
0x7B04DE: add     eax, 20h ; ' '
0x7B04E1: jmp     short loc_7B04EF
0x7B04E3: xor     edi, edi
0x7B04E5: mov     [esp+38h+arg_4], edi
0x7B04E9: lea     eax, [esp+38h+arg_4]
0x7B04ED: mov     ecx, ebx
0x7B04EF: test    bl, cl
0x7B04F1: mov     edx, [eax]
0x7B04F3: mov     [esp+38h+arg_4], edx
0x7B04F7: jz      short loc_7B0514
0x7B04F9: test    edi, edi
0x7B04FB: jz      short loc_7B0514
0x7B04FD: lea     eax, [edi+4]
0x7B0500: push    eax; lpAddend
0x7B0501: call    dword ptr ds:0A2807Ch
0x7B0507: test    eax, eax
0x7B0509: jnz     short loc_7B0514
0x7B050B: mov     edx, [edi]
0x7B050D: mov     eax, [edx]
0x7B050F: push    ebx
0x7B0510: mov     ecx, edi
0x7B0512: call    eax
0x7B0514: mov     edi, [esi+0E0h]
0x7B051A: cmp     edi, [esp+38h+arg_4]
0x7B051E: jz      short loc_7B0557
0x7B0520: test    edi, edi
0x7B0522: jz      short loc_7B053F
0x7B0524: lea     ecx, [edi+4]
0x7B0527: push    ecx; lpAddend
0x7B0528: call    dword ptr ds:0A2807Ch
0x7B052E: test    eax, eax
0x7B0530: jnz     short loc_7B053F
0x7B0532: test    edi, edi
0x7B0534: jz      short loc_7B053F
0x7B0536: mov     edx, [edi]
0x7B0538: mov     eax, [edx]
0x7B053A: push    ebx
0x7B053B: mov     ecx, edi
0x7B053D: call    eax
0x7B053F: mov     eax, [esp+38h+arg_4]
0x7B0543: test    eax, eax
0x7B0545: mov     [esi+0E0h], eax
0x7B054B: jz      short loc_7B0557
0x7B054D: add     eax, 4
0x7B0550: push    eax; lpAddend
0x7B0551: call    dword ptr ds:0A28078h
0x7B0557: fld1
0x7B0559: mov     eax, ds:0B2C1E4h
0x7B055E: sub     eax, 0
0x7B0561: fst     dword ptr ds:0B2C2D4h
0x7B0567: fst     dword ptr ds:0B2C2D8h
0x7B056D: fldz
0x7B056F: fst     dword ptr ds:0B2C2DCh
0x7B0575: fst     dword ptr ds:0B2C2E0h
0x7B057B: fld     [esp+38h+var_1C]
0x7B057F: fst     dword ptr ds:0B2C2E4h
0x7B0585: fld     [esp+38h+var_18]
0x7B0589: fst     dword ptr ds:0B2C2E8h
0x7B058F: fxch    st(2)
0x7B0591: fst     dword ptr ds:0B2C2ECh
0x7B0597: fld     st(2)
0x7B0599: fld1
0x7B059B: fsubrp  st(1), st
0x7B059D: fstp    dword ptr ds:0B2C2F0h
0x7B05A3: jz      short loc_7B05DE
0x7B05A5: sub     eax, ebx
0x7B05A7: jz      short loc_7B05BB
0x7B05A9: fstp    st
0x7B05AB: fxch    st(2)
0x7B05AD: fst     dword ptr ds:0B2C2C4h
0x7B05B3: fst     dword ptr ds:0B2C2C8h
0x7B05B9: jmp     short loc_7B05CD
0x7B05BB: fxch    st(3)
0x7B05BD: fst     dword ptr ds:0B2C2C4h
0x7B05C3: fxch    st(3)
0x7B05C5: fstp    dword ptr ds:0B2C2C8h
0x7B05CB: fxch    st(2)
0x7B05CD: cmp     [esp+38h+arg_C], 0
0x7B05D2: jz      short loc_7B05EE
0x7B05D4: fstp    st(1)
0x7B05D6: fstp    st(1)
0x7B05D8: fst     [esp+38h+var_C]
0x7B05DC: jmp     short loc_7B05F6
0x7B05DE: fstp    dword ptr ds:0B2C2C4h
0x7B05E4: fxch    st(2)
0x7B05E6: fst     dword ptr ds:0B2C2C8h
0x7B05EC: jmp     short loc_7B05CD
0x7B05EE: fstp    st
0x7B05F0: fxch    st(1)
0x7B05F2: fstp    [esp+38h+var_C]
0x7B05F6: mov     edi, [esp+38h+arg_8]
0x7B05FA: fstp    [esp+38h+var_8]
0x7B05FE: mov     ecx, [edi]
0x7B0600: test    ecx, ecx
0x7B0602: jz      short loc_7B0612
0x7B0604: call    BSRenderedTexture__UseTextureToRender
0x7B0609: push    eax; a2
0x7B060A: push    ebx; a1
0x7B060B: call    NiRenderer_BeginScene
0x7B0610: jmp     short loc_7B061A
0x7B0612: push    0; a2
0x7B0614: push    ebx; a1
0x7B0615: call    NiRenderer_BeginScene1
0x7B061A: mov     ecx, ds:0B3F928h
0x7B0620: add     esp, 8
0x7B0623: cmp     [ecx+200h], ebx
0x7B0629: jz      short loc_7B0633
0x7B062B: cmp     [ecx+204h], ebx
0x7B0631: jnz     short loc_7B0650
0x7B0633: cmp     [ecx+20Ch], bl
0x7B0639: jnz     short loc_7B0650
0x7B063B: mov     edx, [ecx]
0x7B063D: mov     edx, [edx+144h]
0x7B0643: lea     eax, [esp+38h+var_10]
0x7B0647: push    eax
0x7B0648: call    edx
0x7B064A: mov     ecx, ds:0B3F928h
0x7B0650: push    ecx
0x7B0651: mov     ecx, ebp; this
0x7B0653: call    sub_709C60
0x7B0658: cmp     dword ptr [edi], 0
0x7B065B: jz      short loc_7B0662
0x7B065D: call    NiRenderer_EndScene
0x7B0662: mov     edi, [esi+0E0h]
0x7B0668: test    edi, edi
0x7B066A: jz      short loc_7B0691
0x7B066C: lea     eax, [edi+4]
0x7B066F: push    eax; lpAddend
0x7B0670: call    dword ptr ds:0A2807Ch
0x7B0676: test    eax, eax
0x7B0678: jnz     short loc_7B0687
0x7B067A: test    edi, edi
0x7B067C: jz      short loc_7B0687
0x7B067E: mov     edx, [edi]
0x7B0680: mov     eax, [edx]
0x7B0682: push    ebx
0x7B0683: mov     ecx, edi
0x7B0685: call    eax
0x7B0687: mov     dword ptr [esi+0E0h], 0
0x7B0691: mov     ecx, [esp+38h+a2]
0x7B0695: push    ecx; a2
0x7B0696: mov     ecx, ds:0B42F50h; this
0x7B069C: call    sub_7C1EE0
0x7B06A1: mov     edx, [esp+38h+var_24]
0x7B06A5: mov     ecx, ds:0B42F50h; this
0x7B06AB: push    edx; a2
0x7B06AC: call    sub_7C1EE0
0x7B06B1: pop     edi
0x7B06B2: pop     esi
0x7B06B3: pop     ebp
0x7B06B4: pop     ebx
0x7B06B5: add     esp, 28h
0x7B06B8: retn    10h
