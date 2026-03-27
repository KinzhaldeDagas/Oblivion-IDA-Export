0x5499E0: push    0FFFFFFFFh
0x5499E2: push    offset SEH_6E3250
0x5499E7: mov     eax, large fs:0
0x5499ED: push    eax
0x5499EE: push    esi
0x5499EF: push    edi
0x5499F0: mov     eax, ds:0B30AACh
0x5499F5: xor     eax, esp
0x5499F7: push    eax
0x5499F8: lea     eax, [esp+18h+var_C]
0x5499FC: mov     large fs:0, eax
0x549A02: mov     esi, ecx
0x549A04: mov     edi, [esp+18h+arg_0]
0x549A08: lea     eax, [edi+1]
0x549A0B: cmp     eax, 0Eh
0x549A0E: ja      loc_549AE1
0x549A14: fldz
0x549A16: fld     [esp+18h+arg_4]
0x549A1A: fcom    st(1)
0x549A1C: fnstsw  ax
0x549A1E: fstp    st(1)
0x549A20: test    ah, 5
0x549A23: jnp     loc_549ADF
0x549A29: fld1
0x549A2B: fcompp
0x549A2D: fnstsw  ax
0x549A2F: test    ah, 5
0x549A32: jnp     loc_549AE1
0x549A38: mov     ecx, [esi+0Ch]
0x549A3B: test    ecx, ecx
0x549A3D: jz      short loc_549A4A
0x549A3F: mov     edx, [ecx]
0x549A41: mov     eax, [edx+20h]
0x549A44: push    1
0x549A46: call    eax
0x549A48: jmp     short loc_549A87
0x549A4A: push    14h; Size
0x549A4C: call    FormHeapAlloc
0x549A51: add     esp, 4
0x549A54: mov     [esp+18h+arg_0], eax
0x549A58: test    eax, eax
0x549A5A: mov     [esp+18h+var_4], 0
0x549A62: jz      short loc_549A71
0x549A64: push    0Dh
0x549A66: push    1
0x549A68: mov     ecx, eax
0x549A6A: call    sub_54EA00
0x549A6F: jmp     short loc_549A73
0x549A71: xor     eax, eax
0x549A73: mov     [esi+0Ch], eax
0x549A76: mov     edx, [eax]
0x549A78: mov     ecx, eax
0x549A7A: mov     eax, [edx+38h]
0x549A7D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x549A85: call    eax
0x549A87: cmp     edi, 0FFFFFFFFh
0x549A8A: jz      short loc_549AE1
0x549A8C: fldz
0x549A8E: fld     [esp+18h+arg_4]
0x549A92: fucom   st(1)
0x549A94: fnstsw  ax
0x549A96: fstp    st(1)
0x549A98: test    ah, 44h
0x549A9B: jnp     short loc_549ADF
0x549A9D: mov     ecx, [esi+0Ch]
0x549AA0: mov     edx, [ecx]
0x549AA2: mov     eax, [edx+4Ch]
0x549AA5: push    ecx
0x549AA6: fstp    [esp+1Ch+var_1C]
0x549AA9: push    edi
0x549AAA: call    eax
0x549AAC: mov     edx, [esi+10h]
0x549AAF: mov     eax, [esi+0Ch]
0x549AB2: mov     edx, [edx+2Ch]
0x549AB5: lea     ecx, [esi+10h]
0x549AB8: push    eax
0x549AB9: call    edx
0x549ABB: test    al, al
0x549ABD: jnz     short loc_549AE1
0x549ABF: mov     eax, [esi]
0x549AC1: mov     edx, [eax+0D4h]
0x549AC7: mov     ecx, esi
0x549AC9: call    edx
0x549ACB: mov     ecx, [esp+18h+var_C]
0x549ACF: mov     large fs:0, ecx
0x549AD6: pop     ecx
0x549AD7: pop     edi
0x549AD8: pop     esi
0x549AD9: add     esp, 0Ch
0x549ADC: retn    8
0x549ADF: fstp    st
0x549AE1: mov     ecx, [esp+18h+var_C]
0x549AE5: mov     large fs:0, ecx
0x549AEC: pop     ecx
0x549AED: pop     edi
0x549AEE: pop     esi
0x549AEF: add     esp, 0Ch
0x549AF2: retn    8
