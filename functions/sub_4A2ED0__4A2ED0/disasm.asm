0x4A2ED0: push    0FFFFFFFFh
0x4A2ED2: push    offset SEH_8094D0
0x4A2ED7: mov     eax, large fs:0
0x4A2EDD: push    eax
0x4A2EDE: push    ebx
0x4A2EDF: push    ebp
0x4A2EE0: push    esi
0x4A2EE1: push    edi
0x4A2EE2: mov     eax, ds:0B30AACh
0x4A2EE7: xor     eax, esp
0x4A2EE9: push    eax
0x4A2EEA: lea     eax, [esp+20h+var_C]
0x4A2EEE: mov     large fs:0, eax
0x4A2EF4: mov     esi, ecx
0x4A2EF6: mov     eax, [esp+20h+a1]
0x4A2EFA: test    eax, eax
0x4A2EFC: jnz     short loc_4A2F2B
0x4A2EFE: push    2Ch ; ','; Size
0x4A2F00: call    FormHeapAlloc
0x4A2F05: add     esp, 4
0x4A2F08: mov     [esp+20h+a1], eax
0x4A2F0C: test    eax, eax
0x4A2F0E: mov     [esp+20h+var_4], 0
0x4A2F16: jz      short loc_4A2F21
0x4A2F18: mov     ecx, eax; this
0x4A2F1A: call    ??0TESRegion@@QAE@XZ; TESRegion::TESRegion(void)
0x4A2F1F: jmp     short loc_4A2F23
0x4A2F21: xor     eax, eax
0x4A2F23: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4A2F2B: mov     ebx, [esi+1Ch]
0x4A2F2E: mov     ebp, eax
0x4A2F30: push    ebp; a1
0x4A2F31: mov     ecx, esi
0x4A2F33: call    TESForm_CopyFrom
0x4A2F38: mov     eax, [ebp+18h]
0x4A2F3B: mov     ecx, [esi+18h]
0x4A2F3E: push    eax
0x4A2F3F: call    sub_4A44D0
0x4A2F44: test    ebx, ebx
0x4A2F46: jz      short loc_4A2F92
0x4A2F48: mov     ecx, [ebx]
0x4A2F4A: test    ecx, ecx
0x4A2F4C: jz      short loc_4A2F92
0x4A2F4E: mov     esi, [ebp+1Ch]
0x4A2F51: push    0
0x4A2F53: call    sub_4A77F0
0x4A2F58: mov     edi, eax
0x4A2F5A: test    edi, edi
0x4A2F5C: jz      short loc_4A2F8B
0x4A2F5E: cmp     dword ptr [esi], 0
0x4A2F61: jz      short loc_4A2F89
0x4A2F63: push    8; Size
0x4A2F65: call    FormHeapAlloc
0x4A2F6A: add     esp, 4
0x4A2F6D: test    eax, eax
0x4A2F6F: jz      short loc_4A2F7E
0x4A2F71: mov     ecx, [esi]
0x4A2F73: mov     [eax], ecx
0x4A2F75: mov     dword ptr [eax+4], 0
0x4A2F7C: jmp     short loc_4A2F80
0x4A2F7E: xor     eax, eax
0x4A2F80: mov     edx, [esi+4]
0x4A2F83: mov     [eax+4], edx
0x4A2F86: mov     [esi+4], eax
0x4A2F89: mov     [esi], edi
0x4A2F8B: mov     ebx, [ebx+4]
0x4A2F8E: test    ebx, ebx
0x4A2F90: jnz     short loc_4A2F48
0x4A2F92: mov     eax, ebp
0x4A2F94: mov     ecx, [esp+20h+var_C]
0x4A2F98: mov     large fs:0, ecx
0x4A2F9F: pop     ecx
0x4A2FA0: pop     edi
0x4A2FA1: pop     esi
0x4A2FA2: pop     ebp
0x4A2FA3: pop     ebx
0x4A2FA4: add     esp, 0Ch
0x4A2FA7: retn    4
