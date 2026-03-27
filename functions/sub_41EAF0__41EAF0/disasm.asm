0x41EAF0: push    0FFFFFFFFh
0x41EAF2: push    offset SEH_8C8970
0x41EAF7: mov     eax, large fs:0
0x41EAFD: push    eax
0x41EAFE: push    ecx
0x41EAFF: push    esi
0x41EB00: push    edi
0x41EB01: mov     eax, ___security_cookie
0x41EB06: xor     eax, esp
0x41EB08: push    eax
0x41EB09: lea     eax, [esp+1Ch+var_C]
0x41EB0D: mov     large fs:0, eax
0x41EB13: mov     edi, ecx
0x41EB15: push    31h ; '1'; a2
0x41EB17: call    BaseExtraList_GetExtraData
0x41EB1C: mov     esi, eax
0x41EB1E: test    esi, esi
0x41EB20: jz      short loc_41EB37
0x41EB22: mov     eax, [esi+0Ch]
0x41EB25: push    eax
0x41EB26: call    FormHeapFree
0x41EB2B: mov     ecx, [esp+20h+arg_0]
0x41EB2F: add     esp, 4
0x41EB32: mov     [esi+0Ch], ecx
0x41EB35: jmp     short loc_41EB73
0x41EB37: push    10h; Size
0x41EB39: call    FormHeapAlloc
0x41EB3E: add     esp, 4
0x41EB41: mov     [esp+1Ch+var_10], eax
0x41EB45: test    eax, eax
0x41EB47: mov     [esp+1Ch+var_4], 0
0x41EB4F: jz      short loc_41EB61
0x41EB51: mov     edx, [esp+1Ch+arg_0]
0x41EB55: push    edx
0x41EB56: mov     ecx, eax
0x41EB58: call    sub_429A80
0x41EB5D: mov     esi, eax
0x41EB5F: jmp     short loc_41EB63
0x41EB61: xor     esi, esi
0x41EB63: push    esi; BSExtraData *
0x41EB64: mov     ecx, edi; ExtraDataList *
0x41EB66: mov     [esp+20h+var_4], 0FFFFFFFFh
0x41EB6E: call    BaseExtraList_AddExtra
0x41EB73: mov     eax, esi
0x41EB75: mov     ecx, [esp+1Ch+var_C]
0x41EB79: mov     large fs:0, ecx
0x41EB80: pop     ecx
0x41EB81: pop     edi
0x41EB82: pop     esi
0x41EB83: add     esp, 10h
0x41EB86: retn    4
