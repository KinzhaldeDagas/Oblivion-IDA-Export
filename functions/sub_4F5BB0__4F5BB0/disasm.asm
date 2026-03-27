0x4F5BB0: push    esi
0x4F5BB1: push    edi
0x4F5BB2: mov     edi, [esp+8+arg_0]
0x4F5BB6: xor     esi, esi
0x4F5BB8: test    edi, edi
0x4F5BBA: jz      short loc_4F5BCE
0x4F5BBC: mov     eax, [edi]
0x4F5BBE: mov     edx, [eax+190h]
0x4F5BC4: mov     ecx, edi
0x4F5BC6: call    edx
0x4F5BC8: test    al, al
0x4F5BCA: jz      short loc_4F5BCE
0x4F5BCC: mov     esi, edi
0x4F5BCE: test    esi, esi
0x4F5BD0: fldz
0x4F5BD2: mov     edi, [esp+8+arg_C]
0x4F5BD6: fstp    qword ptr [edi]
0x4F5BD8: jz      short loc_4F5C42
0x4F5BDA: mov     ecx, esi; this
0x4F5BDC: call    Actor_IsNPC
0x4F5BE1: test    al, al
0x4F5BE3: jz      short loc_4F5C42
0x4F5BE5: mov     eax, [esi]
0x4F5BE7: mov     edx, [eax+170h]
0x4F5BED: mov     ecx, esi
0x4F5BEF: call    edx
0x4F5BF1: test    eax, eax
0x4F5BF3: jz      short loc_4F5C01
0x4F5BF5: cmp     eax, ds:0B361C4h
0x4F5BFB: jnz     short loc_4F5C01
0x4F5BFD: fld1
0x4F5BFF: fstp    qword ptr [edi]
0x4F5C01: cmp     byte ptr ds:0B361ACh, 0
0x4F5C08: jz      short loc_4F5C42
0x4F5C0A: fldz
0x4F5C0C: mov     ecx, esi; this
0x4F5C0E: fcomp   qword ptr [edi]
0x4F5C10: fnstsw  ax
0x4F5C12: test    ah, 44h
0x4F5C15: jnp     short loc_4F5C2F
0x4F5C17: call    TESObjectREFR_GetName
0x4F5C1C: push    eax
0x4F5C1D: push    offset aSCrimeVictim; "%s  crime victim "
0x4F5C22: call    Interface_ConsolePrint
0x4F5C27: add     esp, 8
0x4F5C2A: pop     edi
0x4F5C2B: mov     al, 1
0x4F5C2D: pop     esi
0x4F5C2E: retn
0x4F5C2F: call    TESObjectREFR_GetName
0x4F5C34: push    eax
0x4F5C35: push    offset aSIsNotACrimeVi; "%s  is not a crime victim "
0x4F5C3A: call    Interface_ConsolePrint
0x4F5C3F: add     esp, 8
0x4F5C42: pop     edi
0x4F5C43: mov     al, 1
0x4F5C45: pop     esi
0x4F5C46: retn
