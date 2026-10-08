0x707610: push    0FFFFFFFFh; Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
0x707612: push    offset NiAVObject_InitializePropertyState_SEH
0x707617: mov     eax, large fs:0
0x70761D: push    eax
0x70761E: sub     esp, 8
0x707621: push    ebx
0x707622: push    ebp
0x707623: push    esi
0x707624: push    edi
0x707625: mov     eax, ds:0B30AACh
0x70762A: xor     eax, esp
0x70762C: push    eax
0x70762D: lea     eax, [esp+28h+var_C]
0x707631: mov     large fs:0, eax
0x707637: mov     edi, ecx
0x707639: xor     esi, esi
0x70763B: xor     ebx, ebx
0x70763D: mov     [esp+28h+var_14], esi
0x707641: push    offset unk_B3FA00; lpCriticalSection
0x707646: mov     [esp+2Ch+var_4], ebx
0x70764A: call    dword ptr ds:0A2806Ch
0x707650: call    dword ptr ds:0A2808Ch
0x707656: add     dword ptr ds:0B3FA7Ch, 1
0x70765D: mov     ebp, ds:0A2807Ch
0x707663: mov     ds:0B3FA78h, eax
0x707668: mov     ecx, [edi+1Ch]
0x70766B: cmp     ecx, ebx
0x70766D: jz      loc_707726
0x707673: lea     eax, [esp+28h+var_10]
0x707677: push    eax
0x707678: call    sub_70A3E0; Pass222: Recursive inherited property-state build; creates root default state then calls 0x7077D0 cloneInherited=0.
0x70767D: push    eax; incoming
0x70767E: lea     ecx, [esp+2Ch+var_14]; this
0x707682: mov     byte ptr [esp+2Ch+var_4], 1
0x707687: call    OB_NiSmartPointer_Assign_010201A0; SpeedTreeOBSE 2026-07-14: smart-pointer assignment releases the old reference before storing/AddRefing the new one. Transaction rollback snapshots must hold their own AddRef.
0x70768C: mov     esi, [esp+28h+var_10]
0x707690: cmp     esi, ebx
0x707692: mov     byte ptr [esp+28h+var_4], bl
0x707696: jz      short loc_7076B0
0x707698: lea     ecx, [esi+4]
0x70769B: push    ecx; lpAddend
0x70769C: call    ebp ; InterlockedDecrement
0x70769E: test    eax, eax
0x7076A0: jnz     short loc_7076B0
0x7076A2: cmp     esi, ebx
0x7076A4: jz      short loc_7076B0
0x7076A6: mov     edx, [esi]
0x7076A8: mov     eax, [edx]
0x7076AA: push    1
0x7076AC: mov     ecx, esi
0x7076AE: call    eax
0x7076B0: mov     esi, [esp+28h+var_14]
0x7076B4: mov     edx, [edi]
0x7076B6: mov     eax, [edx+6Ch]
0x7076B9: push    esi
0x7076BA: mov     ecx, edi
0x7076BC: call    eax
0x7076BE: cmp     esi, ebx
0x7076C0: jz      short loc_7076D8
0x7076C2: lea     ecx, [esi+4]
0x7076C5: push    ecx; lpAddend
0x7076C6: call    ebp ; InterlockedDecrement
0x7076C8: test    eax, eax
0x7076CA: jnz     short loc_7076D6
0x7076CC: mov     edx, [esi]
0x7076CE: mov     eax, [edx]
0x7076D0: push    1
0x7076D2: mov     ecx, esi
0x7076D4: call    eax
0x7076D6: xor     esi, esi
0x7076D8: sub     dword ptr ds:0B3FA7Ch, 1
0x7076DF: jnz     short loc_7076E7
0x7076E1: mov     ds:0B3FA78h, ebx
0x7076E7: push    offset unk_B3FA00; lpCriticalSection
0x7076EC: call    dword ptr ds:0A28074h
0x7076F2: cmp     esi, ebx
0x7076F4: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7076FC: jz      short loc_707712
0x7076FE: lea     ecx, [esi+4]
0x707701: push    ecx; lpAddend
0x707702: call    ebp ; InterlockedDecrement
0x707704: test    eax, eax
0x707706: jnz     short loc_707712
0x707708: mov     edx, [esi]
0x70770A: mov     eax, [edx]
0x70770C: push    1
0x70770E: mov     ecx, esi
0x707710: call    eax
0x707712: mov     ecx, dword ptr [esp+28h+var_C]
0x707716: mov     large fs:0, ecx
0x70771D: pop     ecx
0x70771E: pop     edi
0x70771F: pop     esi
0x707720: pop     ebp
0x707721: pop     ebx
0x707722: add     esp, 14h
0x707725: retn
0x707726: push    30h ; '0'; Size
0x707728: call    FormHeapAlloc
0x70772D: add     esp, 4
0x707730: mov     [esp+28h+var_10], eax
0x707734: cmp     eax, ebx
0x707736: mov     byte ptr [esp+28h+var_4], 2
0x70773B: jz      short loc_707746
0x70773D: mov     ecx, eax
0x70773F: call    sub_7319E0; Pass222: Constructs 0x30-byte NiPropertyState with ten managed smart-pointer slots at +0x08..+0x2C.
0x707744: jmp     short loc_707748
0x707746: xor     eax, eax
0x707748: cmp     eax, ebx
0x70774A: mov     byte ptr [esp+28h+var_4], bl
0x70774E: jz      loc_7076B4
0x707754: mov     esi, eax
0x707756: add     eax, 4
0x707759: push    eax; lpAddend
0x70775A: mov     [esp+2Ch+var_14], esi
0x70775E: call    dword ptr ds:0A28078h
0x707764: jmp     loc_7076B4
0x9C9660: lea     ecx, [ebp-14h]; slot
0x9C9663: jmp     NiPointerSlot_Release
0x9C9668: lea     ecx, [ebp-10h]; slot
0x9C966B: jmp     NiPointerSlot_Release
0x9C9670: mov     eax, [ebp-10h]
0x9C9673: push    eax
0x9C9674: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C9679: pop     ecx
0x9C967A: retn
0x9C967B: mov     edx, [esp+arg_4]
0x9C967F: lea     eax, [edx-18h]
0x9C9682: mov     ecx, [edx-1Ch]
0x9C9685: xor     ecx, eax
0x9C9687: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C968C: mov     eax, offset stru_AF1F24
0x9C9691: jmp     ___CxxFrameHandler3
