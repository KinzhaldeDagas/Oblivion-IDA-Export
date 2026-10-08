0x607530: push    0FFFFFFFFh
0x607532: push    offset SEH_8C8970
0x607537: mov     eax, large fs:0
0x60753D: push    eax
0x60753E: push    ecx
0x60753F: push    esi
0x607540: push    edi
0x607541: mov     eax, ds:0B30AACh
0x607546: xor     eax, esp
0x607548: push    eax
0x607549: lea     eax, [esp+1Ch+var_C]
0x60754D: mov     large fs:0, eax
0x607553: mov     esi, ecx
0x607555: mov     ecx, [esi+58h]
0x607558: test    ecx, ecx
0x60755A: jz      short loc_60756B
0x60755C: mov     eax, [ecx]
0x60755E: mov     edx, [eax+8]
0x607561: call    edx
0x607563: test    eax, eax
0x607565: jz      loc_6075FD
0x60756B: mov     ecx, [esi+58h]
0x60756E: mov     eax, [ecx]
0x607570: mov     edx, [eax+8]
0x607573: call    edx
0x607575: push    eax
0x607576: push    esi
0x607577: mov     ecx, (offset qword_B3BB2C+1D4h)
0x60757C: call    sub_674550
0x607581: push    2ECh; Size
0x607586: call    FormHeapAlloc
0x60758B: add     esp, 4
0x60758E: mov     [esp+1Ch+var_10], eax
0x607592: test    eax, eax
0x607594: mov     [esp+1Ch+var_4], 0
0x60759C: jz      short loc_6075A9
0x60759E: mov     ecx, eax; this
0x6075A0: call    ??0HighProcess@@QAE@XZ; HighProcess constructor: derives from MiddleHighProcess, then installs HighProcess vtable and initializes movementFlags at +0x1FC to 0. Confirms movement flag storage is HighProcess-only.
0x6075A5: mov     edi, eax
0x6075A7: jmp     short loc_6075AB
0x6075A9: xor     edi, edi
0x6075AB: mov     ecx, [esi+58h]
0x6075AE: mov     eax, [edi]
0x6075B0: mov     edx, [eax+4]
0x6075B3: push    ecx
0x6075B4: mov     ecx, edi
0x6075B6: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6075BE: call    edx
0x6075C0: mov     ecx, [esi+58h]
0x6075C3: test    ecx, ecx
0x6075C5: jz      short loc_6075CF
0x6075C7: mov     eax, [ecx]
0x6075C9: mov     edx, [eax]
0x6075CB: push    1
0x6075CD: call    edx
0x6075CF: push    0; relativeTo
0x6075D1: push    0; insertRelative
0x6075D3: push    0; append
0x6075D5: push    0; processLevel
0x6075D7: push    esi; object
0x6075D8: mov     ecx, (offset qword_B3BB2C+1D4h); this
0x6075DD: mov     [esi+58h], edi
0x6075E0: call    ActorProcessManager_AddMobileObject; Generic ActorProcessManager insertion. Selects process-level collection 0..3, silently returns if object->GetProcessLevel() does not match, then inserts with ordering controls. Returns void; there is no insertion-success result. Used for actors, load/resurrection paths, and projectiles.
0x6075E5: mov     eax, [esi]
0x6075E7: mov     edx, [eax+178h]
0x6075ED: push    0
0x6075EF: mov     ecx, esi
0x6075F1: call    edx
0x6075F3: mov     ecx, [esi+58h]
0x6075F6: mov     eax, [ecx]
0x6075F8: mov     edx, [eax+4Ch]
0x6075FB: call    edx
0x6075FD: mov     al, 1
0x6075FF: mov     ecx, [esp+1Ch+var_C]
0x607603: mov     large fs:0, ecx
0x60760A: pop     ecx
0x60760B: pop     edi
0x60760C: pop     esi
0x60760D: add     esp, 10h
0x607610: retn
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
