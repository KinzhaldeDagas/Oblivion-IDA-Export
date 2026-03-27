0x568730: push    0FFFFFFFFh
0x568732: push    offset SEH_568730
0x568737: mov     eax, large fs:0
0x56873D: push    eax
0x56873E: sub     esp, 8
0x568741: push    ebx
0x568742: push    esi
0x568743: mov     eax, ds:0B30AACh
0x568748: xor     eax, esp
0x56874A: push    eax
0x56874B: lea     eax, [esp+20h+var_C]
0x56874F: mov     large fs:0, eax
0x568755: mov     esi, ecx
0x568757: xor     ebx, ebx
0x568759: lea     ecx, [esp+20h+var_14]
0x56875D: mov     [esi+1Ch], ebx
0x568760: mov     [esi+20h], bl
0x568763: mov     [esi+24h], ebx
0x568766: mov     [esi+28h], ebx
0x568769: call    sub_569D60
0x56876E: lea     eax, [esp+20h+var_14]
0x568772: push    eax
0x568773: lea     ecx, [esi+2Ch]
0x568776: mov     [esp+24h+var_4], ebx
0x56877A: call    sub_569DD0
0x56877F: lea     ecx, [esp+20h+var_14]; void *
0x568783: mov     [esp+20h+var_4], 0FFFFFFFFh
0x56878B: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x568790: mov     eax, [esi+0Ch]
0x568793: mov     dword ptr [esi+18h], 0FFFFFFFFh
0x56879A: mov     ecx, ds:0B33A98h
0x5687A0: push    eax; _DWORD
0x5687A1: call    TESDataHandler_IsFormIDCreated?
0x5687A6: test    al, al
0x5687A8: jz      short loc_5687B1
0x5687AA: and     dword ptr [esi+1Ch], 0FFFFF7FFh
0x5687B1: mov     ecx, [esp+20h+var_C]
0x5687B5: mov     large fs:0, ecx
0x5687BC: pop     ecx
0x5687BD: pop     esi
0x5687BE: pop     ebx
0x5687BF: add     esp, 14h
0x5687C2: retn
