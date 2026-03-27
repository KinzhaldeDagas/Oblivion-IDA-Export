0x5F7310: push    0FFFFFFFFh
0x5F7312: push    offset SEH_5F7310
0x5F7317: mov     eax, large fs:0
0x5F731D: push    eax
0x5F731E: sub     esp, 224h
0x5F7324: mov     eax, ds:0B30AACh
0x5F7329: xor     eax, esp
0x5F732B: mov     [esp+230h+var_10], eax
0x5F7332: push    ebx
0x5F7333: push    ebp
0x5F7334: push    esi
0x5F7335: push    edi
0x5F7336: mov     eax, ds:0B30AACh
0x5F733B: xor     eax, esp
0x5F733D: push    eax
0x5F733E: lea     eax, [esp+244h+var_C]
0x5F7345: mov     large fs:0, eax
0x5F734B: mov     edi, [esp+244h+a2]
0x5F7352: fldz
0x5F7354: mov     ebx, [esp+244h+arg_4]
0x5F735B: fstp    [esp+244h+var_228]
0x5F735F: xor     ebp, ebp
0x5F7361: push    ebp; a3
0x5F7362: mov     esi, ecx
0x5F7364: push    edi; a2
0x5F7365: lea     ecx, [esp+24Ch+var_218]; this
0x5F7369: mov     [esp+24Ch+var_218.m_data], ebp
0x5F736D: mov     [esp+24Ch+var_218.m_dataLen], bp
0x5F7372: mov     [esp+24Ch+var_218.m_bufLen], bp
0x5F7377: call    BSStringT_Set
0x5F737C: mov     ecx, [esi+58h]
0x5F737F: mov     eax, [ecx]
0x5F7381: mov     edx, [eax+260h]
0x5F7387: mov     [esp+244h+var_4], ebp
0x5F738E: call    edx
0x5F7390: test    edi, edi
0x5F7392: mov     ebp, eax
0x5F7394: mov     [esp+244h+var_22C], ebp
0x5F7398: jnz     short loc_5F73A4
0x5F739A: mov     eax, [esp+244h+var_218.m_data]
0x5F739E: push    eax
0x5F739F: jmp     loc_5F78C0
0x5F73A4: lea     eax, [esp+244h+var_210]
0x5F73A8: mov     ecx, eax
0x5F73AA: sub     edi, ecx
0x5F73AC: lea     esp, [esp+0]
0x5F73B0: mov     cl, [eax+edi]
0x5F73B3: mov     [eax], cl
0x5F73B5: add     eax, 1
0x5F73B8: test    cl, cl
0x5F73BA: jnz     short loc_5F73B0
0x5F73BC: mov     edx, [esi]
0x5F73BE: mov     eax, [edx+154h]
0x5F73C4: mov     ecx, esi
0x5F73C6: call    eax
0x5F73C8: test    eax, eax
0x5F73CA: jz      loc_5F78BB
0x5F73D0: mov     ecx, esi
0x5F73D2: call    sub_5EF930
0x5F73D7: fldz
0x5F73D9: mov     ecx, ds:0B333C4h
0x5F73DF: fstp    [esp+244h+var_224]
0x5F73E3: cmp     esi, ecx
0x5F73E5: setz    al
0x5F73E8: test    al, al
0x5F73EA: mov     byte ptr [esp+244h+var_230+2], al
0x5F73EE: jz      short loc_5F73F7
0x5F73F0: mov     byte ptr [esp+244h+var_230+1], 1
0x5F73F5: jmp     short loc_5F7402
0x5F73F7: mov     dl, [esp+244h+arg_18]
0x5F73FE: mov     byte ptr [esp+244h+var_230+1], dl
0x5F7402: push    0; unk000
0x5F7404: push    ecx; a2
0x5F7405: mov     ecx, esi; this
0x5F7407: call    TesObjectREF_GetDistance
0x5F740C: fild    dword ptr ds:0B36798h
0x5F7412: fcompp
0x5F7414: fnstsw  ax
0x5F7416: test    ah, 41h
0x5F7419: jnz     loc_5F7669
0x5F741F: cmp     byte ptr [esp+244h+var_230+2], 0
0x5F7424: jz      short loc_5F7438
0x5F7426: mov     eax, ds:0B333C4h
0x5F742B: cmp     byte ptr [eax+588h], 0
0x5F7432: jz      loc_5F7669
0x5F7438: mov     ecx, esi
0x5F743A: call    sub_5E12B0
0x5F743F: mov     edi, eax
0x5F7441: test    edi, edi
0x5F7443: jz      loc_5F7669
0x5F7449: test    ebp, ebp
0x5F744B: jnz     loc_5F74FA
0x5F7451: cmp     [esp+244h+arg_20], 0
0x5F7459: jz      loc_5F7588
0x5F745F: mov     ecx, [esi+58h]
0x5F7462: mov     edx, [ecx]
0x5F7464: mov     eax, [edx+25Ch]
0x5F746A: call    eax
0x5F746C: test    al, al
0x5F746E: jnz     loc_5F7588
0x5F7474: lea     ecx, [esp+244h+var_218]
0x5F7478: push    ecx
0x5F7479: call    CosntructLipSyncPath
0x5F747E: add     esp, 4
0x5F7481: test    al, al
0x5F7483: jz      loc_5F7526
0x5F7489: cmp     [esp+244h+DoAsync], 0
0x5F7491: jz      short loc_5F74D4
0x5F7493: cmp     byte ptr ds:0B1490Ch, 0
0x5F749A: jz      short loc_5F74D4
0x5F749C: mov     ecx, [esi+58h]
0x5F749F: mov     edx, [ecx]
0x5F74A1: mov     eax, [edx+254h]
0x5F74A7: push    1
0x5F74A9: call    eax
0x5F74AB: mov     ecx, [esp+244h+var_218.m_data]
0x5F74AF: push    ecx
0x5F74B0: push    esi
0x5F74B1: mov     ecx, offset unk_B3BD7C
0x5F74B6: call    sub_642A70
0x5F74BB: lea     ecx, [esp+244h+var_218]; void *
0x5F74BF: mov     [esp+244h+var_4], 0FFFFFFFFh
0x5F74CA: call    BSStringT_Clear
0x5F74CF: jmp     loc_5F78C8
0x5F74D4: lea     edx, [esp+244h+var_218]
0x5F74D8: push    edx
0x5F74D9: call    sub_494150
0x5F74DE: mov     ecx, [esi+58h]
0x5F74E1: mov     ebp, eax
0x5F74E3: mov     eax, [ecx]
0x5F74E5: mov     edx, [eax+254h]
0x5F74EB: add     esp, 4
0x5F74EE: push    0
0x5F74F0: mov     [esp+248h+var_22C], ebp
0x5F74F4: call    edx
0x5F74F6: test    ebp, ebp
0x5F74F8: jz      short loc_5F7526
0x5F74FA: mov     ecx, [ebp+0]
0x5F74FD: fild    dword ptr [ebp+0]
0x5F7500: test    ecx, ecx
0x5F7502: jge     short loc_5F750A
0x5F7504: fadd    dword ptr ds:0A2FC78h
0x5F750A: fdiv    qword ptr ds:0A3AA50h
0x5F7510: push    ecx
0x5F7511: mov     ecx, ebp
0x5F7513: fstp    [esp+248h+var_224]
0x5F7517: fld     dword ptr ds:0A3D9A4h
0x5F751D: fstp    [esp+248h+var_24C+4]; float
0x5F7520: push    edi; int
0x5F7521: call    sub_493D50
0x5F7526: cmp     byte ptr ds:0B1206Ch, 0
0x5F752D: jz      loc_5F762D
0x5F7533: mov     eax, [esp+244h+arg_8]
0x5F753A: test    eax, eax
0x5F753C: jnz     loc_5F75EF
0x5F7542: cmp     [esi+58h], eax
0x5F7545: jz      loc_5F75CD
0x5F754B: mov     ecx, esi; this
0x5F754D: call    sub_5E6C10
0x5F7552: test    al, al
0x5F7554: jz      short loc_5F75CD
0x5F7556: mov     ecx, [esi+58h]
0x5F7559: mov     eax, ds:0B333C4h
0x5F755E: mov     edx, [ecx]
0x5F7560: mov     ebp, [edi]
0x5F7562: mov     edx, [edx+1D8h]
0x5F7568: push    1
0x5F756A: push    eax
0x5F756B: push    esi
0x5F756C: add     ebp, 0D0h ; 'Ð'
0x5F7572: call    edx
0x5F7574: mov     eax, [ebp+0]
0x5F7577: push    ecx
0x5F7578: mov     ecx, edi
0x5F757A: fstp    [esp+248h+var_24C+4]
0x5F757D: call    eax
0x5F757F: mov     ebp, [esp+244h+var_22C]
0x5F7583: jmp     loc_5F7646
0x5F7588: mov     ecx, esi
0x5F758A: call    sub_5E12B0
0x5F758F: test    eax, eax
0x5F7591: jz      short loc_5F75A4
0x5F7593: mov     edx, [eax]
0x5F7595: mov     ecx, eax
0x5F7597: mov     eax, [edx+0D8h]
0x5F759D: push    offset aBigaah0_90_20_; "BigAah 0.9 0.2 0.1 0.2"
0x5F75A2: call    eax
0x5F75A4: mov     ecx, [esi+58h]
0x5F75A7: mov     edx, [ecx]
0x5F75A9: mov     eax, [edx+25Ch]
0x5F75AF: call    eax
0x5F75B1: test    al, al
0x5F75B3: jz      loc_5F7526
0x5F75B9: mov     ecx, [esi+58h]
0x5F75BC: mov     edx, [ecx]
0x5F75BE: mov     eax, [edx+258h]
0x5F75C4: push    0
0x5F75C6: call    eax
0x5F75C8: jmp     loc_5F7526
0x5F75CD: mov     ebp, [edi]
0x5F75CF: push    1
0x5F75D1: mov     ecx, esi
0x5F75D3: add     ebp, 0D0h ; 'Ð'
0x5F75D9: call    sub_5E0DD0
0x5F75DE: mov     edx, [ebp+0]
0x5F75E1: push    ecx
0x5F75E2: mov     ecx, edi
0x5F75E4: fstp    [esp+24Ch+var_24C]
0x5F75E7: call    edx
0x5F75E9: mov     ebp, [esp+244h+var_22C]
0x5F75ED: jmp     short loc_5F7646
0x5F75EF: push    eax
0x5F75F0: call    sub_54F590
0x5F75F5: fild    [esp+248h+arg_C]
0x5F75FC: mov     ecx, [esp+248h+arg_C]
0x5F7603: test    ecx, ecx
0x5F7605: mov     edx, [edi]
0x5F7607: jge     short loc_5F760F
0x5F7609: fadd    dword ptr ds:0A2FC78h
0x5F760F: fdiv    qword ptr ds:0A309F0h
0x5F7615: mov     edx, [edx+0C8h]
0x5F761B: mov     ecx, edi
0x5F761D: fstp    [esp+248h+var_22C]
0x5F7621: fld     [esp+248h+var_22C]
0x5F7625: fstp    [esp+248h+var_24C+4]
0x5F7628: push    eax
0x5F7629: call    edx
0x5F762B: jmp     short loc_5F7646
0x5F762D: mov     eax, [edi]
0x5F762F: fldz
0x5F7631: mov     edx, [eax+78h]
0x5F7634: push    0
0x5F7636: push    0
0x5F7638: push    0
0x5F763A: push    0
0x5F763C: push    1
0x5F763E: push    ecx
0x5F763F: mov     ecx, edi
0x5F7641: fstp    [esp+25Ch+var_25C]
0x5F7644: call    edx
0x5F7646: cmp     [esp+244h+arg_14], 0
0x5F764E: jz      short loc_5F7669
0x5F7650: mov     ecx, [esi+58h]
0x5F7653: test    ecx, ecx
0x5F7655: jz      short loc_5F7669
0x5F7657: mov     eax, [ecx]
0x5F7659: mov     edx, [esp+244h+arg_8]
0x5F7660: mov     eax, [eax+1E0h]
0x5F7666: push    edx
0x5F7667: call    eax
0x5F7669: mov     ecx, ds:0B33398h
0x5F766F: mov     edi, [ecx+24h]
0x5F7672: test    edi, edi
0x5F7674: jz      loc_5F7876
0x5F767A: cmp     byte ptr [esp+244h+var_230+1], 0
0x5F767F: fld     [esp+244h+var_224]
0x5F7683: push    ecx
0x5F7684: fstp    [esp+248h+var_24C+4]
0x5F7687: mov     ecx, edi
0x5F7689: push    0
0x5F768B: jnz     short loc_5F7696
0x5F768D: push    6
0x5F768F: lea     edx, [esp+250h+var_210]
0x5F7693: push    edx
0x5F7694: jmp     short loc_5F769D
0x5F7696: push    5
0x5F7698: lea     eax, [esp+250h+var_210]
0x5F769C: push    eax
0x5F769D: call    sub_6AE370
0x5F76A2: test    eax, eax
0x5F76A4: mov     [ebx], eax
0x5F76A6: jz      loc_5F782E
0x5F76AC: cmp     byte ptr [esp+244h+var_230+1], 0
0x5F76B1: jnz     short loc_5F7725
0x5F76B3: mov     edx, [esi]
0x5F76B5: mov     eax, [edx+174h]
0x5F76BB: mov     ecx, esi
0x5F76BD: call    eax
0x5F76BF: fld     dword ptr ds:0B161D0h
0x5F76C5: mov     ecx, [eax]
0x5F76C7: mov     edx, [eax+4]
0x5F76CA: mov     eax, [eax+8]
0x5F76CD: sub     esp, 8
0x5F76D0: fstp    [esp+24Ch+var_24C+4]; float
0x5F76D4: mov     [esp+24Ch+var_21C], eax
0x5F76D8: mov     eax, [ebx]
0x5F76DA: fld     dword ptr ds:0B161C8h
0x5F76E0: mov     eax, [eax]
0x5F76E2: fstp    [esp+24Ch+var_24C]; float
0x5F76E5: mov     [esp+24Ch+var_224], ecx
0x5F76E9: push    eax; int
0x5F76EA: mov     ecx, edi
0x5F76EC: mov     [esp+250h+var_220], edx
0x5F76F0: call    sub_6ACC50
0x5F76F5: fld     [esp+244h+var_21C]
0x5F76F9: mov     ecx, [ebx]
0x5F76FB: sub     esp, 0Ch
0x5F76FE: fstp    [esp+250h+var_24C+4]; float
0x5F7702: fld     [esp+250h+var_220]
0x5F7706: fstp    [esp+250h+var_24C]; float
0x5F770A: fld     [esp+250h+var_224]
0x5F770E: fstp    [esp+250h+var_250]; float
0x5F7711: call    sub_6B7360
0x5F7716: mov     eax, [ebx]
0x5F7718: mov     eax, [eax]
0x5F771A: push    esi
0x5F771B: push    eax
0x5F771C: mov     ecx, edi
0x5F771E: call    sub_6AC3E0
0x5F7723: jmp     short loc_5F7762
0x5F7725: mov     ecx, offset dword_B161E0
0x5F772A: call    GameSetting_GetSafeFloatPointer
0x5F772F: fld     dword ptr [eax]
0x5F7731: fmul    qword ptr ds:0A309F0h
0x5F7737: fnstcw  word ptr [esp+244h+var_230+2]
0x5F773B: movzx   eax, word ptr [esp+244h+var_230+2]
0x5F7740: or      eax, 0C00h
0x5F7745: mov     [esp+244h+var_224], eax
0x5F7749: fldcw   word ptr [esp+244h+var_224]
0x5F774D: fistp   [esp+244h+var_224]
0x5F7751: movzx   ecx, word ptr [esp+244h+var_224]
0x5F7756: push    ecx
0x5F7757: mov     ecx, [ebx]
0x5F7759: fldcw   word ptr [esp+248h+var_230+2]
0x5F775D: call    sub_6B72B0
0x5F7762: test    ebp, ebp
0x5F7764: jz      loc_5F77F8
0x5F776A: mov     ecx, ebp
0x5F776C: call    sub_493BA0
0x5F7771: fadd    dword ptr ds:0B39AC8h
0x5F7777: mov     ecx, [ebx]
0x5F7779: fnstcw  word ptr [esp+244h+var_230+2]
0x5F777D: fmul    qword ptr ds:0A2FC70h
0x5F7783: movzx   eax, word ptr [esp+244h+var_230+2]
0x5F7788: or      eax, 0C00h
0x5F778D: push    0
0x5F778F: fstp    [esp+248h+var_224]
0x5F7793: fld     [esp+248h+var_224]
0x5F7797: mov     [esp+248h+var_224], eax
0x5F779B: fldcw   word ptr [esp+248h+var_224]
0x5F779F: fistp   qword ptr [esp+248h+var_224]
0x5F77A3: mov     edx, [esp+248h+var_224]
0x5F77A7: push    edx
0x5F77A8: fldcw   word ptr [esp+24Ch+var_230+2]
0x5F77AC: call    sub_6B71F0
0x5F77B1: mov     ecx, ebp
0x5F77B3: call    sub_493BA0
0x5F77B8: mov     ecx, [ebx]
0x5F77BA: fadd    dword ptr ds:0B39AC8h
0x5F77C0: fstp    [esp+244h+var_228]
0x5F77C4: call    sub_6B7340
0x5F77C9: test    ax, ax
0x5F77CC: jz      short loc_5F77EC
0x5F77CE: mov     ecx, [ebx]
0x5F77D0: call    sub_6B7340
0x5F77D5: movzx   eax, ax
0x5F77D8: mov     [esp+244h+var_224], eax
0x5F77DC: fild    [esp+244h+var_224]
0x5F77E0: fdiv    qword ptr ds:0A2FC70h
0x5F77E6: fadd    [esp+244h+var_228]
0x5F77EA: jmp     short loc_5F7816
0x5F77EC: fld     [esp+244h+var_228]
0x5F77F0: fadd    qword ptr ds:0A3D0C0h
0x5F77F6: jmp     short loc_5F7816
0x5F77F8: mov     ecx, [ebx]
0x5F77FA: push    0
0x5F77FC: push    1
0x5F77FE: call    sub_6B71F0
0x5F7803: mov     ecx, offset unk_B36AF0
0x5F7808: call    GameSetting_GetSafeFloatPointer
0x5F780D: fild    [esp+244h+arg_10]
0x5F7814: fmul    dword ptr [eax]
0x5F7816: mov     ecx, [esi+58h]
0x5F7819: fstp    [esp+244h+var_228]
0x5F781D: mov     eax, [ebx]
0x5F781F: mov     edx, [ecx]
0x5F7821: mov     edx, [edx+340h]
0x5F7827: push    eax
0x5F7828: push    0
0x5F782A: call    edx
0x5F782C: jmp     short loc_5F7876
0x5F782E: push    4; Size
0x5F7830: call    FormHeapAlloc
0x5F7835: add     esp, 4
0x5F7838: mov     [esp+244h+var_224], eax
0x5F783C: test    eax, eax
0x5F783E: mov     byte ptr [esp+244h+var_4], 1
0x5F7846: jz      short loc_5F7853
0x5F7848: push    0FFFFFF9Ch
0x5F784A: mov     ecx, eax
0x5F784C: call    unknown_libname_1
0x5F7851: jmp     short loc_5F7855
0x5F7853: xor     eax, eax
0x5F7855: mov     ecx, offset unk_B36AF0
0x5F785A: mov     byte ptr [esp+244h+var_4], 0
0x5F7862: mov     [ebx], eax
0x5F7864: call    GameSetting_GetSafeFloatPointer
0x5F7869: fild    [esp+244h+arg_10]
0x5F7870: fmul    dword ptr [eax]
0x5F7872: fstp    [esp+244h+var_228]
0x5F7876: test    ebp, ebp
0x5F7878: jz      short loc_5F78A8
0x5F787A: mov     ecx, ebp
0x5F787C: call    sub_493B70
0x5F7881: push    ebp
0x5F7882: call    FormHeapFree
0x5F7887: mov     ecx, [esi+58h]
0x5F788A: mov     eax, [ecx]
0x5F788C: mov     edx, [eax+264h]
0x5F7892: add     esp, 4
0x5F7895: push    0
0x5F7897: call    edx
0x5F7899: mov     ecx, [esi+58h]
0x5F789C: mov     eax, [ecx]
0x5F789E: mov     edx, [eax+254h]
0x5F78A4: push    0
0x5F78A6: call    edx
0x5F78A8: mov     eax, [esp+244h+var_218.m_data]
0x5F78AC: push    eax
0x5F78AD: call    FormHeapFree
0x5F78B2: fld     [esp+248h+var_228]
0x5F78B6: add     esp, 4
0x5F78B9: jmp     short loc_5F78CA
0x5F78BB: mov     ecx, [esp+244h+var_218.m_data]
0x5F78BF: push    ecx
0x5F78C0: call    FormHeapFree
0x5F78C5: add     esp, 4
0x5F78C8: fldz
0x5F78CA: mov     ecx, [esp+244h+var_C]
0x5F78D1: mov     large fs:0, ecx
0x5F78D8: pop     ecx
0x5F78D9: pop     edi
0x5F78DA: pop     esi
0x5F78DB: pop     ebp
0x5F78DC: pop     ebx
0x5F78DD: mov     ecx, [esp+230h+var_10]
0x5F78E4: xor     ecx, esp
0x5F78E6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5F78EB: add     esp, 230h
0x5F78F1: retn    24h ; '$'
