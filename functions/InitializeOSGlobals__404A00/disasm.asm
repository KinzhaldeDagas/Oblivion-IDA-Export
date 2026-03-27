0x404A00: push    0FFFFFFFFh
0x404A02: push    offset Archive_GetFileByIndices_SEH
0x404A07: mov     eax, large fs:0
0x404A0D: push    eax
0x404A0E: push    ebx
0x404A0F: push    ebp
0x404A10: push    esi
0x404A11: push    edi
0x404A12: mov     eax, ___security_cookie
0x404A17: xor     eax, esp
0x404A19: push    eax
0x404A1A: lea     eax, [esp+20h+var_C]
0x404A1E: mov     large fs:0, eax
0x404A24: mov     esi, ecx
0x404A26: mov     eax, [esp+20h+arg_0]
0x404A2A: mov     ebp, [esp+20h+arg_4]
0x404A2E: xor     ebx, ebx
0x404A30: mov     [esi], bl
0x404A32: mov     [esi+1], bl
0x404A35: mov     [esi+2], bl
0x404A38: mov     [esi+3], bl
0x404A3B: mov     [esi+4], bl
0x404A3E: mov     [esi+18h], ebx
0x404A41: mov     [esi+8], eax
0x404A44: mov     [esi+0Ch], ebp
0x404A47: call    ds:GetCurrentThreadId
0x404A4D: lea     edi, [esi+14h]
0x404A50: mov     [esi+10h], eax
0x404A53: mov     [edi], ebx
0x404A55: call    ds:GetCurrentThread
0x404A5B: push    ebx; dwOptions
0x404A5C: push    ebx; bInheritHandle
0x404A5D: push    ebx; dwDesiredAccess
0x404A5E: push    edi; lpTargetHandle
0x404A5F: push    ebx; hTargetProcessHandle
0x404A60: push    eax; hSourceHandle
0x404A61: push    ebx; hSourceProcessHandle
0x404A62: call    ds:DuplicateHandle
0x404A68: mov     ecx, [esi+10h]
0x404A6B: push    offset aMain_0; "Main"
0x404A70: push    ecx
0x404A71: call    sub_747830
0x404A76: push    1BD8h; Size
0x404A7B: call    FormHeapAlloc
0x404A80: add     esp, 0Ch
0x404A83: mov     [esp+20h+arg_0], eax
0x404A87: cmp     eax, ebx
0x404A89: mov     [esp+20h+var_4], ebx
0x404A8D: jz      short loc_404A99
0x404A8F: push    ebp
0x404A90: mov     ecx, eax
0x404A92: call    InputGlobals__InitializeInputSystem
0x404A97: jmp     short loc_404A9B
0x404A99: xor     eax, eax
0x404A9B: mov     ecx, eax; this
0x404A9D: mov     [esp+20h+var_4], 0FFFFFFFFh
0x404AA5: mov     [esi+20h], eax
0x404AA8: call    InputGlobals__LoadControlSettingsFromINI
0x404AAD: push    328h; Size
0x404AB2: call    FormHeapAlloc
0x404AB7: add     esp, 4
0x404ABA: mov     [esp+20h+arg_0], eax
0x404ABE: cmp     eax, ebx
0x404AC0: mov     [esp+20h+var_4], 1
0x404AC8: jz      short loc_404ADA
0x404ACA: mov     edx, [esi+8]
0x404ACD: push    edx
0x404ACE: mov     ecx, eax
0x404AD0: call    sub_6ABC80
0x404AD5: mov     [esi+24h], eax
0x404AD8: jmp     short loc_404ADD
0x404ADA: mov     [esi+24h], ebx
0x404ADD: mov     eax, esi
0x404ADF: mov     ecx, [esp+20h+var_C]
0x404AE3: mov     large fs:0, ecx
0x404AEA: pop     ecx
0x404AEB: pop     edi
0x404AEC: pop     esi
0x404AED: pop     ebp
0x404AEE: pop     ebx
0x404AEF: add     esp, 0Ch
0x404AF2: retn    8
