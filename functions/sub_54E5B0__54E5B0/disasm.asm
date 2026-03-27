0x54E5B0: push    ebx
0x54E5B1: push    esi
0x54E5B2: mov     esi, ecx
0x54E5B4: mov     eax, [esi]
0x54E5B6: mov     edx, [eax+0Ch]
0x54E5B9: push    edi
0x54E5BA: xor     bl, bl
0x54E5BC: call    edx
0x54E5BE: fldz
0x54E5C0: fucom   st(1)
0x54E5C2: fnstsw  ax
0x54E5C4: fstp    st(1)
0x54E5C6: test    ah, 44h
0x54E5C9: jnp     short loc_54E5CD
0x54E5CB: mov     bl, 1
0x54E5CD: mov     eax, [esi]
0x54E5CF: mov     edx, [eax+10h]
0x54E5D2: push    ecx
0x54E5D3: mov     ecx, esi
0x54E5D5: fstp    [esp+10h+var_10]
0x54E5D8: call    edx
0x54E5DA: mov     eax, [esi]
0x54E5DC: mov     edx, [eax+50h]
0x54E5DF: mov     ecx, esi
0x54E5E1: xor     edi, edi
0x54E5E3: call    edx
0x54E5E5: test    eax, eax
0x54E5E7: jbe     short loc_54E612
0x54E5E9: lea     esp, [esp+0]
0x54E5F0: mov     eax, [esi]
0x54E5F2: mov     edx, [eax+54h]
0x54E5F5: push    edi
0x54E5F6: mov     ecx, esi
0x54E5F8: call    edx
0x54E5FA: test    al, al
0x54E5FC: jnz     short loc_54E610
0x54E5FE: mov     eax, [esi]
0x54E600: mov     edx, [eax+50h]
0x54E603: mov     ecx, esi
0x54E605: add     edi, 1
0x54E608: call    edx
0x54E60A: cmp     edi, eax
0x54E60C: jb      short loc_54E5F0
0x54E60E: jmp     short loc_54E612
0x54E610: mov     bl, 1
0x54E612: mov     edi, [esi]
0x54E614: mov     eax, [esp+0Ch+arg_0]
0x54E618: mov     edx, [edi+50h]
0x54E61B: push    eax
0x54E61C: mov     ecx, esi
0x54E61E: call    edx
0x54E620: push    eax
0x54E621: mov     eax, [edi+58h]
0x54E624: mov     ecx, esi
0x54E626: call    eax
0x54E628: pop     edi
0x54E629: pop     esi
0x54E62A: mov     al, bl
0x54E62C: pop     ebx
0x54E62D: retn    4
