0x4D0190: push    0FFFFFFFFh
0x4D0192: push    offset SEH_4D0190
0x4D0197: mov     eax, large fs:0
0x4D019D: push    eax
0x4D019E: sub     esp, 0C8h
0x4D01A4: push    ebx
0x4D01A5: push    ebp
0x4D01A6: push    esi
0x4D01A7: push    edi
0x4D01A8: mov     eax, ds:0B30AACh
0x4D01AD: xor     eax, esp
0x4D01AF: push    eax
0x4D01B0: lea     eax, [esp+0E8h+var_C]
0x4D01B7: mov     large fs:0, eax
0x4D01BD: xor     esi, esi
0x4D01BF: push    3
0x4D01C1: mov     [esp+0ECh+var_C0], esi
0x4D01C5: call    nullsub_returnTrue_0arg
0x4D01CA: add     esp, 4
0x4D01CD: cmp     byte ptr ds:0B42D40h, 0
0x4D01D4: jz      short loc_4D01F0
0x4D01D6: cmp     byte ptr ds:0B42F3Eh, 0
0x4D01DD: jz      short loc_4D01F0
0x4D01DF: cmp     dword ptr ds:0B42F48h, 2
0x4D01E6: jl      short loc_4D01F0
0x4D01E8: mov     bl, 1
0x4D01EA: mov     byte ptr [esp+0E8h+var_D4], bl
0x4D01EE: jmp     short loc_4D01F9
0x4D01F0: mov     byte ptr [esp+0E8h+var_D4], 0
0x4D01F5: mov     bl, byte ptr [esp+0E8h+var_D4]
0x4D01F9: xor     edi, edi
0x4D01FB: mov     [esp+0E8h+var_D0], edi
0x4D01FF: xor     ebp, ebp
0x4D0201: mov     [esp+0E8h+var_4], 1
0x4D020C: mov     dword ptr [esp+0E8h+a4], ebp
0x4D0210: mov     dword ptr [esp+0E8h+a3], esi
0x4D0214: test    bl, bl
0x4D0216: mov     eax, ds:0B43104h
0x4D021B: mov     ecx, ds:0B42F50h
0x4D0221: push    ebp
0x4D0222: push    ebp
0x4D0223: push    ebp
0x4D0224: push    100h
0x4D0229: mov     byte ptr [esp+0F8h+var_4], 3
0x4D0231: push    eax
0x4D0232: jz      loc_4D02BB
0x4D0238: call    sub_7C2420
0x4D023D: test    eax, eax
0x4D023F: jz      short loc_4D0253
0x4D0241: mov     [esp+0E8h+var_D0], eax
0x4D0245: add     eax, 4
0x4D0248: push    eax; lpAddend
0x4D0249: call    dword ptr ds:0A28078h
0x4D024F: mov     edi, [esp+0E8h+var_D0]
0x4D0253: mov     ecx, ds:0B43104h
0x4D0259: push    0
0x4D025B: push    0
0x4D025D: push    0
0x4D025F: push    100h
0x4D0264: push    ecx
0x4D0265: mov     ecx, ds:0B42F50h
0x4D026B: call    sub_7C2420
0x4D0270: test    eax, eax
0x4D0272: jz      short loc_4D0286
0x4D0274: mov     dword ptr [esp+0E8h+a3], eax
0x4D0278: add     eax, 4
0x4D027B: push    eax; lpAddend
0x4D027C: call    dword ptr ds:0A28078h
0x4D0282: mov     esi, dword ptr [esp+0E8h+a3]
0x4D0286: mov     edx, ds:0B43104h
0x4D028C: mov     ecx, ds:0B42F50h
0x4D0292: push    4
0x4D0294: push    0
0x4D0296: push    0
0x4D0298: push    100h
0x4D029D: push    edx
0x4D029E: call    sub_7C15C0
0x4D02A3: test    eax, eax
0x4D02A5: jz      short loc_4D02DA
0x4D02A7: mov     dword ptr [esp+0E8h+a4], eax
0x4D02AB: add     eax, 4
0x4D02AE: push    eax; lpAddend
0x4D02AF: call    dword ptr ds:0A28078h
0x4D02B5: mov     ebp, dword ptr [esp+0E8h+a4]
0x4D02B9: jmp     short loc_4D02DA
0x4D02BB: call    sub_7C15C0
0x4D02C0: test    eax, eax
0x4D02C2: jz      loc_4D0602
0x4D02C8: mov     [esp+0E8h+var_D0], eax
0x4D02CC: add     eax, 4
0x4D02CF: push    eax; lpAddend
0x4D02D0: call    dword ptr ds:0A28078h
0x4D02D6: mov     edi, [esp+0E8h+var_D0]
0x4D02DA: test    edi, edi
0x4D02DC: jz      loc_4D0585
0x4D02E2: test    bl, bl
0x4D02E4: jz      short loc_4D02F6
0x4D02E6: test    ebp, ebp
0x4D02E8: jz      loc_4D0585
0x4D02EE: test    esi, esi
0x4D02F0: jz      loc_4D0585
0x4D02F6: fldz
0x4D02F8: mov     ecx, ds:0B43104h
0x4D02FE: fst     [esp+0E8h+var_AC]
0x4D0302: lea     eax, [esp+0E8h+var_AC]
0x4D0306: fst     [esp+0E8h+var_A8]
0x4D030A: push    eax
0x4D030B: fst     [esp+0ECh+var_A4]
0x4D030F: fstp    [esp+0ECh+var_A0]
0x4D0313: mov     edx, [ecx]
0x4D0315: mov     edx, [edx+68h]
0x4D0318: call    edx
0x4D031A: test    bl, bl
0x4D031C: mov     ecx, ds:0B43104h
0x4D0322: jz      short loc_4D0356
0x4D0324: fld     dword ptr ds:0A4695Ch
0x4D032A: lea     edx, [esp+0E8h+var_BC]
0x4D032E: fstp    [esp+0E8h+var_BC]
0x4D0332: push    edx
0x4D0333: fld     dword ptr ds:0A46958h
0x4D0339: fstp    [esp+0ECh+var_B8]
0x4D033D: fld     dword ptr ds:0A46954h
0x4D0343: fstp    [esp+0ECh+var_B4]
0x4D0347: fld1
0x4D0349: fstp    [esp+0ECh+var_B0]
0x4D034D: mov     eax, [ecx]
0x4D034F: mov     eax, [eax+60h]
0x4D0352: call    eax
0x4D0354: jmp     short loc_4D0376
0x4D0356: fldz
0x4D0358: lea     eax, [esp+0E8h+var_BC]
0x4D035C: fst     [esp+0E8h+var_BC]
0x4D0360: push    eax
0x4D0361: fst     [esp+0ECh+var_B8]
0x4D0365: fstp    [esp+0ECh+var_B4]
0x4D0369: fld1
0x4D036B: fstp    [esp+0ECh+var_B0]
0x4D036F: mov     edx, [ecx]
0x4D0371: mov     edx, [edx+60h]
0x4D0374: call    edx
0x4D0376: push    0
0x4D0378: call    GetShadowSceneNode
0x4D037D: add     esp, 4
0x4D0380: push    0
0x4D0382: lea     ecx, [esp+0ECh+var_9C]
0x4D0386: mov     esi, eax
0x4D0388: call    NiCullingProcess_NiCullingProcess
0x4D038D: mov     al, [esi+12Ch]
0x4D0393: mov     byte ptr [esp+0E8h+var_4], 4
0x4D039B: mov     byte ptr [esp+0E8h+var_CC+3], al
0x4D039F: mov     byte ptr [esi+12Ch], 1
0x4D03A6: call    InitBSShaderAccumulator
0x4D03AB: mov     byte ptr [eax+21E3h], 0
0x4D03B2: mov     eax, ds:0B3F928h
0x4D03B7: cmp     dword ptr [eax+200h], 0
0x4D03BE: mov     byte ptr [esp+0E8h+var_D4+3], 0
0x4D03C3: jnz     short loc_4D03DF
0x4D03C5: cmp     dword ptr [eax+204h], 0
0x4D03CC: jnz     short loc_4D03DF
0x4D03CE: push    0; a2
0x4D03D0: push    0; a1
0x4D03D2: call    NiRenderer_BeginScene
0x4D03D7: add     esp, 8
0x4D03DA: mov     byte ptr [esp+0E8h+var_D4+3], 1
0x4D03DF: push    7; clearFlags
0x4D03E1: mov     ecx, edi
0x4D03E3: call    BSRenderedTexture__UseTextureToRender
0x4D03E8: push    eax; a1
0x4D03E9: call    StartUsingRenderTarget
0x4D03EE: mov     ebp, [esp+0F0h+arg_4]
0x4D03F5: mov     bl, ds:0B42E86h
0x4D03FB: push    0
0x4D03FD: lea     ecx, [esp+0F4h+var_9C]
0x4D0401: push    ecx
0x4D0402: push    esi
0x4D0403: push    ebp
0x4D0404: mov     byte ptr ds:0B42E86h, 1
0x4D040B: call    sub_70C0B0
0x4D0410: add     esp, 18h
0x4D0413: mov     ds:0B42E86h, bl
0x4D0419: call    sub_7D7110
0x4D041E: cmp     byte ptr [esp+0E8h+var_D4], 0
0x4D0423: jz      loc_4D0534
0x4D0429: call    sub_49A140
0x4D042E: mov     edi, eax
0x4D0430: test    edi, edi
0x4D0432: mov     byte ptr [esp+0E8h+var_D4+2], 0
0x4D0437: jz      short loc_4D0447
0x4D0439: mov     al, [edi+18h]
0x4D043C: and     al, 1
0x4D043E: or      word ptr [edi+18h], 1
0x4D0443: mov     byte ptr [esp+0E8h+var_D4+2], al
0x4D0447: cmp     byte ptr ds:0B125E8h, 0
0x4D044E: jz      short loc_4D0465
0x4D0450: push    1
0x4D0452: call    sub_55F7E0
0x4D0457: add     esp, 4
0x4D045A: cmp     byte ptr [eax+20h], 0
0x4D045E: mov     byte ptr [esp+0E8h+var_D4+1], 1
0x4D0463: jnz     short loc_4D046A
0x4D0465: mov     byte ptr [esp+0E8h+var_D4+1], 0
0x4D046A: push    1
0x4D046C: call    sub_55F7E0
0x4D0471: mov     byte ptr [eax+20h], 0
0x4D0475: movzx   ebx, word ptr ds:0B42EACh
0x4D047C: push    6
0x4D047E: call    sub_7B4890
0x4D0483: mov     ecx, dword ptr [esp+0F0h+a3]
0x4D0487: add     esp, 8
0x4D048A: test    ecx, ecx
0x4D048C: jz      short loc_4D0495
0x4D048E: call    BSRenderedTexture__UseTextureToRender
0x4D0493: jmp     short loc_4D0497
0x4D0495: xor     eax, eax
0x4D0497: push    7; clearFlags
0x4D0499: push    eax; a1
0x4D049A: call    StartUsingRenderTarget
0x4D049F: push    0
0x4D04A1: lea     edx, [esp+0F4h+var_9C]
0x4D04A5: push    edx
0x4D04A6: push    esi
0x4D04A7: push    ebp
0x4D04A8: call    sub_70C0B0
0x4D04AD: call    sub_7D7110
0x4D04B2: push    ebx
0x4D04B3: call    sub_7B4890
0x4D04B8: push    1
0x4D04BA: call    sub_55F7E0
0x4D04BF: mov     cl, byte ptr [esp+108h+var_D4+1]
0x4D04C3: add     esp, 20h
0x4D04C6: test    edi, edi
0x4D04C8: mov     [eax+20h], cl
0x4D04CB: jz      short loc_4D04E1
0x4D04CD: cmp     byte ptr [esp+0E8h+var_D4+2], 0
0x4D04D2: jz      short loc_4D04DB
0x4D04D4: or      word ptr [edi+18h], 1
0x4D04D9: jmp     short loc_4D04E1
0x4D04DB: and     word ptr [edi+18h], 0FFFEh
0x4D04E1: push    18h; a1
0x4D04E3: call    GetShaderDefinition
0x4D04E8: add     esp, 4
0x4D04EB: test    eax, eax
0x4D04ED: jz      short loc_4D0530
0x4D04EF: mov     edi, [eax+4]
0x4D04F2: test    edi, edi
0x4D04F4: jz      short loc_4D0530
0x4D04F6: mov     edx, [edi]
0x4D04F8: mov     eax, [edx+0ACh]
0x4D04FE: mov     ecx, edi
0x4D0500: call    eax
0x4D0502: test    al, al
0x4D0504: jz      short loc_4D0530
0x4D0506: mov     ecx, [esp+0E8h+var_D0]; this
0x4D050A: call    BSRenderedTexture__GetInnerTexture
0x4D050F: push    eax
0x4D0510: mov     ecx, edi
0x4D0512: call    sub_4CA340
0x4D0517: mov     ecx, dword ptr [esp+0E8h+a4]
0x4D051B: mov     edx, dword ptr [esp+0E8h+a3]
0x4D051F: mov     eax, ds:0B43104h
0x4D0524: push    ecx; a4
0x4D0525: push    edx; a3
0x4D0526: push    eax; a2
0x4D0527: push    edi; a1
0x4D0528: call    sub_7B4900
0x4D052D: add     esp, 10h
0x4D0530: mov     edi, [esp+0E8h+var_D0]
0x4D0534: cmp     byte ptr [esp+0E8h+var_D4+3], 0
0x4D0539: jz      short loc_4D0540
0x4D053B: call    NiRenderer_EndScene
0x4D0540: mov     cl, byte ptr [esp+0E8h+var_CC+3]
0x4D0544: mov     [esi+12Ch], cl
0x4D054A: call    InitBSShaderAccumulator
0x4D054F: mov     byte ptr [eax+21E3h], 1
0x4D0556: mov     ecx, ds:0B43104h
0x4D055C: mov     edx, [ecx]
0x4D055E: mov     edx, [edx+60h]
0x4D0561: lea     eax, [esp+0E8h+var_AC]
0x4D0565: push    eax
0x4D0566: call    edx
0x4D0568: lea     ecx, [esp+0E8h+var_9C]; this
0x4D056C: mov     byte ptr [esp+0E8h+var_4], 3
0x4D0574: call    ??1BSCullingProcess@@UAE@XZ; BSCullingProcess::~BSCullingProcess(void)
0x4D0579: mov     bl, byte ptr [esp+0E8h+var_D4]
0x4D057D: mov     ebp, dword ptr [esp+0E8h+a4]
0x4D0581: mov     esi, dword ptr [esp+0E8h+a3]
0x4D0585: test    bl, bl
0x4D0587: jz      short loc_4D0602
0x4D0589: mov     ecx, ds:0B42F50h; this
0x4D058F: push    edi; a2
0x4D0590: call    sub_7C1EE0
0x4D0595: mov     ecx, ds:0B42F50h; this
0x4D059B: push    esi; a2
0x4D059C: call    sub_7C1EE0
0x4D05A1: push    2
0x4D05A3: call    nullsub_returnTrue_0arg
0x4D05A8: mov     eax, [esp+0ECh+arg_0]
0x4D05AF: add     esp, 4
0x4D05B2: test    ebp, ebp
0x4D05B4: mov     [eax], ebp
0x4D05B6: jz      short loc_4D05C2
0x4D05B8: lea     ecx, [ebp+4]
0x4D05BB: push    ecx; lpAddend
0x4D05BC: call    dword ptr ds:0A28078h
0x4D05C2: test    esi, esi
0x4D05C4: mov     ebx, ds:0A2807Ch
0x4D05CA: mov     [esp+0E8h+var_C0], 1
0x4D05D2: mov     byte ptr [esp+0E8h+var_4], 2
0x4D05DA: jz      short loc_4D05F0
0x4D05DC: lea     edx, [esi+4]
0x4D05DF: push    edx; lpAddend
0x4D05E0: call    ebx ; InterlockedDecrement
0x4D05E2: test    eax, eax
0x4D05E4: jnz     short loc_4D05F0
0x4D05E6: mov     eax, [esi]
0x4D05E8: mov     edx, [eax]
0x4D05EA: push    1
0x4D05EC: mov     ecx, esi
0x4D05EE: call    edx
0x4D05F0: test    ebp, ebp
0x4D05F2: mov     byte ptr [esp+0E8h+var_4], 1
0x4D05FA: jz      short loc_4D0672
0x4D05FC: lea     eax, [ebp+4]
0x4D05FF: push    eax
0x4D0600: jmp     short loc_4D0661
0x4D0602: push    2
0x4D0604: call    nullsub_returnTrue_0arg
0x4D0609: mov     ecx, [esp+0ECh+arg_0]
0x4D0610: add     esp, 4
0x4D0613: test    edi, edi
0x4D0615: mov     [ecx], edi
0x4D0617: jz      short loc_4D0623
0x4D0619: lea     edx, [edi+4]
0x4D061C: push    edx; lpAddend
0x4D061D: call    dword ptr ds:0A28078h
0x4D0623: test    esi, esi
0x4D0625: mov     ebx, ds:0A2807Ch
0x4D062B: mov     [esp+0E8h+var_C0], 1
0x4D0633: mov     byte ptr [esp+0E8h+var_4], 2
0x4D063B: jz      short loc_4D0651
0x4D063D: lea     eax, [esi+4]
0x4D0640: push    eax; lpAddend
0x4D0641: call    ebx ; InterlockedDecrement
0x4D0643: test    eax, eax
0x4D0645: jnz     short loc_4D0651
0x4D0647: mov     edx, [esi]
0x4D0649: mov     eax, [edx]
0x4D064B: push    1
0x4D064D: mov     ecx, esi
0x4D064F: call    eax
0x4D0651: test    ebp, ebp
0x4D0653: mov     byte ptr [esp+0E8h+var_4], 1
0x4D065B: jz      short loc_4D0672
0x4D065D: lea     ecx, [ebp+4]
0x4D0660: push    ecx; lpAddend
0x4D0661: call    ebx ; InterlockedDecrement
0x4D0663: test    eax, eax
0x4D0665: jnz     short loc_4D0672
0x4D0667: mov     edx, [ebp+0]
0x4D066A: mov     eax, [edx]
0x4D066C: push    1
0x4D066E: mov     ecx, ebp
0x4D0670: call    eax
0x4D0672: test    edi, edi
0x4D0674: mov     byte ptr [esp+0E8h+var_4], 0
0x4D067C: jz      short loc_4D0692
0x4D067E: lea     ecx, [edi+4]
0x4D0681: push    ecx; lpAddend
0x4D0682: call    ebx ; InterlockedDecrement
0x4D0684: test    eax, eax
0x4D0686: jnz     short loc_4D0692
0x4D0688: mov     edx, [edi]
0x4D068A: mov     eax, [edx]
0x4D068C: push    1
0x4D068E: mov     ecx, edi
0x4D0690: call    eax
0x4D0692: mov     eax, [esp+0E8h+arg_0]
0x4D0699: mov     ecx, dword ptr [esp+0E8h+var_C]
0x4D06A0: mov     large fs:0, ecx
0x4D06A7: pop     ecx
0x4D06A8: pop     edi
0x4D06A9: pop     esi
0x4D06AA: pop     ebp
0x4D06AB: pop     ebx
0x4D06AC: add     esp, 0D4h
0x4D06B2: retn    8
