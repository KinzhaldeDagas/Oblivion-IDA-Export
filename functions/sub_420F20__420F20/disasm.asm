0x420F20: push    0FFFFFFFFh
0x420F22: push    offset SEH_8C8970
0x420F27: mov     eax, large fs:0
0x420F2D: push    eax
0x420F2E: push    ecx
0x420F2F: push    esi
0x420F30: push    edi
0x420F31: mov     eax, ___security_cookie
0x420F36: xor     eax, esp
0x420F38: push    eax
0x420F39: lea     eax, [esp+1Ch+var_C]
0x420F3D: mov     large fs:0, eax
0x420F43: mov     edi, ecx
0x420F45: push    46h ; 'F'; a2
0x420F47: call    BaseExtraList_GetExtraData
0x420F4C: mov     esi, eax
0x420F4E: test    esi, esi
0x420F50: jnz     short loc_420F85
0x420F52: push    1Ch; Size
0x420F54: call    FormHeapAlloc
0x420F59: add     esp, 4
0x420F5C: mov     [esp+1Ch+var_10], eax
0x420F60: test    eax, eax
0x420F62: mov     [esp+1Ch+var_4], esi
0x420F66: jz      short loc_420F71
0x420F68: mov     ecx, eax
0x420F6A: call    sub_42A6E0
0x420F6F: jmp     short loc_420F73
0x420F71: xor     eax, eax
0x420F73: push    eax; BSExtraData *
0x420F74: mov     ecx, edi; ExtraDataList *
0x420F76: mov     [esp+20h+var_4], 0FFFFFFFFh
0x420F7E: mov     esi, eax
0x420F80: call    BaseExtraList_AddExtra
0x420F85: fld     [esp+1Ch+arg_0]
0x420F89: mov     al, [esp+1Ch+arg_8]
0x420F8D: mov     ecx, [esp+1Ch+arg_C]
0x420F91: fstp    dword ptr [esi+0Ch]
0x420F94: fld     [esp+1Ch+arg_4]
0x420F98: mov     [esi+14h], al
0x420F9B: fstp    dword ptr [esi+10h]
0x420F9E: mov     [esi+18h], ecx
0x420FA1: mov     ecx, [esp+1Ch+var_C]
0x420FA5: mov     large fs:0, ecx
0x420FAC: pop     ecx
0x420FAD: pop     edi
0x420FAE: pop     esi
0x420FAF: add     esp, 10h
0x420FB2: retn    10h
