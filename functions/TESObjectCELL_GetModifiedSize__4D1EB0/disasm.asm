0x4D1EB0: push    ecx
0x4D1EB1: push    ebx
0x4D1EB2: mov     ebx, [esp+8+arg_0]
0x4D1EB6: test    ebx, 8000000h
0x4D1EBC: push    ebp
0x4D1EBD: push    esi
0x4D1EBE: push    edi
0x4D1EBF: mov     edi, ecx
0x4D1EC1: mov     [esp+14h+var_4], 0
0x4D1EC9: jz      short loc_4D1ED3
0x4D1ECB: mov     [esp+14h+var_4], 4
0x4D1ED3: push    ebx
0x4D1ED4: call    TESForm_ModifiedFormSize
0x4D1ED9: mov     si, word ptr [esp+14h+var_4]
0x4D1EDE: mov     ecx, ds:0B33B00h
0x4D1EE4: add     si, ax
0x4D1EE7: mov     word ptr [esp+14h+var_4], si
0x4D1EEC: movzx   ebp, si
0x4D1EEF: call    sub_45A170
0x4D1EF4: test    al, al
0x4D1EF6: jz      short loc_4D1F02
0x4D1EF8: add     [esp+14h+var_4], 6
0x4D1EFD: mov     si, word ptr [esp+14h+var_4]
0x4D1F02: test    bl, 8
0x4D1F05: jz      short loc_4D1F11
0x4D1F07: add     [esp+14h+var_4], 1
0x4D1F0C: mov     si, word ptr [esp+14h+var_4]
0x4D1F11: test    ebx, 10000000h
0x4D1F17: jz      short loc_4D1F34
0x4D1F19: lea     ecx, [edi+28h]
0x4D1F1C: call    sub_420B50
0x4D1F21: mov     edx, [eax]
0x4D1F23: mov     ecx, eax
0x4D1F25: mov     eax, [edx+8]
0x4D1F28: push    0
0x4D1F2A: call    eax
0x4D1F2C: add     si, ax
0x4D1F2F: mov     word ptr [esp+14h+var_4], si
0x4D1F34: test    bl, 10h
0x4D1F37: jz      short loc_4D1F64
0x4D1F39: mov     eax, [edi+1Ch]
0x4D1F3C: add     [esp+14h+var_4], 1
0x4D1F41: test    eax, eax
0x4D1F43: jnz     short loc_4D1F4A
0x4D1F45: mov     eax, offset EmptyString
0x4D1F4A: lea     edx, [eax+1]
0x4D1F4D: lea     ecx, [ecx+0]
0x4D1F50: mov     cl, [eax]
0x4D1F52: add     eax, 1
0x4D1F55: test    cl, cl
0x4D1F57: jnz     short loc_4D1F50
0x4D1F59: sub     eax, edx
0x4D1F5B: add     [esp+14h+var_4], eax
0x4D1F5F: mov     si, word ptr [esp+14h+var_4]
0x4D1F64: test    bl, 20h
0x4D1F67: jz      short loc_4D1F73
0x4D1F69: add     [esp+14h+var_4], 4
0x4D1F6E: mov     si, word ptr [esp+14h+var_4]
0x4D1F73: test    ebx, 1000000h
0x4D1F79: jz      short loc_4D1F86
0x4D1F7B: mov     ecx, [edi+44h]
0x4D1F7E: call    sub_4E5A40
0x4D1F83: add     si, ax
0x4D1F86: cmp     byte ptr ds:0B05BACh, 0
0x4D1F8D: jz      short loc_4D2009
0x4D1F8F: mov     ecx, ds:0B33B00h
0x4D1F95: mov     edi, [ecx+84h]
0x4D1F9B: test    edi, edi
0x4D1F9D: jz      short loc_4D1FE9
0x4D1F9F: mov     edx, [edi]
0x4D1FA1: push    edx; a1
0x4D1FA2: call    TESForm_LookupByFormID
0x4D1FA7: mov     ecx, [edi+5]
0x4D1FAA: mov     edx, [eax]
0x4D1FAC: add     esp, 4
0x4D1FAF: push    offset a__TesSharedT_5; "..\\TES Shared\\TESObjectCELL.cpp"
0x4D1FB4: push    313Ah
0x4D1FB9: push    ecx
0x4D1FBA: mov     ecx, eax
0x4D1FBC: mov     eax, [edx+0D4h]
0x4D1FC2: call    eax
0x4D1FC4: mov     ecx, [edi]
0x4D1FC6: push    eax
0x4D1FC7: movzx   edx, bp
0x4D1FCA: movzx   eax, si
0x4D1FCD: push    ecx
0x4D1FCE: sub     eax, edx
0x4D1FD0: push    eax; ArgList
0x4D1FD1: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x4D1FD6: call    sub_40FEC0
0x4D1FDB: add     esp, 1Ch
0x4D1FDE: pop     edi
0x4D1FDF: mov     ax, si
0x4D1FE2: pop     esi
0x4D1FE3: pop     ebp
0x4D1FE4: pop     ebx
0x4D1FE5: pop     ecx
0x4D1FE6: retn    4
0x4D1FE9: movzx   ecx, bp
0x4D1FEC: push    offset a__TesSharedT_5; "..\\TES Shared\\TESObjectCELL.cpp"
0x4D1FF1: movzx   edx, si
0x4D1FF4: push    313Ah
0x4D1FF9: sub     edx, ecx
0x4D1FFB: push    edx; ArgList
0x4D1FFC: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x4D2001: call    sub_40FEC0
0x4D2006: add     esp, 10h
0x4D2009: pop     edi
0x4D200A: mov     ax, si
0x4D200D: pop     esi
0x4D200E: pop     ebp
0x4D200F: pop     ebx
0x4D2010: pop     ecx
0x4D2011: retn    4
