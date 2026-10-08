0x70B400: push    0FFFFFFFFh
0x70B402: push    offset SEH_70B400
0x70B407: mov     eax, large fs:0
0x70B40D: push    eax
0x70B40E: sub     esp, 0Ch
0x70B411: push    ebp
0x70B412: push    esi
0x70B413: push    edi
0x70B414: mov     eax, ds:0B30AACh
0x70B419: xor     eax, esp
0x70B41B: push    eax
0x70B41C: lea     eax, [esp+28h+var_C]
0x70B420: mov     large fs:0, eax
0x70B426: mov     edi, ecx
0x70B428: xor     esi, esi
0x70B42A: mov     [esp+28h+var_10], 0
0x70B432: mov     [esp+28h+var_18], esi
0x70B436: mov     ecx, [edi+1Ch]
0x70B439: test    ecx, ecx
0x70B43B: mov     [esp+28h+var_4], 1
0x70B443: jz      short loc_70B48B
0x70B445: lea     eax, [esp+28h+var_14]
0x70B449: push    eax
0x70B44A: call    sub_70B400
0x70B44F: push    eax; incoming
0x70B450: lea     ecx, [esp+2Ch+var_18]; this
0x70B454: mov     byte ptr [esp+2Ch+var_4], 2
0x70B459: call    OB_NiSmartPointer_Assign_010201A0; SpeedTreeOBSE 2026-07-14: smart-pointer assignment releases the old reference before storing/AddRefing the new one. Transaction rollback snapshots must hold their own AddRef.
0x70B45E: mov     esi, [esp+28h+var_14]
0x70B462: test    esi, esi
0x70B464: mov     byte ptr [esp+28h+var_4], 1
0x70B469: jz      short loc_70B487
0x70B46B: lea     ecx, [esi+4]
0x70B46E: push    ecx; lpAddend
0x70B46F: call    dword ptr ds:0A2807Ch
0x70B475: test    eax, eax
0x70B477: jnz     short loc_70B487
0x70B479: test    esi, esi
0x70B47B: jz      short loc_70B487
0x70B47D: mov     edx, [esi]
0x70B47F: mov     eax, [edx]
0x70B481: push    1
0x70B483: mov     ecx, esi
0x70B485: call    eax
0x70B487: mov     esi, [esp+28h+var_18]
0x70B48B: mov     ebp, [esp+28h+arg_0]
0x70B48F: push    0
0x70B491: push    esi
0x70B492: push    ebp
0x70B493: mov     ecx, edi
0x70B495: call    sub_70A500
0x70B49A: test    esi, esi
0x70B49C: mov     [esp+28h+var_10], 1
0x70B4A4: mov     byte ptr [esp+28h+var_4], 0
0x70B4A9: jz      short loc_70B4C3
0x70B4AB: lea     ecx, [esi+4]
0x70B4AE: push    ecx; lpAddend
0x70B4AF: call    dword ptr ds:0A2807Ch
0x70B4B5: test    eax, eax
0x70B4B7: jnz     short loc_70B4C3
0x70B4B9: mov     edx, [esi]
0x70B4BB: mov     eax, [edx]
0x70B4BD: push    1
0x70B4BF: mov     ecx, esi
0x70B4C1: call    eax
0x70B4C3: mov     eax, ebp
0x70B4C5: mov     ecx, dword ptr [esp+28h+var_C]
0x70B4C9: mov     large fs:0, ecx
0x70B4D0: pop     ecx
0x70B4D1: pop     edi
0x70B4D2: pop     esi
0x70B4D3: pop     ebp
0x70B4D4: add     esp, 18h
0x70B4D7: retn    4
0x9C99B0: lea     ecx, [ebp-18h]; slot
0x9C99B3: jmp     NiPointerSlot_Release
0x9C99B8: lea     ecx, [ebp-14h]; slot
0x9C99BB: jmp     NiPointerSlot_Release
0x9C99C0: mov     eax, [ebp-10h]
0x9C99C3: and     eax, 1
0x9C99C6: jz      locret_9C99D8
0x9C99CC: and     dword ptr [ebp-10h], 0FFFFFFFEh
0x9C99D0: mov     ecx, [ebp+4]; slot
0x9C99D3: jmp     NiPointerSlot_Release
0x9C99D8: retn
0x9C99D9: mov     edx, [esp+arg_4]
0x9C99DD: lea     eax, [edx-18h]
0x9C99E0: mov     ecx, [edx-1Ch]
0x9C99E3: xor     ecx, eax
0x9C99E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C99EA: mov     eax, offset stru_AF2224
0x9C99EF: jmp     ___CxxFrameHandler3
