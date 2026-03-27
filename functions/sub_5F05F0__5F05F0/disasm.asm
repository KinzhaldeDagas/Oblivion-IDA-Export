0x5F05F0: sub     esp, 24h
0x5F05F3: push    ebx
0x5F05F4: push    ebp
0x5F05F5: mov     ebp, [esp+2Ch+arg_C]
0x5F05F9: push    esi
0x5F05FA: mov     esi, [esp+30h+arg_10]
0x5F05FE: test    esi, esi
0x5F0600: push    edi
0x5F0601: mov     edi, ecx
0x5F0603: jnz     short loc_5F0643
0x5F0605: test    ebp, ebp
0x5F0607: jz      short loc_5F0643
0x5F0609: mov     eax, [ebp+0]
0x5F060C: mov     edx, [eax+154h]
0x5F0612: mov     ecx, ebp
0x5F0614: call    edx
0x5F0616: test    eax, eax
0x5F0618: jz      short loc_5F0643
0x5F061A: mov     eax, [ebp+0]
0x5F061D: mov     edx, [eax+154h]
0x5F0623: mov     ecx, ebp
0x5F0625: call    edx
0x5F0627: push    eax
0x5F0628: call    sub_480340
0x5F062D: add     esp, 4
0x5F0630: test    eax, eax
0x5F0632: jz      short loc_5F0643
0x5F0634: mov     esi, [eax+10h]
0x5F0637: mov     ecx, esi
0x5F0639: call    sub_494F10
0x5F063E: mov     ebx, [eax+10h]
0x5F0641: jmp     short loc_5F0647
0x5F0643: mov     ebx, [esp+34h+arg_14]
0x5F0647: mov     ecx, [esp+34h+arg_4]
0x5F064B: fld     dword ptr ds:0A3D65Ch
0x5F0651: mov     eax, [esp+34h+arg_0]
0x5F0655: fstp    [esp+34h+var_14]
0x5F0659: mov     edx, [esp+34h+arg_8]
0x5F065D: fld     dword ptr ds:0A2FE7Ch
0x5F0663: mov     [esp+34h+var_20], ecx
0x5F0667: fstp    [esp+34h+var_18]
0x5F066B: mov     ecx, [edi+58h]
0x5F066E: mov     [esp+34h+var_4], esi
0x5F0672: add     esi, edi
0x5F0674: test    ecx, ecx
0x5F0676: mov     [esp+34h+var_8], 0
0x5F067E: mov     [esp+34h+var_10], 1Fh
0x5F0683: mov     [esp+34h+var_F], bl
0x5F0687: mov     [esp+34h+var_24], eax
0x5F068B: mov     [esp+34h+var_1C], edx
0x5F068F: mov     [esp+34h+var_C], esi
0x5F0693: jz      short loc_5F06AA
0x5F0695: mov     eax, [ecx]
0x5F0697: mov     edx, [eax+0ECh]
0x5F069D: push    1
0x5F069F: call    edx
0x5F06A1: test    eax, eax
0x5F06A3: jz      short loc_5F06AA
0x5F06A5: mov     esi, [eax+8]
0x5F06A8: jmp     short loc_5F06AC
0x5F06AA: xor     esi, esi
0x5F06AC: test    ebp, ebp
0x5F06AE: jz      short loc_5F06FA
0x5F06B0: mov     eax, [ebp+0]
0x5F06B3: mov     edx, [eax+190h]
0x5F06B9: mov     ecx, ebp
0x5F06BB: call    edx
0x5F06BD: test    al, al
0x5F06BF: jz      short loc_5F06FA
0x5F06C1: test    esi, esi
0x5F06C3: jz      short loc_5F06CE
0x5F06C5: movsx   eax, byte ptr [esi+90h]
0x5F06CC: jmp     short loc_5F06D1
0x5F06CE: or      eax, 0FFFFFFFFh
0x5F06D1: fldz
0x5F06D3: push    0; char
0x5F06D5: push    0; char
0x5F06D7: push    0FFFFFFFFh; char
0x5F06D9: push    0FFFFFFFFh; int
0x5F06DB: push    eax; int
0x5F06DC: push    ebp; int
0x5F06DD: sub     esp, 8
0x5F06E0: fst     [esp+54h+var_50]; int
0x5F06E4: fstp    [esp+54h+var_54]; float
0x5F06E7: push    edi; int
0x5F06E8: call    sub_6AF880
0x5F06ED: add     esp, 24h
0x5F06F0: pop     edi
0x5F06F1: pop     esi
0x5F06F2: pop     ebp
0x5F06F3: pop     ebx
0x5F06F4: add     esp, 24h
0x5F06F7: retn    18h
0x5F06FA: cmp     ebx, 6
0x5F06FD: jz      short loc_5F072E
0x5F06FF: test    esi, esi
0x5F0701: jz      short loc_5F070C
0x5F0703: movsx   eax, byte ptr [esi+90h]
0x5F070A: jmp     short loc_5F070F
0x5F070C: or      eax, 0FFFFFFFFh
0x5F070F: fldz
0x5F0711: push    0; char
0x5F0713: push    1; char
0x5F0715: push    0FFFFFFFFh; char
0x5F0717: push    0FFFFFFFFh; int
0x5F0719: push    eax; int
0x5F071A: push    edi; int
0x5F071B: sub     esp, 8
0x5F071E: fst     [esp+54h+var_50]; int
0x5F0722: fstp    [esp+54h+var_54]; float
0x5F0725: push    edi; int
0x5F0726: call    sub_6AF880
0x5F072B: add     esp, 24h
0x5F072E: lea     eax, [esp+34h+var_24]
0x5F0732: push    eax
0x5F0733: call    sub_6B0C70
0x5F0738: add     esp, 4
0x5F073B: pop     edi
0x5F073C: pop     esi
0x5F073D: pop     ebp
0x5F073E: pop     ebx
0x5F073F: add     esp, 24h
0x5F0742: retn    18h
