0x5E0C20: push    0FFFFFFFFh
0x5E0C22: push    offset SEH_8C8970
0x5E0C27: mov     eax, large fs:0
0x5E0C2D: push    eax
0x5E0C2E: push    ecx
0x5E0C2F: push    esi
0x5E0C30: push    edi
0x5E0C31: mov     eax, ds:0B30AACh
0x5E0C36: xor     eax, esp
0x5E0C38: push    eax
0x5E0C39: lea     eax, [esp+1Ch+var_C]
0x5E0C3D: mov     large fs:0, eax
0x5E0C43: mov     esi, ecx
0x5E0C45: call    Magic_GetReflectShader
0x5E0C4A: push    4Ch ; 'L'; Size
0x5E0C4C: mov     edi, eax
0x5E0C4E: call    FormHeapAlloc
0x5E0C53: add     esp, 4
0x5E0C56: mov     [esp+1Ch+var_10], eax
0x5E0C5A: test    eax, eax
0x5E0C5C: mov     [esp+1Ch+var_4], 0
0x5E0C64: jz      short loc_5E0C7C
0x5E0C66: fldz
0x5E0C68: push    ecx
0x5E0C69: fstp    [esp+20h+var_20]; float
0x5E0C6C: add     esi, 0FFFFFF98h
0x5E0C6F: push    edi; int
0x5E0C70: push    esi; int
0x5E0C71: mov     ecx, eax
0x5E0C73: call    MagicShaderHitEffect_constr_args2
0x5E0C78: mov     esi, eax
0x5E0C7A: jmp     short loc_5E0C7E
0x5E0C7C: xor     esi, esi
0x5E0C7E: mov     eax, [esi]
0x5E0C80: mov     edx, [eax+68h]
0x5E0C83: mov     ecx, esi
0x5E0C85: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5E0C8D: call    edx
0x5E0C8F: test    al, al
0x5E0C91: jz      short loc_5E0CB2
0x5E0C93: push    esi
0x5E0C94: mov     ecx, offset ActorProcessManager_ptr
0x5E0C99: call    sub_678D30
0x5E0C9E: mov     ecx, [esp+1Ch+var_C]
0x5E0CA2: mov     large fs:0, ecx
0x5E0CA9: pop     ecx
0x5E0CAA: pop     edi
0x5E0CAB: pop     esi
0x5E0CAC: add     esp, 10h
0x5E0CAF: retn    8
0x5E0CB2: mov     eax, [esi]
0x5E0CB4: mov     edx, [eax]
0x5E0CB6: push    1
0x5E0CB8: mov     ecx, esi
0x5E0CBA: call    edx
0x5E0CBC: mov     ecx, [esp+1Ch+var_C]
0x5E0CC0: mov     large fs:0, ecx
0x5E0CC7: pop     ecx
0x5E0CC8: pop     edi
0x5E0CC9: pop     esi
0x5E0CCA: add     esp, 10h
0x5E0CCD: retn    8
