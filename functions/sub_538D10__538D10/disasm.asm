0x538D10: push    ebp
0x538D11: mov     ebp, esp
0x538D13: and     esp, 0FFFFFFF0h
0x538D16: push    0FFFFFFFFh
0x538D18: push    offset SEH_535730
0x538D1D: mov     eax, large fs:0
0x538D23: push    eax
0x538D24: sub     esp, 68h
0x538D27: push    ebx
0x538D28: push    esi
0x538D29: push    edi
0x538D2A: mov     eax, ds:0B30AACh
0x538D2F: xor     eax, esp
0x538D31: push    eax
0x538D32: lea     eax, [esp+84h+var_C]
0x538D36: mov     large fs:0, eax
0x538D3C: mov     ebx, ecx
0x538D3E: push    14h; Size
0x538D40: call    FormHeapAlloc
0x538D45: add     esp, 4
0x538D48: mov     [esp+84h+var_74], eax
0x538D4C: xor     edi, edi
0x538D4E: cmp     eax, edi
0x538D50: mov     [esp+84h+var_4], edi
0x538D57: jz      short loc_538D6D
0x538D59: fld     [ebp+arg_0]
0x538D5C: push    1; float
0x538D5E: push    ecx
0x538D5F: mov     ecx, eax
0x538D61: fstp    [esp+8Ch+var_8C]; float
0x538D64: call    bhkSphereShape_CtorRadius; TES4 authoritative: constructs a bhkSphereShape; if the third byte arg is true, radius is converted from TES/world units to Havok units with hkFactor.
0x538D69: mov     esi, eax
0x538D6B: jmp     short loc_538D6F
0x538D6D: xor     esi, esi
0x538D6F: lea     ecx, [esp+84h+info]
0x538D73: call    OB_bhkShapePhantomCinfo_InitIdentity_010201A0; 2026-05-18 73000 consumer decode: initializes bhkSimpleShapePhantom cinfo, including identity transform at +0x20 and shape pointer slot at +0x04. Stock 0x565510 installs one shape pointer and attaches the phantom to the target NiAVObject.
0x538D78: mov     ecx, [ebp+arg_4]
0x538D7B: mov     eax, ecx
0x538D7D: shl     eax, 10h
0x538D80: or      eax, 1Dh
0x538D83: cmp     esi, edi
0x538D85: mov     [esp+84h+var_4], 1
0x538D90: mov     [ebx+8], ecx
0x538D93: mov     [esp+84h+info.collisionFilter], eax
0x538D97: jz      short loc_538DA2
0x538D99: mov     eax, [esi+8]
0x538D9C: mov     [esp+84h+info.shape], eax
0x538DA0: jmp     short loc_538DA6
0x538DA2: mov     [esp+84h+info.shape], edi
0x538DA6: fldz
0x538DA8: push    14h; Size
0x538DAA: fst     [esp+88h+info.transform+4]
0x538DAE: fst     [esp+88h+info.transform+8]
0x538DB2: fst     [esp+88h+info.transform+0Ch]
0x538DB6: fst     [esp+88h+info.transform+10h]
0x538DBA: fst     [esp+88h+info.transform+18h]
0x538DBE: fst     [esp+88h+info.transform+1Ch]
0x538DC2: fst     [esp+88h+info.transform+20h]
0x538DC6: fst     [esp+88h+info.transform+24h]
0x538DCA: fst     [esp+88h+info.transform+2Ch]
0x538DCE: fld1
0x538DD0: fst     [esp+88h+info.transform]
0x538DD4: fst     [esp+88h+info.transform+14h]
0x538DD8: fstp    [esp+88h+info.transform+28h]
0x538DDC: fst     [esp+88h+info.transform+30h]
0x538DE0: fst     [esp+88h+info.transform+34h]
0x538DE4: fst     [esp+88h+info.transform+38h]
0x538DE8: fstp    [esp+88h+info.transform+3Ch]
0x538DEC: call    FormHeapAlloc
0x538DF1: add     esp, 4
0x538DF4: mov     [esp+84h+var_74], eax
0x538DF8: cmp     eax, edi
0x538DFA: mov     byte ptr [esp+84h+var_4], 2
0x538E02: jz      short loc_538E12
0x538E04: lea     ecx, [esp+84h+info]
0x538E08: push    ecx; info
0x538E09: mov     ecx, eax; self
0x538E0B: call    OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0; Constructs bhkSimpleShapePhantom wrapper and calls 0x8AF1A0 to create/attach the low-level Havok phantom object from cinfo.
0x538E10: mov     edi, eax
0x538E12: mov     esi, [ebx]
0x538E14: cmp     esi, edi
0x538E16: mov     byte ptr [esp+84h+var_4], 1
0x538E1E: jz      short loc_538E50
0x538E20: test    esi, esi
0x538E22: jz      short loc_538E40
0x538E24: lea     edx, [esi+4]
0x538E27: push    edx; lpAddend
0x538E28: call    dword ptr ds:0A2807Ch
0x538E2E: test    eax, eax
0x538E30: jnz     short loc_538E40
0x538E32: test    esi, esi
0x538E34: jz      short loc_538E40
0x538E36: mov     eax, [esi]
0x538E38: mov     edx, [eax]
0x538E3A: push    1
0x538E3C: mov     ecx, esi
0x538E3E: call    edx
0x538E40: test    edi, edi
0x538E42: mov     [ebx], edi
0x538E44: jz      short loc_538E50
0x538E46: add     edi, 4
0x538E49: push    edi; lpAddend
0x538E4A: call    dword ptr ds:0A28078h
0x538E50: mov     eax, [esp+84h+info.propertyCapacityFlags]
0x538E54: test    eax, eax
0x538E56: mov     byte ptr [ebx+4], 1
0x538E5A: mov     [esp+84h+var_4], 0FFFFFFFFh
0x538E65: js      short loc_538E9F
0x538E67: mov     ecx, ds:0BA9DE4h
0x538E6D: mov     edx, large fs:2Ch
0x538E74: mov     ecx, [edx+ecx*4]
0x538E77: mov     ecx, [ecx+19Ch]
0x538E7D: test    ecx, ecx
0x538E7F: jnz     short loc_538E87
0x538E81: mov     ecx, ds:0BA7D9Ch
0x538E87: mov     edx, [esp+84h+info.propertyData]
0x538E8B: and     eax, 3FFFFFFFh
0x538E90: add     eax, eax
0x538E92: add     eax, eax
0x538E94: push    14h
0x538E96: add     eax, eax
0x538E98: push    eax
0x538E99: push    edx
0x538E9A: call    sub_8A75D0
0x538E9F: mov     ecx, dword ptr [esp+84h+var_C]
0x538EA3: mov     large fs:0, ecx
0x538EAA: pop     ecx
0x538EAB: pop     edi
0x538EAC: pop     esi
0x538EAD: pop     ebx
0x538EAE: mov     esp, ebp
0x538EB0: pop     ebp
0x538EB1: retn    8
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
