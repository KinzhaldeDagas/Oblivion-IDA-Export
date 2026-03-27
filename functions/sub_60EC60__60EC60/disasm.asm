0x60EC60: push    0FFFFFFFFh
0x60EC62: push    offset SEH_60EC60
0x60EC67: mov     eax, large fs:0
0x60EC6D: push    eax
0x60EC6E: sub     esp, 8
0x60EC71: push    ebx
0x60EC72: push    ebp
0x60EC73: push    esi
0x60EC74: push    edi
0x60EC75: mov     eax, ds:0B30AACh
0x60EC7A: xor     eax, esp
0x60EC7C: push    eax
0x60EC7D: lea     eax, [esp+28h+var_C]
0x60EC81: mov     large fs:0, eax
0x60EC87: mov     esi, ecx
0x60EC89: mov     eax, [esi]
0x60EC8B: mov     edx, [eax+334h]
0x60EC91: push    1
0x60EC93: call    edx
0x60EC95: test    al, al
0x60EC97: jnz     loc_60EEC4
0x60EC9D: mov     ecx, esi
0x60EC9F: call    sub_5E0380
0x60ECA4: test    eax, eax
0x60ECA6: jz      short loc_60ECBD
0x60ECA8: mov     ecx, esi
0x60ECAA: call    sub_5E0380
0x60ECAF: mov     eax, [eax+1Ch]
0x60ECB2: shr     eax, 0Ch
0x60ECB5: test    al, 1
0x60ECB7: jnz     loc_60EEC4
0x60ECBD: mov     ecx, [esi+58h]
0x60ECC0: mov     edx, [ecx]
0x60ECC2: mov     eax, [edx+178h]
0x60ECC8: xor     ebx, ebx
0x60ECCA: push    ebx
0x60ECCB: call    eax
0x60ECCD: mov     ecx, [esi+58h]
0x60ECD0: mov     edx, [ecx]
0x60ECD2: mov     eax, [edx+49Ch]
0x60ECD8: call    eax
0x60ECDA: mov     eax, [esi+58h]
0x60ECDD: mov     ecx, [eax+8]
0x60ECE0: mov     [esp+28h+var_14], ecx
0x60ECE4: mov     ecx, esi
0x60ECE6: call    sub_5E0380
0x60ECEB: test    eax, eax
0x60ECED: jz      short loc_60ED0D
0x60ECEF: mov     ecx, esi
0x60ECF1: call    sub_5E0380
0x60ECF6: mov     ecx, eax
0x60ECF8: call    sub_567770
0x60ECFD: test    al, al
0x60ECFF: jz      short loc_60ED0D
0x60ED01: mov     edx, [esi]
0x60ED03: mov     eax, [edx+30Ch]
0x60ED09: mov     ecx, esi
0x60ED0B: call    eax
0x60ED0D: push    3Ch ; '<'; Size
0x60ED0F: call    FormHeapAlloc
0x60ED14: add     esp, 4
0x60ED17: mov     [esp+28h+var_10], eax
0x60ED1B: cmp     eax, ebx
0x60ED1D: mov     [esp+28h+var_4], ebx
0x60ED21: jz      short loc_60ED2E
0x60ED23: mov     ecx, eax; this
0x60ED25: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x60ED2A: mov     edi, eax
0x60ED2C: jmp     short loc_60ED30
0x60ED2E: xor     edi, edi
0x60ED30: or      ebp, 0FFFFFFFFh
0x60ED33: push    1Bh
0x60ED35: mov     ecx, edi
0x60ED37: mov     [esp+2Ch+var_4], ebp
0x60ED3B: call    TESPackage_SetType?
0x60ED40: or      dword ptr [edi+1Ch], 6
0x60ED44: push    0Ch; Size
0x60ED46: call    FormHeapAlloc
0x60ED4B: add     esp, 4
0x60ED4E: mov     [esp+28h+var_10], eax
0x60ED52: cmp     eax, ebx
0x60ED54: mov     [esp+28h+var_4], 1
0x60ED5C: jz      short loc_60ED67
0x60ED5E: mov     ecx, eax
0x60ED60: call    TESPackage_LocationData_constr
0x60ED65: mov     ebx, eax
0x60ED67: push    0
0x60ED69: mov     ecx, ebx
0x60ED6B: mov     [esp+2Ch+var_4], ebp
0x60ED6F: call    TESPackage_LocationData_SetType
0x60ED74: push    esi
0x60ED75: mov     ecx, ebx
0x60ED77: call    TESPackage_LocationData_SetReference
0x60ED7C: push    ebx
0x60ED7D: mov     ecx, edi
0x60ED7F: call    TESPackage_SetLocation
0x60ED84: test    ebx, ebx
0x60ED86: jz      short loc_60ED98
0x60ED88: mov     ecx, ebx
0x60ED8A: call    TESPackage_LocationData_destr
0x60ED8F: push    ebx
0x60ED90: call    FormHeapFree
0x60ED95: add     esp, 4
0x60ED98: push    0Ch; Size
0x60ED9A: call    FormHeapAlloc
0x60ED9F: add     esp, 4
0x60EDA2: mov     [esp+28h+var_10], eax
0x60EDA6: test    eax, eax
0x60EDA8: mov     [esp+28h+var_4], 2
0x60EDB0: jz      short loc_60EDBD
0x60EDB2: mov     ecx, eax
0x60EDB4: call    TESPackage_TargetData_constr
0x60EDB9: mov     ebx, eax
0x60EDBB: jmp     short loc_60EDBF
0x60EDBD: xor     ebx, ebx
0x60EDBF: push    ebx
0x60EDC0: mov     ecx, edi
0x60EDC2: mov     [esp+2Ch+var_4], ebp
0x60EDC6: call    TESPackage_SetTarget
0x60EDCB: test    ebx, ebx
0x60EDCD: jz      short loc_60EDDF
0x60EDCF: mov     ecx, ebx; void *
0x60EDD1: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x60EDD6: push    ebx
0x60EDD7: call    FormHeapFree
0x60EDDC: add     esp, 4
0x60EDDF: mov     ecx, [edi+28h]
0x60EDE2: push    0
0x60EDE4: mov     dword ptr [edi+18h], 1Fh
0x60EDEB: call    TESPackage_TargetData_SetType
0x60EDF0: mov     ecx, [esp+28h+arg_0]
0x60EDF4: push    ecx
0x60EDF5: mov     ecx, [edi+28h]
0x60EDF8: call    TeSPackage_TargetData_SetTargetREFR
0x60EDFD: mov     ecx, [edi+28h]
0x60EE00: push    0
0x60EE02: call    TESAIForm_SetServiceFlags
0x60EE07: mov     eax, [esp+28h+var_14]
0x60EE0B: test    eax, eax
0x60EE0D: jz      short loc_60EE44
0x60EE0F: mov     edx, [eax+1Ch]
0x60EE12: shr     edx, 14h
0x60EE15: test    dl, 1
0x60EE18: jz      short loc_60EE23
0x60EE1A: or      dword ptr [edi+1Ch], 100000h
0x60EE21: jmp     short loc_60EE2A
0x60EE23: and     dword ptr [edi+1Ch], 0FFEFFFFFh
0x60EE2A: mov     eax, [eax+1Ch]
0x60EE2D: shr     eax, 15h
0x60EE30: test    al, 1
0x60EE32: jz      short loc_60EE3D
0x60EE34: or      dword ptr [edi+1Ch], 200000h
0x60EE3B: jmp     short loc_60EE44
0x60EE3D: and     dword ptr [edi+1Ch], 0FFDFFFFFh
0x60EE44: mov     ecx, [esi+58h]
0x60EE47: mov     edx, [ecx]
0x60EE49: mov     eax, [edx+20h]
0x60EE4C: call    eax
0x60EE4E: mov     ecx, [esi+58h]
0x60EE51: cmp     dword ptr [ecx+8], 0
0x60EE55: jz      short loc_60EE93
0x60EE57: mov     eax, [ecx]
0x60EE59: mov     edx, [eax+390h]
0x60EE5F: mov     ebx, ecx
0x60EE61: mov     ebp, ecx
0x60EE63: call    edx
0x60EE65: mov     ecx, ebx
0x60EE67: push    eax
0x60EE68: mov     eax, [ebx]
0x60EE6A: mov     edx, [eax+0C0h]
0x60EE70: call    edx
0x60EE72: mov     ecx, ebp
0x60EE74: push    eax
0x60EE75: mov     eax, [ebp+0]
0x60EE78: mov     edx, [eax+0CCh]
0x60EE7E: call    edx
0x60EE80: push    eax
0x60EE81: mov     eax, ebx
0x60EE83: mov     ecx, [eax+4]
0x60EE86: mov     edx, [eax+8]
0x60EE89: push    ecx
0x60EE8A: push    edx
0x60EE8B: lea     ecx, [esi+44h]
0x60EE8E: call    sub_4268B0
0x60EE93: mov     edx, [esp+28h+arg_8]
0x60EE97: mov     ecx, [esi+58h]
0x60EE9A: mov     eax, [ecx]
0x60EE9C: mov     eax, [eax+3E8h]
0x60EEA2: push    edx
0x60EEA3: mov     edx, [esp+2Ch+arg_C]
0x60EEA7: push    edx
0x60EEA8: mov     edx, [esp+30h+arg_4]
0x60EEAC: push    edx
0x60EEAD: call    eax
0x60EEAF: push    1; a4
0x60EEB1: push    0; a3
0x60EEB3: push    edi; a2
0x60EEB4: mov     ecx, esi; this
0x60EEB6: call    Actor_AddPackage?
0x60EEBB: mov     ecx, [esp+28h+arg_0]; this
0x60EEBF: call    sub_5F8000
0x60EEC4: mov     ecx, [esp+28h+var_C]
0x60EEC8: mov     large fs:0, ecx
0x60EECF: pop     ecx
0x60EED0: pop     edi
0x60EED1: pop     esi
0x60EED2: pop     ebp
0x60EED3: pop     ebx
0x60EED4: add     esp, 14h
0x60EED7: retn    10h
