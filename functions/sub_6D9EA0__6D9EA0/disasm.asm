0x6D9EA0: push    0FFFFFFFFh
0x6D9EA2: push    offset SEH_6E46A0
0x6D9EA7: mov     eax, large fs:0
0x6D9EAD: push    eax
0x6D9EAE: sub     esp, 10h
0x6D9EB1: push    ebx
0x6D9EB2: push    ebp
0x6D9EB3: push    esi
0x6D9EB4: push    edi
0x6D9EB5: mov     eax, ds:0B30AACh
0x6D9EBA: xor     eax, esp
0x6D9EBC: push    eax
0x6D9EBD: lea     eax, [esp+30h+var_C]
0x6D9EC1: mov     large fs:0, eax
0x6D9EC7: mov     esi, ecx
0x6D9EC9: lea     eax, [esp+30h+var_10]
0x6D9ECD: xor     ebx, ebx
0x6D9ECF: push    eax
0x6D9ED0: mov     [esp+34h+var_4], ebx
0x6D9ED4: mov     [esp+34h+var_14], ebx
0x6D9ED8: call    sub_700790
0x6D9EDD: mov     eax, [eax]
0x6D9EDF: cmp     eax, ebx
0x6D9EE1: mov     edi, [esp+30h+arg_0]
0x6D9EE5: mov     [edi], eax
0x6D9EE7: jz      short loc_6D9EF3
0x6D9EE9: add     eax, 4
0x6D9EEC: push    eax; lpAddend
0x6D9EED: call    dword ptr ds:0A28078h
0x6D9EF3: mov     ebp, [esp+30h+var_10]
0x6D9EF7: cmp     ebp, ebx
0x6D9EF9: mov     [esp+30h+var_4], ebx
0x6D9EFD: mov     [esp+30h+var_14], 1
0x6D9F05: jz      short loc_6D9F24
0x6D9F07: lea     ecx, [ebp+4]
0x6D9F0A: push    ecx; lpAddend
0x6D9F0B: call    dword ptr ds:0A2807Ch
0x6D9F11: test    eax, eax
0x6D9F13: jnz     short loc_6D9F24
0x6D9F15: cmp     ebp, ebx
0x6D9F17: jz      short loc_6D9F24
0x6D9F19: mov     edx, [ebp+0]
0x6D9F1C: mov     eax, [edx]
0x6D9F1E: push    1
0x6D9F20: mov     ecx, ebp
0x6D9F22: call    eax
0x6D9F24: mov     eax, [esi+8]
0x6D9F27: cmp     eax, ebx
0x6D9F29: jbe     short loc_6D9F77
0x6D9F2B: fld     [esp+30h+arg_8]
0x6D9F2F: lea     ecx, [esp+30h+var_1C]
0x6D9F33: push    ecx; int
0x6D9F34: mov     ecx, [esi+10h]
0x6D9F37: lea     edx, [esp+34h+var_18]
0x6D9F3B: push    edx; int
0x6D9F3C: sub     esp, 8
0x6D9F3F: fstp    [esp+40h+var_3C]; float
0x6D9F43: mov     [esp+40h+var_18], ebx
0x6D9F47: fld     [esp+40h+arg_4]
0x6D9F4B: mov     [esp+40h+var_1C], ebx
0x6D9F4F: fstp    [esp+40h+var_40]; float
0x6D9F52: push    eax; int
0x6D9F53: mov     eax, [esi+0Ch]
0x6D9F56: push    eax; int
0x6D9F57: push    ecx; int
0x6D9F58: push    1; int
0x6D9F5A: call    NiAnimationKey_CopyRangeRebased; Oblivion generic authored-key range copier. For non-type-4 tracks, counts existing timestamps inclusively in [start,end], allocates through content/type dispatch, type-copies each selected record, and rebases its timestamp to time-start. Does not synthesize boundary samples. For rotation type 4, recursively slices three scalar axes, allocates one 0x4C outer Euler record, and installs the axis results.
0x6D9F5F: mov     edx, [esi+10h]
0x6D9F62: mov     eax, [esp+50h+var_1C]
0x6D9F66: mov     ecx, [edi]
0x6D9F68: add     esp, 20h
0x6D9F6B: push    edx
0x6D9F6C: mov     edx, [esp+34h+var_18]
0x6D9F70: push    eax
0x6D9F71: push    edx
0x6D9F72: call    sub_6D9E40
0x6D9F77: mov     eax, edi
0x6D9F79: mov     ecx, dword ptr [esp+30h+var_C]
0x6D9F7D: mov     large fs:0, ecx
0x6D9F84: pop     ecx
0x6D9F85: pop     edi
0x6D9F86: pop     esi
0x6D9F87: pop     ebp
0x6D9F88: pop     ebx
0x6D9F89: add     esp, 1Ch
0x6D9F8C: retn    0Ch
0x9C8120: mov     eax, [ebp-14h]
0x9C8123: and     eax, 1
0x9C8126: jz      locret_9C8138
0x9C812C: and     dword ptr [ebp-14h], 0FFFFFFFEh
0x9C8130: mov     ecx, [ebp+4]; slot
0x9C8133: jmp     NiPointerSlot_Release
0x9C8138: retn
0x9C8139: mov     edx, [esp+arg_4]
0x9C813D: lea     eax, [edx-20h]
0x9C8140: mov     ecx, [edx-24h]
0x9C8143: xor     ecx, eax
0x9C8145: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C814A: mov     eax, offset stru_AF0414
0x9C814F: jmp     ___CxxFrameHandler3
