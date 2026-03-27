0x6EB570: push    esi
0x6EB571: mov     esi, ecx
0x6EB573: test    byte ptr [esi+0Ch], 1
0x6EB577: jz      short loc_6EB580
0x6EB579: fld     dword ptr [esi+20h]
0x6EB57C: fstp    [esp+4+arg_0]
0x6EB580: fld     [esp+4+arg_0]
0x6EB584: fld     st
0x6EB586: fld     dword ptr ds:0A79F00h
0x6EB58C: fucompp
0x6EB58E: fnstsw  ax
0x6EB590: test    ah, 44h
0x6EB593: jp      short loc_6EB59D
0x6EB595: fstp    st
0x6EB597: xor     al, al
0x6EB599: pop     esi
0x6EB59A: retn    0Ch
0x6EB59D: mov     ecx, [esi+18h]
0x6EB5A0: mov     edx, [esp+4+arg_4]
0x6EB5A4: mov     eax, [ecx]
0x6EB5A6: mov     eax, [eax+60h]
0x6EB5A9: push    edi
0x6EB5AA: mov     edi, [esp+8+arg_8]
0x6EB5AE: push    edi
0x6EB5AF: push    edx
0x6EB5B0: push    ecx
0x6EB5B1: fstp    [esp+14h+var_14]
0x6EB5B4: call    eax
0x6EB5B6: test    al, al
0x6EB5B8: jz      short loc_6EB5C6
0x6EB5BA: mov     cl, [edi]
0x6EB5BC: pop     edi
0x6EB5BD: mov     [esi+30h], cl
0x6EB5C0: mov     al, 1
0x6EB5C2: pop     esi
0x6EB5C3: retn    0Ch
0x6EB5C6: mov     byte ptr [edi], 0
0x6EB5C9: mov     dl, ds:0A7C6ACh
0x6EB5CF: pop     edi
0x6EB5D0: mov     [esi+30h], dl
0x6EB5D3: xor     al, al
0x6EB5D5: pop     esi
0x6EB5D6: retn    0Ch
