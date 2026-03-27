0x69DAAC: mov     ecx, [edi+14h]
0x69DAAF: shr     ecx, 1
0x69DAB1: test    cl, 1
0x69DAB4: jnz     loc_69DB79
0x69DABA: push    4Ch ; 'L'; Size
0x69DABC: call    FormHeapAlloc
0x69DAC1: mov     esi, eax
0x69DAC3: add     esp, 4
0x69DAC6: mov     [esp+arg_1C], esi
0x69DACA: test    esi, esi
0x69DACC: mov     [esp+arg_14], 1
0x69DAD4: jz      short loc_69DAED
0x69DAD6: mov     ecx, [edi+20h]
0x69DAD9: mov     edx, [ecx]
0x69DADB: mov     eax, [edx+4]
0x69DADE: push    edi
0x69DADF: call    eax
0x69DAE1: push    eax
0x69DAE2: mov     ecx, esi
0x69DAE4: call    MagicShaderHitEffect_constr_args
0x69DAE9: mov     esi, eax
0x69DAEB: jmp     short loc_69DAEF
0x69DAED: xor     esi, esi
0x69DAEF: mov     edx, [esi]
0x69DAF1: mov     eax, [edx+68h]
0x69DAF4: mov     ecx, esi
0x69DAF6: mov     [esp+arg_14], 0FFFFFFFFh
0x69DAFE: call    eax
0x69DB00: test    al, al
0x69DB02: jz      short loc_69DB6F
0x69DB04: push    esi
0x69DB05: mov     ecx, offset ActorProcessManager_ptr
0x69DB0A: call    sub_678D30
0x69DB0F: test    ebp, ebp
0x69DB11: jz      short loc_69DB30
0x69DB13: push    esi
0x69DB14: mov     ecx, ebp
0x69DB16: call    BSSimpleList_PushFront
0x69DB1B: mov     eax, ebp
0x69DB1D: mov     ecx, [esp+arg_C]
0x69DB21: mov     large fs:0, ecx
0x69DB28: pop     ecx
0x69DB29: pop     edi
0x69DB2A: pop     esi
0x69DB2B: pop     ebp
0x69DB2C: add     esp, 0Ch
0x69DB2F: retn
0x69DB30: push    8; Size
0x69DB32: call    FormHeapAlloc
0x69DB37: add     esp, 4
0x69DB3A: test    eax, eax
0x69DB3C: jz      short loc_69DB5A
0x69DB3E: mov     [eax], esi
0x69DB40: mov     dword ptr [eax+4], 0
0x69DB47: mov     ecx, [esp+arg_C]
0x69DB4B: mov     large fs:0, ecx
0x69DB52: pop     ecx
0x69DB53: pop     edi
0x69DB54: pop     esi
0x69DB55: pop     ebp
0x69DB56: add     esp, 0Ch
0x69DB59: retn
0x69DB5A: xor     eax, eax
0x69DB5C: mov     ecx, [esp+arg_C]
0x69DB60: mov     large fs:0, ecx
0x69DB67: pop     ecx
0x69DB68: pop     edi
0x69DB69: pop     esi
0x69DB6A: pop     ebp
0x69DB6B: add     esp, 0Ch
0x69DB6E: retn
0x69DB6F: mov     edx, [esi]
0x69DB71: mov     eax, [edx]
0x69DB73: push    1
0x69DB75: mov     ecx, esi
0x69DB77: call    eax
0x69DB79: mov     eax, ebp
0x69DB7B: mov     ecx, [esp+4+arg_8]
0x69DB7F: mov     large fs:0, ecx
0x69DB86: pop     ecx
0x69DB87: pop     edi
0x69DB88: pop     esi
0x69DB89: pop     ebp
0x69DB8A: add     esp, 0Ch
0x69DB8D: retn
