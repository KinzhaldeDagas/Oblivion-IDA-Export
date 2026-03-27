0x810630: sub     esp, 670h
0x810636: mov     eax, ds:0B30AACh
0x81063B: xor     eax, esp
0x81063D: mov     [esp+670h+var_4], eax
0x810644: fld     dword ptr ds:0B2C2BCh
0x81064A: push    ebx
0x81064B: push    ebp
0x81064C: push    esi
0x81064D: push    edi
0x81064E: lea     eax, [esp+680h+DstBuf]
0x810655: push    eax; DstBuf
0x810656: push    0Ch; NumOfDigits
0x810658: mov     ebp, ecx
0x81065A: sub     esp, 8
0x81065D: fstp    [esp+690h+Val]; Val
0x810660: mov     [esp+690h+var_668], ebp
0x810664: call    __gcvt
0x810669: xor     ebx, ebx
0x81066B: push    44h ; 'D'
0x81066D: lea     ecx, [esp+694h+var_65C]
0x810671: push    ebx
0x810672: push    ecx
0x810673: mov     [esp+69Ch+var_664], offset aLighting1xPBas; "lighting\\1x\\p\\base.p.hlsl"
0x81067B: mov     [esp+69Ch+var_660], ebx
0x81067F: call    __memset
0x810684: push    3Ch ; '<'
0x810686: lea     edx, [esp+6A0h+var_608]
0x81068D: push    ebx
0x81068E: mov     edi, offset aVc; "VC"
0x810693: mov     esi, offset EmptyString
0x810698: push    edx
0x810699: mov     [esp+6A8h+var_618], offset aLighting1xPAmb; "lighting\\1x\\p\\ambDiffDirTexture.p.hl"...
0x8106A4: mov     [esp+6A8h+var_614], edi
0x8106AB: mov     [esp+6A8h+var_610], esi
0x8106B2: mov     [esp+6A8h+var_60C], ebx
0x8106B9: call    __memset
0x8106BE: push    3Ch ; '<'
0x8106C0: lea     eax, [esp+6ACh+var_5BC]
0x8106C7: push    ebx
0x8106C8: push    eax
0x8106C9: mov     [esp+6B4h+var_5CC], offset aLighting1xPAmb; "lighting\\1x\\p\\ambDiffDirTexture.p.hl"...
0x8106D4: mov     [esp+6B4h+var_5C8], edi
0x8106DB: mov     [esp+6B4h+var_5C4], esi
0x8106E2: mov     [esp+6B4h+var_5C0], ebx
0x8106E9: call    __memset
0x8106EE: push    44h ; 'D'
0x8106F0: lea     ecx, [esp+6B8h+var_578]
0x8106F7: push    ebx
0x8106F8: push    ecx
0x8106F9: mov     [esp+6C0h+var_580], offset aLighting1xPA_0; "lighting\\1x\\p\\ambDiffDirAndPt.p.hlsl"
0x810704: mov     [esp+6C0h+var_57C], ebx
0x81070B: call    __memset
0x810710: add     esp, 40h
0x810713: push    44h ; 'D'
0x810715: lea     edx, [esp+684h+var_52C]
0x81071C: push    ebx
0x81071D: push    edx
0x81071E: mov     [esp+68Ch+var_534], offset aLighting1xPD_0; "lighting\\1x\\p\\diffuseDir.p.hlsl"
0x810729: mov     [esp+68Ch+var_530], ebx
0x810730: call    __memset
0x810735: push    44h ; 'D'
0x810737: lea     eax, [esp+690h+var_4E0]
0x81073E: push    ebx
0x81073F: push    eax
0x810740: mov     [esp+698h+var_4E8], offset aLighting1xPDif; "lighting\\1x\\p\\diffusePt.p.hlsl"
0x81074B: mov     [esp+698h+var_4E4], ebx
0x810752: call    __memset
0x810757: push    34h ; '4'
0x810759: lea     ecx, [esp+69Ch+var_484]
0x810760: push    ebx
0x810761: push    ecx
0x810762: mov     [esp+6A4h+var_49C], offset aLighting1xPBas; "lighting\\1x\\p\\base.p.hlsl"
0x81076D: mov     [esp+6A4h+var_498], offset off_A8F8C4
0x810778: mov     [esp+6A4h+var_494], esi
0x81077F: mov     [esp+6A4h+var_490], edi
0x810786: mov     [esp+6A4h+var_48C], esi
0x81078D: mov     [esp+6A4h+var_488], ebx
0x810794: call    __memset
0x810799: mov     edi, offset aSpecmult; "SPECMULT"
0x81079E: lea     edx, [esp+6A4h+DstBuf]
0x8107A5: mov     [esp+6A4h+var_450], offset aLighting1xPS_0; "lighting\\1x\\p\\specularDir.p.hlsl"
0x8107B0: mov     [esp+6A4h+var_44C], edi
0x8107B7: mov     [esp+6A4h+var_448], edx
0x8107BE: mov     [esp+6A4h+var_444], ebx
0x8107C5: push    3Ch ; '<'
0x8107C7: lea     eax, [esp+6A8h+var_440]
0x8107CE: push    ebx
0x8107CF: push    eax
0x8107D0: call    __memset
0x8107D5: push    3Ch ; '<'
0x8107D7: lea     edx, [esp+6B4h+var_3F4]
0x8107DE: lea     ecx, [esp+6B4h+DstBuf]
0x8107E5: push    ebx
0x8107E6: push    edx
0x8107E7: mov     [esp+6BCh+var_404], offset aLighting1xPSpe; "lighting\\1x\\p\\specularPt.p.hlsl"
0x8107F2: mov     [esp+6BCh+var_400], edi
0x8107F9: mov     [esp+6BCh+var_3FC], ecx
0x810800: mov     [esp+6BCh+var_3F8], ebx
0x810807: call    __memset
0x81080C: push    3Ch ; '<'
0x81080E: lea     eax, [esp+6C0h+var_3A8]
0x810815: push    ebx
0x810816: push    eax
0x810817: mov     [esp+6C8h+var_3B8], offset aLighting1xPBas; "lighting\\1x\\p\\base.p.hlsl"
0x810822: mov     [esp+6C8h+var_3B4], offset off_A90D88
0x81082D: mov     [esp+6C8h+var_3B0], esi
0x810834: mov     [esp+6C8h+var_3AC], ebx
0x81083B: call    __memset
0x810840: xor     edi, edi
0x810842: lea     esi, [esp+6C8h+var_664]
0x810846: add     esp, 48h
0x810849: mov     [esp+680h+var_670], edi
0x81084D: mov     [esp+680h+var_66C], esi
0x810851: add     ebp, 10Ch
0x810857: jmp     short loc_810860
0x810859: align 10h
0x810860: mov     eax, [esi]
0x810862: cmp     eax, ebx
0x810864: jz      loc_8108EE
0x81086A: lea     ecx, [esp+680h+FileName]
0x810871: push    ecx; int
0x810872: push    eax; FullPath
0x810873: call    sub_801030
0x810878: push    edi
0x810879: lea     edx, [esp+68Ch+var_20C]
0x810880: push    offset aStb103i_pso; "STB1%03i.pso"
0x810885: push    edx
0x810886: call    __sprintf
0x81088B: add     esp, 14h
0x81088E: push    ebx; int
0x81088F: push    ebx; int
0x810890: lea     eax, [esp+688h+var_20C]
0x810897: push    eax; int
0x810898: push    offset aPs_1_3; "ps_1_3"
0x81089D: add     esi, 4
0x8108A0: push    esi; int
0x8108A1: lea     ecx, [esp+694h+FileName]
0x8108A8: push    ecx; lpFileName
0x8108A9: mov     ecx, [esp+698h+var_668]
0x8108AD: call    CreatePixelShader
0x8108B2: mov     esi, [ebp+0]
0x8108B5: mov     edi, eax
0x8108B7: cmp     esi, edi
0x8108B9: jz      short loc_810914
0x8108BB: cmp     esi, ebx
0x8108BD: jz      short loc_8108DB
0x8108BF: lea     edx, [esi+4]
0x8108C2: push    edx; lpAddend
0x8108C3: call    dword ptr ds:0A2807Ch
0x8108C9: test    eax, eax
0x8108CB: jnz     short loc_8108DB
0x8108CD: cmp     esi, ebx
0x8108CF: jz      short loc_8108DB
0x8108D1: mov     eax, [esi]
0x8108D3: mov     edx, [eax]
0x8108D5: push    1
0x8108D7: mov     ecx, esi
0x8108D9: call    edx
0x8108DB: cmp     edi, ebx
0x8108DD: mov     [ebp+0], edi
0x8108E0: jz      short loc_810914
0x8108E2: add     edi, 4
0x8108E5: push    edi; lpAddend
0x8108E6: call    dword ptr ds:0A28078h
0x8108EC: jmp     short loc_810914
0x8108EE: mov     esi, [ebp+0]
0x8108F1: cmp     esi, ebx
0x8108F3: jz      short loc_810914
0x8108F5: lea     eax, [esi+4]
0x8108F8: push    eax; lpAddend
0x8108F9: call    dword ptr ds:0A2807Ch
0x8108FF: test    eax, eax
0x810901: jnz     short loc_810911
0x810903: cmp     esi, ebx
0x810905: jz      short loc_810911
0x810907: mov     edx, [esi]
0x810909: mov     eax, [edx]
0x81090B: push    1
0x81090D: mov     ecx, esi
0x81090F: call    eax
0x810911: mov     [ebp+0], ebx
0x810914: mov     edi, [esp+680h+var_670]
0x810918: mov     esi, [esp+680h+var_66C]
0x81091C: add     edi, 1
0x81091F: add     esi, 4Ch ; 'L'
0x810922: add     ebp, 4
0x810925: cmp     edi, 0Ah
0x810928: mov     [esp+680h+var_670], edi
0x81092C: mov     [esp+680h+var_66C], esi
0x810930: jl      loc_810860
0x810936: mov     ecx, [esp+680h+var_4]
0x81093D: pop     edi
0x81093E: pop     esi
0x81093F: pop     ebp
0x810940: pop     ebx
0x810941: xor     ecx, esp
0x810943: call    @__security_check_cookie@4; __security_check_cookie(x)
0x810948: add     esp, 670h
0x81094E: retn
