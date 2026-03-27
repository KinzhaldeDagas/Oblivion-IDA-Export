0x6C5AB0: push    0FFFFFFFFh
0x6C5AB2: push    offset SEH_787830
0x6C5AB7: mov     eax, large fs:0
0x6C5ABD: push    eax
0x6C5ABE: push    ebx
0x6C5ABF: push    esi
0x6C5AC0: push    edi
0x6C5AC1: mov     eax, ds:0B30AACh
0x6C5AC6: xor     eax, esp
0x6C5AC8: push    eax
0x6C5AC9: lea     eax, [esp+1Ch+var_C]
0x6C5ACD: mov     large fs:0, eax
0x6C5AD3: mov     esi, ecx
0x6C5AD5: mov     ebx, [esp+1Ch+arg_0]
0x6C5AD9: push    ebx
0x6C5ADA: call    sub_715F10
0x6C5ADF: test    al, al
0x6C5AE1: jnz     short loc_6C5AF8
0x6C5AE3: mov     ecx, [esp+1Ch+var_C]
0x6C5AE7: mov     large fs:0, ecx
0x6C5AEE: pop     ecx
0x6C5AEF: pop     edi
0x6C5AF0: pop     esi
0x6C5AF1: pop     ebx
0x6C5AF2: add     esp, 0Ch
0x6C5AF5: retn    4
0x6C5AF8: xor     edi, edi
0x6C5AFA: cmp     [esi+46h], di
0x6C5AFE: jbe     short loc_6C5B1D
0x6C5B00: mov     eax, [esi+40h]
0x6C5B03: mov     ecx, [eax+edi*4]
0x6C5B06: test    ecx, ecx
0x6C5B08: jz      short loc_6C5B12
0x6C5B0A: mov     edx, [ecx]
0x6C5B0C: mov     eax, [edx+24h]
0x6C5B0F: push    ebx
0x6C5B10: call    eax
0x6C5B12: movzx   ecx, word ptr [esi+46h]
0x6C5B16: add     edi, 1
0x6C5B19: cmp     edi, ecx
0x6C5B1B: jb      short loc_6C5B00
0x6C5B1D: mov     ecx, [esi+7Ch]
0x6C5B20: test    ecx, ecx
0x6C5B22: jz      short loc_6C5B2E
0x6C5B24: mov     edx, [ecx]
0x6C5B26: mov     eax, [edx+24h]
0x6C5B29: push    ebx
0x6C5B2A: call    eax
0x6C5B2C: jmp     short loc_6C5B99
0x6C5B2E: push    20h ; ' '; Size
0x6C5B30: call    FormHeapAlloc
0x6C5B35: add     esp, 4
0x6C5B38: mov     [esp+1Ch+arg_0], eax
0x6C5B3C: test    eax, eax
0x6C5B3E: mov     [esp+1Ch+var_4], 0
0x6C5B46: jz      short loc_6C5B57
0x6C5B48: mov     edx, [esi+30h]
0x6C5B4B: push    edx
0x6C5B4C: mov     ecx, eax; this
0x6C5B4E: call    ??0NiDefaultAVObjectPalette@@QAE@XZ; NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(void)
0x6C5B53: mov     ebx, eax
0x6C5B55: jmp     short loc_6C5B59
0x6C5B57: xor     ebx, ebx
0x6C5B59: mov     edi, [esi+7Ch]
0x6C5B5C: cmp     edi, ebx
0x6C5B5E: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6C5B66: jz      short loc_6C5B99
0x6C5B68: test    edi, edi
0x6C5B6A: jz      short loc_6C5B88
0x6C5B6C: lea     ecx, [edi+4]
0x6C5B6F: push    ecx; lpAddend
0x6C5B70: call    dword ptr ds:0A2807Ch
0x6C5B76: test    eax, eax
0x6C5B78: jnz     short loc_6C5B88
0x6C5B7A: test    edi, edi
0x6C5B7C: jz      short loc_6C5B88
0x6C5B7E: mov     edx, [edi]
0x6C5B80: mov     eax, [edx]
0x6C5B82: push    1
0x6C5B84: mov     ecx, edi
0x6C5B86: call    eax
0x6C5B88: test    ebx, ebx
0x6C5B8A: mov     [esi+7Ch], ebx
0x6C5B8D: jz      short loc_6C5B99
0x6C5B8F: add     ebx, 4
0x6C5B92: push    ebx; lpAddend
0x6C5B93: call    dword ptr ds:0A28078h
0x6C5B99: mov     al, 1
0x6C5B9B: mov     ecx, [esp+1Ch+var_C]
0x6C5B9F: mov     large fs:0, ecx
0x6C5BA6: pop     ecx
0x6C5BA7: pop     edi
0x6C5BA8: pop     esi
0x6C5BA9: pop     ebx
0x6C5BAA: add     esp, 0Ch
0x6C5BAD: retn    4
