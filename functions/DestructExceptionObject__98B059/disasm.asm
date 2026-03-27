0x98B059: push    8
0x98B05B: push    offset stru_AFFCA8
0x98B060: call    __SEH_prolog4
0x98B065: mov     ecx, [ebp+arg_0]
0x98B068: test    ecx, ecx
0x98B06A: jz      short loc_98B096
0x98B06C: cmp     dword ptr [ecx], 0E06D7363h
0x98B072: jnz     short loc_98B096
0x98B074: mov     eax, [ecx+1Ch]
0x98B077: test    eax, eax
0x98B079: jz      short loc_98B096
0x98B07B: mov     eax, [eax+4]
0x98B07E: test    eax, eax
0x98B080: jz      short loc_98B096
0x98B082: and     [ebp+ms_exc.registration.TryLevel], 0
0x98B086: push    eax
0x98B087: push    dword ptr [ecx+18h]
0x98B08A: call    sub_980E4B; ?_CallMemberFunction0@@YGXPAX0@Z
0x98B08F: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98B096: call    __SEH_epilog4
0x98B09B: retn
0x98B09C: xor     eax, eax
0x98B09E: cmp     [ebp+arg_4], al
0x98B0A1: setnz   al
0x98B0A4: retn
0x98B0A5: mov     esp, [ebp+ms_exc.old_esp]
0x98B0A8: jmp     ?terminate@@YAXXZ
