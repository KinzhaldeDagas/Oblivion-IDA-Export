0x5E0B70: push    0FFFFFFFFh
0x5E0B72: push    offset SEH_8C8970
0x5E0B77: mov     eax, large fs:0
0x5E0B7D: push    eax
0x5E0B7E: push    ecx
0x5E0B7F: push    esi
0x5E0B80: push    edi
0x5E0B81: mov     eax, ds:0B30AACh
0x5E0B86: xor     eax, esp
0x5E0B88: push    eax
0x5E0B89: lea     eax, [esp+1Ch+var_C]
0x5E0B8D: mov     large fs:0, eax
0x5E0B93: mov     esi, ecx
0x5E0B95: call    Magic_GetAbsorbShader
0x5E0B9A: push    4Ch ; 'L'; Size
0x5E0B9C: mov     edi, eax
0x5E0B9E: call    FormHeapAlloc
0x5E0BA3: add     esp, 4
0x5E0BA6: mov     [esp+1Ch+var_10], eax
0x5E0BAA: test    eax, eax
0x5E0BAC: mov     [esp+1Ch+var_4], 0
0x5E0BB4: jz      short loc_5E0BCC
0x5E0BB6: fldz
0x5E0BB8: push    ecx
0x5E0BB9: fstp    [esp+20h+var_20]; float
0x5E0BBC: add     esi, 0FFFFFF98h
0x5E0BBF: push    edi; int
0x5E0BC0: push    esi; int
0x5E0BC1: mov     ecx, eax
0x5E0BC3: call    MagicShaderHitEffect_constr_args2
0x5E0BC8: mov     esi, eax
0x5E0BCA: jmp     short loc_5E0BCE
0x5E0BCC: xor     esi, esi
0x5E0BCE: mov     eax, [esi]
0x5E0BD0: mov     edx, [eax+68h]
0x5E0BD3: mov     ecx, esi
0x5E0BD5: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5E0BDD: call    edx
0x5E0BDF: test    al, al
0x5E0BE1: jz      short loc_5E0C02
0x5E0BE3: push    esi
0x5E0BE4: mov     ecx, offset ActorProcessManager_ptr
0x5E0BE9: call    sub_678D30
0x5E0BEE: mov     ecx, [esp+1Ch+var_C]
0x5E0BF2: mov     large fs:0, ecx
0x5E0BF9: pop     ecx
0x5E0BFA: pop     edi
0x5E0BFB: pop     esi
0x5E0BFC: add     esp, 10h
0x5E0BFF: retn    8
0x5E0C02: mov     eax, [esi]
0x5E0C04: mov     edx, [eax]
0x5E0C06: push    1
0x5E0C08: mov     ecx, esi
0x5E0C0A: call    edx
0x5E0C0C: mov     ecx, [esp+1Ch+var_C]
0x5E0C10: mov     large fs:0, ecx
0x5E0C17: pop     ecx
0x5E0C18: pop     edi
0x5E0C19: pop     esi
0x5E0C1A: add     esp, 10h
0x5E0C1D: retn    8
