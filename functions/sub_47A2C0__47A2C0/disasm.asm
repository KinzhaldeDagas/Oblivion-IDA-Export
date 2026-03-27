0x47A2C0: push    0FFFFFFFFh
0x47A2C2: push    offset SEH_479F80
0x47A2C7: mov     eax, large fs:0
0x47A2CD: push    eax
0x47A2CE: sub     esp, 28h
0x47A2D1: push    ebx
0x47A2D2: push    ebp
0x47A2D3: push    esi
0x47A2D4: push    edi
0x47A2D5: mov     eax, ds:0B30AACh
0x47A2DA: xor     eax, esp
0x47A2DC: push    eax
0x47A2DD: lea     eax, [esp+48h+var_C]
0x47A2E1: mov     large fs:0, eax
0x47A2E7: mov     ebx, ecx
0x47A2E9: mov     esi, [esp+48h+arg_0]
0x47A2ED: test    esi, esi
0x47A2EF: jz      loc_47A627
0x47A2F5: cmp     byte ptr [esi+4], 1Ah
0x47A2F9: jnz     loc_47A627
0x47A2FF: push    0
0x47A301: push    1
0x47A303: lea     ebp, [ebx+12Ch]
0x47A309: push    ebp
0x47A30A: call    sub_478780
0x47A30F: cmp     byte ptr [esi+4], 1Ah
0x47A313: jnz     short loc_47A32D
0x47A315: push    0
0x47A317: push    1
0x47A319: push    ebp
0x47A31A: mov     ecx, ebx
0x47A31C: call    sub_478780
0x47A321: mov     [ebp+0], esi
0x47A324: add     esi, 30h ; '0'
0x47A327: mov     [ebx+130h], esi
0x47A32D: mov     eax, [ebx+130h]
0x47A333: test    eax, eax
0x47A335: jz      loc_47A627
0x47A33B: mov     edi, [ebx+150h]
0x47A341: mov     ecx, ds:0B333C4h
0x47A347: cmp     edi, ecx
0x47A349: jnz     loc_47A3DE
0x47A34F: push    ebx
0x47A350: mov     esi, eax
0x47A352: call    sub_65D770
0x47A357: mov     ecx, ds:0B333C4h
0x47A35D: push    eax
0x47A35E: call    PlayerCharacter_GetPlayerNode
0x47A363: mov     edx, [esi]
0x47A365: push    eax
0x47A366: mov     eax, [ebx+150h]
0x47A36C: push    eax
0x47A36D: mov     eax, [edx+14h]
0x47A370: push    0Eh
0x47A372: mov     ecx, esi
0x47A374: call    eax
0x47A376: push    eax
0x47A377: call    sub_479450
0x47A37C: mov     [ebx+134h], eax
0x47A382: mov     ecx, ds:0B333C4h
0x47A388: add     esp, 10h
0x47A38B: add     ecx, 44h ; 'D'
0x47A38E: call    sub_41E650
0x47A393: test    eax, eax
0x47A395: mov     ecx, ds:0B333C4h
0x47A39B: jz      short loc_47A3C5
0x47A39D: add     ecx, 44h ; 'D'
0x47A3A0: call    sub_41E650
0x47A3A5: mov     ecx, ds:0B333C4h
0x47A3AB: mov     esi, [eax]
0x47A3AD: push    ebx
0x47A3AE: call    sub_65D770
0x47A3B3: mov     ecx, ds:0B333C4h
0x47A3B9: push    eax
0x47A3BA: push    esi
0x47A3BB: call    sub_663870
0x47A3C0: jmp     loc_47A5C2
0x47A3C5: push    ebx
0x47A3C6: call    sub_65D770
0x47A3CB: mov     ecx, ds:0B333C4h
0x47A3D1: push    eax
0x47A3D2: push    0
0x47A3D4: call    sub_663870
0x47A3D9: jmp     loc_47A5C2
0x47A3DE: mov     edx, [eax]
0x47A3E0: mov     ecx, eax
0x47A3E2: mov     eax, [edx+14h]
0x47A3E5: call    eax
0x47A3E7: xor     ebp, ebp
0x47A3E9: cmp     eax, ebp
0x47A3EB: jz      loc_47A5BC
0x47A3F1: cmp     edi, ebp
0x47A3F3: jz      loc_47A5BC
0x47A3F9: mov     ecx, [edi+3Ch]
0x47A3FC: cmp     ecx, ebp
0x47A3FE: mov     [esp+48h+Src], ecx
0x47A402: jz      loc_47A5BC
0x47A408: mov     ecx, ds:0B33A1Ch
0x47A40E: push    1
0x47A410: push    3
0x47A412: push    1
0x47A414: push    eax
0x47A415: call    sub_439EB0
0x47A41A: mov     esi, eax
0x47A41C: lea     ecx, [esp+48h+var_28]
0x47A420: mov     [esp+48h+var_34], esi
0x47A424: call    sub_478B90
0x47A429: fld1
0x47A42B: fst     [esp+48h+var_10]
0x47A42F: fst     [esp+48h+var_14]
0x47A433: fstp    [esp+48h+var_18]
0x47A437: mov     [esp+48h+var_4], ebp
0x47A43B: mov     [esp+48h+arg_0], ebp
0x47A43F: push    esi
0x47A440: mov     byte ptr [esp+4Ch+var_4], 1
0x47A445: call    sub_480820
0x47A44A: add     esp, 4
0x47A44D: test    al, al
0x47A44F: jz      short loc_47A472
0x47A451: lea     ecx, [esp+48h+var_28]
0x47A455: push    ecx
0x47A456: mov     ecx, ds:0B333A0h
0x47A45C: push    esi
0x47A45D: call    sub_4430C0
0x47A462: push    eax; a2
0x47A463: lea     ecx, [esp+4Ch+arg_0]; this
0x47A467: call    NiSmartPointer_Set??
0x47A46C: mov     ebp, [esp+48h+arg_0]
0x47A470: jmp     short loc_47A480
0x47A472: lea     edx, [esp+48h+var_28]
0x47A476: push    edx
0x47A477: mov     ecx, esi
0x47A479: call    sub_700610
0x47A47E: mov     ebp, eax
0x47A480: push    edi
0x47A481: push    0Eh
0x47A483: push    ebp
0x47A484: push    esi
0x47A485: call    sub_478220
0x47A48A: add     esp, 10h
0x47A48D: mov     ecx, ebp
0x47A48F: call    sub_6FFC60
0x47A494: test    ebp, ebp
0x47A496: jz      loc_47A56F
0x47A49C: push    ebp
0x47A49D: push    offset dword_B35288
0x47A4A2: call    NiRTTI__IsObjectOfRTTIType
0x47A4A7: add     esp, 8
0x47A4AA: test    al, al
0x47A4AC: jz      short loc_47A4B7
0x47A4AE: push    7
0x47A4B0: mov     ecx, ebp
0x47A4B2: call    sub_4A01B0
0x47A4B7: mov     eax, ds:0B3F9A8h
0x47A4BC: mov     [ebp+54h], eax
0x47A4BF: mov     ecx, ds:0B3F9ACh
0x47A4C5: mov     [ebp+58h], ecx
0x47A4C8: mov     edx, ds:0B3F9B0h
0x47A4CE: mov     [ebp+5Ch], edx
0x47A4D1: lea     edi, [ebp+30h]
0x47A4D4: mov     ecx, 9
0x47A4D9: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x47A4DE: push    ebp
0x47A4DF: rep movsd
0x47A4E1: call    sub_471B80
0x47A4E6: add     esp, 4
0x47A4E9: test    al, al
0x47A4EB: jz      short loc_47A500
0x47A4ED: mov     eax, [ebp+8]
0x47A4F0: push    eax; ArgList
0x47A4F1: push    offset aTyringToAddSki; "Tyring to add skinned object '%s' as an"...
0x47A4F6: call    PrintError
0x47A4FB: add     esp, 8
0x47A4FE: jmp     short loc_47A561
0x47A500: mov     eax, [esp+48h+var_34]
0x47A504: mov     esi, [esp+48h+Src]
0x47A508: push    0
0x47A50A: push    0FFFFFFFFh
0x47A50C: push    0
0x47A50E: push    eax
0x47A50F: push    ebp
0x47A510: push    esi
0x47A511: call    sub_479140
0x47A516: mov     edx, [ebp+0]
0x47A519: mov     eax, [edx+8]
0x47A51C: add     esp, 18h
0x47A51F: mov     ecx, ebp
0x47A521: call    eax
0x47A523: test    eax, eax
0x47A525: jz      short loc_47A561
0x47A527: cmp     dword ptr [ebp+1Ch], 0
0x47A52B: jnz     short loc_47A561
0x47A52D: mov     eax, ds:0B06600h
0x47A532: cmp     eax, 0FFFFFFFFh
0x47A535: jz      short loc_47A552
0x47A537: mov     ecx, ds:0B06550h[eax*4]
0x47A53E: push    ecx; a2
0x47A53F: push    esi; a1
0x47A540: call    NiObjectNET_LookupObjectByName
0x47A545: add     esp, 8
0x47A548: test    eax, eax
0x47A54A: jz      short loc_47A552
0x47A54C: mov     edx, [eax]
0x47A54E: mov     ecx, eax
0x47A550: jmp     short loc_47A556
0x47A552: mov     edx, [esi]
0x47A554: mov     ecx, esi
0x47A556: mov     eax, [edx+84h]
0x47A55C: push    1
0x47A55E: push    ebp
0x47A55F: call    eax
0x47A561: mov     ecx, ebp
0x47A563: call    NiNode_UpdateDynamicEffectState
0x47A568: mov     ecx, ebp; this
0x47A56A: call    NiAVObject_InitializePropertyState
0x47A56F: mov     esi, [esp+48h+arg_0]
0x47A573: test    esi, esi
0x47A575: mov     byte ptr [esp+48h+var_4], 0
0x47A57A: jz      short loc_47A594
0x47A57C: lea     ecx, [esi+4]
0x47A57F: push    ecx; lpAddend
0x47A580: call    dword ptr ds:0A2807Ch
0x47A586: test    eax, eax
0x47A588: jnz     short loc_47A594
0x47A58A: mov     edx, [esi]
0x47A58C: mov     eax, [edx]
0x47A58E: push    1
0x47A590: mov     ecx, esi
0x47A592: call    eax
0x47A594: mov     ecx, [esp+48h+var_28]
0x47A598: test    ecx, ecx
0x47A59A: mov     [esp+48h+var_4], 0FFFFFFFFh
0x47A5A2: jz      short loc_47A5AC
0x47A5A4: mov     edx, [ecx]
0x47A5A6: mov     eax, [edx]
0x47A5A8: push    1
0x47A5AA: call    eax
0x47A5AC: mov     ecx, [esp+48h+var_24]
0x47A5B0: test    ecx, ecx
0x47A5B2: jz      short loc_47A5BC
0x47A5B4: mov     edx, [ecx]
0x47A5B6: mov     eax, [edx]
0x47A5B8: push    1
0x47A5BA: call    eax
0x47A5BC: mov     [ebx+134h], ebp
0x47A5C2: xor     esi, esi
0x47A5C4: mov     [esp+48h+Src], esi
0x47A5C8: mov     [esp+48h+var_2C], si
0x47A5CD: mov     [esp+48h+var_2A], si
0x47A5D2: mov     ecx, [ebx+12Ch]
0x47A5D8: mov     eax, [ecx+0Ch]
0x47A5DB: mov     edx, [ecx]
0x47A5DD: push    eax
0x47A5DE: mov     eax, [edx+0D4h]
0x47A5E4: mov     [esp+4Ch+var_4], 2
0x47A5EC: call    eax
0x47A5EE: mov     ecx, ds:0B065C0h
0x47A5F4: push    eax
0x47A5F5: push    ecx; ArgList
0x47A5F6: lea     edx, [esp+54h+Src]
0x47A5FA: push    offset aSS08x; "%s %s (%08X)"
0x47A5FF: push    edx; int
0x47A600: call    BSStringT_Static_Format
0x47A605: mov     ebx, [ebx+134h]
0x47A60B: add     esp, 14h
0x47A60E: cmp     ebx, esi
0x47A610: mov     esi, [esp+48h+Src]
0x47A614: jz      short loc_47A61E
0x47A616: push    esi; Src
0x47A617: mov     ecx, ebx
0x47A619: call    NiObjectNET_SetName
0x47A61E: push    esi
0x47A61F: call    FormHeapFree
0x47A624: add     esp, 4
0x47A627: mov     ecx, dword ptr [esp+48h+var_C]
0x47A62B: mov     large fs:0, ecx
0x47A632: pop     ecx
0x47A633: pop     edi
0x47A634: pop     esi
0x47A635: pop     ebp
0x47A636: pop     ebx
0x47A637: add     esp, 34h
0x47A63A: retn    4
