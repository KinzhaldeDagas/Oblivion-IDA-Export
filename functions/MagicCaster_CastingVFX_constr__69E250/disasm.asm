0x69E250: push    0FFFFFFFFh
0x69E252: push    offset MagicCaster_CastingVFX_constr_SEH
0x69E257: mov     eax, large fs:0
0x69E25D: push    eax
0x69E25E: push    ecx
0x69E25F: push    ebx
0x69E260: push    esi
0x69E261: push    edi
0x69E262: mov     eax, ds:0B30AACh
0x69E267: xor     eax, esp
0x69E269: push    eax
0x69E26A: lea     eax, [esp+20h+var_C]
0x69E26E: mov     large fs:0, eax
0x69E274: mov     esi, ecx
0x69E276: mov     [esp+20h+var_10], esi
0x69E27A: xor     ebx, ebx
0x69E27C: mov     [esi], ebx
0x69E27E: mov     [esp+20h+var_4], ebx
0x69E282: mov     [esi+8], ebx
0x69E285: mov     [esi+4], ebx
0x69E288: mov     edi, [esi+8]
0x69E28B: cmp     edi, ebx
0x69E28D: mov     byte ptr [esp+20h+var_4], 1
0x69E292: jz      short loc_69E2B3
0x69E294: lea     eax, [edi+4]
0x69E297: push    eax; lpAddend
0x69E298: call    dword ptr ds:0A2807Ch
0x69E29E: test    eax, eax
0x69E2A0: jnz     short loc_69E2B0
0x69E2A2: cmp     edi, ebx
0x69E2A4: jz      short loc_69E2B0
0x69E2A6: mov     edx, [edi]
0x69E2A8: mov     eax, [edx]
0x69E2AA: push    1
0x69E2AC: mov     ecx, edi
0x69E2AE: call    eax
0x69E2B0: mov     [esi+8], ebx
0x69E2B3: fld1
0x69E2B5: mov     ecx, [esp+20h+arg_4]
0x69E2B9: mov     edx, [esp+20h+arg_0]
0x69E2BD: fstp    dword ptr [esi+0Ch]
0x69E2C0: fldz
0x69E2C2: push    ecx
0x69E2C3: fst     dword ptr [esi+10h]
0x69E2C6: push    edx
0x69E2C7: mov     ecx, esi
0x69E2C9: fstp    dword ptr [esi+14h]
0x69E2CC: mov     [esi+18h], bl
0x69E2CF: call    MagicCaster_CastingVFX_initialize??
0x69E2D4: mov     eax, esi
0x69E2D6: mov     ecx, [esp+20h+var_C]
0x69E2DA: mov     large fs:0, ecx
0x69E2E1: pop     ecx
0x69E2E2: pop     edi
0x69E2E3: pop     esi
0x69E2E4: pop     ebx
0x69E2E5: add     esp, 10h
0x69E2E8: retn    8
0x9C5CD0: mov     ecx, [ebp-10h]; slot
0x9C5CD3: jmp     NiPointerSlot_Release
0x9C5CD8: mov     ecx, [ebp-10h]
0x9C5CDB: add     ecx, 8; slot
0x9C5CDE: jmp     NiPointerSlot_Release
0x9C5CE3: mov     edx, [esp+arg_4]
0x9C5CE7: lea     eax, [edx-10h]
0x9C5CEA: mov     ecx, [edx-14h]
0x9C5CED: xor     ecx, eax
0x9C5CEF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5CF4: mov     eax, offset stru_AEE3A0
0x9C5CF9: jmp     ___CxxFrameHandler3
