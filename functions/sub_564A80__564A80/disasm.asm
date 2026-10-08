0x564A80: push    0FFFFFFFFh
0x564A82: push    offset SEH_7020F0
0x564A87: mov     eax, large fs:0
0x564A8D: push    eax
0x564A8E: push    ecx
0x564A8F: push    esi
0x564A90: push    edi
0x564A91: mov     eax, ds:0B30AACh
0x564A96: xor     eax, esp
0x564A98: push    eax
0x564A99: lea     eax, [esp+1Ch+var_C]
0x564A9D: mov     large fs:0, eax
0x564AA3: mov     eax, [ecx]
0x564AA5: mov     edx, [eax+0A4h]
0x564AAB: xor     edi, edi
0x564AAD: call    edx
0x564AAF: test    eax, eax
0x564AB1: jz      short loc_564B0E
0x564AB3: mov     esi, [eax+0A8h]
0x564AB9: test    esi, esi
0x564ABB: mov     [esp+1Ch+var_10], esi
0x564ABF: jz      short loc_564ACB
0x564AC1: lea     eax, [esi+4]
0x564AC4: push    eax; lpAddend
0x564AC5: call    dword ptr ds:0A28078h
0x564ACB: test    esi, esi
0x564ACD: mov     [esp+1Ch+var_4], 0
0x564AD5: jz      short loc_564AEA
0x564AD7: mov     eax, [esi+10h]
0x564ADA: push    eax
0x564ADB: push    offset stru_BA7F78
0x564AE0: call    NiRTTI_Cast
0x564AE5: add     esp, 8
0x564AE8: mov     edi, eax
0x564AEA: test    esi, esi
0x564AEC: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x564AF4: jz      short loc_564B0E
0x564AF6: lea     ecx, [esi+4]
0x564AF9: push    ecx; lpAddend
0x564AFA: call    dword ptr ds:0A2807Ch
0x564B00: test    eax, eax
0x564B02: jnz     short loc_564B0E
0x564B04: mov     edx, [esi]
0x564B06: mov     eax, [edx]
0x564B08: push    1
0x564B0A: mov     ecx, esi
0x564B0C: call    eax
0x564B0E: mov     eax, edi
0x564B10: mov     ecx, dword ptr [esp+1Ch+var_C]
0x564B14: mov     large fs:0, ecx
0x564B1B: pop     ecx
0x564B1C: pop     edi
0x564B1D: pop     esi
0x564B1E: add     esp, 10h
0x564B21: retn
0x9BD550: lea     ecx, [ebp-10h]; slot
0x9BD553: jmp     NiPointerSlot_Release
0x9BD558: mov     edx, [esp+arg_4]
0x9BD55C: lea     eax, [edx-0Ch]
0x9BD55F: mov     ecx, [edx-10h]
0x9BD562: xor     ecx, eax
0x9BD564: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD569: mov     eax, offset stru_AE6EF8
0x9BD56E: jmp     ___CxxFrameHandler3
