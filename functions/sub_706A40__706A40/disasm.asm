0x706A40: push    0FFFFFFFFh
0x706A42: push    offset SEH_8C8970
0x706A47: mov     eax, large fs:0
0x706A4D: push    eax
0x706A4E: push    ecx
0x706A4F: push    esi
0x706A50: push    edi
0x706A51: mov     eax, ds:0B30AACh
0x706A56: xor     eax, esp
0x706A58: push    eax
0x706A59: lea     eax, [esp+1Ch+var_C]
0x706A5D: mov     large fs:0, eax
0x706A63: push    1Ch; Size
0x706A65: call    FormHeapAlloc
0x706A6A: mov     esi, eax
0x706A6C: add     esp, 4
0x706A6F: mov     [esp+1Ch+var_10], esi
0x706A73: test    esi, esi
0x706A75: mov     [esp+1Ch+var_4], 0
0x706A7D: jz      short loc_706A94
0x706A7F: mov     ecx, esi; this
0x706A81: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x706A86: mov     dword ptr [esi], offset ??_7NiWireframeProperty@@6B@; const NiWireframeProperty::`vftable'
0x706A8C: mov     word ptr [esi+18h], 0
0x706A92: jmp     short loc_706A96
0x706A94: xor     esi, esi
0x706A96: mov     eax, ds:0B3F984h
0x706A9B: cmp     eax, esi
0x706A9D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x706AA5: jz      short loc_706ADD
0x706AA7: test    eax, eax
0x706AA9: jz      short loc_706AC9
0x706AAB: mov     edi, eax
0x706AAD: add     eax, 4
0x706AB0: push    eax; lpAddend
0x706AB1: call    dword ptr ds:0A2807Ch
0x706AB7: test    eax, eax
0x706AB9: jnz     short loc_706AC9
0x706ABB: test    edi, edi
0x706ABD: jz      short loc_706AC9
0x706ABF: mov     eax, [edi]
0x706AC1: mov     edx, [eax]
0x706AC3: push    1
0x706AC5: mov     ecx, edi
0x706AC7: call    edx
0x706AC9: test    esi, esi
0x706ACB: mov     ds:0B3F984h, esi
0x706AD1: jz      short loc_706ADD
0x706AD3: add     esi, 4
0x706AD6: push    esi; lpAddend
0x706AD7: call    dword ptr ds:0A28078h
0x706ADD: mov     ecx, dword ptr [esp+1Ch+var_C]
0x706AE1: mov     large fs:0, ecx
0x706AE8: pop     ecx
0x706AE9: pop     edi
0x706AEA: pop     esi
0x706AEB: add     esp, 10h
0x706AEE: retn
