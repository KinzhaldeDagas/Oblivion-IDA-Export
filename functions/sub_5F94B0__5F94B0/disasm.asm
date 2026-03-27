0x5F94B0: push    0FFFFFFFFh
0x5F94B2: push    offset SEH_5F94B0
0x5F94B7: mov     eax, large fs:0
0x5F94BD: push    eax
0x5F94BE: push    ecx
0x5F94BF: push    ebx
0x5F94C0: push    esi
0x5F94C1: push    edi
0x5F94C2: mov     eax, ds:0B30AACh
0x5F94C7: xor     eax, esp
0x5F94C9: push    eax
0x5F94CA: lea     eax, [esp+20h+var_C]
0x5F94CE: mov     large fs:0, eax
0x5F94D4: mov     edi, ecx
0x5F94D6: push    3Ch ; '<'; Size
0x5F94D8: call    FormHeapAlloc
0x5F94DD: add     esp, 4
0x5F94E0: mov     [esp+20h+var_10], eax
0x5F94E4: xor     ebx, ebx
0x5F94E6: cmp     eax, ebx
0x5F94E8: mov     [esp+20h+var_4], ebx
0x5F94EC: jz      short loc_5F94F9
0x5F94EE: mov     ecx, eax; this
0x5F94F0: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x5F94F5: mov     esi, eax
0x5F94F7: jmp     short loc_5F94FB
0x5F94F9: xor     esi, esi
0x5F94FB: push    1Dh
0x5F94FD: mov     ecx, esi
0x5F94FF: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F9507: call    TESPackage_SetType?
0x5F950C: and     dword ptr [esi+1Ch], 0FFFFFFF9h
0x5F9510: push    0Ch; Size
0x5F9512: call    FormHeapAlloc
0x5F9517: add     esp, 4
0x5F951A: mov     [esp+20h+var_10], eax
0x5F951E: cmp     eax, ebx
0x5F9520: mov     [esp+20h+var_4], 1
0x5F9528: jz      short loc_5F9533
0x5F952A: mov     ecx, eax
0x5F952C: call    TESPackage_LocationData_constr
0x5F9531: mov     ebx, eax
0x5F9533: push    0
0x5F9535: mov     ecx, ebx
0x5F9537: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F953F: call    TESPackage_LocationData_SetType
0x5F9544: push    edi
0x5F9545: mov     ecx, ebx
0x5F9547: call    TESPackage_LocationData_SetReference
0x5F954C: push    ebx
0x5F954D: mov     ecx, esi
0x5F954F: call    TESPackage_SetLocation
0x5F9554: test    ebx, ebx
0x5F9556: jz      short loc_5F9568
0x5F9558: mov     ecx, ebx
0x5F955A: call    TESPackage_LocationData_destr
0x5F955F: push    ebx
0x5F9560: call    FormHeapFree
0x5F9565: add     esp, 4
0x5F9568: or      dword ptr [esi+1Ch], 2000h
0x5F956F: push    0Ch; Size
0x5F9571: call    FormHeapAlloc
0x5F9576: add     esp, 4
0x5F9579: mov     [esp+20h+var_10], eax
0x5F957D: test    eax, eax
0x5F957F: mov     [esp+20h+var_4], 2
0x5F9587: jz      short loc_5F9592
0x5F9589: mov     ecx, eax
0x5F958B: call    TESPackage_TargetData_constr
0x5F9590: jmp     short loc_5F9594
0x5F9592: xor     eax, eax
0x5F9594: push    eax
0x5F9595: mov     ecx, esi
0x5F9597: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F959F: call    TESPackage_SetTarget
0x5F95A4: mov     ecx, [esi+28h]
0x5F95A7: push    0
0x5F95A9: mov     dword ptr [esi+18h], 24h ; '$'
0x5F95B0: call    TESPackage_TargetData_SetType
0x5F95B5: mov     eax, [esp+20h+arg_0]
0x5F95B9: mov     ecx, [esi+28h]
0x5F95BC: push    eax
0x5F95BD: call    TeSPackage_TargetData_SetTargetREFR
0x5F95C2: fld     dword ptr ds:0B36898h
0x5F95C8: call    Double_To_SInt32
0x5F95CD: mov     ecx, [esi+28h]
0x5F95D0: push    eax
0x5F95D1: call    TESAIForm_SetServiceFlags
0x5F95D6: mov     ecx, [edi+58h]
0x5F95D9: mov     edx, [ecx]
0x5F95DB: mov     eax, [edx+0A4h]
0x5F95E1: call    eax
0x5F95E3: mov     ecx, [edi+58h]
0x5F95E6: mov     edx, [ecx]
0x5F95E8: mov     eax, [edx+20h]
0x5F95EB: call    eax
0x5F95ED: mov     ecx, [edi+58h]
0x5F95F0: mov     edx, [ecx]
0x5F95F2: mov     eax, [edx+94h]
0x5F95F8: call    eax
0x5F95FA: push    1; a4
0x5F95FC: push    1; a3
0x5F95FE: push    esi; a2
0x5F95FF: mov     ecx, edi; this
0x5F9601: call    Actor_AddPackage?
0x5F9606: mov     ecx, [esp+20h+var_C]
0x5F960A: mov     large fs:0, ecx
0x5F9611: pop     ecx
0x5F9612: pop     edi
0x5F9613: pop     esi
0x5F9614: pop     ebx
0x5F9615: add     esp, 10h
0x5F9618: retn    4
