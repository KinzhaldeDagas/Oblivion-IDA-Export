0x532BC0: push    0FFFFFFFFh
0x532BC2: push    offset SEH_532BC0
0x532BC7: mov     eax, large fs:0
0x532BCD: push    eax
0x532BCE: push    ecx
0x532BCF: push    esi
0x532BD0: mov     eax, ds:0B30AACh
0x532BD5: xor     eax, esp
0x532BD7: push    eax
0x532BD8: lea     eax, [esp+18h+var_C]
0x532BDC: mov     large fs:0, eax
0x532BE2: mov     esi, ecx
0x532BE4: mov     [esp+18h+var_10], esi
0x532BE8: xor     eax, eax
0x532BEA: mov     [esi], eax
0x532BEC: mov     [esp+18h+var_4], eax
0x532BF0: mov     [esi+4], eax
0x532BF3: fld     [esp+18h+arg_0]
0x532BF7: mov     eax, [esp+18h+arg_4]
0x532BFB: push    eax; int
0x532BFC: push    ecx
0x532BFD: fstp    [esp+20h+var_20]; float
0x532C00: mov     byte ptr [esp+20h+var_4], 1
0x532C05: call    PlayerCameraCollisionPhantomPair_Rebuild; TES4 authoritative: rebuilds the two player camera collision bhkSimpleShapePhantoms from sphere shape radius and filter layer 0x18 cinfo; only observed constructor path for the object used by 0x5326B0.
0x532C0A: mov     eax, esi
0x532C0C: mov     ecx, [esp+18h+var_C]
0x532C10: mov     large fs:0, ecx
0x532C17: pop     ecx
0x532C18: pop     esi
0x532C19: add     esp, 10h
0x532C1C: retn    8
0x9B8E80: mov     ecx, [ebp-10h]; slot
0x9B8E83: jmp     NiPointerSlot_Release
0x9B8E88: mov     ecx, [ebp-10h]
0x9B8E8B: add     ecx, 4; slot
0x9B8E8E: jmp     NiPointerSlot_Release
0x9B8E93: mov     edx, [esp+arg_4]
0x9B8E97: lea     eax, [edx-8]
0x9B8E9A: mov     ecx, [edx-0Ch]
0x9B8E9D: xor     ecx, eax
0x9B8E9F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B8EA4: mov     eax, offset stru_AE329C
0x9B8EA9: jmp     ___CxxFrameHandler3
