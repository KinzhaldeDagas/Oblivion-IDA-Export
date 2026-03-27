0x736559: add     dword ptr [ecx+eax], 0
0x73655D: add     [edi+50h], dl
0x736560: push    ebp
0x736561: mov     [esp+4+arg_50], edi
0x736565: call    edx
0x736567: mov     edx, [ebp+4]
0x73656A: push    1
0x73656C: lea     eax, [esp+8+arg_50]
0x736570: push    eax
0x736571: push    edi
0x736572: lea     ecx, [esp+10h+arg_38]
0x736576: push    ecx
0x736577: push    ebp
0x736578: mov     [esp+18h+arg_50], edi
0x73657C: call    edx
0x73657E: mov     edx, [ebp+4]
0x736581: push    1
0x736583: lea     eax, [esp+1Ch+arg_50]
0x736587: push    eax
0x736588: push    edi
0x736589: lea     ecx, [esp+24h+arg_38]
0x73658D: push    ecx
0x73658E: push    ebp
0x73658F: mov     [esp+2Ch+arg_50], edi
0x736596: call    edx
0x736598: add     esp, 50h
0x73659B: test    [esp-24h+arg_40], offset loc_800000
0x7365A3: jz      short loc_7365CF
0x7365A5: cmp     [esp-24h+arg_38], 0
0x7365AA: jz      short loc_7365CF
0x7365AC: add     dword ptr [esi+7Ch], 0FFFFFFFFh
0x7365B0: jnz     short loc_7365B9
0x7365B2: mov     dword ptr [esi+78h], 0
0x7365B9: push    esi; lpCriticalSection
0x7365BA: call    dword ptr ds:0A28074h
0x7365C0: xor     al, al
0x7365C2: pop     edi
0x7365C3: pop     esi
0x7365C4: pop     ebp
0x7365C5: pop     ebx
0x7365C6: add     esp, 80h
0x7365CC: retn    18h
0x7365CF: mov     edx, [ebp+4]
0x7365D2: push    1
0x7365D4: lea     eax, [esp-20h+arg_50]
0x7365D8: push    eax
0x7365D9: push    edi
0x7365DA: lea     ecx, [esp-18h+arg_68]
0x7365DE: push    ecx
0x7365DF: push    ebp
0x7365E0: mov     [esp-10h+arg_50], edi
0x7365E4: call    edx
0x7365E6: mov     ecx, ds:0A853D4h
0x7365EC: mov     eax, [ebp+0]
0x7365EF: mov     edx, [eax+0Ch]
0x7365F2: add     esp, 14h
0x7365F5: push    ecx
0x7365F6: push    2Ch ; ','
0x7365F8: mov     ecx, ebp
0x7365FA: call    edx
0x7365FC: mov     edx, [ebp+4]
0x7365FF: push    1
0x736601: lea     eax, [esp-18h+arg_48]
0x736605: push    eax
0x736606: push    edi
0x736607: lea     ecx, [esp-10h+arg_30]
0x73660B: push    ecx
0x73660C: push    ebp
0x73660D: mov     [esp-8+arg_48], edi
0x736611: call    edx
0x736613: mov     edx, [ebp+4]
0x736616: push    1
0x736618: lea     eax, [esp-4+arg_48]
0x73661C: push    eax
0x73661D: push    edi
0x73661E: lea     ecx, [esp+4+arg_3C]
0x736622: push    ecx
0x736623: push    ebp
0x736624: mov     [esp+0Ch+arg_48], edi
0x736628: call    edx
0x73662A: mov     edx, [ebp+4]
0x73662D: push    1
0x73662F: lea     eax, [esp+10h+arg_48]
0x736633: push    eax
0x736634: push    edi
0x736635: lea     ecx, [esp+18h+arg_54]
0x736639: push    ecx
0x73663A: push    ebp
0x73663B: mov     [esp+20h+arg_48], edi
0x73663F: call    edx
0x736641: mov     al, [esp+20h+arg_3C]
0x736645: add     esp, 3Ch
0x736648: test    al, 4
0x73664A: mov     byte ptr [ebx+10Ch], 0
0x736651: jz      loc_7366FD
0x736657: mov     eax, [esp-1Ch+arg_54]
0x73665B: cmp     eax, 31545844h
0x736660: ja      short loc_7366A8
0x736662: jz      short loc_7366A1
0x736664: add     eax, 0FFFFFF91h; switch 6 cases
0x736667: cmp     eax, 5
0x73666A: ja      def_736670
0x736670: jmp     ds:jpt_736670[eax*4]; switch jump
0x736677: mov     esi, offset unk_B261F0; jumptable 00736670 case 111
0x73667C: jmp     short loc_7366C6
0x73667E: mov     esi, offset unk_B26160; jumptable 00736670 case 112
0x736683: jmp     short loc_7366C6
0x736685: mov     esi, offset unk_B260D0; jumptable 00736670 case 113
0x73668A: jmp     short loc_7366C6
0x73668C: mov     esi, offset unk_B26118; jumptable 00736670 case 114
0x736691: jmp     short loc_7366C6
0x736693: mov     esi, offset unk_B261A8; jumptable 00736670 case 115
0x736698: jmp     short loc_7366C6
0x73669A: mov     esi, offset unk_B26088; jumptable 00736670 case 116
0x73669F: jmp     short loc_7366C6
0x7366A1: mov     esi, offset unk_B25FB0
0x7366A6: jmp     short loc_7366C6
0x7366A8: cmp     eax, 33545844h
0x7366AD: jz      short loc_7366C1
0x7366AF: cmp     eax, 35545844h
0x7366B4: jnz     def_736670
0x7366BA: mov     esi, offset unk_B26040
0x7366BF: jmp     short loc_7366C6
0x7366C1: mov     esi, offset unk_B25FF8
0x7366C6: lea     eax, [ebx+110h]
0x7366CC: mov     edi, eax
0x7366CE: mov     ecx, 11h
0x7366D3: rep movsd
0x7366D5: mov     edi, [esp-1Ch+arg_B8]
0x7366DC: mov     esi, eax
0x7366DE: mov     ecx, 11h
0x7366E3: rep movsd
0x7366E5: mov     ecx, ds:0A853D4h
0x7366EB: mov     eax, [ebp+0]
0x7366EE: mov     edx, [eax+0Ch]
0x7366F1: push    ecx
0x7366F2: push    14h
0x7366F4: mov     ecx, ebp
0x7366F6: call    edx
0x7366F8: jmp     loc_7367DC
0x7366FD: test    al, 40h
0x7366FF: jz      def_736670
0x736705: lea     eax, [esp-1Ch+arg_58]
0x736709: push    eax
0x73670A: push    ebp
0x73670B: call    sub_6ED6A0
0x736710: lea     ecx, [esp-14h+arg_48]
0x736714: push    ecx
0x736715: push    ebp
0x736716: call    sub_6ED6A0
0x73671B: lea     edx, [esp-0Ch+arg_44]
0x73671F: push    edx
0x736720: push    ebp
0x736721: call    sub_6ED6A0
0x736726: lea     eax, [esp-4+arg_40]
0x73672A: push    eax
0x73672B: push    ebp
0x73672C: call    sub_6ED6A0
0x736731: lea     ecx, [esp+4+arg_28]
0x736735: push    ecx
0x736736: push    ebp
0x736737: call    sub_6ED6A0
0x73673C: add     esp, 28h
0x73673F: test    [esp-1Ch+arg_3C], 1
0x736744: jnz     short loc_73674E
0x736746: xor     edx, edx
0x736748: mov     [esp-1Ch+arg_28], edx
0x73674C: jmp     short loc_736752
0x73674E: mov     edx, [esp-1Ch+arg_28]
0x736752: mov     edi, [esp-1Ch+arg_58]
0x736756: mov     eax, [esp-1Ch+arg_40]
0x73675A: mov     ecx, [esp-1Ch+arg_44]
0x73675E: push    edi
0x73675F: push    edx
0x736760: push    eax
0x736761: mov     eax, [esp-10h+arg_48]
0x736765: push    ecx
0x736766: push    eax
0x736767: mov     ecx, ebx
0x736769: call    sub_7362C0
0x73676E: test    al, al
0x736770: jz      def_736670
0x736776: mov     ecx, [esp-1Ch+arg_40]
0x73677A: mov     eax, [esp-1Ch+arg_48]
0x73677E: push    edx
0x73677F: mov     edx, [esp-18h+arg_44]
0x736783: push    ecx
0x736784: push    edx
0x736785: push    eax
0x736786: lea     ecx, [esp-0Ch+arg_64]
0x73678A: push    edi
0x73678B: push    ecx
0x73678C: call    sub_70F360
0x736791: mov     edx, [esp-4+arg_B8]
0x736798: mov     esi, eax
0x73679A: mov     edi, edx
0x73679C: mov     ecx, 11h
0x7367A1: rep movsd
0x7367A3: mov     esi, eax
0x7367A5: sub     esp, 2Ch
0x7367A8: lea     edi, [ebx+110h]
0x7367AE: mov     ecx, 11h
0x7367B3: rep movsd
0x7367B5: mov     ecx, esp
0x7367B7: push    edx
0x7367B8: call    sub_70F010
0x7367BD: lea     edx, [esp+28h+arg_64]
0x7367C4: push    edx
0x7367C5: mov     ecx, ebx
0x7367C7: call    sub_7362E0
0x7367CC: mov     edi, [esp-1Ch+arg_B8]
0x7367D3: mov     ecx, 11h
0x7367D8: mov     esi, eax
0x7367DA: rep movsd
0x7367DC: lea     eax, [esp-14h+arg_44]
0x7367E0: push    eax
0x7367E1: push    ebp
0x7367E2: call    sub_6ED6A0
0x7367E7: mov     eax, [esp-0Ch+arg_44]
0x7367EB: add     esp, 8
0x7367EE: test    al, 8
0x7367F0: jnz     short loc_736811
0x7367F2: test    eax, offset NiInitalizeCriticalSection
0x7367F7: jnz     short loc_736811
0x7367F9: mov     ecx, [esp-14h+lpCriticalSection]; lpCriticalSection
0x7367FD: call    sub_43F300
0x736802: xor     al, al
0x736804: pop     edi
0x736805: pop     esi
0x736806: pop     ebp
0x736807: pop     ebx
0x736808: add     esp, 80h
0x73680E: retn    18h
0x736811: lea     ecx, [esp-14h+arg_54]
0x736815: push    ecx
0x736816: push    ebp
0x736817: call    sub_6ED6A0
0x73681C: mov     ecx, [esp-0Ch+arg_54]
0x736820: add     esp, 8
0x736823: test    ecx, 200000h
0x736829: jnz     short loc_7367F9
0x73682B: mov     eax, ecx
0x73682D: and     eax, 200h
0x736832: jz      short loc_736864
0x736834: test    ecx, 400h
0x73683A: jz      short loc_7367F9
0x73683C: test    ecx, 800h
0x736842: jz      short loc_7367F9
0x736844: test    ecx, 1000h
0x73684A: jz      short loc_7367F9
0x73684C: test    ecx, 2000h
0x736852: jz      short loc_7367F9
0x736854: test    ecx, 4000h
0x73685A: jz      short loc_7367F9
0x73685C: test    ecx, 8000h
0x736862: jz      short loc_7367F9
0x736864: mov     edx, [esp-14h+arg_B8]
0x73686B: neg     eax
0x73686D: sbb     eax, eax
0x73686F: and     eax, 5
0x736872: add     eax, 1
0x736875: mov     [edx], eax
0x736877: mov     ecx, ds:0A853D4h
0x73687D: mov     eax, [ebp+0]
0x736880: mov     edx, [eax+0Ch]
0x736883: push    ecx
0x736884: push    0Ch
0x736886: mov     ecx, ebp
0x736888: call    edx
0x73688A: mov     eax, [ebx+104h]
0x736890: mov     ecx, [esp-0Ch+arg_A0]
0x736897: mov     [ecx], eax
0x736899: mov     eax, [esp-0Ch+arg_A4]
0x7368A0: mov     edx, [ebx+100h]
0x7368A6: mov     [eax], edx
0x7368A8: mov     eax, dword ptr [esp-0Ch+arg_3C]
0x7368AC: test    al, 8
0x7368AE: jz      short loc_7368E8
0x7368B0: test    eax, 400000h
0x7368B5: jz      short loc_7368E8
0x7368B7: mov     eax, [esp-0Ch+arg_50]
0x7368BB: cmp     eax, 1
0x7368BE: jz      short loc_7368E8
0x7368C0: mov     ecx, [esp-0Ch+arg_AC]
0x7368C7: mov     byte ptr [ecx], 1
0x7368CA: mov     ecx, [esp-0Ch+arg_1C]; lpCriticalSection
0x7368CE: mov     [ebx+108h], eax
0x7368D4: call    sub_43F300
0x7368D9: mov     al, 1
0x7368DB: pop     edi
0x7368DC: pop     esi
0x7368DD: pop     ebp
0x7368DE: pop     ebx
0x7368DF: add     esp, 80h
0x7368E5: retn    18h
0x7368E8: mov     edx, [esp-0Ch+arg_AC]
0x7368EF: mov     ecx, [esp-0Ch+arg_1C]; lpCriticalSection
0x7368F3: mov     byte ptr [edx], 0
0x7368F6: mov     dword ptr [ebx+108h], 1
0x736900: call    sub_43F300
0x736905: mov     al, 1
0x736907: pop     edi
0x736908: pop     esi
0x736909: pop     ebp
0x73690A: pop     ebx
0x73690B: add     esp, 80h
0x736911: retn    18h
