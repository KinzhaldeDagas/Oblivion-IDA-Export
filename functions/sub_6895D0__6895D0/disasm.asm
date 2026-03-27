0x6895D0: push    0FFFFFFFFh
0x6895D2: push    offset SEH_6895D0
0x6895D7: mov     eax, large fs:0
0x6895DD: push    eax
0x6895DE: sub     esp, 58h
0x6895E1: push    ebx
0x6895E2: push    ebp
0x6895E3: push    esi
0x6895E4: push    edi
0x6895E5: mov     eax, ds:0B30AACh
0x6895EA: xor     eax, esp
0x6895EC: push    eax
0x6895ED: lea     eax, [esp+78h+var_C]
0x6895F1: mov     large fs:0, eax
0x6895F7: mov     edi, ecx
0x6895F9: mov     esi, [esp+78h+arg_0]
0x6895FD: test    esi, esi
0x6895FF: jz      loc_6899A6
0x689605: mov     ebp, [esp+78h+arg_4]
0x68960C: push    ebp
0x68960D: call    sub_68A160
0x689612: mov     ecx, eax
0x689614: call    sub_8AA390
0x689619: test    al, al
0x68961B: jnz     short loc_68962E
0x68961D: mov     eax, [edi]
0x68961F: mov     edx, [eax+0Ch]
0x689622: mov     ecx, edi
0x689624: call    edx
0x689626: test    al, al
0x689628: jz      loc_6899A6
0x68962E: push    ebp
0x68962F: push    esi
0x689630: mov     ecx, edi
0x689632: call    sub_68AFB0
0x689637: mov     ecx, ds:0B3BF80h
0x68963D: push    esi
0x68963E: call    sub_6825C0
0x689643: test    al, al
0x689645: jnz     loc_6899A6
0x68964B: mov     eax, [esi]
0x68964D: mov     edx, [eax+174h]
0x689653: push    ebp
0x689654: mov     ecx, esi
0x689656: call    edx
0x689658: push    eax
0x689659: push    esi
0x68965A: call    sub_689230
0x68965F: add     esp, 0Ch
0x689662: test    al, al
0x689664: jz      short loc_689691
0x689666: lea     ebx, [edi+14h]
0x689669: mov     ecx, ebx
0x68966B: call    sub_68C6E0
0x689670: mov     eax, [esi]
0x689672: mov     edx, [eax+174h]
0x689678: mov     ecx, esi
0x68967A: call    edx
0x68967C: push    eax
0x68967D: mov     ecx, ebx
0x68967F: call    sub_68BED0
0x689684: push    ebp
0x689685: mov     ecx, ebx
0x689687: call    sub_68BED0
0x68968C: jmp     loc_68998E
0x689691: test    byte ptr [edi+2Ch], 80h
0x689695: jnz     loc_6899A6
0x68969B: mov     eax, [edi]
0x68969D: mov     edx, [eax+0Ch]
0x6896A0: mov     ecx, edi
0x6896A2: call    edx
0x6896A4: test    al, al
0x6896A6: jnz     loc_689787
0x6896AC: fld     dword ptr ds:0A3765Ch
0x6896B2: mov     eax, [esi]
0x6896B4: mov     edx, [eax+174h]
0x6896BA: push    ecx
0x6896BB: fstp    [esp+7Ch+var_7C]; float
0x6896BE: push    ebp; int
0x6896BF: mov     ecx, esi
0x6896C1: call    edx
0x6896C3: push    eax; int
0x6896C4: call    sub_480520
0x6896C9: add     esp, 0Ch
0x6896CC: test    eax, eax
0x6896CE: jl      loc_689787
0x6896D4: lea     ebx, [edi+14h]
0x6896D7: mov     ecx, ebx
0x6896D9: call    TESHealthForm_GetHealth
0x6896DE: test    eax, eax
0x6896E0: jz      short loc_6896FF
0x6896E2: mov     ecx, eax
0x6896E4: call    sub_6899C0
0x6896E9: mov     ecx, [eax]
0x6896EB: mov     [esp+78h+var_58], ecx
0x6896EF: mov     edx, [eax+4]
0x6896F2: mov     [esp+78h+var_54], edx
0x6896F6: mov     eax, [eax+8]
0x6896F9: mov     [esp+78h+var_50], eax
0x6896FD: jmp     short loc_68972B
0x6896FF: mov     edx, [esi]
0x689701: mov     eax, [edx+174h]
0x689707: mov     ecx, esi
0x689709: call    eax
0x68970B: mov     ecx, [eax]
0x68970D: mov     [esp+78h+var_58], ecx
0x689711: mov     edx, [eax+4]
0x689714: lea     ecx, [esp+78h+var_58]
0x689718: mov     [esp+78h+var_54], edx
0x68971C: mov     eax, [eax+8]
0x68971F: push    ecx
0x689720: mov     ecx, ebx
0x689722: mov     [esp+7Ch+var_50], eax
0x689726: call    sub_68BED0
0x68972B: lea     ecx, [esp+78h+var_38]
0x68972F: call    sub_67D760
0x689734: mov     dl, [edi+10h]
0x689737: push    0; float
0x689739: push    esi; int
0x68973A: push    ebp; int
0x68973B: lea     eax, [esp+84h+var_58]
0x68973F: push    eax; int
0x689740: lea     ecx, [esp+88h+var_38]
0x689744: mov     [esp+88h+var_4], 1
0x68974F: mov     [esp+88h+var_20], dl
0x689753: call    sub_67EB60
0x689758: push    ebx
0x689759: lea     ecx, [esp+7Ch+var_38]
0x68975D: call    sub_67E090
0x689762: mov     ecx, ebx
0x689764: call    sub_68C1B0
0x689769: push    esi
0x68976A: mov     ecx, edi
0x68976C: call    sub_684000
0x689771: lea     ecx, [esp+78h+var_38]; void *
0x689775: mov     [esp+78h+var_4], 0FFFFFFFFh
0x68977D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x689782: jmp     loc_68998E
0x689787: lea     ecx, [edi+14h]
0x68978A: call    sub_42B410
0x68978F: fld     dword ptr ds:0A32048h
0x689795: fstp    [esp+78h+var_64]
0x689799: mov     ebx, eax
0x68979B: test    ebx, ebx
0x68979D: fldz
0x68979F: fst     [esp+78h+var_60]
0x6897A3: fstp    [esp+78h+var_5C]
0x6897A7: jz      short loc_6897C4
0x6897A9: mov     ecx, ebx
0x6897AB: call    sub_6899C0
0x6897B0: mov     ecx, [eax]
0x6897B2: mov     [esp+78h+var_64], ecx
0x6897B6: mov     edx, [eax+4]
0x6897B9: mov     [esp+78h+var_60], edx
0x6897BD: mov     eax, [eax+8]
0x6897C0: mov     [esp+78h+var_5C], eax
0x6897C4: test    ebx, ebx
0x6897C6: mov     byte ptr [esp+78h+arg_0], 0
0x6897CB: jnz     short loc_6897F3
0x6897CD: fld     dword ptr ds:0A34A80h
0x6897D3: mov     edx, [esi]
0x6897D5: mov     eax, [edx+174h]
0x6897DB: push    ecx
0x6897DC: fstp    [esp+7Ch+var_7C]; float
0x6897DF: push    ebp; int
0x6897E0: mov     ecx, esi
0x6897E2: call    eax
0x6897E4: push    eax; int
0x6897E5: call    sub_480520
0x6897EA: add     esp, 0Ch
0x6897ED: test    eax, eax
0x6897EF: jl      short loc_68981A
0x6897F1: jmp     short loc_68981F
0x6897F3: mov     ecx, ebx
0x6897F5: call    NiDX92DBufferData__GetSurfaceData
0x6897FA: test    eax, eax
0x6897FC: jnz     short loc_68981F
0x6897FE: fld     dword ptr ds:0A34A80h
0x689804: push    ecx
0x689805: fstp    [esp+7Ch+var_7C]; float
0x689808: lea     ecx, [esp+7Ch+var_64]
0x68980C: push    ebp; int
0x68980D: push    ecx; int
0x68980E: call    sub_480520
0x689813: add     esp, 0Ch
0x689816: test    eax, eax
0x689818: jge     short loc_68981F
0x68981A: mov     byte ptr [esp+78h+arg_0], 1
0x68981F: mov     edx, [edi]
0x689821: mov     eax, [edx+14h]
0x689824: push    0
0x689826: push    ebp
0x689827: push    esi
0x689828: mov     ecx, edi
0x68982A: call    eax
0x68982C: xor     bl, bl
0x68982E: cmp     byte ptr [esp+78h+arg_0], bl
0x689832: jz      loc_689931
0x689838: push    4
0x68983A: lea     ecx, [edi+14h]
0x68983D: call    sub_68C010
0x689842: test    al, al
0x689844: jz      loc_689931
0x68984A: lea     ecx, [esp+78h+var_4C]
0x68984E: call    sub_68CB30
0x689853: push    0
0x689855: push    0
0x689857: lea     ecx, [esp+80h+var_4C]
0x68985B: push    ecx
0x68985C: push    ebp
0x68985D: push    esi
0x68985E: mov     [esp+8Ch+var_4], 0
0x689869: call    sub_686450
0x68986E: add     esp, 14h
0x689871: test    al, al
0x689873: jz      loc_68991C
0x689879: mov     edx, [esi]
0x68987B: mov     eax, [edx+174h]
0x689881: mov     ecx, esi
0x689883: call    eax
0x689885: mov     ecx, [eax]
0x689887: mov     [esp+78h+var_58], ecx
0x68988B: mov     edx, [eax+4]
0x68988E: mov     [esp+78h+var_54], edx
0x689892: mov     eax, [eax+8]
0x689895: mov     ecx, esi
0x689897: mov     [esp+78h+var_50], eax
0x68989B: call    sub_5E0660
0x6898A0: fadd    [esp+78h+var_50]
0x6898A4: lea     ecx, [esp+78h+var_4C]
0x6898A8: fstp    [esp+78h+var_50]
0x6898AC: call    sub_6899C0
0x6898B1: push    eax
0x6898B2: lea     ecx, [esp+7Ch+var_58]
0x6898B6: push    ecx
0x6898B7: call    sub_6859A0
0x6898BC: add     esp, 8
0x6898BF: test    al, al
0x6898C1: jz      short loc_68991C
0x6898C3: mov     ecx, edi
0x6898C5: call    sub_684EC0
0x6898CA: lea     ecx, [esp+78h+var_4C]
0x6898CE: call    sub_6899C0
0x6898D3: push    eax
0x6898D4: lea     ecx, [edi+14h]
0x6898D7: call    sub_68BED0
0x6898DC: mov     ebx, eax
0x6898DE: push    0
0x6898E0: mov     ecx, ebx
0x6898E2: call    sub_68CA30
0x6898E7: lea     ecx, [esp+78h+var_4C]
0x6898EB: call    sub_68CA80
0x6898F0: mov     ecx, ebx
0x6898F2: push    eax
0x6898F3: call    sub_68CA90
0x6898F8: lea     ecx, [esp+78h+var_4C]
0x6898FC: call    sub_68CAB0
0x689901: mov     ecx, ebx
0x689903: push    eax
0x689904: call    sub_68CAC0
0x689909: lea     ecx, [esp+78h+var_4C]
0x68990D: call    sub_68CAE0
0x689912: mov     ecx, ebx
0x689914: push    eax
0x689915: call    sub_68CAF0
0x68991A: mov     bl, 1
0x68991C: lea     ecx, [esp+78h+var_4C]; void *
0x689920: mov     [esp+78h+var_4], 0FFFFFFFFh
0x689928: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x68992D: test    bl, bl
0x68992F: jnz     short loc_68998E
0x689931: fld     [esp+78h+var_64]
0x689935: fcomp   qword ptr ds:0A3A5B0h
0x68993B: fnstsw  ax
0x68993D: test    ah, 44h
0x689940: jnp     short loc_689955
0x689942: push    5
0x689944: lea     edx, [esp+7Ch+var_64]
0x689948: push    edx
0x689949: lea     ecx, [edi+14h]
0x68994C: call    sub_68BE10
0x689951: test    al, al
0x689953: jnz     short loc_68998E
0x689955: lea     ebp, [edi+14h]
0x689958: mov     ecx, ebp
0x68995A: call    sub_42B410
0x68995F: mov     ebx, eax
0x689961: test    ebx, ebx
0x689963: jz      short loc_68998E
0x689965: mov     eax, [esi]
0x689967: mov     edx, [eax+174h]
0x68996D: mov     ecx, esi
0x68996F: call    edx
0x689971: push    eax
0x689972: mov     ecx, ebx
0x689974: call    sub_6899C0
0x689979: mov     ecx, eax
0x68997B: call    sub_8AA350
0x689980: test    al, al
0x689982: jz      short loc_68998E
0x689984: push    0
0x689986: push    ebx
0x689987: mov     ecx, ebp
0x689989: call    sub_68BE80
0x68998E: cmp     byte ptr ds:0B3C08Ah, 0
0x689995: jz      short loc_68999F
0x689997: push    esi
0x689998: mov     ecx, edi
0x68999A: call    sub_685EA0
0x68999F: mov     ecx, edi
0x6899A1: call    sub_6847B0
0x6899A6: mov     ecx, dword ptr [esp+78h+var_C]
0x6899AA: mov     large fs:0, ecx
0x6899B1: pop     ecx
0x6899B2: pop     edi
0x6899B3: pop     esi
0x6899B4: pop     ebp
0x6899B5: pop     ebx
0x6899B6: add     esp, 64h
0x6899B9: retn    8
