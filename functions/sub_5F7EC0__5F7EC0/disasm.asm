0x5F7EC0: push    0FFFFFFFFh
0x5F7EC2: push    offset SEH_8122A0
0x5F7EC7: mov     eax, large fs:0
0x5F7ECD: push    eax
0x5F7ECE: push    ecx
0x5F7ECF: push    ebp
0x5F7ED0: push    esi
0x5F7ED1: push    edi
0x5F7ED2: mov     eax, ds:0B30AACh
0x5F7ED7: xor     eax, esp
0x5F7ED9: push    eax
0x5F7EDA: lea     eax, [esp+20h+var_C]
0x5F7EDE: mov     large fs:0, eax
0x5F7EE4: mov     ebp, ecx
0x5F7EE6: mov     ecx, [ebp+58h]
0x5F7EE9: mov     eax, [ecx]
0x5F7EEB: mov     edx, [eax+184h]
0x5F7EF1: call    edx
0x5F7EF3: mov     esi, eax
0x5F7EF5: mov     eax, [ebp+0]
0x5F7EF8: mov     edx, [eax+380h]
0x5F7EFE: mov     ecx, ebp
0x5F7F00: call    edx
0x5F7F02: test    eax, eax
0x5F7F04: jnz     loc_5F7FE7
0x5F7F0A: mov     eax, [ebp+0B0h]
0x5F7F10: cmp     eax, 5
0x5F7F13: jz      loc_5F7FE7
0x5F7F19: cmp     eax, 3
0x5F7F1C: jz      loc_5F7FE7
0x5F7F22: xor     edi, edi
0x5F7F24: cmp     esi, edi
0x5F7F26: jz      short loc_5F7F32
0x5F7F28: cmp     byte ptr [esi+20h], 15h
0x5F7F2C: jz      loc_5F7FE7
0x5F7F32: push    3Ch ; '<'; Size
0x5F7F34: call    FormHeapAlloc
0x5F7F39: add     esp, 4
0x5F7F3C: mov     [esp+20h+var_10], eax
0x5F7F40: cmp     eax, edi
0x5F7F42: mov     [esp+20h+var_4], edi
0x5F7F46: jz      short loc_5F7F53
0x5F7F48: mov     ecx, eax; this
0x5F7F4A: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x5F7F4F: mov     esi, eax
0x5F7F51: jmp     short loc_5F7F55
0x5F7F53: xor     esi, esi
0x5F7F55: push    15h
0x5F7F57: mov     ecx, esi
0x5F7F59: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F7F61: call    TESPackage_SetType?
0x5F7F66: mov     eax, [esi+1Ch]
0x5F7F69: and     eax, 0FFFFFFFDh
0x5F7F6C: or      eax, 4
0x5F7F6F: push    0Ch; Size
0x5F7F71: mov     [esi+1Ch], eax
0x5F7F74: call    FormHeapAlloc
0x5F7F79: add     esp, 4
0x5F7F7C: mov     [esp+20h+var_10], eax
0x5F7F80: cmp     eax, edi
0x5F7F82: mov     [esp+20h+var_4], 1
0x5F7F8A: jz      short loc_5F7F95
0x5F7F8C: mov     ecx, eax
0x5F7F8E: call    TESPackage_LocationData_constr
0x5F7F93: mov     edi, eax
0x5F7F95: push    0
0x5F7F97: mov     ecx, edi
0x5F7F99: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F7FA1: call    TESPackage_LocationData_SetType
0x5F7FA6: push    ebp
0x5F7FA7: mov     ecx, edi
0x5F7FA9: call    TESPackage_LocationData_SetReference
0x5F7FAE: push    edi
0x5F7FAF: mov     ecx, esi
0x5F7FB1: call    TESPackage_SetLocation
0x5F7FB6: test    edi, edi
0x5F7FB8: jz      short loc_5F7FCA
0x5F7FBA: mov     ecx, edi
0x5F7FBC: call    TESPackage_LocationData_destr
0x5F7FC1: push    edi
0x5F7FC2: call    FormHeapFree
0x5F7FC7: add     esp, 4
0x5F7FCA: mov     dword ptr [esi+18h], 15h
0x5F7FD1: mov     ecx, [ebp+58h]
0x5F7FD4: mov     edx, [ecx]
0x5F7FD6: mov     eax, [edx+20h]
0x5F7FD9: call    eax
0x5F7FDB: push    1; a4
0x5F7FDD: push    1; a3
0x5F7FDF: push    esi; a2
0x5F7FE0: mov     ecx, ebp; this
0x5F7FE2: call    Actor_AddPackage?
0x5F7FE7: mov     ecx, [esp+20h+var_C]
0x5F7FEB: mov     large fs:0, ecx
0x5F7FF2: pop     ecx
0x5F7FF3: pop     edi
0x5F7FF4: pop     esi
0x5F7FF5: pop     ebp
0x5F7FF6: add     esp, 10h
0x5F7FF9: retn
