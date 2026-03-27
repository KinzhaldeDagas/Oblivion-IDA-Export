0x55D4C0: sub     esp, 98h
0x55D4C6: push    ebp
0x55D4C7: mov     ebp, ecx
0x55D4C9: test    byte ptr [ebp+18h], 1
0x55D4CD: jz      short loc_55D4F1
0x55D4CF: mov     eax, [esp+9Ch+arg_4]
0x55D4D6: fld     [esp+9Ch+arg_0]
0x55D4DD: push    eax; int
0x55D4DE: push    ecx
0x55D4DF: fstp    [esp+0A4h+var_A4]; float
0x55D4E2: call    sub_70A0D0
0x55D4E7: pop     ebp
0x55D4E8: add     esp, 98h
0x55D4EE: retn    8
0x55D4F1: mov     edx, [ebp+0]
0x55D4F4: mov     eax, [edx+9Ch]
0x55D4FA: call    eax
0x55D4FC: mov     edx, [eax]
0x55D4FE: mov     ecx, eax
0x55D500: mov     eax, [edx+98h]
0x55D506: call    eax
0x55D508: cmp     byte ptr ds:0B120C4h, 0
0x55D50F: jz      short loc_55D533
0x55D511: cmp     byte ptr [ebp+111h], 0
0x55D518: jnz     short loc_55D533
0x55D51A: fldz
0x55D51C: fcomp   [esp+9Ch+arg_0]
0x55D523: fnstsw  ax
0x55D525: test    ah, 5
0x55D528: jp      short loc_55D533
0x55D52A: push    0FFFFFFFFh
0x55D52C: mov     ecx, ebp
0x55D52E: call    sub_55CC60
0x55D533: mov     edx, [ebp+0]
0x55D536: mov     eax, [edx+9Ch]
0x55D53C: push    ebx
0x55D53D: mov     ecx, ebp
0x55D53F: call    eax
0x55D541: test    eax, eax
0x55D543: mov     ebx, [esp+0A0h+arg_4]
0x55D54A: jz      loc_55D89D
0x55D550: test    bl, bl
0x55D552: jnz     short loc_55D575
0x55D554: mov     edx, [ebp+0]
0x55D557: mov     eax, [edx+9Ch]
0x55D55D: mov     ecx, ebp
0x55D55F: call    eax
0x55D561: mov     edx, [eax]
0x55D563: mov     ecx, eax
0x55D565: mov     eax, [edx+90h]
0x55D56B: call    eax
0x55D56D: test    al, al
0x55D56F: jz      loc_55D89D
0x55D575: fld     dword ptr [ebp+10Ch]
0x55D57B: fld     [esp+0A0h+arg_0]
0x55D582: fucompp
0x55D584: fnstsw  ax
0x55D586: test    ah, 44h
0x55D589: jp      short loc_55D5C1
0x55D58B: mov     edx, [ebp+0]
0x55D58E: mov     eax, [edx+9Ch]
0x55D594: mov     ecx, ebp
0x55D596: call    eax
0x55D598: test    eax, eax
0x55D59A: jz      loc_55D89D
0x55D5A0: mov     edx, [ebp+0]
0x55D5A3: mov     eax, [edx+9Ch]
0x55D5A9: mov     ecx, ebp
0x55D5AB: call    eax
0x55D5AD: mov     edx, [eax]
0x55D5AF: mov     ecx, eax
0x55D5B1: mov     eax, [edx+90h]
0x55D5B7: call    eax
0x55D5B9: test    al, al
0x55D5BB: jz      loc_55D89D
0x55D5C1: cmp     byte ptr [ebp+106h], 0
0x55D5C8: fld     [esp+0A0h+arg_0]
0x55D5CF: fstp    dword ptr [ebp+10Ch]
0x55D5D5: jz      short loc_55D653
0x55D5D7: mov     edx, [ebp+0]
0x55D5DA: mov     eax, [edx+9Ch]
0x55D5E0: mov     ecx, ebp
0x55D5E2: call    eax
0x55D5E4: cmp     byte ptr [eax+1D5h], 0
0x55D5EB: jz      short loc_55D653
0x55D5ED: mov     edx, [ebp+0]
0x55D5F0: mov     eax, [edx+9Ch]
0x55D5F6: mov     ecx, ebp
0x55D5F8: call    eax
0x55D5FA: mov     edx, [eax]
0x55D5FC: mov     ecx, eax
0x55D5FE: mov     eax, [edx+94h]
0x55D604: push    0
0x55D606: call    eax
0x55D608: mov     edx, [ebp+0]
0x55D60B: mov     eax, [edx+9Ch]
0x55D611: mov     ecx, ebp
0x55D613: call    eax
0x55D615: mov     ecx, ds:0B39DB0h
0x55D61B: sub     ecx, ds:0B39DB4h
0x55D621: mov     edx, [eax]
0x55D623: test    ecx, ecx
0x55D625: mov     dword ptr [esp+9Ch+var_90], ecx
0x55D629: fild    dword ptr [esp+9Ch+var_90]
0x55D62D: jge     short loc_55D635
0x55D62F: fadd    dword ptr ds:0A2FC78h
0x55D635: fmul    qword ptr ds:0A30E40h
0x55D63B: mov     edx, [edx+0DCh]
0x55D641: push    ecx
0x55D642: mov     ecx, eax
0x55D644: fstp    [esp+0A0h+var_94]
0x55D648: fld     [esp+0A0h+var_94]
0x55D64C: fstp    [esp+0A0h+var_A0]
0x55D64F: call    edx
0x55D651: jmp     short loc_55D66C
0x55D653: mov     eax, [ebp+0]
0x55D656: mov     edx, [eax+9Ch]
0x55D65C: mov     ecx, ebp
0x55D65E: call    edx
0x55D660: mov     edx, [eax]
0x55D662: mov     ecx, eax
0x55D664: mov     eax, [edx+8Ch]
0x55D66A: call    eax
0x55D66C: cmp     byte ptr [ebp+106h], 0
0x55D673: mov     bl, al
0x55D675: push    esi
0x55D676: mov     byte ptr [esp+0A0h+var_94], bl
0x55D67A: push    edi
0x55D67B: jz      loc_55D7E6
0x55D681: mov     edx, [ebp+0]
0x55D684: mov     eax, [edx+9Ch]
0x55D68A: mov     ecx, ebp
0x55D68C: call    eax
0x55D68E: cmp     byte ptr [eax+1D5h], 0
0x55D695: jz      loc_55D7E6
0x55D69B: cmp     byte ptr [ebp+108h], 0
0x55D6A2: jz      loc_55D7E6
0x55D6A8: cmp     byte ptr ds:0B148F4h, 0
0x55D6AF: jnz     loc_55D7E6
0x55D6B5: mov     eax, [ebp+1Ch]
0x55D6B8: mov     ecx, 9
0x55D6BD: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x55D6C2: lea     edi, [esp+0A4h+var_8C]
0x55D6C6: rep movsd
0x55D6C8: mov     ecx, 9
0x55D6CD: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x55D6D2: lea     edi, [esp+0A4h+var_68]
0x55D6D6: rep movsd
0x55D6D8: mov     ecx, ds:0B39DB0h
0x55D6DE: sub     ecx, ds:0B39DB4h
0x55D6E4: push    eax; int
0x55D6E5: test    ecx, ecx
0x55D6E7: mov     dword ptr [esp+0A8h+var_90], ecx
0x55D6EB: fild    dword ptr [esp+0A8h+var_90]
0x55D6EF: jge     short loc_55D6F7
0x55D6F1: fadd    dword ptr ds:0A2FC78h
0x55D6F7: fmul    qword ptr ds:0A30E40h
0x55D6FD: mov     eax, [ebp+0]
0x55D700: push    ecx
0x55D701: lea     edx, [esp+0ACh+var_44]
0x55D705: fstp    dword ptr [esp+0ACh+var_90]
0x55D709: mov     ecx, ebp
0x55D70B: fld     dword ptr [esp+0ACh+var_90]
0x55D70F: fstp    [esp+0ACh+var_AC]; float
0x55D712: push    edx; int
0x55D713: mov     edx, [eax+9Ch]
0x55D719: call    edx
0x55D71B: mov     ecx, eax
0x55D71D: call    sub_54B5A0
0x55D722: mov     esi, eax
0x55D724: mov     eax, [ebp+0]
0x55D727: mov     edx, [eax+9Ch]
0x55D72D: mov     ecx, 9
0x55D732: lea     edi, [esp+0A4h+var_68]
0x55D736: rep movsd
0x55D738: mov     ecx, ebp
0x55D73A: call    edx
0x55D73C: mov     edx, [eax]
0x55D73E: mov     edx, [edx+60h]
0x55D741: lea     ecx, [esp+0A4h+var_8C]
0x55D745: push    ecx
0x55D746: mov     ecx, eax
0x55D748: call    edx
0x55D74A: mov     edi, [ebp+1Ch]
0x55D74D: lea     eax, [esp+0A4h+var_8C]
0x55D751: push    eax
0x55D752: lea     ecx, [esp+0A8h+var_44]
0x55D756: push    ecx
0x55D757: lea     edx, [esp+0ACh+var_68]
0x55D75B: push    edx
0x55D75C: lea     eax, [esp+0B0h+var_20]
0x55D763: push    eax
0x55D764: lea     ecx, [edi+64h]
0x55D767: call    NiMAtrix33_Multiply
0x55D76C: mov     ecx, eax
0x55D76E: call    NiMAtrix33_Multiply
0x55D773: fldz
0x55D775: mov     esi, eax
0x55D777: add     edi, 64h ; 'd'
0x55D77A: mov     ecx, 9
0x55D77F: rep movsd
0x55D781: push    ebp; int
0x55D782: push    0; int
0x55D784: push    ecx
0x55D785: mov     ecx, [ebp+1Ch]
0x55D788: fstp    [esp+0B0h+var_B0]; float
0x55D78B: call    sub_47CA90
0x55D790: mov     ecx, ds:0B39DB0h
0x55D796: sub     ecx, ds:0B39DB4h
0x55D79C: mov     eax, [ebp+1Ch]
0x55D79F: test    ecx, ecx
0x55D7A1: mov     dword ptr [esp+0A4h+var_90], ecx
0x55D7A5: fild    dword ptr [esp+0A4h+var_90]
0x55D7A9: push    eax; int
0x55D7AA: jge     short loc_55D7B2
0x55D7AC: fadd    dword ptr ds:0A2FC78h
0x55D7B2: fmul    qword ptr ds:0A30E40h
0x55D7B8: mov     edx, [ebp+0]
0x55D7BB: mov     eax, [edx+9Ch]
0x55D7C1: push    ecx
0x55D7C2: fstp    dword ptr [esp+0ACh+var_90]
0x55D7C6: mov     ecx, ebp
0x55D7C8: fld     dword ptr [esp+0ACh+var_90]
0x55D7CC: fstp    [esp+0ACh+var_AC]; float
0x55D7CF: call    eax
0x55D7D1: mov     ecx, eax
0x55D7D3: call    sub_54C6B0
0x55D7D8: test    bl, bl
0x55D7DA: jnz     short loc_55D7E0
0x55D7DC: test    al, al
0x55D7DE: jz      short loc_55D7E2
0x55D7E0: mov     bl, 1
0x55D7E2: mov     byte ptr [esp+0A4h+var_94], bl
0x55D7E6: mov     edx, [ebp+0]
0x55D7E9: mov     edx, [edx+0A4h]
0x55D7EF: lea     eax, [esp+0A4h+var_20]
0x55D7F6: push    eax
0x55D7F7: mov     ecx, ebp
0x55D7F9: call    edx
0x55D7FB: test    bl, bl
0x55D7FD: lea     edi, [ebp+30h]
0x55D800: mov     ecx, 9
0x55D805: mov     esi, eax
0x55D807: rep movsd
0x55D809: pop     edi
0x55D80A: pop     esi
0x55D80B: jz      short loc_55D864
0x55D80D: mov     eax, [ebp+0]
0x55D810: mov     edx, [eax+9Ch]
0x55D816: mov     ecx, ebp
0x55D818: call    edx
0x55D81A: mov     edx, [eax]
0x55D81C: mov     ecx, eax
0x55D81E: mov     eax, [edx+98h]
0x55D824: call    eax
0x55D826: test    al, al
0x55D828: jnz     short loc_55D858
0x55D82A: mov     ecx, [ebp+114h]
0x55D830: push    0Ah
0x55D832: push    ecx
0x55D833: mov     ecx, offset ActorProcessManager_ptr
0x55D838: call    sub_674860
0x55D83D: test    al, al
0x55D83F: jnz     short loc_55D858
0x55D841: mov     edx, [ebp+114h]
0x55D847: cmp     edx, ds:0B333C4h
0x55D84D: jz      short loc_55D858
0x55D84F: call    InterfaceManager_IsMenuMode
0x55D854: test    al, al
0x55D856: jz      short loc_55D864
0x55D858: mov     eax, [esp+0A0h+var_98]
0x55D85C: push    eax
0x55D85D: mov     ecx, ebp
0x55D85F: call    sub_55D1B0
0x55D864: mov     ecx, [esp+0A0h+arg_4]
0x55D86B: fld     [esp+0A0h+arg_0]
0x55D872: push    ecx; int
0x55D873: push    ecx
0x55D874: mov     ecx, ebp
0x55D876: fstp    [esp+0A8h+var_A8]; float
0x55D879: call    sub_70A0D0
0x55D87E: mov     edx, [ebp+0]
0x55D881: mov     eax, [edx+9Ch]
0x55D887: mov     ecx, ebp
0x55D889: call    eax
0x55D88B: pop     ebx
0x55D88C: mov     byte ptr [eax+1D5h], 1
0x55D893: pop     ebp
0x55D894: add     esp, 98h
0x55D89A: retn    8
0x55D89D: fld     [esp+0A0h+arg_0]
0x55D8A4: push    ebx; int
0x55D8A5: push    ecx
0x55D8A6: mov     ecx, ebp
0x55D8A8: fstp    [esp+0A8h+var_A8]; float
0x55D8AB: call    sub_70A0D0
0x55D8B0: pop     ebx
0x55D8B1: pop     ebp
0x55D8B2: add     esp, 98h
0x55D8B8: retn    8
