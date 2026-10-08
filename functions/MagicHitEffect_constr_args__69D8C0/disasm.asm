0x69D8C0: push    0FFFFFFFFh
0x69D8C2: push    offset MagicHitEffect_constr_args_SEH
0x69D8C7: mov     eax, large fs:0
0x69D8CD: push    eax
0x69D8CE: push    ecx
0x69D8CF: push    esi
0x69D8D0: mov     eax, ds:0B30AACh
0x69D8D5: xor     eax, esp
0x69D8D7: push    eax
0x69D8D8: lea     eax, [esp+18h+var_C]
0x69D8DC: mov     large fs:0, eax
0x69D8E2: mov     esi, ecx
0x69D8E4: mov     [esp+18h+var_10], esi
0x69D8E8: fldz
0x69D8EA: push    ecx
0x69D8EB: fstp    [esp+1Ch+durationSeconds]; durationSeconds
0x69D8EE: push    0; parentCell
0x69D8F0: call    BSTempEffect_Constructor; Verified BSTempEffect constructor: initializes NiObject base, stores duration at +0x08 and parent cell at +0x0C, zeros elapsed at +0x10, sets initializeCallbackDone (+0x14) false, and installs BSTempEffect vtable.
0x69D8F5: mov     ecx, [esp+18h+arg_0]; this
0x69D8F9: test    ecx, ecx
0x69D8FB: mov     [esp+18h+var_4], 0
0x69D903: mov     dword ptr [esi], offset ??_7MagicHitEffect@@6B@; const MagicHitEffect::`vftable'
0x69D909: mov     [esi+1Ch], ecx
0x69D90C: jz      short loc_69D916
0x69D90E: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x69D913: mov     [esi+0Ch], eax
0x69D916: fldz
0x69D918: mov     eax, [esp+18h+arg_4]
0x69D91C: fstp    dword ptr [esi+20h]
0x69D91F: mov     [esi+18h], eax
0x69D922: fld     dword ptr ds:0A32048h
0x69D928: mov     byte ptr [esi+24h], 0
0x69D92C: fstp    dword ptr [esi+8]
0x69D92F: mov     eax, esi
0x69D931: mov     ecx, [esp+18h+var_C]
0x69D935: mov     large fs:0, ecx
0x69D93C: pop     ecx
0x69D93D: pop     esi
0x69D93E: add     esp, 10h
0x69D941: retn    8
0x9C5C70: mov     ecx, [ebp-10h]; self
0x9C5C73: jmp     BSTempEffect_Destructor; Verified BSTempEffect destructor: resets duration, elapsed, parent cell and initializeCallbackDone (+0x14), restores base vtable, then invokes NiRefObject destructor.
0x9C5C78: mov     edx, [esp+arg_4]
0x9C5C7C: lea     eax, [edx-8]
0x9C5C7F: mov     ecx, [edx-0Ch]
0x9C5C82: xor     ecx, eax
0x9C5C84: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5C89: mov     eax, offset stru_AEE338
0x9C5C8E: jmp     ___CxxFrameHandler3
