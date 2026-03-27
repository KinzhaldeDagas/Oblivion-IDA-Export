0x530AE0: push    0FFFFFFFFh
0x530AE2: push    offset ??0TESTopicInfo@@QAE@XZ_SEH
0x530AE7: mov     eax, large fs:0
0x530AED: push    eax
0x530AEE: push    ecx
0x530AEF: push    ebx
0x530AF0: push    esi
0x530AF1: mov     eax, ds:0B30AACh
0x530AF6: xor     eax, esp
0x530AF8: push    eax
0x530AF9: lea     eax, [esp+1Ch+var_C]
0x530AFD: mov     large fs:0, eax
0x530B03: mov     esi, ecx
0x530B05: mov     [esp+1Ch+var_10], esi
0x530B09: call    TESForm_constr
0x530B0E: xor     ebx, ebx
0x530B10: lea     ecx, [esi+18h]; this
0x530B13: mov     [esp+1Ch+var_4], ebx
0x530B17: mov     dword ptr [esi], offset ??_7TESTopicInfo@@6B@; const TESTopicInfo::`vftable'
0x530B1D: call    ??0DNameNode@@IAE@XZ; DNameNode::DNameNode(void)
0x530B22: mov     [esi+28h], ebx
0x530B25: mov     [esi+2Ch], ebx
0x530B28: xor     eax, eax
0x530B2A: mov     [esi+23h], ax
0x530B2E: mov     [esi+25h], al
0x530B31: mov     ecx, esi; this
0x530B33: mov     byte ptr [esp+1Ch+var_4], 1
0x530B38: mov     [esi+34h], ebx
0x530B3B: mov     [esi+22h], bl
0x530B3E: mov     word ptr [esi+20h], 0FFFFh
0x530B44: mov     byte ptr [esi+4], 3Ah ; ':'
0x530B48: mov     [esi+30h], ebx
0x530B4B: call    j_TESForm_InitializeComponents
0x530B50: mov     eax, [esp+1Ch+arg_0]
0x530B54: cmp     eax, 1
0x530B57: mov     [esi+23h], al
0x530B5A: jnz     short loc_530B80
0x530B5C: push    10h; Size
0x530B5E: call    FormHeapAlloc
0x530B63: add     esp, 4
0x530B66: cmp     eax, ebx
0x530B68: jz      short loc_530B77
0x530B6A: mov     [eax], ebx
0x530B6C: mov     [eax+4], ebx
0x530B6F: mov     [eax+8], ebx
0x530B72: mov     [eax+0Ch], ebx
0x530B75: jmp     short loc_530B79
0x530B77: xor     eax, eax
0x530B79: or      byte ptr [esi+25h], 2
0x530B7D: mov     [esi+30h], eax
0x530B80: mov     eax, esi
0x530B82: mov     ecx, [esp+1Ch+var_C]
0x530B86: mov     large fs:0, ecx
0x530B8D: pop     ecx
0x530B8E: pop     esi
0x530B8F: pop     ebx
0x530B90: add     esp, 10h
0x530B93: retn    4
