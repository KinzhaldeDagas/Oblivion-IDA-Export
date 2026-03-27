0x692B60: push    ecx
0x692B61: push    esi
0x692B62: push    edi
0x692B63: mov     edi, ecx
0x692B65: mov     ecx, [edi+20h]; this
0x692B68: test    ecx, ecx
0x692B6A: jz      short loc_692B75
0x692B6C: call    MagicTarget_GetParentActor
0x692B71: mov     esi, eax
0x692B73: jmp     short loc_692B77
0x692B75: xor     esi, esi
0x692B77: mov     ecx, edi
0x692B79: call    ValueModifierEffect_Apply
0x692B7E: test    esi, esi
0x692B80: jz      short loc_692BF3
0x692B82: mov     eax, [esi]
0x692B84: mov     edx, [eax+154h]
0x692B8A: mov     ecx, esi
0x692B8C: call    edx
0x692B8E: test    eax, eax
0x692B90: jz      short loc_692BF3
0x692B92: mov     eax, [esi]
0x692B94: mov     edx, [eax+288h]
0x692B9A: push    46h ; 'F'
0x692B9C: mov     ecx, esi
0x692B9E: call    edx
0x692BA0: fdiv    qword ptr ds:0A309F0h
0x692BA6: fld1
0x692BA8: fsubrp  st(1), st
0x692BAA: fstp    [esp+0Ch+var_4]
0x692BAE: fldz
0x692BB0: fld     [esp+0Ch+var_4]
0x692BB4: fcom    st(1)
0x692BB6: fnstsw  ax
0x692BB8: test    ah, 5
0x692BBB: jp      short loc_692BC5
0x692BBD: fstp    st
0x692BBF: fstp    [esp+0Ch+var_4]
0x692BC3: jmp     short loc_692BD6
0x692BC5: fstp    st(1)
0x692BC7: fld1
0x692BC9: fcom    st(1)
0x692BCB: fnstsw  ax
0x692BCD: fstp    st(1)
0x692BCF: test    ah, 5
0x692BD2: jnp     short loc_692BBF
0x692BD4: fstp    st
0x692BD6: mov     eax, [esi]
0x692BD8: fld     [esp+0Ch+var_4]
0x692BDC: mov     edx, [eax+154h]
0x692BE2: push    ecx
0x692BE3: mov     ecx, esi
0x692BE5: fstp    [esp+10h+var_10]; float
0x692BE8: call    edx
0x692BEA: push    eax; int
0x692BEB: call    sub_7B8440
0x692BF0: add     esp, 8
0x692BF3: pop     edi
0x692BF4: pop     esi
0x692BF5: pop     ecx
0x692BF6: retn
