0x61B190: push    ebx
0x61B191: push    ebp
0x61B192: push    esi
0x61B193: push    edi
0x61B194: mov     edi, ecx
0x61B196: mov     ecx, [edi+3Ch]; this
0x61B199: push    0; a2
0x61B19B: call    Actor_GetActorBaseForm
0x61B1A0: test    eax, eax
0x61B1A2: jz      loc_61B233
0x61B1A8: mov     ecx, [edi+3Ch]; this
0x61B1AB: push    0; a2
0x61B1AD: call    Actor_GetActorBaseForm
0x61B1B2: mov     ebx, eax
0x61B1B4: add     ebx, 58h ; 'X'
0x61B1B7: jz      short loc_61B233
0x61B1B9: lea     esp, [esp+0]
0x61B1C0: cmp     dword ptr [ebx+4], 0
0x61B1C4: jnz     short loc_61B1CB
0x61B1C6: cmp     dword ptr [ebx], 0
0x61B1C9: jz      short loc_61B233
0x61B1CB: mov     esi, [ebx]
0x61B1CD: test    esi, esi
0x61B1CF: jz      short loc_61B22C
0x61B1D1: mov     eax, [esi+18h]
0x61B1D4: mov     edx, [eax+18h]
0x61B1D7: add     esi, 18h
0x61B1DA: mov     ecx, esi
0x61B1DC: call    edx
0x61B1DE: cmp     eax, 4
0x61B1E1: jz      short loc_61B214
0x61B1E3: mov     eax, [esi]
0x61B1E5: mov     edx, [eax+18h]
0x61B1E8: mov     ecx, esi
0x61B1EA: call    edx
0x61B1EC: cmp     eax, 1
0x61B1EF: jz      short loc_61B214
0x61B1F1: mov     ecx, [edi+3Ch]
0x61B1F4: mov     eax, [ecx+5Ch]
0x61B1F7: mov     edx, [eax+1Ch]
0x61B1FA: push    0
0x61B1FC: push    0
0x61B1FE: add     ecx, 5Ch ; '\'
0x61B201: push    0
0x61B203: push    esi
0x61B204: call    edx
0x61B206: test    al, al
0x61B208: jz      short loc_61B214
0x61B20A: push    0
0x61B20C: push    esi
0x61B20D: mov     ecx, edi
0x61B20F: call    sub_616DB0
0x61B214: mov     eax, [esi]
0x61B216: mov     edx, [eax+18h]
0x61B219: mov     ecx, esi
0x61B21B: call    edx
0x61B21D: cmp     eax, 1
0x61B220: jnz     short loc_61B22C
0x61B222: push    0
0x61B224: push    esi
0x61B225: mov     ecx, edi
0x61B227: call    sub_616DB0
0x61B22C: mov     ebx, [ebx+4]
0x61B22F: test    ebx, ebx
0x61B231: jnz     short loc_61B1C0
0x61B233: mov     ecx, [edi+3Ch]; this
0x61B236: call    Actor_IsNPC
0x61B23B: test    al, al
0x61B23D: jz      loc_61B31E
0x61B243: push    0; Seed
0x61B245: call    GetRandomLargeInteger?
0x61B24A: cdq
0x61B24B: mov     ecx, 64h ; 'd'
0x61B250: idiv    ecx
0x61B252: mov     ecx, [edi+3Ch]
0x61B255: add     esp, 4
0x61B258: cmp     edx, ds:0B37200h
0x61B25E: setl    bl
0x61B261: call    Actor__GetRaceIfNPC
0x61B266: test    eax, eax
0x61B268: jz      loc_61B31E
0x61B26E: mov     ecx, [edi+3Ch]
0x61B271: call    Actor__GetRaceIfNPC
0x61B276: mov     ebp, eax
0x61B278: add     ebp, 30h ; '0'
0x61B27B: jz      loc_61B31E
0x61B281: cmp     dword ptr [ebp+4], 0
0x61B285: jnz     short loc_61B291
0x61B287: cmp     dword ptr [ebp+0], 0
0x61B28B: jz      loc_61B31E
0x61B291: mov     esi, [ebp+0]
0x61B294: test    esi, esi
0x61B296: jz      short loc_61B313
0x61B298: mov     edx, [esi+18h]
0x61B29B: mov     eax, [edx+18h]
0x61B29E: add     esi, 18h
0x61B2A1: mov     ecx, esi
0x61B2A3: call    eax
0x61B2A5: cmp     eax, 4
0x61B2A8: jz      short loc_61B2FB
0x61B2AA: mov     edx, [esi]
0x61B2AC: mov     eax, [edx+18h]
0x61B2AF: mov     ecx, esi
0x61B2B1: call    eax
0x61B2B3: cmp     eax, 1
0x61B2B6: jz      short loc_61B2FB
0x61B2B8: mov     ecx, [edi+3Ch]
0x61B2BB: mov     edx, [ecx+5Ch]
0x61B2BE: mov     eax, [edx+1Ch]
0x61B2C1: push    0
0x61B2C3: push    0
0x61B2C5: add     ecx, 5Ch ; '\'
0x61B2C8: push    0
0x61B2CA: push    esi
0x61B2CB: call    eax
0x61B2CD: test    al, al
0x61B2CF: jz      short loc_61B2FB
0x61B2D1: mov     edx, [esi]
0x61B2D3: mov     eax, [edx+18h]
0x61B2D6: mov     ecx, esi
0x61B2D8: call    eax
0x61B2DA: cmp     eax, 2
0x61B2DD: jz      short loc_61B2ED
0x61B2DF: mov     edx, [esi]
0x61B2E1: mov     eax, [edx+18h]
0x61B2E4: mov     ecx, esi
0x61B2E6: call    eax
0x61B2E8: cmp     eax, 3
0x61B2EB: jnz     short loc_61B2F1
0x61B2ED: test    bl, bl
0x61B2EF: jz      short loc_61B2FB
0x61B2F1: push    0
0x61B2F3: push    esi
0x61B2F4: mov     ecx, edi
0x61B2F6: call    sub_616DB0
0x61B2FB: mov     edx, [esi]
0x61B2FD: mov     eax, [edx+18h]
0x61B300: mov     ecx, esi
0x61B302: call    eax
0x61B304: cmp     eax, 1
0x61B307: jnz     short loc_61B313
0x61B309: push    0
0x61B30B: push    esi
0x61B30C: mov     ecx, edi
0x61B30E: call    sub_616DB0
0x61B313: mov     ebp, [ebp+4]
0x61B316: test    ebp, ebp
0x61B318: jnz     loc_61B281
0x61B31E: mov     eax, [edi+3Ch]
0x61B321: mov     ecx, [eax+58h]
0x61B324: mov     edx, [ecx]
0x61B326: push    1
0x61B328: push    eax
0x61B329: mov     eax, [edx+454h]
0x61B32F: call    eax
0x61B331: mov     ebx, eax
0x61B333: test    ebx, ebx
0x61B335: jz      short loc_61B384
0x61B337: cmp     dword ptr [ebx+4], 0
0x61B33B: jnz     short loc_61B342
0x61B33D: cmp     dword ptr [ebx], 0
0x61B340: jz      short loc_61B384
0x61B342: mov     esi, [ebx]
0x61B344: test    esi, esi
0x61B346: jz      short loc_61B37D
0x61B348: mov     edx, [esi+18h]
0x61B34B: mov     eax, [edx+18h]
0x61B34E: add     esi, 18h
0x61B351: mov     ecx, esi
0x61B353: call    eax
0x61B355: cmp     eax, 1
0x61B358: push    0
0x61B35A: jz      short loc_61B375
0x61B35C: mov     ecx, [edi+3Ch]
0x61B35F: mov     edx, [ecx+5Ch]
0x61B362: mov     eax, [edx+1Ch]
0x61B365: push    0
0x61B367: add     ecx, 5Ch ; '\'
0x61B36A: push    0
0x61B36C: push    esi
0x61B36D: call    eax
0x61B36F: test    al, al
0x61B371: jz      short loc_61B37D
0x61B373: push    0
0x61B375: push    esi
0x61B376: mov     ecx, edi
0x61B378: call    sub_616DB0
0x61B37D: mov     ebx, [ebx+4]
0x61B380: test    ebx, ebx
0x61B382: jnz     short loc_61B337
0x61B384: mov     ecx, [edi+3Ch]
0x61B387: push    0
0x61B389: call    TESObjectREF_GetTotalEntryCountForITem
0x61B38E: mov     ebp, eax
0x61B390: xor     ebx, ebx
0x61B392: test    ebp, ebp
0x61B394: jle     short loc_61B402
0x61B396: mov     ecx, [edi+3Ch]; this
0x61B399: push    0; a3
0x61B39B: push    ebx; a2
0x61B39C: call    GetInventoryEntryOfItem
0x61B3A1: mov     esi, eax
0x61B3A3: test    esi, esi
0x61B3A5: jz      short loc_61B3FB
0x61B3A7: mov     eax, [esi+8]
0x61B3AA: movzx   ecx, byte ptr [eax+4]
0x61B3AE: add     ecx, 0FFFFFFECh; switch 21 cases
0x61B3B1: cmp     ecx, 14h
0x61B3B4: ja      short def_61B3BD; jumptable 0061B3BD default case, cases 20,22-39
0x61B3B6: movzx   ecx, ds:byte_61B530[ecx]
0x61B3BD: jmp     ds:jpt_61B3BD[ecx*4]; switch jump
0x61B3C4: push    0; jumptable 0061B3BD case 40
0x61B3C6: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x61B3CB: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x61B3D0: push    0; int
0x61B3D2: push    eax; void *
0x61B3D3: call    OblivionDynamicCast
0x61B3D8: add     esp, 14h
0x61B3DB: test    eax, eax
0x61B3DD: jz      short def_61B3BD; jumptable 0061B3BD default case, cases 20,22-39
0x61B3DF: push    esi
0x61B3E0: add     eax, 24h ; '$'
0x61B3E3: push    eax
0x61B3E4: mov     ecx, edi
0x61B3E6: call    sub_616DB0
0x61B3EB: mov     ecx, esi; jumptable 0061B3BD default case, cases 20,22-39
0x61B3ED: call    ContainerEntryExtraData_DestroyDataTable
0x61B3F2: push    esi
0x61B3F3: call    FormHeapFree
0x61B3F8: add     esp, 4
0x61B3FB: add     ebx, 1
0x61B3FE: cmp     ebx, ebp
0x61B400: jl      short loc_61B396
0x61B402: mov     eax, [edi+0A0h]
0x61B408: test    eax, eax
0x61B40A: jz      short loc_61B415
0x61B40C: mov     ecx, [eax]
0x61B40E: push    0
0x61B410: call    sub_41A610
0x61B415: mov     eax, [edi+9Ch]
0x61B41B: test    eax, eax
0x61B41D: jz      short loc_61B428
0x61B41F: mov     ecx, [eax]
0x61B421: push    0
0x61B423: call    sub_41A610
0x61B428: mov     eax, [edi+90h]
0x61B42E: test    eax, eax
0x61B430: jz      short loc_61B43B
0x61B432: mov     ecx, [eax]
0x61B434: push    0
0x61B436: call    sub_41A610
0x61B43B: mov     eax, [edi+94h]
0x61B441: test    eax, eax
0x61B443: jz      short loc_61B44E
0x61B445: mov     ecx, [eax]
0x61B447: push    0
0x61B449: call    sub_41A610
0x61B44E: mov     eax, [edi+98h]
0x61B454: test    eax, eax
0x61B456: jz      loc_61B518
0x61B45C: mov     ecx, [eax]
0x61B45E: push    0
0x61B460: call    sub_41A610
0x61B465: mov     eax, [edi+98h]
0x61B46B: cmp     dword ptr [eax], 0
0x61B46E: jz      loc_61B518
0x61B474: mov     esi, [eax]
0x61B476: add     esi, 0Ch
0x61B479: jz      loc_61B518
0x61B47F: nop
0x61B480: cmp     dword ptr [esi+8], 0
0x61B484: jnz     short loc_61B490
0x61B486: cmp     dword ptr [esi+4], 0
0x61B48A: jz      loc_61B518
0x61B490: cmp     dword ptr [edi+0A8h], 0
0x61B497: jnz     short loc_61B518
0x61B499: mov     eax, [esi+4]
0x61B49C: test    eax, eax
0x61B49E: jz      short loc_61B508
0x61B4A0: mov     ecx, [eax+1Ch]
0x61B4A3: mov     eax, [ecx+58h]
0x61B4A6: mov     edx, eax
0x61B4A8: shr     edx, 10h
0x61B4AB: test    dl, 1
0x61B4AE: jz      short loc_61B508
0x61B4B0: test    eax, 70000h
0x61B4B5: jz      short loc_61B4F7
0x61B4B7: mov     ecx, [ecx+60h]
0x61B4BA: jmp     short loc_61B4F9
0x61B4BC: push    0; jumptable 0061B3BD case 21
0x61B4BE: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x61B4C3: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x61B4C8: push    0; int
0x61B4CA: push    eax; void *
0x61B4CB: call    OblivionDynamicCast
0x61B4D0: add     esp, 14h
0x61B4D3: test    eax, eax
0x61B4D5: jz      def_61B3BD; jumptable 0061B3BD default case, cases 20,22-39
0x61B4DB: mov     eax, [eax+64h]
0x61B4DE: test    eax, eax
0x61B4E0: jz      def_61B3BD; jumptable 0061B3BD default case, cases 20,22-39
0x61B4E6: push    esi
0x61B4E7: add     eax, 18h
0x61B4EA: push    eax
0x61B4EB: mov     ecx, edi
0x61B4ED: call    sub_616DB0
0x61B4F2: jmp     loc_61B3FB
0x61B4F7: xor     ecx, ecx
0x61B4F9: push    ecx; a1
0x61B4FA: call    TESForm_LookupByFormID
0x61B4FF: add     esp, 4
0x61B502: mov     [edi+0A8h], eax
0x61B508: mov     esi, [esi+8]
0x61B50B: test    esi, esi
0x61B50D: jz      short loc_61B518
0x61B50F: add     esi, 0FFFFFFFCh
0x61B512: jnz     loc_61B480
0x61B518: pop     edi
0x61B519: pop     esi
0x61B51A: pop     ebp
0x61B51B: pop     ebx
0x61B51C: retn
