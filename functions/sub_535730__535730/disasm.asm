0x535730: push    ebp
0x535731: mov     ebp, esp
0x535733: and     esp, 0FFFFFFF0h
0x535736: push    0FFFFFFFFh
0x535738: push    offset SEH_535730
0x53573D: mov     eax, large fs:0
0x535743: push    eax
0x535744: sub     esp, 68h
0x535747: push    ebx
0x535748: push    esi
0x535749: push    edi
0x53574A: mov     eax, ds:0B30AACh
0x53574F: xor     eax, esp
0x535751: push    eax
0x535752: lea     eax, [esp+84h+var_C]
0x535756: mov     large fs:0, eax
0x53575C: mov     ebx, ecx
0x53575E: push    14h; Size
0x535760: call    FormHeapAlloc
0x535765: add     esp, 4
0x535768: mov     [esp+84h+var_74], eax
0x53576C: xor     edi, edi
0x53576E: cmp     eax, edi
0x535770: mov     [esp+84h+var_4], edi
0x535777: jz      short loc_53578D
0x535779: fld     [ebp+arg_0]
0x53577C: push    1; float
0x53577E: push    ecx
0x53577F: mov     ecx, eax
0x535781: fstp    [esp+8Ch+var_8C]; float
0x535784: call    bhkSphereShape_CtorRadius; TES4 authoritative: constructs a bhkSphereShape; if the third byte arg is true, radius is converted from TES/world units to Havok units with hkFactor.
0x535789: mov     esi, eax
0x53578B: jmp     short loc_53578F
0x53578D: xor     esi, esi
0x53578F: lea     ecx, [esp+84h+info]
0x535793: call    OB_bhkShapePhantomCinfo_InitIdentity_010201A0; 2026-05-18 73000 consumer decode: initializes bhkSimpleShapePhantom cinfo, including identity transform at +0x20 and shape pointer slot at +0x04. Stock 0x565510 installs one shape pointer and attaches the phantom to the target NiAVObject.
0x535798: mov     ecx, [ebp+arg_4]
0x53579B: mov     eax, ecx
0x53579D: shl     eax, 10h
0x5357A0: or      eax, 1Ch
0x5357A3: cmp     esi, edi
0x5357A5: mov     [esp+84h+var_4], 1
0x5357B0: mov     [ebx+1A8h], ecx
0x5357B6: mov     [esp+84h+info.collisionFilter], eax
0x5357BA: jz      short loc_5357C5
0x5357BC: mov     eax, [esi+8]
0x5357BF: mov     [esp+84h+info.shape], eax
0x5357C3: jmp     short loc_5357C9
0x5357C5: mov     [esp+84h+info.shape], edi
0x5357C9: fldz
0x5357CB: push    14h; Size
0x5357CD: fst     [esp+88h+info.transform+4]
0x5357D1: fst     [esp+88h+info.transform+8]
0x5357D5: fst     [esp+88h+info.transform+0Ch]
0x5357D9: fst     [esp+88h+info.transform+10h]
0x5357DD: fst     [esp+88h+info.transform+18h]
0x5357E1: fst     [esp+88h+info.transform+1Ch]
0x5357E5: fst     [esp+88h+info.transform+20h]
0x5357E9: fst     [esp+88h+info.transform+24h]
0x5357ED: fst     [esp+88h+info.transform+2Ch]
0x5357F1: fld1
0x5357F3: fst     [esp+88h+info.transform]
0x5357F7: fst     [esp+88h+info.transform+14h]
0x5357FB: fstp    [esp+88h+info.transform+28h]
0x5357FF: fst     [esp+88h+info.transform+30h]
0x535803: fst     [esp+88h+info.transform+34h]
0x535807: fst     [esp+88h+info.transform+38h]
0x53580B: fstp    [esp+88h+info.transform+3Ch]
0x53580F: call    FormHeapAlloc
0x535814: add     esp, 4
0x535817: mov     [esp+84h+var_74], eax
0x53581B: cmp     eax, edi
0x53581D: mov     byte ptr [esp+84h+var_4], 2
0x535825: jz      short loc_535835
0x535827: lea     ecx, [esp+84h+info]
0x53582B: push    ecx; info
0x53582C: mov     ecx, eax; self
0x53582E: call    OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0; Constructs bhkSimpleShapePhantom wrapper and calls 0x8AF1A0 to create/attach the low-level Havok phantom object from cinfo.
0x535833: mov     edi, eax
0x535835: mov     esi, [ebx+1A0h]
0x53583B: cmp     esi, edi
0x53583D: mov     byte ptr [esp+84h+var_4], 1
0x535845: jz      short loc_53587B
0x535847: test    esi, esi
0x535849: jz      short loc_535867
0x53584B: lea     edx, [esi+4]
0x53584E: push    edx; lpAddend
0x53584F: call    dword ptr ds:0A2807Ch
0x535855: test    eax, eax
0x535857: jnz     short loc_535867
0x535859: test    esi, esi
0x53585B: jz      short loc_535867
0x53585D: mov     eax, [esi]
0x53585F: mov     edx, [eax]
0x535861: push    1
0x535863: mov     ecx, esi
0x535865: call    edx
0x535867: test    edi, edi
0x535869: mov     [ebx+1A0h], edi
0x53586F: jz      short loc_53587B
0x535871: add     edi, 4
0x535874: push    edi; lpAddend
0x535875: call    dword ptr ds:0A28078h
0x53587B: mov     eax, [esp+84h+info.propertyCapacityFlags]
0x53587F: test    eax, eax
0x535881: mov     byte ptr [ebx+1A4h], 1
0x535888: mov     [esp+84h+var_4], 0FFFFFFFFh
0x535893: js      short loc_5358CD
0x535895: mov     ecx, ds:0BA9DE4h
0x53589B: mov     edx, large fs:2Ch
0x5358A2: mov     ecx, [edx+ecx*4]
0x5358A5: mov     ecx, [ecx+19Ch]
0x5358AB: test    ecx, ecx
0x5358AD: jnz     short loc_5358B5
0x5358AF: mov     ecx, ds:0BA7D9Ch
0x5358B5: mov     edx, [esp+84h+info.propertyData]
0x5358B9: and     eax, 3FFFFFFFh
0x5358BE: add     eax, eax
0x5358C0: add     eax, eax
0x5358C2: push    14h
0x5358C4: add     eax, eax
0x5358C6: push    eax
0x5358C7: push    edx
0x5358C8: call    sub_8A75D0
0x5358CD: mov     ecx, dword ptr [esp+84h+var_C]
0x5358D1: mov     large fs:0, ecx
0x5358D8: pop     ecx
0x5358D9: pop     edi
0x5358DA: pop     esi
0x5358DB: pop     ebx
0x5358DC: mov     esp, ebp
0x5358DE: pop     ebp
0x5358DF: retn    8
0x9B9410: mov     eax, [ebp+var_74]
0x9B9413: push    eax
0x9B9414: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B9419: pop     ecx
0x9B941A: retn
0x9B941B: lea     ecx, [ebp+info]
0x9B941E: jmp     sub_8A5090
0x9B9423: mov     eax, [ebp+var_74]
0x9B9426: push    eax
0x9B9427: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B942C: pop     ecx
0x9B942D: retn
0x9B942E: mov     edx, [esp-4+arg_4]
0x9B9432: lea     eax, [edx-74h]
0x9B9435: mov     ecx, [edx-78h]
0x9B9438: xor     ecx, eax
0x9B943A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B943F: mov     eax, offset stru_AE37AC
0x9B9444: jmp     ___CxxFrameHandler3
