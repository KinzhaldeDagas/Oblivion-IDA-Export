0x5F7CF0: push    0FFFFFFFFh
0x5F7CF2: push    offset SEH_5F7CF0
0x5F7CF7: mov     eax, large fs:0
0x5F7CFD: push    eax
0x5F7CFE: push    ebx
0x5F7CFF: push    ebp
0x5F7D00: push    esi
0x5F7D01: push    edi
0x5F7D02: mov     eax, ds:0B30AACh
0x5F7D07: xor     eax, esp
0x5F7D09: push    eax
0x5F7D0A: lea     eax, [esp+20h+var_C]
0x5F7D0E: mov     large fs:0, eax
0x5F7D14: mov     ebp, ecx
0x5F7D16: mov     eax, [ebp+0]
0x5F7D19: mov     edx, [eax+334h]
0x5F7D1F: push    1
0x5F7D21: call    edx
0x5F7D23: test    al, al
0x5F7D25: jnz     loc_5F7EA5
0x5F7D2B: cmp     byte ptr [esp+20h+arg_4], al
0x5F7D2F: jnz     short loc_5F7D4F
0x5F7D31: mov     eax, [esp+20h+arg_0]
0x5F7D35: test    eax, eax
0x5F7D37: jz      short loc_5F7D44
0x5F7D39: mov     [ebp+0CCh], eax
0x5F7D3F: jmp     loc_5F7EA5
0x5F7D44: mov     [ebp+0CCh], ebp
0x5F7D4A: jmp     loc_5F7EA5
0x5F7D4F: xor     edi, edi
0x5F7D51: push    3Ch ; '<'; Size
0x5F7D53: mov     [ebp+0CCh], edi
0x5F7D59: call    FormHeapAlloc
0x5F7D5E: add     esp, 4
0x5F7D61: mov     [esp+20h+arg_4], eax
0x5F7D65: cmp     eax, edi
0x5F7D67: mov     [esp+20h+var_4], edi
0x5F7D6B: jz      short loc_5F7D78
0x5F7D6D: mov     ecx, eax; this
0x5F7D6F: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x5F7D74: mov     esi, eax
0x5F7D76: jmp     short loc_5F7D7A
0x5F7D78: xor     esi, esi
0x5F7D7A: or      ebx, 0FFFFFFFFh
0x5F7D7D: push    20h ; ' '
0x5F7D7F: mov     ecx, esi
0x5F7D81: mov     [esp+24h+var_4], ebx
0x5F7D85: call    TESPackage_SetType?
0x5F7D8A: mov     eax, [esi+1Ch]
0x5F7D8D: and     eax, 0FFFFFFFDh
0x5F7D90: or      eax, 4
0x5F7D93: push    0Ch; Size
0x5F7D95: mov     [esi+1Ch], eax
0x5F7D98: call    FormHeapAlloc
0x5F7D9D: add     esp, 4
0x5F7DA0: mov     [esp+20h+arg_4], eax
0x5F7DA4: cmp     eax, edi
0x5F7DA6: mov     [esp+20h+var_4], 1
0x5F7DAE: jz      short loc_5F7DB9
0x5F7DB0: mov     ecx, eax
0x5F7DB2: call    TESPackage_LocationData_constr
0x5F7DB7: mov     edi, eax
0x5F7DB9: push    0
0x5F7DBB: mov     ecx, edi
0x5F7DBD: mov     [esp+24h+var_4], ebx
0x5F7DC1: call    TESPackage_LocationData_SetType
0x5F7DC6: push    ebp
0x5F7DC7: mov     ecx, edi
0x5F7DC9: call    TESPackage_LocationData_SetReference
0x5F7DCE: push    edi
0x5F7DCF: mov     ecx, esi
0x5F7DD1: call    TESPackage_SetLocation
0x5F7DD6: test    edi, edi
0x5F7DD8: jz      short loc_5F7DEA
0x5F7DDA: mov     ecx, edi
0x5F7DDC: call    TESPackage_LocationData_destr
0x5F7DE1: push    edi
0x5F7DE2: call    FormHeapFree
0x5F7DE7: add     esp, 4
0x5F7DEA: mov     ebx, [esp+20h+arg_0]
0x5F7DEE: test    ebx, ebx
0x5F7DF0: jz      short loc_5F7E50
0x5F7DF2: push    0Ch; Size
0x5F7DF4: call    FormHeapAlloc
0x5F7DF9: add     esp, 4
0x5F7DFC: mov     [esp+20h+arg_4], eax
0x5F7E00: test    eax, eax
0x5F7E02: mov     [esp+20h+var_4], 2
0x5F7E0A: jz      short loc_5F7E17
0x5F7E0C: mov     ecx, eax
0x5F7E0E: call    TESPackage_TargetData_constr
0x5F7E13: mov     edi, eax
0x5F7E15: jmp     short loc_5F7E19
0x5F7E17: xor     edi, edi
0x5F7E19: push    edi
0x5F7E1A: mov     ecx, esi
0x5F7E1C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F7E24: call    TESPackage_SetTarget
0x5F7E29: mov     ecx, [esi+28h]
0x5F7E2C: push    0
0x5F7E2E: call    TESPackage_TargetData_SetType
0x5F7E33: mov     ecx, [esi+28h]
0x5F7E36: push    ebx
0x5F7E37: call    TeSPackage_TargetData_SetTargetREFR
0x5F7E3C: test    edi, edi
0x5F7E3E: jz      short loc_5F7E50
0x5F7E40: mov     ecx, edi; void *
0x5F7E42: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x5F7E47: push    edi
0x5F7E48: call    FormHeapFree
0x5F7E4D: add     esp, 4
0x5F7E50: mov     ecx, esi
0x5F7E52: call    sub_5672A0
0x5F7E57: mov     eax, [ebp+58h]
0x5F7E5A: cmp     dword ptr [eax+8], 0
0x5F7E5E: jz      short loc_5F7E99
0x5F7E60: mov     ecx, eax
0x5F7E62: mov     edi, ecx
0x5F7E64: mov     edx, [edi]
0x5F7E66: mov     eax, [edx+390h]
0x5F7E6C: call    eax
0x5F7E6E: mov     edx, [edi]
0x5F7E70: mov     ecx, edi
0x5F7E72: push    eax
0x5F7E73: mov     eax, [edx+0C0h]
0x5F7E79: call    eax
0x5F7E7B: mov     edx, [edi]
0x5F7E7D: mov     ecx, edi
0x5F7E7F: push    eax
0x5F7E80: mov     eax, [edx+0CCh]
0x5F7E86: call    eax
0x5F7E88: mov     ecx, [edi+4]
0x5F7E8B: mov     edx, [edi+8]
0x5F7E8E: push    eax
0x5F7E8F: push    ecx
0x5F7E90: push    edx
0x5F7E91: lea     ecx, [ebp+44h]
0x5F7E94: call    sub_4268B0
0x5F7E99: push    1; a4
0x5F7E9B: push    0; a3
0x5F7E9D: push    esi; a2
0x5F7E9E: mov     ecx, ebp; this
0x5F7EA0: call    Actor_AddPackage?
0x5F7EA5: mov     ecx, dword ptr [esp+20h+var_C]
0x5F7EA9: mov     large fs:0, ecx
0x5F7EB0: pop     ecx
0x5F7EB1: pop     edi
0x5F7EB2: pop     esi
0x5F7EB3: pop     ebp
0x5F7EB4: pop     ebx
0x5F7EB5: add     esp, 0Ch
0x5F7EB8: retn    8
