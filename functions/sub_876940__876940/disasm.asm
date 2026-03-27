0x876940: push    0FFFFFFFFh
0x876942: push    offset SEH_882120
0x876947: mov     eax, large fs:0
0x87694D: push    eax
0x87694E: push    ebx
0x87694F: push    ebp
0x876950: push    esi
0x876951: push    edi
0x876952: mov     eax, ds:0B30AACh
0x876957: xor     eax, esp
0x876959: push    eax
0x87695A: lea     eax, [esp+20h+var_C]
0x87695E: mov     large fs:0, eax
0x876964: mov     edi, ecx
0x876966: mov     eax, [esp+20h+arg_8]
0x87696A: mov     ebx, [eax+0Ch]
0x87696D: mov     esi, ds:0B47684h
0x876973: push    ebx
0x876974: call    sub_848E50
0x876979: mov     edx, [edi]
0x87697B: mov     eax, [esp+20h+arg_0]
0x87697F: mov     edx, [edx+0BCh]
0x876985: push    0
0x876987: push    ebx
0x876988: push    eax
0x876989: mov     ecx, edi
0x87698B: call    edx
0x87698D: mov     eax, [esi+24h]
0x876990: mov     ebp, [esp+20h+arg_C]
0x876994: mov     ebx, [eax]
0x876996: mov     edx, [ebp+0]
0x876999: mov     eax, [edx+88h]
0x87699F: push    0
0x8769A1: mov     ecx, ebp
0x8769A3: mov     [esp+24h+arg_8], ebx
0x8769A7: call    eax
0x8769A9: mov     ebx, [ebx+4]
0x8769AC: cmp     ebx, eax
0x8769AE: mov     [esp+20h+arg_0], eax
0x8769B2: jz      short loc_8769ED
0x8769B4: test    ebx, ebx
0x8769B6: jz      short loc_8769D8
0x8769B8: lea     ecx, [ebx+4]
0x8769BB: push    ecx; lpAddend
0x8769BC: call    dword ptr ds:0A2807Ch
0x8769C2: test    eax, eax
0x8769C4: jnz     short loc_8769D4
0x8769C6: test    ebx, ebx
0x8769C8: jz      short loc_8769D4
0x8769CA: mov     edx, [ebx]
0x8769CC: mov     eax, [edx]
0x8769CE: push    1
0x8769D0: mov     ecx, ebx
0x8769D2: call    eax
0x8769D4: mov     eax, [esp+20h+arg_0]
0x8769D8: test    eax, eax
0x8769DA: mov     ecx, [esp+20h+arg_8]
0x8769DE: mov     [ecx+4], eax
0x8769E1: jz      short loc_8769ED
0x8769E3: add     eax, 4
0x8769E6: push    eax; lpAddend
0x8769E7: call    dword ptr ds:0A28078h
0x8769ED: mov     edx, [esi+24h]
0x8769F0: mov     ebx, [edx+4]
0x8769F3: push    0
0x8769F5: push    ebp
0x8769F6: mov     ecx, edi
0x8769F8: mov     [esp+28h+arg_8], ebx
0x8769FC: call    sub_848FD0
0x876A01: mov     ebx, [ebx+4]
0x876A04: cmp     ebx, eax
0x876A06: mov     [esp+20h+arg_0], eax
0x876A0A: jz      short loc_876A45
0x876A0C: test    ebx, ebx
0x876A0E: jz      short loc_876A30
0x876A10: lea     eax, [ebx+4]
0x876A13: push    eax; lpAddend
0x876A14: call    dword ptr ds:0A2807Ch
0x876A1A: test    eax, eax
0x876A1C: jnz     short loc_876A2C
0x876A1E: test    ebx, ebx
0x876A20: jz      short loc_876A2C
0x876A22: mov     edx, [ebx]
0x876A24: mov     eax, [edx]
0x876A26: push    1
0x876A28: mov     ecx, ebx
0x876A2A: call    eax
0x876A2C: mov     eax, [esp+20h+arg_0]
0x876A30: test    eax, eax
0x876A32: mov     ecx, [esp+20h+arg_8]
0x876A36: mov     [ecx+4], eax
0x876A39: jz      short loc_876A45
0x876A3B: add     eax, 4
0x876A3E: push    eax; lpAddend
0x876A3F: call    dword ptr ds:0A28078h
0x876A45: mov     edx, [esi+24h]
0x876A48: mov     eax, [edx+10h]
0x876A4B: mov     edx, [ebp+0]
0x876A4E: mov     [esp+20h+arg_8], eax
0x876A52: mov     eax, [edx+90h]
0x876A58: push    0
0x876A5A: mov     ecx, ebp
0x876A5C: call    eax
0x876A5E: mov     ecx, [esp+20h+arg_8]
0x876A62: mov     ebp, [ecx+4]
0x876A65: mov     ebx, eax
0x876A67: cmp     ebp, ebx
0x876A69: jz      short loc_876AA1
0x876A6B: test    ebp, ebp
0x876A6D: jz      short loc_876A8C
0x876A6F: lea     edx, [ebp+4]
0x876A72: push    edx; lpAddend
0x876A73: call    dword ptr ds:0A2807Ch
0x876A79: test    eax, eax
0x876A7B: jnz     short loc_876A8C
0x876A7D: test    ebp, ebp
0x876A7F: jz      short loc_876A8C
0x876A81: mov     eax, [ebp+0]
0x876A84: mov     edx, [eax]
0x876A86: push    1
0x876A88: mov     ecx, ebp
0x876A8A: call    edx
0x876A8C: test    ebx, ebx
0x876A8E: mov     eax, [esp+20h+arg_8]
0x876A92: mov     [eax+4], ebx
0x876A95: jz      short loc_876AA1
0x876A97: add     ebx, 4
0x876A9A: push    ebx; lpAddend
0x876A9B: call    dword ptr ds:0A28078h
0x876AA1: mov     ecx, [esi+24h]
0x876AA4: mov     ebp, [ecx+14h]
0x876AA7: mov     eax, ds:0B43110h
0x876AAC: mov     ebx, [ebp+4]
0x876AAF: cmp     ebx, eax
0x876AB1: mov     ecx, eax
0x876AB3: mov     [esp+20h+arg_8], ecx
0x876AB7: jz      short loc_876AEE
0x876AB9: test    ebx, ebx
0x876ABB: jz      short loc_876ADD
0x876ABD: lea     edx, [ebx+4]
0x876AC0: push    edx; lpAddend
0x876AC1: call    dword ptr ds:0A2807Ch
0x876AC7: test    eax, eax
0x876AC9: jnz     short loc_876AD9
0x876ACB: test    ebx, ebx
0x876ACD: jz      short loc_876AD9
0x876ACF: mov     eax, [ebx]
0x876AD1: mov     edx, [eax]
0x876AD3: push    1
0x876AD5: mov     ecx, ebx
0x876AD7: call    edx
0x876AD9: mov     ecx, [esp+20h+arg_8]
0x876ADD: test    ecx, ecx
0x876ADF: mov     [ebp+4], ecx
0x876AE2: jz      short loc_876AEE
0x876AE4: add     ecx, 4
0x876AE7: push    ecx; lpAddend
0x876AE8: call    dword ptr ds:0A28078h
0x876AEE: mov     ebx, 1
0x876AF3: add     [esi+60h], ebx
0x876AF6: mov     [esp+20h+arg_8], esi
0x876AFA: mov     ecx, [edi+38h]
0x876AFD: lea     eax, [esp+20h+arg_8]
0x876B01: push    eax
0x876B02: push    ecx
0x876B03: lea     ecx, [edi+40h]
0x876B06: mov     [esp+28h+var_4], 0
0x876B0E: call    sub_76CE40
0x876B13: or      eax, 0FFFFFFFFh
0x876B16: add     [esi+60h], eax
0x876B19: mov     [esp+20h+var_4], eax
0x876B1D: jnz     short loc_876B26
0x876B1F: mov     ecx, esi
0x876B21: call    sub_7604D0
0x876B26: add     [edi+38h], ebx
0x876B29: mov     ecx, [esp+20h+var_C]
0x876B2D: mov     large fs:0, ecx
0x876B34: pop     ecx
0x876B35: pop     edi
0x876B36: pop     esi
0x876B37: pop     ebp
0x876B38: pop     ebx
0x876B39: add     esp, 0Ch
0x876B3C: retn    10h
