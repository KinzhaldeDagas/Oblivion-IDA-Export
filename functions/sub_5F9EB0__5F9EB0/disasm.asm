0x5F9EB0: push    0FFFFFFFFh
0x5F9EB2: push    offset SEH_5F9EB0
0x5F9EB7: mov     eax, large fs:0
0x5F9EBD: push    eax
0x5F9EBE: push    ecx
0x5F9EBF: push    ebx
0x5F9EC0: push    ebp
0x5F9EC1: push    esi
0x5F9EC2: push    edi
0x5F9EC3: mov     eax, ds:0B30AACh
0x5F9EC8: xor     eax, esp
0x5F9ECA: push    eax
0x5F9ECB: lea     eax, [esp+24h+var_C]
0x5F9ECF: mov     large fs:0, eax
0x5F9ED5: mov     edi, ecx
0x5F9ED7: mov     ebp, [esp+24h+arg_0]
0x5F9EDB: xor     ebx, ebx
0x5F9EDD: cmp     ebp, ebx
0x5F9EDF: jz      loc_5FA086
0x5F9EE5: mov     eax, [ebp+0]
0x5F9EE8: mov     edx, [eax+198h]
0x5F9EEE: push    ebx
0x5F9EEF: mov     ecx, ebp
0x5F9EF1: call    edx
0x5F9EF3: test    al, al
0x5F9EF5: jz      loc_5FA086
0x5F9EFB: push    3Ch ; '<'; Size
0x5F9EFD: call    FormHeapAlloc
0x5F9F02: add     esp, 4
0x5F9F05: mov     [esp+24h+var_10], eax
0x5F9F09: cmp     eax, ebx
0x5F9F0B: mov     [esp+24h+var_4], ebx
0x5F9F0F: jz      short loc_5F9F1C
0x5F9F11: mov     ecx, eax; this
0x5F9F13: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x5F9F18: mov     esi, eax
0x5F9F1A: jmp     short loc_5F9F1E
0x5F9F1C: xor     esi, esi
0x5F9F1E: push    14h
0x5F9F20: mov     ecx, esi
0x5F9F22: mov     [esp+28h+var_4], 0FFFFFFFFh
0x5F9F2A: call    TESPackage_SetType?
0x5F9F2F: or      dword ptr [esi+1Ch], 400006h
0x5F9F36: push    0Ch; Size
0x5F9F38: call    FormHeapAlloc
0x5F9F3D: add     esp, 4
0x5F9F40: mov     [esp+24h+var_10], eax
0x5F9F44: cmp     eax, ebx
0x5F9F46: mov     [esp+24h+var_4], 1
0x5F9F4E: jz      short loc_5F9F59
0x5F9F50: mov     ecx, eax
0x5F9F52: call    TESPackage_LocationData_constr
0x5F9F57: mov     ebx, eax
0x5F9F59: push    0
0x5F9F5B: mov     ecx, ebx
0x5F9F5D: mov     [esp+28h+var_4], 0FFFFFFFFh
0x5F9F65: call    TESPackage_LocationData_SetType
0x5F9F6A: push    ebp
0x5F9F6B: mov     ecx, ebx
0x5F9F6D: call    TESPackage_LocationData_SetReference
0x5F9F72: push    ebx
0x5F9F73: mov     ecx, esi
0x5F9F75: call    TESPackage_SetLocation
0x5F9F7A: test    ebx, ebx
0x5F9F7C: jz      short loc_5F9F8E
0x5F9F7E: mov     ecx, ebx
0x5F9F80: call    TESPackage_LocationData_destr
0x5F9F85: push    ebx
0x5F9F86: call    FormHeapFree
0x5F9F8B: add     esp, 4
0x5F9F8E: push    0Ch; Size
0x5F9F90: call    FormHeapAlloc
0x5F9F95: add     esp, 4
0x5F9F98: mov     [esp+24h+var_10], eax
0x5F9F9C: test    eax, eax
0x5F9F9E: mov     [esp+24h+var_4], 2
0x5F9FA6: jz      short loc_5F9FB3
0x5F9FA8: mov     ecx, eax
0x5F9FAA: call    TESPackage_TargetData_constr
0x5F9FAF: mov     ebx, eax
0x5F9FB1: jmp     short loc_5F9FB5
0x5F9FB3: xor     ebx, ebx
0x5F9FB5: push    ebx
0x5F9FB6: mov     ecx, esi
0x5F9FB8: mov     [esp+28h+var_4], 0FFFFFFFFh
0x5F9FC0: call    TESPackage_SetTarget
0x5F9FC5: test    ebx, ebx
0x5F9FC7: jz      short loc_5F9FD9
0x5F9FC9: mov     ecx, ebx; void *
0x5F9FCB: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x5F9FD0: push    ebx
0x5F9FD1: call    FormHeapFree
0x5F9FD6: add     esp, 4
0x5F9FD9: mov     ecx, [esi+28h]
0x5F9FDC: push    0
0x5F9FDE: mov     dword ptr [esi+18h], 11h
0x5F9FE5: call    TESPackage_TargetData_SetType
0x5F9FEA: mov     ecx, [esi+28h]
0x5F9FED: push    ebp
0x5F9FEE: call    TeSPackage_TargetData_SetTargetREFR
0x5F9FF3: mov     ecx, [esi+28h]
0x5F9FF6: push    64h ; 'd'
0x5F9FF8: call    TESAIForm_SetServiceFlags
0x5F9FFD: push    1
0x5F9FFF: mov     ecx, esi
0x5FA001: call    sub_566830
0x5FA006: mov     ecx, [edi+58h]
0x5FA009: mov     eax, [ecx]
0x5FA00B: mov     edx, [eax+20h]
0x5FA00E: call    edx
0x5FA010: mov     eax, [edi+58h]
0x5FA013: cmp     dword ptr [eax+8], 0
0x5FA017: jz      short loc_5FA05B
0x5FA019: mov     ecx, eax
0x5FA01B: mov     eax, [ecx]
0x5FA01D: mov     edx, [eax+390h]
0x5FA023: mov     ebx, ecx
0x5FA025: mov     ebp, ecx
0x5FA027: call    edx
0x5FA029: mov     ecx, ebx
0x5FA02B: push    eax
0x5FA02C: mov     eax, [ebx]
0x5FA02E: mov     edx, [eax+0C0h]
0x5FA034: call    edx
0x5FA036: mov     ecx, ebp
0x5FA038: push    eax
0x5FA039: mov     eax, [ebp+0]
0x5FA03C: mov     edx, [eax+0CCh]
0x5FA042: call    edx
0x5FA044: push    eax
0x5FA045: mov     eax, ebx
0x5FA047: mov     ecx, [eax+4]
0x5FA04A: mov     edx, [eax+8]
0x5FA04D: push    ecx
0x5FA04E: push    edx
0x5FA04F: lea     ecx, [edi+44h]
0x5FA052: call    sub_4268B0
0x5FA057: mov     ebp, [esp+24h+arg_0]
0x5FA05B: push    1; a4
0x5FA05D: push    1; a3
0x5FA05F: push    esi; a2
0x5FA060: mov     ecx, edi; this
0x5FA062: call    Actor_AddPackage?
0x5FA067: mov     ecx, [ebp+58h]
0x5FA06A: test    ecx, ecx
0x5FA06C: jz      short loc_5FA07A
0x5FA06E: mov     eax, [ecx]
0x5FA070: mov     edx, [eax+204h]
0x5FA076: push    1
0x5FA078: call    edx
0x5FA07A: fld     dword ptr ds:0B36CC0h
0x5FA080: fstp    dword ptr [ebp+84h]
0x5FA086: mov     ecx, dword ptr [esp+24h+var_C]
0x5FA08A: mov     large fs:0, ecx
0x5FA091: pop     ecx
0x5FA092: pop     edi
0x5FA093: pop     esi
0x5FA094: pop     ebp
0x5FA095: pop     ebx
0x5FA096: add     esp, 10h
0x5FA099: retn    4
