0x7B8940: push    esi
0x7B8941: mov     esi, [esp+4+arg_0]
0x7B8945: test    esi, esi
0x7B8947: jz      short loc_7B898A
0x7B8949: mov     ecx, esi; this
0x7B894B: call    NiAVObject_InitializePropertyState
0x7B8950: mov     ecx, ds:0B42EB4h
0x7B8956: xor     eax, eax
0x7B8958: test    ecx, ecx
0x7B895A: jz      short loc_7B8962
0x7B895C: push    esi
0x7B895D: call    ecx ; dword_B42EB4
0x7B895F: add     esp, 4
0x7B8962: mov     ecx, [esp+4+arg_8]
0x7B8966: mov     edx, [esp+4+arg_4]
0x7B896A: push    ebx
0x7B896B: push    eax
0x7B896C: mov     eax, [esp+0Ch+arg_C]
0x7B8970: push    eax
0x7B8971: push    ecx
0x7B8972: push    edx
0x7B8973: push    esi
0x7B8974: call    sub_7B7FC0
0x7B8979: add     esp, 14h
0x7B897C: mov     ecx, esi; this
0x7B897E: mov     bl, al
0x7B8980: call    NiAVObject_InitializePropertyState
0x7B8985: mov     al, bl
0x7B8987: pop     ebx
0x7B8988: pop     esi
0x7B8989: retn
0x7B898A: xor     al, al
0x7B898C: pop     esi
0x7B898D: retn
