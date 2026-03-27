0x73DBB0: push    0FFFFFFFFh
0x73DBB2: push    offset SEH_8C8970
0x73DBB7: mov     eax, large fs:0
0x73DBBD: push    eax
0x73DBBE: push    ecx
0x73DBBF: push    esi
0x73DBC0: push    edi
0x73DBC1: mov     eax, ds:0B30AACh
0x73DBC6: xor     eax, esp
0x73DBC8: push    eax
0x73DBC9: lea     eax, [esp+1Ch+var_C]
0x73DBCD: mov     large fs:0, eax
0x73DBD3: push    1Ch; Size
0x73DBD5: call    FormHeapAlloc
0x73DBDA: mov     esi, eax
0x73DBDC: add     esp, 4
0x73DBDF: mov     [esp+1Ch+var_10], esi
0x73DBE3: test    esi, esi
0x73DBE5: mov     [esp+1Ch+var_4], 0
0x73DBED: jz      short loc_73DC04
0x73DBEF: mov     ecx, esi; this
0x73DBF1: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x73DBF6: mov     dword ptr [esi], offset ??_7NiShadeProperty@@6B@; const NiShadeProperty::`vftable'
0x73DBFC: mov     word ptr [esi+18h], 1
0x73DC02: jmp     short loc_73DC06
0x73DC04: xor     esi, esi
0x73DC06: mov     edi, ds:0B401ACh
0x73DC0C: cmp     edi, esi
0x73DC0E: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x73DC16: jz      short loc_73DC4C
0x73DC18: test    edi, edi
0x73DC1A: jz      short loc_73DC38
0x73DC1C: lea     eax, [edi+4]
0x73DC1F: push    eax; lpAddend
0x73DC20: call    dword ptr ds:0A2807Ch
0x73DC26: test    eax, eax
0x73DC28: jnz     short loc_73DC38
0x73DC2A: test    edi, edi
0x73DC2C: jz      short loc_73DC38
0x73DC2E: mov     edx, [edi]
0x73DC30: mov     eax, [edx]
0x73DC32: push    1
0x73DC34: mov     ecx, edi
0x73DC36: call    eax
0x73DC38: test    esi, esi
0x73DC3A: mov     ds:0B401ACh, esi
0x73DC40: jz      short loc_73DC4C
0x73DC42: add     esi, 4
0x73DC45: push    esi; lpAddend
0x73DC46: call    dword ptr ds:0A28078h
0x73DC4C: mov     ecx, dword ptr [esp+1Ch+var_C]
0x73DC50: mov     large fs:0, ecx
0x73DC57: pop     ecx
0x73DC58: pop     edi
0x73DC59: pop     esi
0x73DC5A: add     esp, 10h
0x73DC5D: retn
