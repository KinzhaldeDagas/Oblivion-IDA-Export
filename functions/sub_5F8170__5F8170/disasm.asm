0x5F8170: push    0FFFFFFFFh
0x5F8172: push    offset SEH_806210
0x5F8177: mov     eax, large fs:0
0x5F817D: push    eax
0x5F817E: push    ecx
0x5F817F: push    ebx
0x5F8180: push    ebp
0x5F8181: push    esi
0x5F8182: push    edi
0x5F8183: mov     eax, ds:0B30AACh
0x5F8188: xor     eax, esp
0x5F818A: push    eax
0x5F818B: lea     eax, [esp+24h+var_C]
0x5F818F: mov     large fs:0, eax
0x5F8195: mov     edi, ecx
0x5F8197: mov     ecx, [edi+58h]
0x5F819A: mov     eax, [ecx]
0x5F819C: mov     edx, [eax+8]
0x5F819F: call    edx
0x5F81A1: cmp     eax, 2
0x5F81A4: jge     loc_5F8292
0x5F81AA: push    3Ch ; '<'; Size
0x5F81AC: call    FormHeapAlloc
0x5F81B1: add     esp, 4
0x5F81B4: mov     [esp+24h+var_10], eax
0x5F81B8: test    eax, eax
0x5F81BA: mov     [esp+24h+var_4], 0
0x5F81C2: jz      short loc_5F81CF
0x5F81C4: mov     ecx, eax; this
0x5F81C6: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x5F81CB: mov     esi, eax
0x5F81CD: jmp     short loc_5F81D1
0x5F81CF: xor     esi, esi
0x5F81D1: or      ebx, 0FFFFFFFFh
0x5F81D4: push    1Fh
0x5F81D6: mov     ecx, esi
0x5F81D8: mov     [esp+28h+var_4], ebx
0x5F81DC: call    TESPackage_SetType?
0x5F81E1: or      dword ptr [esi+1Ch], 4
0x5F81E5: mov     ecx, esi
0x5F81E7: call    sub_5672A0; 3DTheft decode: TESPackage procedure-array resolver is a mutator. It writes TESPackage+0x18/procedureArrayIndex directly; callers should not use EAX as the row result.
0x5F81EC: push    0Ch; Size
0x5F81EE: call    FormHeapAlloc
0x5F81F3: add     esp, 4
0x5F81F6: mov     [esp+24h+var_10], eax
0x5F81FA: test    eax, eax
0x5F81FC: mov     [esp+24h+var_4], 1
0x5F8204: jz      short loc_5F820F
0x5F8206: mov     ecx, eax
0x5F8208: call    TESPackage_TargetData_constr; 3DTheft decode: TESPackage_TargetData constructor initializes targetType=2, target/object=0, count=0.
0x5F820D: jmp     short loc_5F8211
0x5F820F: xor     eax, eax
0x5F8211: push    eax
0x5F8212: mov     ecx, esi
0x5F8214: mov     [esp+28h+var_4], ebx
0x5F8218: call    TESPackage_SetTarget; 3DTheft decode: TESPackage_SetTarget allocates package->target when needed, copies a 0x0C TargetData record, and leaves later callers to set target type/ref/count fields.
0x5F821D: mov     ecx, [esi+28h]
0x5F8220: push    0
0x5F8222: call    TESPackage_TargetData_SetType; 3DTheft decode: TargetData_SetType writes targetType and clears the target/object field for refr/base/type target modes.
0x5F8227: mov     eax, [esp+24h+arg_0]
0x5F822B: mov     ecx, [esi+28h]
0x5F822E: push    eax
0x5F822F: call    TeSPackage_TargetData_SetTargetREFR; 3DTheft decode: TargetData_SetTargetREFR only writes the reference field when targetType is 0 (reference target). It does not set count.
0x5F8234: mov     ecx, [esi+28h]
0x5F8237: push    1F4h
0x5F823C: call    TESAIForm_SetServiceFlags
0x5F8241: mov     ecx, [edi+58h]
0x5F8244: cmp     dword ptr [ecx+8], 0
0x5F8248: jz      short loc_5F8286
0x5F824A: mov     eax, [ecx]
0x5F824C: mov     edx, [eax+390h]
0x5F8252: mov     ebx, ecx
0x5F8254: mov     ebp, ecx
0x5F8256: call    edx
0x5F8258: mov     ecx, ebx
0x5F825A: push    eax
0x5F825B: mov     eax, [ebx]
0x5F825D: mov     edx, [eax+0C0h]
0x5F8263: call    edx
0x5F8265: mov     ecx, ebp
0x5F8267: push    eax
0x5F8268: mov     eax, [ebp+0]
0x5F826B: mov     edx, [eax+0CCh]
0x5F8271: call    edx
0x5F8273: push    eax
0x5F8274: mov     eax, ebx
0x5F8276: mov     ecx, [eax+4]
0x5F8279: mov     edx, [eax+8]
0x5F827C: push    ecx
0x5F827D: push    edx
0x5F827E: lea     ecx, [edi+44h]
0x5F8281: call    sub_4268B0
0x5F8286: push    1; a4
0x5F8288: push    0; a3
0x5F828A: push    esi; a2
0x5F828B: mov     ecx, edi; this
0x5F828D: call    Actor_AddPackage?; 3DTheft: xrefs ignore this function's return value; use current package/process state after call, not AL/EAX, as the package assignment result.
0x5F8292: mov     ecx, [esp+24h+var_C]
0x5F8296: mov     large fs:0, ecx
0x5F829D: pop     ecx
0x5F829E: pop     edi
0x5F829F: pop     esi
0x5F82A0: pop     ebp
0x5F82A1: pop     ebx
0x5F82A2: add     esp, 10h
0x5F82A5: retn    4
0x9C57A0: mov     eax, [ebp-10h]
0x9C57A3: push    eax
0x9C57A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C57A9: pop     ecx
0x9C57AA: retn
0x9C57AB: mov     eax, [ebp-10h]
0x9C57AE: push    eax
0x9C57AF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C57B4: pop     ecx
0x9C57B5: retn
0x9C57B6: mov     edx, [esp+arg_4]
0x9C57BA: lea     eax, [edx-14h]
0x9C57BD: mov     ecx, [edx-18h]
0x9C57C0: xor     ecx, eax
0x9C57C2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C57C7: mov     eax, offset stru_AEDF40
0x9C57CC: jmp     ___CxxFrameHandler3
