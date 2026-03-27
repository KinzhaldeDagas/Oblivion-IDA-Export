0x7BDFC0: sub     esp, 30h
0x7BDFC3: fld1
0x7BDFC5: push    ebx
0x7BDFC6: fst     dword ptr ds:0B2C774h
0x7BDFCC: push    ebp
0x7BDFCD: fstp    dword ptr ds:0B2C778h
0x7BDFD3: push    esi
0x7BDFD4: fldz
0x7BDFD6: push    edi
0x7BDFD7: fst     dword ptr ds:0B2C77Ch
0x7BDFDD: mov     edi, ecx
0x7BDFDF: mov     ecx, ds:0B3F928h
0x7BDFE5: fstp    dword ptr ds:0B2C780h
0x7BDFEB: xor     ebp, ebp
0x7BDFED: mov     eax, [ecx]
0x7BDFEF: mov     edx, [eax+7Ch]
0x7BDFF2: mov     [esp+40h+var_18], ebp
0x7BDFF6: call    edx
0x7BDFF8: mov     ebx, [esp+40h+arg_4]
0x7BDFFC: mov     esi, eax
0x7BDFFE: mov     eax, [ebx]
0x7BE000: mov     ecx, [eax+20h]
0x7BE003: cmp     ecx, ebp
0x7BE005: jz      short loc_7BE010
0x7BE007: mov     eax, [ecx]
0x7BE009: mov     edx, [eax+4Ch]
0x7BE00C: call    edx
0x7BE00E: mov     ebp, eax
0x7BE010: mov     eax, [esi]
0x7BE012: mov     edx, [eax+4Ch]
0x7BE015: push    0
0x7BE017: mov     ecx, esi
0x7BE019: call    edx
0x7BE01B: test    eax, eax
0x7BE01D: mov     [esp+40h+a2], eax
0x7BE021: fild    [esp+40h+a2]
0x7BE025: jge     short loc_7BE02D
0x7BE027: fadd    dword ptr ds:0A2FC78h
0x7BE02D: test    ebp, ebp
0x7BE02F: mov     [esp+40h+a2], ebp
0x7BE033: fild    [esp+40h+a2]
0x7BE037: jge     short loc_7BE03F
0x7BE039: fadd    dword ptr ds:0A2FC78h
0x7BE03F: fdivp   st(1), st
0x7BE041: mov     ecx, ds:0B3F928h
0x7BE047: mov     eax, [ecx]
0x7BE049: mov     edx, [eax+7Ch]
0x7BE04C: fstp    [esp+40h+var_20]
0x7BE050: call    edx
0x7BE052: mov     esi, eax
0x7BE054: mov     eax, [ebx]
0x7BE056: mov     ecx, [eax+20h]
0x7BE059: test    ecx, ecx
0x7BE05B: jz      short loc_7BE068
0x7BE05D: mov     eax, [ecx]
0x7BE05F: mov     edx, [eax+50h]
0x7BE062: call    edx
0x7BE064: mov     ebp, eax
0x7BE066: jmp     short loc_7BE06A
0x7BE068: xor     ebp, ebp
0x7BE06A: mov     eax, [esi]
0x7BE06C: mov     edx, [eax+50h]
0x7BE06F: push    0
0x7BE071: mov     ecx, esi
0x7BE073: call    edx
0x7BE075: test    eax, eax
0x7BE077: mov     [esp+40h+a2], eax
0x7BE07B: fild    [esp+40h+a2]
0x7BE07F: jge     short loc_7BE087
0x7BE081: fadd    dword ptr ds:0A2FC78h
0x7BE087: test    ebp, ebp
0x7BE089: mov     [esp+40h+a2], ebp
0x7BE08D: fild    [esp+40h+a2]
0x7BE091: jge     short loc_7BE099
0x7BE093: fadd    dword ptr ds:0A2FC78h
0x7BE099: fdivp   st(1), st
0x7BE09B: mov     ecx, ds:0B3F928h
0x7BE0A1: mov     eax, [ecx]
0x7BE0A3: mov     edx, [eax+7Ch]
0x7BE0A6: fstp    [esp+40h+var_1C]
0x7BE0AA: call    edx
0x7BE0AC: mov     edx, [eax]
0x7BE0AE: mov     ecx, eax
0x7BE0B0: mov     eax, [edx+4Ch]
0x7BE0B3: push    0
0x7BE0B5: call    eax
0x7BE0B7: fldz
0x7BE0B9: cmp     byte ptr ds:0B42E96h, 0
0x7BE0C0: fst     [esp+40h+var_10.l]
0x7BE0C4: fld1
0x7BE0C6: fst     [esp+40h+var_10.r]
0x7BE0CA: fst     [esp+40h+var_10.t]
0x7BE0CE: fxch    st(1)
0x7BE0D0: fstp    [esp+40h+var_10.b]
0x7BE0D4: jz      short loc_7BE0E0
0x7BE0D6: fst     [esp+40h+var_20]
0x7BE0DA: fstp    [esp+40h+var_1C]
0x7BE0DE: jmp     short loc_7BE0E2
0x7BE0E0: fstp    st
0x7BE0E2: mov     cl, ds:0B43075h
0x7BE0E8: mov     edx, ds:0B43104h
0x7BE0EE: neg     cl
0x7BE0F0: push    0; a3
0x7BE0F2: push    edx; a2
0x7BE0F3: sbb     ecx, ecx
0x7BE0F5: and     ecx, 7
0x7BE0F8: mov     [esp+48h+a1], ecx
0x7BE0FC: mov     ecx, ds:0B42F50h; this
0x7BE102: call    BSTextureManager_GetDefaultRenderTarget
0x7BE107: mov     ecx, [eax+20h]
0x7BE10A: test    ecx, ecx
0x7BE10C: mov     [esp+40h+var_30], eax
0x7BE110: jz      short loc_7BE11D
0x7BE112: mov     eax, [ecx]
0x7BE114: mov     edx, [eax+4Ch]
0x7BE117: call    edx
0x7BE119: mov     ebx, eax
0x7BE11B: jmp     short loc_7BE11F
0x7BE11D: xor     ebx, ebx
0x7BE11F: mov     esi, [esp+40h+var_30]
0x7BE123: mov     ecx, [esi+20h]
0x7BE126: test    ecx, ecx
0x7BE128: jz      short loc_7BE137
0x7BE12A: mov     eax, [ecx]
0x7BE12C: mov     edx, [eax+50h]
0x7BE12F: call    edx
0x7BE131: mov     [esp+40h+a4], eax
0x7BE135: jmp     short loc_7BE13F
0x7BE137: mov     [esp+40h+a4], 0
0x7BE13F: cmp     byte ptr [edi+120h], 0
0x7BE146: mov     eax, [esp+40h+arg_4]
0x7BE14A: mov     ebp, [eax]
0x7BE14C: jz      loc_7BE34C
0x7BE152: push    ebp; a2
0x7BE153: mov     ecx, edi; this
0x7BE155: call    sub_802890
0x7BE15A: fld     [esp+40h+var_20]
0x7BE15E: fld1
0x7BE160: fld     st
0x7BE162: fdivrp  st(2), st
0x7BE164: fxch    st(1)
0x7BE166: fstp    [esp+40h+var_10.r]
0x7BE16A: fdiv    [esp+40h+var_1C]
0x7BE16E: fstp    [esp+40h+var_10.t]
0x7BE172: mov     ecx, [ebp+20h]
0x7BE175: test    ecx, ecx
0x7BE177: jz      short loc_7BE182
0x7BE179: mov     edx, [ecx]
0x7BE17B: mov     eax, [edx+4Ch]
0x7BE17E: call    eax
0x7BE180: jmp     short loc_7BE184
0x7BE182: xor     eax, eax
0x7BE184: test    eax, eax
0x7BE186: mov     [esp+40h+a2], eax
0x7BE18A: fild    [esp+40h+a2]
0x7BE18E: jge     short loc_7BE196
0x7BE190: fadd    dword ptr ds:0A2FC78h
0x7BE196: fdivr   qword ptr ds:0A2FAA0h
0x7BE19C: fadd    qword ptr ds:0A2FC68h
0x7BE1A2: fstp    dword ptr ds:0B2C77Ch
0x7BE1A8: mov     ecx, [ebp+20h]
0x7BE1AB: test    ecx, ecx
0x7BE1AD: jz      short loc_7BE1B8
0x7BE1AF: mov     edx, [ecx]
0x7BE1B1: mov     eax, [edx+50h]
0x7BE1B4: call    eax
0x7BE1B6: jmp     short loc_7BE1BA
0x7BE1B8: xor     eax, eax
0x7BE1BA: test    eax, eax
0x7BE1BC: mov     [esp+40h+a2], eax
0x7BE1C0: fild    [esp+40h+a2]
0x7BE1C4: jge     short loc_7BE1CC
0x7BE1C6: fadd    dword ptr ds:0A2FC78h
0x7BE1CC: fdivr   qword ptr ds:0A2FAA0h
0x7BE1D2: push    8
0x7BE1D4: push    0Ah
0x7BE1D6: push    0
0x7BE1D8: fadd    qword ptr ds:0A2FC68h
0x7BE1DE: fstp    dword ptr ds:0B2C780h
0x7BE1E4: mov     dword ptr [edi+0D0h], 7
0x7BE1EE: mov     ecx, ds:0B3F928h
0x7BE1F4: mov     eax, [ecx+280h]
0x7BE1FA: mov     edx, [eax]
0x7BE1FC: push    eax
0x7BE1FD: mov     eax, [edx+114h]
0x7BE203: call    eax
0x7BE205: mov     ecx, ds:0B43104h
0x7BE20B: push    1; a3
0x7BE20D: push    ecx; a2
0x7BE20E: mov     ecx, ds:0B42F50h; this
0x7BE214: call    BSTextureManager_GetDefaultRenderTarget
0x7BE219: mov     esi, eax
0x7BE21B: mov     ecx, esi; this
0x7BE21D: call    BSRenderedTexture__UseTextureToRender
0x7BE222: mov     edx, [esp+40h+a1]
0x7BE226: push    eax; a2
0x7BE227: push    edx; a1
0x7BE228: call    NiRenderer_BeginScene
0x7BE22D: mov     ecx, ds:0B3F928h
0x7BE233: add     esp, 8
0x7BE236: cmp     dword ptr [ecx+200h], 1
0x7BE23D: jz      short loc_7BE248
0x7BE23F: cmp     dword ptr [ecx+204h], 1
0x7BE246: jnz     short loc_7BE266
0x7BE248: cmp     byte ptr [ecx+20Ch], 1
0x7BE24F: jnz     short loc_7BE266
0x7BE251: mov     eax, [ecx]
0x7BE253: mov     eax, [eax+144h]
0x7BE259: lea     edx, [esp+40h+var_10]
0x7BE25D: push    edx
0x7BE25E: call    eax
0x7BE260: mov     ecx, ds:0B3F928h
0x7BE266: push    ecx
0x7BE267: mov     ecx, [esp+44h+arg_0]; this
0x7BE26B: call    sub_709C60
0x7BE270: call    NiRenderer_EndScene
0x7BE275: push    esi; a2
0x7BE276: mov     ecx, edi; this
0x7BE278: call    sub_802890
0x7BE27D: mov     ecx, [esp+40h+var_30]
0x7BE281: mov     ecx, [ecx+20h]
0x7BE284: test    ecx, ecx
0x7BE286: jz      short loc_7BE291
0x7BE288: mov     edx, [ecx]
0x7BE28A: mov     eax, [edx+50h]
0x7BE28D: call    eax
0x7BE28F: jmp     short loc_7BE293
0x7BE291: xor     eax, eax
0x7BE293: test    eax, eax
0x7BE295: mov     [esp+40h+a2], eax
0x7BE299: fild    [esp+40h+a2]
0x7BE29D: jge     short loc_7BE2A5
0x7BE29F: fadd    dword ptr ds:0A2FC78h
0x7BE2A5: fdivr   qword ptr ds:0A2FAA0h
0x7BE2AB: mov     ecx, [esp+40h+var_30]; this
0x7BE2AF: fadd    qword ptr ds:0A2FC68h
0x7BE2B5: fstp    dword ptr ds:0B2C780h
0x7BE2BB: call    BSRenderedTexture__UseTextureToRender
0x7BE2C0: mov     ecx, [esp+40h+a1]
0x7BE2C4: push    eax; a2
0x7BE2C5: push    ecx; a1
0x7BE2C6: call    NiRenderer_BeginScene
0x7BE2CB: mov     ecx, ds:0B3F928h
0x7BE2D1: add     esp, 8
0x7BE2D4: cmp     dword ptr [ecx+200h], 1
0x7BE2DB: jz      short loc_7BE2E6
0x7BE2DD: cmp     dword ptr [ecx+204h], 1
0x7BE2E4: jnz     short loc_7BE301
0x7BE2E6: cmp     byte ptr [ecx+20Ch], 1
0x7BE2ED: jnz     short loc_7BE301
0x7BE2EF: mov     edx, [ecx]
0x7BE2F1: mov     eax, [edx+144h]
0x7BE2F7: push    0
0x7BE2F9: call    eax
0x7BE2FB: mov     ecx, ds:0B3F928h
0x7BE301: push    ecx
0x7BE302: mov     ecx, [esp+44h+arg_0]; this
0x7BE306: call    sub_709C60
0x7BE30B: call    NiRenderer_EndScene
0x7BE310: mov     ecx, ds:0B42F50h; this
0x7BE316: push    esi; a2
0x7BE317: call    sub_7C1EE0
0x7BE31C: mov     ecx, ds:0B3F928h
0x7BE322: mov     eax, [ecx+280h]
0x7BE328: mov     edx, [eax]
0x7BE32A: push    1
0x7BE32C: push    0Ah
0x7BE32E: push    0
0x7BE330: push    eax
0x7BE331: mov     eax, [edx+114h]
0x7BE337: call    eax
0x7BE339: fldz
0x7BE33B: fst     dword ptr ds:0B2C77Ch
0x7BE341: fstp    dword ptr ds:0B2C780h
0x7BE347: jmp     loc_7BE414
0x7BE34C: mov     ecx, [ebp+20h]
0x7BE34F: test    ecx, ecx
0x7BE351: jz      short loc_7BE36D
0x7BE353: mov     edx, [ecx]
0x7BE355: mov     eax, [edx+4Ch]
0x7BE358: call    eax
0x7BE35A: cmp     eax, 400h
0x7BE35F: jnz     short loc_7BE36D
0x7BE361: mov     dword ptr [edi+0D0h], 4
0x7BE36B: jmp     short loc_7BE398
0x7BE36D: mov     ecx, [ebp+20h]
0x7BE370: test    ecx, ecx
0x7BE372: jz      short loc_7BE38E
0x7BE374: mov     edx, [ecx]
0x7BE376: mov     eax, [edx+4Ch]
0x7BE379: call    eax
0x7BE37B: cmp     eax, 280h
0x7BE380: jnz     short loc_7BE38E
0x7BE382: mov     dword ptr [edi+0D0h], 6
0x7BE38C: jmp     short loc_7BE398
0x7BE38E: mov     dword ptr [edi+0D0h], 3
0x7BE398: push    ebp; a2
0x7BE399: mov     ecx, edi; this
0x7BE39B: call    sub_802890
0x7BE3A0: fld     [esp+40h+var_20]
0x7BE3A4: fld1
0x7BE3A6: mov     ecx, esi; this
0x7BE3A8: fld     st
0x7BE3AA: fdivrp  st(2), st
0x7BE3AC: fxch    st(1)
0x7BE3AE: fstp    [esp+40h+var_10.r]
0x7BE3B2: fdiv    [esp+40h+var_1C]
0x7BE3B6: fstp    [esp+40h+var_10.t]
0x7BE3BA: call    BSRenderedTexture__UseTextureToRender
0x7BE3BF: mov     ecx, [esp+40h+a1]
0x7BE3C3: push    eax; a2
0x7BE3C4: push    ecx; a1
0x7BE3C5: call    NiRenderer_BeginScene
0x7BE3CA: mov     ecx, ds:0B3F928h
0x7BE3D0: mov     eax, 1
0x7BE3D5: add     esp, 8
0x7BE3D8: cmp     [ecx+200h], eax
0x7BE3DE: jz      short loc_7BE3E8
0x7BE3E0: cmp     [ecx+204h], eax
0x7BE3E6: jnz     short loc_7BE405
0x7BE3E8: cmp     [ecx+20Ch], al
0x7BE3EE: jnz     short loc_7BE405
0x7BE3F0: mov     edx, [ecx]
0x7BE3F2: mov     edx, [edx+144h]
0x7BE3F8: lea     eax, [esp+40h+var_10]
0x7BE3FC: push    eax
0x7BE3FD: call    edx
0x7BE3FF: mov     ecx, ds:0B3F928h
0x7BE405: push    ecx
0x7BE406: mov     ecx, [esp+44h+arg_0]; this
0x7BE40A: call    sub_709C60
0x7BE40F: call    NiRenderer_EndScene
0x7BE414: mov     eax, [esp+40h+arg_4]
0x7BE418: cmp     ebp, [eax]
0x7BE41A: jz      short loc_7BE428
0x7BE41C: mov     ecx, ds:0B42F50h; this
0x7BE422: push    ebp; a2
0x7BE423: call    sub_7C1EE0
0x7BE428: cmp     byte ptr ds:0B431E4h, 0
0x7BE42F: mov     ebp, [esp+40h+var_30]
0x7BE433: mov     esi, ebp
0x7BE435: mov     [esp+40h+var_24], ebp
0x7BE439: jz      short loc_7BE460
0x7BE43B: mov     ecx, [esp+40h+arg_4]
0x7BE43F: mov     ecx, [ecx]; this
0x7BE441: call    BSRenderedTexture__GetInnerTexture
0x7BE446: push    9; a1
0x7BE448: mov     ebp, eax
0x7BE44A: call    GetShaderDefinition
0x7BE44F: mov     ecx, [eax+4]; this
0x7BE452: add     esp, 4
0x7BE455: add     eax, 4
0x7BE458: push    ebp; a2
0x7BE459: call    sub_7FA470
0x7BE45E: mov     ebp, esi
0x7BE460: cmp     ebx, 1
0x7BE463: jle     loc_7BE561
0x7BE469: lea     esp, [esp+0]
0x7BE470: mov     ecx, [esp+40h+a4]
0x7BE474: cmp     ecx, 1
0x7BE477: jle     loc_7BE55D
0x7BE47D: mov     eax, ebx
0x7BE47F: cdq
0x7BE480: and     edx, 3
0x7BE483: add     eax, edx
0x7BE485: sar     eax, 2
0x7BE488: mov     ebx, eax
0x7BE48A: cmp     ebx, 1
0x7BE48D: jge     short loc_7BE494
0x7BE48F: mov     ebx, 1
0x7BE494: mov     eax, ecx
0x7BE496: cdq
0x7BE497: and     edx, 3
0x7BE49A: add     eax, edx
0x7BE49C: sar     eax, 2
0x7BE49F: cmp     eax, 1
0x7BE4A2: mov     [esp+40h+a4], eax
0x7BE4A6: jge     short loc_7BE4B0
0x7BE4A8: mov     [esp+40h+a4], 1
0x7BE4B0: mov     edx, [esp+40h+a4]
0x7BE4B4: mov     eax, ds:0B43104h
0x7BE4B9: mov     ecx, ds:0B42F50h; this
0x7BE4BF: push    0; a7
0x7BE4C1: push    71h ; 'q'; a6
0x7BE4C3: push    4; a5
0x7BE4C5: push    edx; a4
0x7BE4C6: push    ebx; a3
0x7BE4C7: push    eax; a2
0x7BE4C8: call    NiRenderer_GetRenderedSurface
0x7BE4CD: push    esi; a2
0x7BE4CE: mov     ecx, edi; this
0x7BE4D0: mov     ebp, eax
0x7BE4D2: mov     dword ptr [edi+0D0h], 3
0x7BE4DC: call    sub_802890
0x7BE4E1: mov     ecx, ebp; this
0x7BE4E3: call    BSRenderedTexture__UseTextureToRender
0x7BE4E8: mov     ecx, [esp+40h+a1]
0x7BE4EC: push    eax; a2
0x7BE4ED: push    ecx; a1
0x7BE4EE: call    NiRenderer_BeginScene
0x7BE4F3: mov     ecx, ds:0B3F928h
0x7BE4F9: add     esp, 8
0x7BE4FC: cmp     dword ptr [ecx+200h], 1
0x7BE503: jz      short loc_7BE50E
0x7BE505: cmp     dword ptr [ecx+204h], 1
0x7BE50C: jnz     short loc_7BE529
0x7BE50E: cmp     byte ptr [ecx+20Ch], 1
0x7BE515: jnz     short loc_7BE529
0x7BE517: mov     edx, [ecx]
0x7BE519: mov     eax, [edx+144h]
0x7BE51F: push    0
0x7BE521: call    eax
0x7BE523: mov     ecx, ds:0B3F928h
0x7BE529: push    ecx
0x7BE52A: mov     ecx, [esp+44h+arg_0]; this
0x7BE52E: call    sub_709C60
0x7BE533: call    NiRenderer_EndScene
0x7BE538: mov     ecx, [esp+40h+arg_4]
0x7BE53C: cmp     esi, [ecx]
0x7BE53E: jz      short loc_7BE552
0x7BE540: cmp     esi, [esp+40h+var_24]
0x7BE544: jz      short loc_7BE552
0x7BE546: mov     ecx, ds:0B42F50h; this
0x7BE54C: push    esi; a2
0x7BE54D: call    sub_7C1EE0
0x7BE552: cmp     ebx, 1
0x7BE555: mov     esi, ebp
0x7BE557: jg      loc_7BE470
0x7BE55D: mov     [esp+40h+var_30], ebp
0x7BE561: mov     eax, ds:0B43328h
0x7BE566: test    eax, eax
0x7BE568: mov     ebx, ds:0A2807Ch
0x7BE56E: jnz     loc_7BE649
0x7BE574: mov     ecx, [ebp+20h]
0x7BE577: test    ecx, ecx
0x7BE579: jz      short loc_7BE584
0x7BE57B: mov     edx, [ecx]
0x7BE57D: mov     eax, [edx+4Ch]
0x7BE580: call    eax
0x7BE582: jmp     short loc_7BE586
0x7BE584: xor     eax, eax
0x7BE586: mov     ecx, ds:0B43104h
0x7BE58C: push    0
0x7BE58E: push    71h ; 'q'
0x7BE590: push    4
0x7BE592: push    eax
0x7BE593: push    ecx
0x7BE594: mov     ecx, ds:0B42F50h
0x7BE59A: call    sub_7C2420
0x7BE59F: push    ebp; a2
0x7BE5A0: mov     ecx, edi; this
0x7BE5A2: mov     esi, eax
0x7BE5A4: mov     dword ptr [edi+0D0h], 0Ch
0x7BE5AE: call    sub_802890
0x7BE5B3: mov     ecx, esi; this
0x7BE5B5: call    BSRenderedTexture__UseTextureToRender
0x7BE5BA: mov     edx, [esp+40h+a1]
0x7BE5BE: push    eax; a2
0x7BE5BF: push    edx; a1
0x7BE5C0: call    NiRenderer_BeginScene
0x7BE5C5: mov     ecx, ds:0B3F928h
0x7BE5CB: mov     eax, 1
0x7BE5D0: add     esp, 8
0x7BE5D3: cmp     [ecx+200h], eax
0x7BE5D9: jz      short loc_7BE5E3
0x7BE5DB: cmp     [ecx+204h], eax
0x7BE5E1: jnz     short loc_7BE5FD
0x7BE5E3: cmp     [ecx+20Ch], al
0x7BE5E9: jnz     short loc_7BE5FD
0x7BE5EB: mov     eax, [ecx]
0x7BE5ED: mov     edx, [eax+144h]
0x7BE5F3: push    0
0x7BE5F5: call    edx
0x7BE5F7: mov     ecx, ds:0B3F928h
0x7BE5FD: push    ecx
0x7BE5FE: mov     ecx, [esp+44h+arg_0]; this
0x7BE602: call    sub_709C60
0x7BE607: call    NiRenderer_EndScene
0x7BE60C: mov     eax, ds:0B43328h
0x7BE611: cmp     eax, esi
0x7BE613: jz      loc_7BE746
0x7BE619: test    eax, eax
0x7BE61B: jz      loc_7BE732
0x7BE621: mov     ebp, eax
0x7BE623: add     eax, 4
0x7BE626: push    eax; lpAddend
0x7BE627: call    ebx ; InterlockedDecrement
0x7BE629: test    eax, eax
0x7BE62B: jnz     loc_7BE732
0x7BE631: test    ebp, ebp
0x7BE633: jz      loc_7BE732
0x7BE639: mov     eax, [ebp+0]
0x7BE63C: mov     edx, [eax]
0x7BE63E: push    1
0x7BE640: mov     ecx, ebp
0x7BE642: call    edx
0x7BE644: jmp     loc_7BE732
0x7BE649: mov     ecx, [eax+20h]
0x7BE64C: test    ecx, ecx
0x7BE64E: jz      short loc_7BE659
0x7BE650: mov     eax, [ecx]
0x7BE652: mov     edx, [eax+4Ch]
0x7BE655: call    edx
0x7BE657: jmp     short loc_7BE65B
0x7BE659: xor     eax, eax
0x7BE65B: mov     ecx, ds:0B42F50h
0x7BE661: push    0
0x7BE663: push    71h ; 'q'
0x7BE665: push    4
0x7BE667: push    eax
0x7BE668: mov     eax, ds:0B43104h
0x7BE66D: push    eax
0x7BE66E: call    sub_7C2420
0x7BE673: mov     dword ptr [edi+0D0h], 0Bh
0x7BE67D: mov     ecx, ds:0B43328h
0x7BE683: push    ecx; a2
0x7BE684: mov     ecx, edi; this
0x7BE686: mov     esi, eax
0x7BE688: call    sub_802890
0x7BE68D: mov     ecx, ebp; this
0x7BE68F: call    BSRenderedTexture__GetInnerTexture
0x7BE694: push    eax; a2
0x7BE695: lea     ecx, [edi+118h]; this
0x7BE69B: call    NiSmartPointer_Set??
0x7BE6A0: mov     ecx, esi; this
0x7BE6A2: call    BSRenderedTexture__UseTextureToRender
0x7BE6A7: mov     edx, [esp+40h+a1]
0x7BE6AB: push    eax; a2
0x7BE6AC: push    edx; a1
0x7BE6AD: call    NiRenderer_BeginScene
0x7BE6B2: mov     ecx, ds:0B3F928h
0x7BE6B8: mov     eax, 1
0x7BE6BD: add     esp, 8
0x7BE6C0: cmp     [ecx+200h], eax
0x7BE6C6: jz      short loc_7BE6D0
0x7BE6C8: cmp     [ecx+204h], eax
0x7BE6CE: jnz     short loc_7BE6EA
0x7BE6D0: cmp     [ecx+20Ch], al
0x7BE6D6: jnz     short loc_7BE6EA
0x7BE6D8: mov     eax, [ecx]
0x7BE6DA: mov     edx, [eax+144h]
0x7BE6E0: push    0
0x7BE6E2: call    edx
0x7BE6E4: mov     ecx, ds:0B3F928h
0x7BE6EA: push    ecx
0x7BE6EB: mov     ecx, [esp+44h+arg_0]; this
0x7BE6EF: call    sub_709C60
0x7BE6F4: call    NiRenderer_EndScene
0x7BE6F9: mov     eax, ds:0B43328h
0x7BE6FE: mov     ecx, ds:0B42F50h; this
0x7BE704: push    eax; a2
0x7BE705: call    sub_7C1EE0
0x7BE70A: mov     eax, ds:0B43328h
0x7BE70F: cmp     eax, esi
0x7BE711: jz      short loc_7BE746
0x7BE713: test    eax, eax
0x7BE715: jz      short loc_7BE732
0x7BE717: mov     ebp, eax
0x7BE719: add     eax, 4
0x7BE71C: push    eax; lpAddend
0x7BE71D: call    ebx ; InterlockedDecrement
0x7BE71F: test    eax, eax
0x7BE721: jnz     short loc_7BE732
0x7BE723: test    ebp, ebp
0x7BE725: jz      short loc_7BE732
0x7BE727: mov     edx, [ebp+0]
0x7BE72A: mov     eax, [edx]
0x7BE72C: push    1
0x7BE72E: mov     ecx, ebp
0x7BE730: call    eax
0x7BE732: test    esi, esi
0x7BE734: mov     ds:0B43328h, esi
0x7BE73A: jz      short loc_7BE746
0x7BE73C: add     esi, 4
0x7BE73F: push    esi; lpAddend
0x7BE740: call    dword ptr ds:0A28078h
0x7BE746: mov     ecx, ds:0B43104h
0x7BE74C: push    2; a3
0x7BE74E: push    ecx; a2
0x7BE74F: mov     ecx, ds:0B42F50h; this
0x7BE755: call    BSTextureManager_GetDefaultRenderTarget
0x7BE75A: mov     esi, [esp+40h+var_24]
0x7BE75E: mov     ebx, eax
0x7BE760: push    esi; a2
0x7BE761: mov     ecx, edi; this
0x7BE763: mov     [esp+44h+a2], ebx
0x7BE767: mov     dword ptr [edi+0D0h], 0Ah
0x7BE771: call    sub_802890
0x7BE776: fld1
0x7BE778: fst     dword ptr ds:0B2C774h
0x7BE77E: fstp    dword ptr ds:0B2C778h
0x7BE784: mov     ecx, [esi+20h]
0x7BE787: test    ecx, ecx
0x7BE789: jz      short loc_7BE794
0x7BE78B: mov     edx, [ecx]
0x7BE78D: mov     eax, [edx+4Ch]
0x7BE790: call    eax
0x7BE792: jmp     short loc_7BE796
0x7BE794: xor     eax, eax
0x7BE796: test    eax, eax
0x7BE798: mov     [esp+40h+a4], eax
0x7BE79C: fild    [esp+40h+a4]
0x7BE7A0: jge     short loc_7BE7A8
0x7BE7A2: fadd    dword ptr ds:0A2FC78h
0x7BE7A8: fdivr   qword ptr ds:0A2FAA0h
0x7BE7AE: fadd    qword ptr ds:0A2FC68h
0x7BE7B4: fstp    dword ptr ds:0B2C77Ch
0x7BE7BA: mov     ecx, [esi+20h]
0x7BE7BD: test    ecx, ecx
0x7BE7BF: jz      short loc_7BE7CA
0x7BE7C1: mov     edx, [ecx]
0x7BE7C3: mov     eax, [edx+50h]
0x7BE7C6: call    eax
0x7BE7C8: jmp     short loc_7BE7CC
0x7BE7CA: xor     eax, eax
0x7BE7CC: test    eax, eax
0x7BE7CE: mov     [esp+40h+a4], eax
0x7BE7D2: fild    [esp+40h+a4]
0x7BE7D6: jge     short loc_7BE7DE
0x7BE7D8: fadd    dword ptr ds:0A2FC78h
0x7BE7DE: fdivr   qword ptr ds:0A2FAA0h
0x7BE7E4: mov     ecx, ebx; this
0x7BE7E6: fadd    qword ptr ds:0A2FC68h
0x7BE7EC: fstp    dword ptr ds:0B2C780h
0x7BE7F2: call    BSRenderedTexture__UseTextureToRender
0x7BE7F7: mov     ebp, [esp+40h+a1]
0x7BE7FB: push    eax; a2
0x7BE7FC: push    ebp; a1
0x7BE7FD: call    NiRenderer_BeginScene
0x7BE802: mov     ecx, ds:0B3F928h
0x7BE808: mov     eax, 1
0x7BE80D: add     esp, 8
0x7BE810: cmp     [ecx+200h], eax
0x7BE816: jz      short loc_7BE820
0x7BE818: cmp     [ecx+204h], eax
0x7BE81E: jnz     short loc_7BE83A
0x7BE820: cmp     [ecx+20Ch], al
0x7BE826: jnz     short loc_7BE83A
0x7BE828: mov     edx, [ecx]
0x7BE82A: mov     eax, [edx+144h]
0x7BE830: push    0
0x7BE832: call    eax
0x7BE834: mov     ecx, ds:0B3F928h
0x7BE83A: push    ecx
0x7BE83B: mov     ecx, [esp+44h+arg_0]; this
0x7BE83F: call    sub_709C60
0x7BE844: call    NiRenderer_EndScene
0x7BE849: cmp     byte ptr ds:0B43074h, 0
0x7BE850: mov     eax, ds:0B43224h
0x7BE855: jnz     short loc_7BE85C
0x7BE857: mov     eax, ds:0B43220h
0x7BE85C: cdq
0x7BE85D: xor     eax, edx
0x7BE85F: sub     eax, edx
0x7BE861: test    eax, eax
0x7BE863: jle     loc_7BE949
0x7BE869: mov     esi, eax
0x7BE86B: jmp     short loc_7BE870
0x7BE86D: align 10h
0x7BE870: push    ebx; a2
0x7BE871: mov     ecx, edi; this
0x7BE873: mov     dword ptr [edi+0D0h], 1
0x7BE87D: call    sub_802890
0x7BE882: mov     ecx, [esp+40h+var_24]; this
0x7BE886: call    BSRenderedTexture__UseTextureToRender
0x7BE88B: push    eax; a2
0x7BE88C: push    ebp; a1
0x7BE88D: call    NiRenderer_BeginScene
0x7BE892: mov     ecx, ds:0B3F928h
0x7BE898: add     esp, 8
0x7BE89B: cmp     dword ptr [ecx+200h], 1
0x7BE8A2: jz      short loc_7BE8AD
0x7BE8A4: cmp     dword ptr [ecx+204h], 1
0x7BE8AB: jnz     short loc_7BE8C8
0x7BE8AD: cmp     byte ptr [ecx+20Ch], 1
0x7BE8B4: jnz     short loc_7BE8C8
0x7BE8B6: mov     edx, [ecx]
0x7BE8B8: mov     eax, [edx+144h]
0x7BE8BE: push    0
0x7BE8C0: call    eax
0x7BE8C2: mov     ecx, ds:0B3F928h
0x7BE8C8: push    ecx
0x7BE8C9: mov     ecx, [esp+44h+arg_0]; this
0x7BE8CD: call    sub_709C60
0x7BE8D2: call    NiRenderer_EndScene
0x7BE8D7: mov     ecx, [esp+40h+var_24]
0x7BE8DB: push    ecx; a2
0x7BE8DC: mov     ecx, edi; this
0x7BE8DE: mov     dword ptr [edi+0D0h], 2
0x7BE8E8: call    sub_802890
0x7BE8ED: mov     ecx, ebx; this
0x7BE8EF: call    BSRenderedTexture__UseTextureToRender
0x7BE8F4: push    eax; a2
0x7BE8F5: push    ebp; a1
0x7BE8F6: call    NiRenderer_BeginScene
0x7BE8FB: mov     ecx, ds:0B3F928h
0x7BE901: add     esp, 8
0x7BE904: cmp     dword ptr [ecx+200h], 1
0x7BE90B: jz      short loc_7BE916
0x7BE90D: cmp     dword ptr [ecx+204h], 1
0x7BE914: jnz     short loc_7BE931
0x7BE916: cmp     byte ptr [ecx+20Ch], 1
0x7BE91D: jnz     short loc_7BE931
0x7BE91F: mov     edx, [ecx]
0x7BE921: mov     eax, [edx+144h]
0x7BE927: push    0
0x7BE929: call    eax
0x7BE92B: mov     ecx, ds:0B3F928h
0x7BE931: push    ecx
0x7BE932: mov     ecx, [esp+44h+arg_0]; this
0x7BE936: call    sub_709C60
0x7BE93B: call    NiRenderer_EndScene
0x7BE940: sub     esi, 1
0x7BE943: jnz     loc_7BE870
0x7BE949: xor     ecx, ecx
0x7BE94B: cmp     dword ptr ds:0B2C1E4h, 2
0x7BE952: push    ebx; a2
0x7BE953: setnz   cl
0x7BE956: sub     ecx, 1
0x7BE959: and     ecx, 9
0x7BE95C: mov     [edi+0D0h], ecx
0x7BE962: mov     ecx, edi; this
0x7BE964: call    sub_802890
0x7BE969: mov     edx, [esp+40h+arg_4]
0x7BE96D: mov     eax, [edx]
0x7BE96F: test    eax, eax
0x7BE971: jz      short loc_7BE980
0x7BE973: mov     esi, [esp+40h+a4]
0x7BE977: mov     ebx, [esp+40h+var_18]
0x7BE97B: add     eax, 20h ; ' '
0x7BE97E: jmp     short loc_7BE98F
0x7BE980: xor     esi, esi
0x7BE982: mov     [esp+40h+a4], esi
0x7BE986: lea     eax, [esp+40h+a4]
0x7BE98A: mov     ebx, 1
0x7BE98F: test    bl, 1
0x7BE992: mov     ebp, [eax]
0x7BE994: jz      short loc_7BE9B5
0x7BE996: and     ebx, 0FFFFFFFEh
0x7BE999: test    esi, esi
0x7BE99B: jz      short loc_7BE9B5
0x7BE99D: lea     eax, [esi+4]
0x7BE9A0: push    eax; lpAddend
0x7BE9A1: call    dword ptr ds:0A2807Ch
0x7BE9A7: test    eax, eax
0x7BE9A9: jnz     short loc_7BE9B5
0x7BE9AB: mov     edx, [esi]
0x7BE9AD: mov     eax, [edx]
0x7BE9AF: push    1
0x7BE9B1: mov     ecx, esi
0x7BE9B3: call    eax
0x7BE9B5: mov     esi, [edi+118h]
0x7BE9BB: cmp     esi, ebp
0x7BE9BD: jz      short loc_7BE9F3
0x7BE9BF: test    esi, esi
0x7BE9C1: jz      short loc_7BE9DF
0x7BE9C3: lea     ecx, [esi+4]
0x7BE9C6: push    ecx; lpAddend
0x7BE9C7: call    dword ptr ds:0A2807Ch
0x7BE9CD: test    eax, eax
0x7BE9CF: jnz     short loc_7BE9DF
0x7BE9D1: test    esi, esi
0x7BE9D3: jz      short loc_7BE9DF
0x7BE9D5: mov     edx, [esi]
0x7BE9D7: mov     eax, [edx]
0x7BE9D9: push    1
0x7BE9DB: mov     ecx, esi
0x7BE9DD: call    eax
0x7BE9DF: test    ebp, ebp
0x7BE9E1: mov     [edi+118h], ebp
0x7BE9E7: jz      short loc_7BE9F3
0x7BE9E9: add     ebp, 4
0x7BE9EC: push    ebp; lpAddend
0x7BE9ED: call    dword ptr ds:0A28078h
0x7BE9F3: mov     eax, ds:0B43328h
0x7BE9F8: test    eax, eax
0x7BE9FA: jz      short loc_7BEA05
0x7BE9FC: mov     esi, [esp+40h+a4]
0x7BEA00: add     eax, 20h ; ' '
0x7BEA03: jmp     short loc_7BEA12
0x7BEA05: xor     esi, esi
0x7BEA07: mov     [esp+40h+a4], esi
0x7BEA0B: lea     eax, [esp+40h+a4]
0x7BEA0F: or      ebx, 2
0x7BEA12: test    bl, 2
0x7BEA15: mov     ebp, [eax]
0x7BEA17: jz      short loc_7BEA38
0x7BEA19: and     ebx, 0FFFFFFFDh
0x7BEA1C: test    esi, esi
0x7BEA1E: jz      short loc_7BEA38
0x7BEA20: lea     ecx, [esi+4]
0x7BEA23: push    ecx; lpAddend
0x7BEA24: call    dword ptr ds:0A2807Ch
0x7BEA2A: test    eax, eax
0x7BEA2C: jnz     short loc_7BEA38
0x7BEA2E: mov     edx, [esi]
0x7BEA30: mov     eax, [edx]
0x7BEA32: push    1
0x7BEA34: mov     ecx, esi
0x7BEA36: call    eax
0x7BEA38: mov     esi, [edi+11Ch]
0x7BEA3E: cmp     esi, ebp
0x7BEA40: jz      short loc_7BEA76
0x7BEA42: test    esi, esi
0x7BEA44: jz      short loc_7BEA62
0x7BEA46: lea     ecx, [esi+4]
0x7BEA49: push    ecx; lpAddend
0x7BEA4A: call    dword ptr ds:0A2807Ch
0x7BEA50: test    eax, eax
0x7BEA52: jnz     short loc_7BEA62
0x7BEA54: test    esi, esi
0x7BEA56: jz      short loc_7BEA62
0x7BEA58: mov     edx, [esi]
0x7BEA5A: mov     eax, [edx]
0x7BEA5C: push    1
0x7BEA5E: mov     ecx, esi
0x7BEA60: call    eax
0x7BEA62: test    ebp, ebp
0x7BEA64: mov     [edi+11Ch], ebp
0x7BEA6A: jz      short loc_7BEA76
0x7BEA6C: add     ebp, 4
0x7BEA6F: push    ebp; lpAddend
0x7BEA70: call    dword ptr ds:0A28078h
0x7BEA76: fld1
0x7BEA78: mov     ecx, [esp+40h+arg_4]
0x7BEA7C: fst     dword ptr ds:0B2C784h
0x7BEA82: fst     dword ptr ds:0B2C788h
0x7BEA88: mov     eax, [ecx]
0x7BEA8A: mov     ecx, [eax+20h]
0x7BEA8D: test    ecx, ecx
0x7BEA8F: jz      short loc_7BEA9E
0x7BEA91: mov     edx, [ecx]
0x7BEA93: fstp    st
0x7BEA95: mov     eax, [edx+4Ch]
0x7BEA98: call    eax
0x7BEA9A: fld1
0x7BEA9C: jmp     short loc_7BEAA0
0x7BEA9E: xor     eax, eax
0x7BEAA0: test    eax, eax
0x7BEAA2: mov     [esp+40h+var_18], eax
0x7BEAA6: fild    [esp+40h+var_18]
0x7BEAAA: jge     short loc_7BEAB2
0x7BEAAC: fadd    dword ptr ds:0A2FC78h
0x7BEAB2: fdivr   qword ptr ds:0A2FAA0h
0x7BEAB8: mov     ecx, [esp+40h+arg_4]
0x7BEABC: xor     ebp, ebp
0x7BEABE: fadd    qword ptr ds:0A2FC68h
0x7BEAC4: fstp    dword ptr ds:0B2C78Ch
0x7BEACA: mov     eax, [ecx]
0x7BEACC: mov     ecx, [eax+20h]
0x7BEACF: cmp     ecx, ebp
0x7BEAD1: jz      short loc_7BEAE0
0x7BEAD3: mov     edx, [ecx]
0x7BEAD5: fstp    st
0x7BEAD7: mov     eax, [edx+50h]
0x7BEADA: call    eax
0x7BEADC: fld1
0x7BEADE: jmp     short loc_7BEAE2
0x7BEAE0: xor     eax, eax
0x7BEAE2: test    eax, eax
0x7BEAE4: mov     [esp+40h+arg_4], eax
0x7BEAE8: fild    [esp+40h+arg_4]
0x7BEAEC: jge     short loc_7BEAF4
0x7BEAEE: fadd    dword ptr ds:0A2FC78h
0x7BEAF4: cmp     byte ptr [esp+40h+arg_C], 0
0x7BEAF9: fdivr   qword ptr ds:0A2FAA0h
0x7BEAFF: fadd    qword ptr ds:0A2FC68h
0x7BEB05: fstp    dword ptr ds:0B2C790h
0x7BEB0B: jz      short loc_7BEB13
0x7BEB0D: fst     [esp+40h+var_10.r]
0x7BEB11: jmp     short loc_7BEB21
0x7BEB13: fstp    st
0x7BEB15: fld     [esp+40h+var_20]
0x7BEB19: fstp    [esp+40h+var_10.r]
0x7BEB1D: fld     [esp+40h+var_1C]
0x7BEB21: mov     esi, [esp+40h+arg_8]
0x7BEB25: fstp    [esp+40h+var_10.t]
0x7BEB29: mov     ecx, [esi]; this
0x7BEB2B: cmp     ecx, ebp
0x7BEB2D: jz      short loc_7BEB3E
0x7BEB2F: call    BSRenderedTexture__UseTextureToRender
0x7BEB34: push    eax; a2
0x7BEB35: push    7; a1
0x7BEB37: call    NiRenderer_BeginScene
0x7BEB3C: jmp     short loc_7BEB46
0x7BEB3E: push    ebp; a2
0x7BEB3F: push    7; a1
0x7BEB41: call    NiRenderer_BeginScene1
0x7BEB46: mov     ecx, ds:0B3F928h
0x7BEB4C: mov     eax, 1
0x7BEB51: add     esp, 8
0x7BEB54: cmp     [ecx+200h], eax
0x7BEB5A: jz      short loc_7BEB64
0x7BEB5C: cmp     [ecx+204h], eax
0x7BEB62: jnz     short loc_7BEB81
0x7BEB64: cmp     [ecx+20Ch], al
0x7BEB6A: jnz     short loc_7BEB81
0x7BEB6C: mov     edx, [ecx]
0x7BEB6E: mov     edx, [edx+144h]
0x7BEB74: lea     eax, [esp+40h+var_10]
0x7BEB78: push    eax
0x7BEB79: call    edx
0x7BEB7B: mov     ecx, ds:0B3F928h
0x7BEB81: push    ecx
0x7BEB82: mov     ecx, [esp+44h+arg_0]; this
0x7BEB86: call    sub_709C60
0x7BEB8B: cmp     [esi], ebp
0x7BEB8D: jz      short loc_7BEB94
0x7BEB8F: call    NiRenderer_EndScene
0x7BEB94: cmp     byte ptr ds:0B431E4h, 0
0x7BEB9B: jz      loc_7BEC55
0x7BEBA1: mov     eax, [esp+40h+var_30]
0x7BEBA5: cmp     eax, ebp
0x7BEBA7: jz      short loc_7BEBB2
0x7BEBA9: mov     esi, [esp+40h+arg_C]
0x7BEBAD: add     eax, 20h ; ' '
0x7BEBB0: jmp     short loc_7BEBBF
0x7BEBB2: xor     esi, esi
0x7BEBB4: mov     [esp+40h+arg_C], esi
0x7BEBB8: lea     eax, [esp+40h+arg_C]
0x7BEBBC: or      ebx, 4
0x7BEBBF: test    bl, 4
0x7BEBC2: mov     ebp, [eax]
0x7BEBC4: jz      short loc_7BEBE5
0x7BEBC6: and     ebx, 0FFFFFFFBh
0x7BEBC9: test    esi, esi
0x7BEBCB: jz      short loc_7BEBE5
0x7BEBCD: lea     eax, [esi+4]
0x7BEBD0: push    eax; lpAddend
0x7BEBD1: call    dword ptr ds:0A2807Ch
0x7BEBD7: test    eax, eax
0x7BEBD9: jnz     short loc_7BEBE5
0x7BEBDB: mov     edx, [esi]
0x7BEBDD: mov     eax, [edx]
0x7BEBDF: push    1
0x7BEBE1: mov     ecx, esi
0x7BEBE3: call    eax
0x7BEBE5: push    9; a1
0x7BEBE7: call    GetShaderDefinition
0x7BEBEC: mov     ecx, [eax+4]; this
0x7BEBEF: add     esp, 4
0x7BEBF2: add     eax, 4
0x7BEBF5: push    ebp; a2
0x7BEBF6: call    sub_7FA470
0x7BEBFB: mov     eax, ds:0B43328h
0x7BEC00: test    eax, eax
0x7BEC02: jz      short loc_7BEC0D
0x7BEC04: mov     esi, [esp+40h+arg_C]
0x7BEC08: add     eax, 20h ; ' '
0x7BEC0B: jmp     short loc_7BEC1A
0x7BEC0D: xor     esi, esi
0x7BEC0F: mov     [esp+40h+arg_C], esi
0x7BEC13: lea     eax, [esp+40h+arg_C]
0x7BEC17: or      ebx, 8
0x7BEC1A: test    bl, 8
0x7BEC1D: mov     ebp, [eax]
0x7BEC1F: jz      short loc_7BEC3D
0x7BEC21: test    esi, esi
0x7BEC23: jz      short loc_7BEC3D
0x7BEC25: lea     ecx, [esi+4]
0x7BEC28: push    ecx; lpAddend
0x7BEC29: call    dword ptr ds:0A2807Ch
0x7BEC2F: test    eax, eax
0x7BEC31: jnz     short loc_7BEC3D
0x7BEC33: mov     edx, [esi]
0x7BEC35: mov     eax, [edx]
0x7BEC37: push    1
0x7BEC39: mov     ecx, esi
0x7BEC3B: call    eax
0x7BEC3D: push    9; a1
0x7BEC3F: call    GetShaderDefinition
0x7BEC44: mov     ecx, [eax+4]; this
0x7BEC47: add     esp, 4
0x7BEC4A: add     eax, 4
0x7BEC4D: push    ebp; a2
0x7BEC4E: call    sub_7FA470
0x7BEC53: xor     ebp, ebp
0x7BEC55: mov     ecx, [esp+40h+var_24]
0x7BEC59: push    ecx; a2
0x7BEC5A: mov     ecx, ds:0B42F50h; this
0x7BEC60: call    sub_7C1EE0
0x7BEC65: mov     edx, [esp+40h+a2]
0x7BEC69: mov     ecx, ds:0B42F50h; this
0x7BEC6F: push    edx; a2
0x7BEC70: call    sub_7C1EE0
0x7BEC75: mov     eax, [esp+40h+var_30]
0x7BEC79: cmp     eax, ds:0B43328h
0x7BEC7F: jz      short loc_7BEC8D
0x7BEC81: mov     ecx, ds:0B42F50h; this
0x7BEC87: push    eax; a2
0x7BEC88: call    sub_7C1EE0
0x7BEC8D: cmp     byte ptr ds:0B43075h, 0
0x7BEC94: jz      short loc_7BECD7
0x7BEC96: mov     eax, ds:0B43328h
0x7BEC9B: mov     ecx, ds:0B42F50h; this
0x7BECA1: push    eax; a2
0x7BECA2: call    sub_7C1EE0
0x7BECA7: mov     esi, ds:0B43328h
0x7BECAD: cmp     esi, ebp
0x7BECAF: jz      short loc_7BECD7
0x7BECB1: mov     ebx, ds:0A2807Ch
0x7BECB7: lea     ecx, [esi+4]
0x7BECBA: push    ecx; lpAddend
0x7BECBB: call    ebx ; InterlockedDecrement
0x7BECBD: test    eax, eax
0x7BECBF: jnz     short loc_7BECCF
0x7BECC1: cmp     esi, ebp
0x7BECC3: jz      short loc_7BECCF
0x7BECC5: mov     edx, [esi]
0x7BECC7: mov     eax, [edx]
0x7BECC9: push    1
0x7BECCB: mov     ecx, esi
0x7BECCD: call    eax
0x7BECCF: mov     ds:0B43328h, ebp
0x7BECD5: jmp     short loc_7BECDD
0x7BECD7: mov     ebx, ds:0A2807Ch
0x7BECDD: mov     esi, [edi+118h]
0x7BECE3: cmp     esi, ebp
0x7BECE5: jz      short loc_7BED05
0x7BECE7: lea     ecx, [esi+4]
0x7BECEA: push    ecx; lpAddend
0x7BECEB: call    ebx ; InterlockedDecrement
0x7BECED: test    eax, eax
0x7BECEF: jnz     short loc_7BECFF
0x7BECF1: cmp     esi, ebp
0x7BECF3: jz      short loc_7BECFF
0x7BECF5: mov     edx, [esi]
0x7BECF7: mov     eax, [edx]
0x7BECF9: push    1
0x7BECFB: mov     ecx, esi
0x7BECFD: call    eax
0x7BECFF: mov     [edi+118h], ebp
0x7BED05: mov     esi, [edi+11Ch]
0x7BED0B: cmp     esi, ebp
0x7BED0D: jz      short loc_7BED2D
0x7BED0F: lea     ecx, [esi+4]
0x7BED12: push    ecx; lpAddend
0x7BED13: call    ebx ; InterlockedDecrement
0x7BED15: test    eax, eax
0x7BED17: jnz     short loc_7BED27
0x7BED19: cmp     esi, ebp
0x7BED1B: jz      short loc_7BED27
0x7BED1D: mov     edx, [esi]
0x7BED1F: mov     eax, [edx]
0x7BED21: push    1
0x7BED23: mov     ecx, esi
0x7BED25: call    eax
0x7BED27: mov     [edi+11Ch], ebp
0x7BED2D: pop     edi
0x7BED2E: pop     esi
0x7BED2F: pop     ebp
0x7BED30: pop     ebx
0x7BED31: add     esp, 30h
0x7BED34: retn    10h
