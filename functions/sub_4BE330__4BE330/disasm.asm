0x4BE330: push    0FFFFFFFFh
0x4BE332: push    offset SEH_43C8C0
0x4BE337: mov     eax, large fs:0
0x4BE33D: push    eax
0x4BE33E: push    ecx
0x4BE33F: push    ebx
0x4BE340: push    ebp
0x4BE341: push    esi
0x4BE342: push    edi
0x4BE343: mov     eax, ds:0B30AACh
0x4BE348: xor     eax, esp
0x4BE34A: push    eax
0x4BE34B: lea     eax, [esp+24h+var_C]
0x4BE34F: mov     large fs:0, eax
0x4BE355: mov     esi, ecx
0x4BE357: mov     edx, ds:0B06A2Ch
0x4BE35D: xor     ebx, ebx
0x4BE35F: xor     ebp, ebp
0x4BE361: cmp     ebp, edx
0x4BE363: jnb     loc_4BE403
0x4BE369: xor     edi, edi
0x4BE36B: jmp     short loc_4BE370
0x4BE370: cmp     edi, edx
0x4BE372: jnb     loc_4BE3FB
0x4BE378: sar     edx, 1
0x4BE37A: mov     ecx, edi
0x4BE37C: sub     ecx, edx
0x4BE37E: add     ecx, [esp+24h+arg_4]
0x4BE382: mov     eax, ebp
0x4BE384: sub     eax, edx
0x4BE386: add     eax, [esp+24h+arg_0]
0x4BE38A: push    ecx; group_y
0x4BE38B: push    eax; group_x
0x4BE38C: call    TESObjectCELL_PackExteriorGroupLabel; Verified exact key encoding used by the DistantLOD cell model map: packed label = (signed cellX << 16) | unsigned cellY.
0x4BE391: add     esp, 8
0x4BE394: mov     [esp+24h+task], ebx
0x4BE398: mov     edx, [esi]
0x4BE39A: mov     edx, [edx+4]
0x4BE39D: lea     ecx, [esp+24h+task]
0x4BE3A1: push    ecx
0x4BE3A2: push    eax
0x4BE3A3: mov     ecx, esi
0x4BE3A5: mov     [esp+2Ch+var_4], ebx
0x4BE3A9: call    edx
0x4BE3AB: test    al, al
0x4BE3AD: jz      short loc_4BE3BF
0x4BE3AF: mov     eax, [esp+24h+task]
0x4BE3B3: mov     ecx, ds:0B33A10h
0x4BE3B9: push    eax; task
0x4BE3BA: call    IOTask_Cancel; Verified generic IOTask cancellation state machine: previous states 0/1/2 atomically transition to 6 and invoke vtable +0x0C with status 0; state 5 transitions to 6 and invokes it with status 1; states 3/4 wait for the worker's state change. Verified local role: state 6 is the cancellation/terminal marker written by IOTask_Cancel. Its canonical enum label remains Unknown.
0x4BE3BF: mov     ebx, [esp+24h+task]
0x4BE3C3: test    ebx, ebx
0x4BE3C5: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4BE3CD: jz      short loc_4BE3EB
0x4BE3CF: lea     ecx, [ebx+8]
0x4BE3D2: push    ecx; lpAddend
0x4BE3D3: call    dword ptr ds:0A2807Ch
0x4BE3D9: test    eax, eax
0x4BE3DB: jnz     short loc_4BE3EB
0x4BE3DD: test    ebx, ebx
0x4BE3DF: jz      short loc_4BE3EB
0x4BE3E1: mov     edx, [ebx]
0x4BE3E3: mov     eax, [edx]
0x4BE3E5: push    1
0x4BE3E7: mov     ecx, ebx
0x4BE3E9: call    eax
0x4BE3EB: mov     edx, ds:0B06A2Ch
0x4BE3F1: add     edi, 1
0x4BE3F4: xor     ebx, ebx
0x4BE3F6: jmp     loc_4BE370
0x4BE3FB: add     ebp, 1
0x4BE3FE: jmp     loc_4BE361
0x4BE403: mov     ecx, [esp+24h+var_C]
0x4BE407: mov     large fs:0, ecx
0x4BE40E: pop     ecx
0x4BE40F: pop     edi
0x4BE410: pop     esi
0x4BE411: pop     ebp
0x4BE412: pop     ebx
0x4BE413: add     esp, 10h
0x4BE416: retn    8
0x9ACC50: lea     ecx, [ebp-10h]; void *
0x9ACC53: jmp     sub_4BDDC0
0x9ACC58: mov     edx, [esp+arg_4]
0x9ACC5C: lea     eax, [edx-14h]
0x9ACC5F: mov     ecx, [edx-18h]
0x9ACC62: xor     ecx, eax
0x9ACC64: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ACC69: mov     eax, offset stru_AD9878
0x9ACC6E: jmp     ___CxxFrameHandler3
