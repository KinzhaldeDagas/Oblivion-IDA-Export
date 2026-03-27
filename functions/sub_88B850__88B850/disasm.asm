0x88B850: push    ebp
0x88B851: mov     ebp, esp
0x88B853: and     esp, 0FFFFFFF0h
0x88B856: push    0FFFFFFFFh
0x88B858: push    offset SEH_88B850
0x88B85D: mov     eax, large fs:0
0x88B863: push    eax
0x88B864: sub     esp, 78h
0x88B867: mov     eax, ds:0B30AACh
0x88B86C: xor     eax, esp
0x88B86E: mov     [esp+84h+var_14], eax
0x88B872: push    ebx
0x88B873: push    esi
0x88B874: push    edi
0x88B875: mov     eax, ds:0B30AACh
0x88B87A: xor     eax, esp
0x88B87C: push    eax
0x88B87D: lea     eax, [esp+94h+var_C]
0x88B884: mov     large fs:0, eax
0x88B88A: cmp     byte ptr ds:0BA790Ah, 0
0x88B891: mov     esi, [ebp+a2]
0x88B894: jnz     loc_88B928
0x88B89A: mov     eax, [esi+24h]
0x88B89D: and     eax, 3Fh
0x88B8A0: add     eax, 0FFFFFFECh; switch 10 cases
0x88B8A3: cmp     eax, 9
0x88B8A6: ja      short def_88B8AF; jumptable 0088B8AF default case, cases 22-25,28
0x88B8A8: movzx   eax, ds:byte_88BB48[eax]
0x88B8AF: jmp     ds:jpt_88B8AF[eax*4]; switch jump
0x88B8B6: mov     eax, ds:0BA7928h; jumptable 0088B8AF cases 21,27
0x88B8BB: add     dword ptr ds:0BA7924h, 1
0x88B8C2: add     eax, 1
0x88B8C5: cmp     eax, 1Eh
0x88B8C8: mov     ds:0BA7928h, eax
0x88B8CD: jbe     short loc_88B91A; jumptable 0088B8AF case 20
0x88B8CF: fld1
0x88B8D1: mov     dword ptr [esi+50h], 0
0x88B8D8: fstp    dword ptr [esi+44h]
0x88B8DB: xor     al, al
0x88B8DD: jmp     loc_88BB0E
0x88B8E2: mov     eax, 1; jumptable 0088B8AF case 26
0x88B8E7: add     ds:0BA7924h, eax
0x88B8ED: add     ds:0BA792Ch, eax
0x88B8F3: jmp     short loc_88B91A; jumptable 0088B8AF case 20
0x88B8F5: mov     eax, 1; jumptable 0088B8AF case 29
0x88B8FA: add     ds:0BA7924h, eax
0x88B900: add     ds:0BA7930h, eax
0x88B906: jmp     short loc_88B91A; jumptable 0088B8AF case 20
0x88B908: add     dword ptr ds:0BA7924h, 1; jumptable 0088B8AF default case, cases 22-25,28
0x88B90F: mov     eax, [esi+24h]
0x88B912: and     eax, 3Fh
0x88B915: mov     ds:0BA7934h, eax
0x88B91A: mov     edx, ds:0BA7924h; jumptable 0088B8AF case 20
0x88B920: cmp     edx, ds:0B2E2F4h
0x88B926: ja      short loc_88B8CF
0x88B928: mov     eax, ds:0BA9DE4h
0x88B92D: mov     edx, large fs:2Ch
0x88B934: mov     ebx, [edx+eax*4]
0x88B937: mov     edi, [ebx+1A4h]
0x88B93D: cmp     edi, [ebx+1A8h]
0x88B943: mov     [esp+94h+var_74], ebx
0x88B947: setb    al
0x88B94A: test    al, al
0x88B94C: jz      short loc_88B96A
0x88B94E: mov     dword ptr [edi], offset aTtpickobject; "TtPickObject"
0x88B954: rdtsc
0x88B956: mov     [esp+94h+var_78], eax
0x88B95A: mov     eax, [esp+94h+var_78]
0x88B95E: mov     [edi+4], eax
0x88B961: add     edi, 0Ch
0x88B964: mov     [ebx+1A4h], edi
0x88B96A: mov     edx, [ecx]
0x88B96C: mov     eax, [edx+58h]
0x88B96F: mov     [esp+94h+var_79], 0
0x88B974: call    eax
0x88B976: mov     edi, eax
0x88B978: test    edi, edi
0x88B97A: jz      loc_88BAE0
0x88B980: mov     ecx, esi
0x88B982: call    sub_43F450
0x88B987: fld1
0x88B989: lea     eax, [esi+30h]
0x88B98C: fst     dword ptr [eax+14h]
0x88B98F: mov     dword ptr [eax+20h], 0
0x88B996: mov     ebx, [esi+78h]
0x88B999: xor     edx, edx
0x88B99B: cmp     ebx, edx
0x88B99D: jz      loc_88BA24
0x88B9A3: mov     ecx, [esi+70h]
0x88B9A6: fstp    st
0x88B9A8: cmp     ecx, edx
0x88B9AA: jz      short loc_88B9E4
0x88B9AC: mov     [esp+94h+var_70], offset ??_7hkWorldRayCaster@@6B@; const hkWorldRayCaster::`vftable'
0x88B9B4: mov     [esp+94h+var_30], edx
0x88B9B8: mov     [esp+94h+var_2C], edx
0x88B9BC: mov     eax, [edi+78h]
0x88B9BF: push    ebx
0x88B9C0: push    ecx
0x88B9C1: mov     ecx, [edi+64h]
0x88B9C4: push    eax
0x88B9C5: push    esi
0x88B9C6: push    ecx
0x88B9C7: lea     ecx, [esp+0A8h+var_70]
0x88B9CB: mov     [esp+0A8h+var_4], edx
0x88B9D2: call    sub_8BA1B0
0x88B9D7: mov     [esp+94h+var_4], 0FFFFFFFFh
0x88B9E2: jmp     short loc_88B9ED
0x88B9E4: push    ebx
0x88B9E5: push    esi
0x88B9E6: mov     ecx, edi
0x88B9E8: call    sub_8987E0
0x88B9ED: cmp     dword ptr [ebx+14h], 0
0x88B9F1: jz      loc_88BAB7
0x88B9F7: mov     ecx, ebx
0x88B9F9: call    sub_8B22F0
0x88B9FE: mov     ebx, [ebx+10h]
0x88BA01: movaps  xmm0, xmmword ptr [ebx]
0x88BA04: movaps  xmmword ptr [esi+30h], xmm0
0x88BA08: mov     edx, [ebx+10h]
0x88BA0B: mov     [esi+40h], edx
0x88BA0E: fld     dword ptr [ebx+14h]
0x88BA11: fstp    dword ptr [esi+44h]
0x88BA14: mov     eax, [ebx+20h]
0x88BA17: mov     [esi+50h], eax
0x88BA1A: mov     [esp+94h+var_79], 1
0x88BA1F: jmp     loc_88BAB7
0x88BA24: mov     ebx, [esi+74h]
0x88BA27: xor     ecx, ecx
0x88BA29: cmp     ebx, ecx
0x88BA2B: jz      short loc_88BAA3
0x88BA2D: lea     eax, [ebx+10h]
0x88BA30: fst     dword ptr [eax+14h]
0x88BA33: mov     [eax+20h], ecx
0x88BA36: fstp    dword ptr [ebx+4]
0x88BA39: mov     [esp+94h+var_78], eax
0x88BA3D: mov     eax, [esi+70h]
0x88BA40: cmp     eax, ecx
0x88BA42: jz      short loc_88BA80
0x88BA44: mov     [esp+94h+var_70], offset ??_7hkWorldRayCaster@@6B@; const hkWorldRayCaster::`vftable'
0x88BA4C: mov     [esp+94h+var_30], ecx
0x88BA50: mov     [esp+94h+var_2C], ecx
0x88BA54: mov     ecx, [edi+78h]
0x88BA57: push    ebx
0x88BA58: push    eax
0x88BA59: push    ecx
0x88BA5A: mov     ecx, [edi+64h]
0x88BA5D: push    esi
0x88BA5E: push    ecx
0x88BA5F: lea     ecx, [esp+0A8h+var_70]
0x88BA63: mov     [esp+0A8h+var_4], 1
0x88BA6E: call    sub_8BA1B0
0x88BA73: mov     [esp+94h+var_4], 0FFFFFFFFh
0x88BA7E: jmp     short loc_88BA89
0x88BA80: push    ebx
0x88BA81: push    esi
0x88BA82: mov     ecx, edi
0x88BA84: call    sub_8987E0
0x88BA89: cmp     dword ptr [ebx+30h], 0
0x88BA8D: jz      short loc_88BAB7
0x88BA8F: mov     edx, [esp+94h+var_78]
0x88BA93: push    edx
0x88BA94: lea     ecx, [esi+30h]
0x88BA97: call    sub_88A630
0x88BA9C: mov     [esp+94h+var_79], 1
0x88BAA1: jmp     short loc_88BAB7
0x88BAA3: push    eax; a6
0x88BAA4: fstp    st
0x88BAA6: push    esi; a2
0x88BAA7: mov     ecx, edi; this
0x88BAA9: call    hkWorld__CastRay
0x88BAAE: cmp     dword ptr [esi+50h], 0
0x88BAB2: setnz   [esp+94h+var_79]
0x88BAB7: mov     al, [esp+94h+var_79]
0x88BABB: neg     al
0x88BABD: push    0
0x88BABF: lea     ecx, [esi+10h]
0x88BAC2: sbb     eax, eax
0x88BAC4: and     eax, offset loc_767877
0x88BAC9: add     eax, 0FF888888h
0x88BACE: push    eax
0x88BACF: push    ecx
0x88BAD0: mov     ecx, ds:0BA7DA0h
0x88BAD6: push    esi
0x88BAD7: call    sub_8A78E0
0x88BADC: mov     ebx, [esp+94h+var_74]
0x88BAE0: mov     ecx, [ebx+1A4h]
0x88BAE6: cmp     ecx, [ebx+1A8h]
0x88BAEC: jnb     short loc_88BB0A
0x88BAEE: mov     dword ptr [ecx], offset aEt; "Et"
0x88BAF4: rdtsc
0x88BAF6: mov     [esp+94h+var_78], eax
0x88BAFA: mov     edx, [esp+94h+var_78]
0x88BAFE: mov     [ecx+4], edx
0x88BB01: add     ecx, 0Ch
0x88BB04: mov     [ebx+1A4h], ecx
0x88BB0A: mov     al, [esp+94h+var_79]
0x88BB0E: mov     ecx, [esp+94h+var_C]
0x88BB15: mov     large fs:0, ecx
0x88BB1C: pop     ecx
0x88BB1D: pop     edi
0x88BB1E: pop     esi
0x88BB1F: pop     ebx
0x88BB20: mov     ecx, [esp+84h+var_14]
0x88BB24: xor     ecx, esp
0x88BB26: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88BB2B: mov     esp, ebp
0x88BB2D: pop     ebp
0x88BB2E: retn    4
