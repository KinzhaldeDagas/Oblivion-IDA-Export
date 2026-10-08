0x570700: push    0FFFFFFFFh
0x570702: push    offset SEH_570700
0x570707: mov     eax, large fs:0
0x57070D: push    eax
0x57070E: push    ecx
0x57070F: push    ebx
0x570710: push    esi
0x570711: push    edi
0x570712: mov     eax, ds:0B30AACh
0x570717: xor     eax, esp
0x570719: push    eax
0x57071A: lea     eax, [esp+20h+var_C]
0x57071E: mov     large fs:0, eax
0x570724: mov     esi, ecx
0x570726: mov     [esp+20h+var_10], esi
0x57072A: fldz
0x57072C: push    ecx
0x57072D: fstp    [esp+24h+durationSeconds]; durationSeconds
0x570730: xor     ebx, ebx
0x570732: push    ebx; parentCell
0x570733: call    BSTempEffect_Constructor; Verified BSTempEffect constructor: initializes NiObject base, stores duration at +0x08 and parent cell at +0x0C, zeros elapsed at +0x10, sets initializeCallbackDone (+0x14) false, and installs BSTempEffect vtable.
0x570738: mov     dword ptr [esi], offset ??_7BSTempEffectParticle@@6B@; const BSTempEffectParticle::`vftable'
0x57073E: mov     [esp+20h+var_4], ebx
0x570742: mov     [esi+18h], ebx
0x570745: mov     edi, ebx
0x570747: cmp     edi, ebx
0x570749: mov     byte ptr [esp+20h+var_4], 1
0x57074E: jz      short loc_57076F
0x570750: lea     eax, [edi+4]
0x570753: push    eax; lpAddend
0x570754: call    dword ptr ds:0A2807Ch
0x57075A: test    eax, eax
0x57075C: jnz     short loc_57076C
0x57075E: cmp     edi, ebx
0x570760: jz      short loc_57076C
0x570762: mov     edx, [edi]
0x570764: mov     eax, [edx]
0x570766: push    1
0x570768: mov     ecx, edi
0x57076A: call    eax
0x57076C: mov     [esi+18h], ebx
0x57076F: mov     eax, esi
0x570771: mov     [esi+1Ch], ebx
0x570774: mov     ecx, dword ptr [esp+20h+var_C]
0x570778: mov     large fs:0, ecx
0x57077F: pop     ecx
0x570780: pop     edi
0x570781: pop     esi
0x570782: pop     ebx
0x570783: add     esp, 10h
0x570786: retn
0x9BDCA0: mov     ecx, [ebp-10h]; self
0x9BDCA3: jmp     BSTempEffect_Destructor; Verified BSTempEffect destructor: resets duration, elapsed, parent cell and initializeCallbackDone (+0x14), restores base vtable, then invokes NiRefObject destructor.
0x9BDCA8: mov     ecx, [ebp-10h]
0x9BDCAB: add     ecx, 18h; slot
0x9BDCAE: jmp     NiPointerSlot_Release
0x9BDCB3: mov     edx, [esp+arg_4]
0x9BDCB7: lea     eax, [edx-10h]
0x9BDCBA: mov     ecx, [edx-14h]
0x9BDCBD: xor     ecx, eax
0x9BDCBF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BDCC4: mov     eax, offset stru_AE7518
0x9BDCC9: jmp     ___CxxFrameHandler3
