0x625290: sub     esp, 0Ch
0x625293: push    esi
0x625294: push    edi
0x625295: mov     edi, ecx
0x625297: mov     eax, [edi]
0x625299: mov     edx, [eax+154h]
0x62529F: call    edx
0x6252A1: mov     esi, eax
0x6252A3: test    esi, esi
0x6252A5: jnz     short loc_6252D1
0x6252A7: mov     eax, [edi]
0x6252A9: mov     edx, [eax+174h]
0x6252AF: mov     ecx, edi
0x6252B1: call    edx
0x6252B3: mov     edx, [eax]
0x6252B5: mov     ecx, [esp+14h+arg_0]
0x6252B9: mov     [ecx], edx
0x6252BB: mov     edx, [eax+4]
0x6252BE: mov     eax, [eax+8]
0x6252C1: mov     [ecx+4], edx
0x6252C4: pop     edi
0x6252C5: mov     [ecx+8], eax
0x6252C8: mov     eax, ecx
0x6252CA: pop     esi
0x6252CB: add     esp, 0Ch
0x6252CE: retn    4
0x6252D1: mov     edx, [esi]
0x6252D3: mov     eax, [edx+58h]
0x6252D6: push    offset aEntrypoint; "EntryPoint"
0x6252DB: mov     ecx, esi
0x6252DD: call    eax
0x6252DF: test    eax, eax
0x6252E1: jnz     short loc_625320
0x6252E3: mov     edx, [edi]
0x6252E5: mov     eax, [edx+170h]
0x6252EB: mov     ecx, edi
0x6252ED: call    eax
0x6252EF: push    eax
0x6252F0: call    GetFormModelPAth
0x6252F5: push    eax; ArgList
0x6252F6: push    offset aMissingEntrypo; "Missing 'EntryPoint' node for creature "...
0x6252FB: call    PrintError
0x625300: mov     ecx, [esi+54h]
0x625303: mov     eax, [esp+20h+arg_0]
0x625307: mov     edx, [esi+58h]
0x62530A: add     esp, 0Ch
0x62530D: mov     [eax], ecx
0x62530F: mov     ecx, [esi+5Ch]
0x625312: pop     edi
0x625313: mov     [eax+4], edx
0x625316: mov     [eax+8], ecx
0x625319: pop     esi
0x62531A: add     esp, 0Ch
0x62531D: retn    4
0x625320: add     eax, 54h ; 'T'
0x625323: push    eax
0x625324: lea     edx, [esp+18h+var_C]
0x625328: push    edx
0x625329: lea     ecx, [esi+30h]
0x62532C: call    sub_7101F0
0x625331: fld     dword ptr [eax]
0x625333: fadd    dword ptr [esi+54h]
0x625336: mov     ecx, [esp+14h+arg_0]
0x62533A: pop     edi
0x62533B: fstp    dword ptr [ecx]
0x62533D: fld     dword ptr [eax+4]
0x625340: fadd    dword ptr [esi+58h]
0x625343: fstp    dword ptr [ecx+4]
0x625346: fld     dword ptr [eax+8]
0x625349: mov     eax, ecx
0x62534B: fadd    dword ptr [esi+5Ch]
0x62534E: pop     esi
0x62534F: fstp    dword ptr [ecx+8]
0x625352: add     esp, 0Ch
0x625355: retn    4
