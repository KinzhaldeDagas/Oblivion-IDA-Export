0x607620: push    0FFFFFFFFh
0x607622: push    offset SEH_8C8970
0x607627: mov     eax, large fs:0
0x60762D: push    eax
0x60762E: push    ecx
0x60762F: push    esi
0x607630: push    edi
0x607631: mov     eax, ds:0B30AACh
0x607636: xor     eax, esp
0x607638: push    eax
0x607639: lea     eax, [esp+1Ch+var_C]
0x60763D: mov     large fs:0, eax
0x607643: mov     esi, ecx
0x607645: mov     ecx, [esi+58h]
0x607648: test    ecx, ecx
0x60764A: jz      short loc_60765C
0x60764C: mov     eax, [ecx]
0x60764E: mov     edx, [eax+8]
0x607651: call    edx
0x607653: cmp     eax, 1
0x607656: jz      loc_6076EE
0x60765C: mov     ecx, [esi+58h]
0x60765F: mov     eax, [ecx]
0x607661: mov     edx, [eax+8]
0x607664: call    edx
0x607666: push    eax
0x607667: push    esi
0x607668: mov     ecx, (offset qword_B3BB2C+1D4h)
0x60766D: call    sub_674550
0x607672: push    18Ch; Size
0x607677: call    FormHeapAlloc
0x60767C: add     esp, 4
0x60767F: mov     [esp+1Ch+var_10], eax
0x607683: test    eax, eax
0x607685: mov     [esp+1Ch+var_4], 0
0x60768D: jz      short loc_60769A
0x60768F: mov     ecx, eax; this
0x607691: call    ??0MiddleHighProcess@@QAE@XZ; MiddleHighProcess constructor: derives from MiddleLowProcess, installs MiddleHighProcess vtable, initializes pathing, currentPackage +0x0C0 and currentPackProcedure. No movementFlags field is initialized here.
0x607696: mov     edi, eax
0x607698: jmp     short loc_60769C
0x60769A: xor     edi, edi
0x60769C: mov     ecx, [esi+58h]
0x60769F: mov     eax, [edi]
0x6076A1: mov     edx, [eax+4]
0x6076A4: push    ecx
0x6076A5: mov     ecx, edi
0x6076A7: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6076AF: call    edx
0x6076B1: mov     ecx, [esi+58h]
0x6076B4: test    ecx, ecx
0x6076B6: jz      short loc_6076C0
0x6076B8: mov     eax, [ecx]
0x6076BA: mov     edx, [eax]
0x6076BC: push    1
0x6076BE: call    edx
0x6076C0: push    0; relativeTo
0x6076C2: push    0; insertRelative
0x6076C4: push    0; append
0x6076C6: push    1; processLevel
0x6076C8: push    esi; object
0x6076C9: mov     ecx, (offset qword_B3BB2C+1D4h); this
0x6076CE: mov     [esi+58h], edi
0x6076D1: call    ActorProcessManager_AddMobileObject; Generic ActorProcessManager insertion. Selects process-level collection 0..3, silently returns if object->GetProcessLevel() does not match, then inserts with ordering controls. Returns void; there is no insertion-success result. Used for actors, load/resurrection paths, and projectiles.
0x6076D6: mov     eax, [esi]
0x6076D8: mov     edx, [eax+178h]
0x6076DE: push    0
0x6076E0: mov     ecx, esi
0x6076E2: call    edx
0x6076E4: mov     ecx, [esi+58h]
0x6076E7: mov     eax, [ecx]
0x6076E9: mov     edx, [eax+4Ch]
0x6076EC: call    edx
0x6076EE: mov     al, 1
0x6076F0: mov     ecx, [esp+1Ch+var_C]
0x6076F4: mov     large fs:0, ecx
0x6076FB: pop     ecx
0x6076FC: pop     edi
0x6076FD: pop     esi
0x6076FE: add     esp, 10h
0x607701: retn
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
