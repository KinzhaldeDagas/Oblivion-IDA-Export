0x643E30: push    0FFFFFFFFh
0x643E32: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x643E37: mov     eax, large fs:0
0x643E3D: push    eax
0x643E3E: push    ecx
0x643E3F: push    ebx
0x643E40: push    ebp
0x643E41: push    esi
0x643E42: push    edi
0x643E43: mov     eax, ds:0B30AACh
0x643E48: xor     eax, esp
0x643E4A: push    eax
0x643E4B: lea     eax, [esp+24h+var_C]
0x643E4F: mov     large fs:0, eax
0x643E55: mov     edi, ecx
0x643E57: mov     eax, [edi+2Ch]
0x643E5A: xor     esi, esi
0x643E5C: push    esi; int
0x643E5D: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x643E62: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x643E67: push    esi; int
0x643E68: push    eax; void *
0x643E69: call    OblivionDynamicCast
0x643E6E: mov     ebx, [esp+38h+arg_0]
0x643E72: mov     ebp, eax
0x643E74: add     esp, 14h
0x643E77: cmp     ebp, ebx
0x643E79: jz      loc_644037
0x643E7F: cmp     ebp, esi
0x643E81: jz      loc_644037
0x643E87: cmp     [ebp+58h], esi
0x643E8A: jz      loc_644037
0x643E90: mov     edx, [ebx]
0x643E92: mov     eax, [edx+380h]
0x643E98: mov     ecx, ebx
0x643E9A: call    eax
0x643E9C: test    eax, eax
0x643E9E: jnz     short loc_643EBC
0x643EA0: mov     edx, [ebx]
0x643EA2: mov     eax, [edx+18Ch]
0x643EA8: mov     ecx, ebx
0x643EAA: call    eax
0x643EAC: test    eax, eax
0x643EAE: jz      short loc_643EBC
0x643EB0: mov     edx, [ebx]
0x643EB2: mov     eax, [edx+320h]
0x643EB8: mov     ecx, ebx
0x643EBA: call    eax
0x643EBC: push    3Ch ; '<'; Size
0x643EBE: call    FormHeapAlloc
0x643EC3: add     esp, 4
0x643EC6: mov     [esp+24h+var_10], eax
0x643ECA: cmp     eax, esi
0x643ECC: mov     [esp+24h+var_4], esi
0x643ED0: jz      short loc_643EDB
0x643ED2: mov     ecx, eax; this
0x643ED4: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x643ED9: mov     esi, eax
0x643EDB: push    1
0x643EDD: mov     ecx, esi
0x643EDF: mov     [esp+28h+var_4], 0FFFFFFFFh
0x643EE7: call    TESPackage_SetType?
0x643EEC: or      dword ptr [esi+1Ch], 6
0x643EF0: mov     ecx, [edi+8]
0x643EF3: mov     edx, [ecx+24h]
0x643EF6: push    edx
0x643EF7: mov     ecx, esi
0x643EF9: call    TESPackage_SetLocation
0x643EFE: mov     eax, [edi+8]
0x643F01: mov     ecx, [eax+28h]
0x643F04: push    ecx
0x643F05: mov     ecx, esi
0x643F07: call    TESPackage_SetTarget
0x643F0C: mov     ecx, [esi+28h]
0x643F0F: push    0
0x643F11: mov     dword ptr [esi+18h], 6
0x643F18: call    TESPackage_TargetData_SetType
0x643F1D: mov     ecx, [esi+28h]
0x643F20: push    ebx
0x643F21: call    TeSPackage_TargetData_SetTargetREFR
0x643F26: mov     edi, [esp+24h+arg_4]
0x643F2A: mov     ecx, [edi+28h]
0x643F2D: mov     ebx, [esi+28h]
0x643F30: call    sub_452A60
0x643F35: push    eax
0x643F36: mov     ecx, ebx
0x643F38: call    TESAIForm_SetServiceFlags
0x643F3D: mov     edx, [edi+1Ch]
0x643F40: shr     edx, 13h
0x643F43: test    dl, 1
0x643F46: jz      short loc_643F51
0x643F48: or      dword ptr [esi+1Ch], 80000h
0x643F4F: jmp     short loc_643F58
0x643F51: and     dword ptr [esi+1Ch], 0FFF7FFFFh
0x643F58: mov     eax, [edi+1Ch]
0x643F5B: shr     eax, 12h
0x643F5E: test    al, 1
0x643F60: jz      short loc_643F6B
0x643F62: or      dword ptr [esi+1Ch], 40000h
0x643F69: jmp     short loc_643F72
0x643F6B: and     dword ptr [esi+1Ch], 0FFFBFFFFh
0x643F72: mov     ecx, [edi+1Ch]
0x643F75: shr     ecx, 0Dh
0x643F78: test    cl, 1
0x643F7B: jz      short loc_643F86
0x643F7D: or      dword ptr [esi+1Ch], 2000h
0x643F84: jmp     short loc_643F8D
0x643F86: and     dword ptr [esi+1Ch], 0FFFFDFFFh
0x643F8D: mov     edx, [edi+1Ch]
0x643F90: shr     edx, 11h
0x643F93: test    dl, 1
0x643F96: jz      short loc_643FA1
0x643F98: or      dword ptr [esi+1Ch], 20000h
0x643F9F: jmp     short loc_643FA8
0x643FA1: and     dword ptr [esi+1Ch], 0FFFDFFFFh
0x643FA8: mov     eax, [edi+1Ch]
0x643FAB: shr     eax, 0Ch
0x643FAE: test    al, 1
0x643FB0: jz      short loc_643FBB
0x643FB2: or      dword ptr [esi+1Ch], 1000h
0x643FB9: jmp     short loc_643FC2
0x643FBB: and     dword ptr [esi+1Ch], 0FFFFEFFFh
0x643FC2: mov     ecx, [ebp+58h]
0x643FC5: mov     edx, [ecx]
0x643FC7: mov     eax, [edx+20h]
0x643FCA: call    eax
0x643FCC: mov     ecx, ebp
0x643FCE: call    sub_5E0380
0x643FD3: test    eax, eax
0x643FD5: jz      short loc_64401E
0x643FD7: mov     edi, [ebp+58h]
0x643FDA: mov     edx, [edi]
0x643FDC: mov     eax, [edx+390h]
0x643FE2: mov     ecx, edi
0x643FE4: call    eax
0x643FE6: mov     edx, [edi]
0x643FE8: mov     ecx, edi
0x643FEA: push    eax
0x643FEB: mov     eax, [edx+0C0h]
0x643FF1: call    eax
0x643FF3: mov     edx, [edi]
0x643FF5: mov     ecx, edi
0x643FF7: push    eax
0x643FF8: mov     eax, [edx+0CCh]
0x643FFE: call    eax
0x644000: mov     edx, [edi]
0x644002: push    eax
0x644003: mov     eax, [edx+180h]
0x644009: mov     ecx, edi
0x64400B: call    eax
0x64400D: push    eax
0x64400E: mov     ecx, ebp
0x644010: call    sub_5E0380
0x644015: push    eax
0x644016: lea     ecx, [ebp+44h]
0x644019: call    sub_4268B0
0x64401E: mov     ecx, [esp+24h+arg_0]
0x644022: push    ebp
0x644023: add     ecx, 44h ; 'D'
0x644026: call    sub_424C50
0x64402B: push    1; a4
0x64402D: push    0; a3
0x64402F: push    esi; a2
0x644030: mov     ecx, ebp; this
0x644032: call    Actor_AddPackage?
0x644037: mov     ecx, [esp+24h+var_C]
0x64403B: mov     large fs:0, ecx
0x644042: pop     ecx
0x644043: pop     edi
0x644044: pop     esi
0x644045: pop     ebp
0x644046: pop     ebx
0x644047: add     esp, 10h
0x64404A: retn    0Ch
