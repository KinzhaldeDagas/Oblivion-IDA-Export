0x477DB0: push    0FFFFFFFFh
0x477DB2: push    offset SEH_477DB0
0x477DB7: mov     eax, large fs:0
0x477DBD: push    eax
0x477DBE: push    ebx
0x477DBF: push    esi
0x477DC0: push    edi
0x477DC1: mov     eax, ds:0B30AACh
0x477DC6: xor     eax, esp
0x477DC8: push    eax
0x477DC9: lea     eax, [esp+1Ch+var_C]
0x477DCD: mov     large fs:0, eax
0x477DD3: mov     ebx, ecx
0x477DD5: mov     edi, [esp+1Ch+arg_8]
0x477DD9: test    edi, edi
0x477DDB: mov     esi, [esp+1Ch+arg_C]
0x477DDF: jz      short loc_477DE6
0x477DE1: cmp     edi, 5
0x477DE4: jnz     short loc_477DEB
0x477DE6: mov     esi, 3
0x477DEB: push    2Ch ; ','; Size
0x477DED: call    FormHeapAlloc
0x477DF2: add     esp, 4
0x477DF5: mov     [esp+1Ch+arg_C], eax
0x477DF9: test    eax, eax
0x477DFB: mov     [esp+1Ch+var_4], 0
0x477E03: jz      short loc_477E1C
0x477E05: mov     ecx, [esp+1Ch+arg_4]
0x477E09: mov     edx, [esp+1Ch+arg_0]
0x477E0D: push    0
0x477E0F: push    ecx
0x477E10: push    esi
0x477E11: push    edi
0x477E12: push    edx
0x477E13: mov     ecx, eax
0x477E15: call    sub_474C50
0x477E1A: jmp     short loc_477E1E
0x477E1C: xor     eax, eax
0x477E1E: mov     ecx, ebx; this
0x477E20: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x477E28: mov     [ebx+0D0h], eax
0x477E2E: call    sub_476380
0x477E33: mov     ecx, [esp+1Ch+var_C]
0x477E37: mov     large fs:0, ecx
0x477E3E: pop     ecx
0x477E3F: pop     edi
0x477E40: pop     esi
0x477E41: pop     ebx
0x477E42: add     esp, 0Ch
0x477E45: retn    10h
