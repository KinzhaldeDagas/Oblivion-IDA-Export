0x61CAA0: push    esi
0x61CAA1: mov     esi, ecx
0x61CAA3: mov     eax, [esi+6Ch]
0x61CAA6: cmp     eax, 0Eh
0x61CAA9: jz      loc_61CBF3
0x61CAAF: cmp     eax, 10h
0x61CAB2: jz      loc_61CBF3
0x61CAB8: fldz
0x61CABA: fcom    [esp+4+arg_8]
0x61CABE: fnstsw  ax
0x61CAC0: test    ah, 1
0x61CAC3: jz      loc_61CBF1
0x61CAC9: fcomp   [esp+4+arg_4]
0x61CACD: fnstsw  ax
0x61CACF: test    ah, 1
0x61CAD2: jz      loc_61CBF3
0x61CAD8: call    sub_615980
0x61CADD: fld     [esp+4+arg_8]
0x61CAE1: fcom    st(1)
0x61CAE3: fnstsw  ax
0x61CAE5: fstp    st(1)
0x61CAE7: test    ah, 41h
0x61CAEA: jnp     loc_61CBF1
0x61CAF0: push    edi
0x61CAF1: mov     edi, [esi+3Ch]
0x61CAF4: test    edi, edi
0x61CAF6: jz      loc_61CBEA
0x61CAFC: cmp     dword ptr [edi+58h], 0
0x61CB00: jz      loc_61CBEA
0x61CB06: push    0
0x61CB08: fstp    dword ptr [esi+170h]
0x61CB0E: mov     ecx, esi
0x61CB10: call    sub_6135F0
0x61CB15: push    eax
0x61CB16: push    edi
0x61CB17: call    sub_6131D0
0x61CB1C: add     esp, 0Ch
0x61CB1F: test    al, al
0x61CB21: jz      loc_61CBAE
0x61CB27: mov     al, [esi+192h]
0x61CB2D: shr     al, 1
0x61CB2F: not     al
0x61CB31: test    al, 1
0x61CB33: jz      short loc_61CBAE
0x61CB35: mov     ecx, esi
0x61CB37: call    sub_614BB0
0x61CB3C: mov     ecx, [esi+3Ch]
0x61CB3F: push    4
0x61CB41: call    sub_5E5850
0x61CB46: fstp    [esp+8+arg_8]
0x61CB4A: fld     [esp+8+arg_8]
0x61CB4E: fld     [esp+8+arg_4]
0x61CB52: fcom    st(1)
0x61CB54: fnstsw  ax
0x61CB56: test    ah, 5
0x61CB59: jp      short loc_61CB63
0x61CB5B: fxch    st(1)
0x61CB5D: fstp    [esp+8+arg_4]
0x61CB61: jmp     short loc_61CB69
0x61CB63: fstp    st(1)
0x61CB65: fst     [esp+8+arg_4]
0x61CB69: fld     dword ptr [esi+44h]
0x61CB6C: push    10h
0x61CB6E: fstp    dword ptr [esi+0D4h]
0x61CB74: mov     ecx, esi
0x61CB76: fld     [esp+0Ch+arg_4]
0x61CB7A: fstp    dword ptr [esi+0D8h]
0x61CB80: fstp    dword ptr [esi+0DCh]
0x61CB86: call    sub_619920
0x61CB8B: mov     ecx, esi
0x61CB8D: call    sub_6160B0
0x61CB92: mov     ecx, [esi+3Ch]
0x61CB95: mov     ecx, [ecx+58h]
0x61CB98: mov     edx, [ecx]
0x61CB9A: mov     eax, [edx+2C4h]
0x61CBA0: push    1
0x61CBA2: push    102h
0x61CBA7: call    eax
0x61CBA9: pop     edi
0x61CBAA: pop     esi
0x61CBAB: retn    0Ch
0x61CBAE: fld     dword ptr [esi+44h]
0x61CBB1: push    0Eh
0x61CBB3: fstp    dword ptr [esi+0D4h]
0x61CBB9: mov     ecx, esi
0x61CBBB: fld     [esp+0Ch+arg_4]
0x61CBBF: fstp    dword ptr [esi+0D8h]
0x61CBC5: fld     dword ptr ds:0A30634h
0x61CBCB: fstp    dword ptr [esi+0DCh]
0x61CBD1: call    sub_619920
0x61CBD6: mov     ecx, [esi+3Ch]
0x61CBD9: mov     edx, [ecx]
0x61CBDB: mov     eax, [edx+180h]
0x61CBE1: push    0
0x61CBE3: call    eax
0x61CBE5: pop     edi
0x61CBE6: pop     esi
0x61CBE7: retn    0Ch
0x61CBEA: pop     edi
0x61CBEB: fstp    st
0x61CBED: pop     esi
0x61CBEE: retn    0Ch
0x61CBF1: fstp    st
0x61CBF3: pop     esi
0x61CBF4: retn    0Ch
