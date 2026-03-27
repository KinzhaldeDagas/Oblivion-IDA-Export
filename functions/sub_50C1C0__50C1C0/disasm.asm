0x50C1C0: fldz
0x50C1C2: push    esi
0x50C1C3: mov     esi, [esp+4+arg_8]
0x50C1C7: test    esi, esi
0x50C1C9: push    edi
0x50C1CA: mov     edi, [esp+8+arg_18]
0x50C1CE: fstp    qword ptr [edi]
0x50C1D0: mov     [esp+8+arg_18], 0
0x50C1D8: jz      short loc_50C201
0x50C1DA: mov     ecx, esi
0x50C1DC: call    sub_4D7990
0x50C1E1: test    eax, eax
0x50C1E3: jz      short loc_50C201
0x50C1E5: mov     ecx, esi
0x50C1E7: call    sub_4D7990
0x50C1EC: mov     eax, [eax+0Ch]
0x50C1EF: lea     ecx, [esp+8+arg_18]
0x50C1F3: push    edi
0x50C1F4: push    ecx
0x50C1F5: mov     [esp+10h+arg_18], eax
0x50C1F9: call    sub_4F9FB0
0x50C1FE: add     esp, 8
0x50C201: cmp     byte ptr ds:0B361ACh, 0
0x50C208: pop     edi
0x50C209: pop     esi
0x50C20A: jz      short loc_50C21E
0x50C20C: mov     edx, [esp+arg_18]
0x50C210: push    edx
0x50C211: push    offset aGetparentref08; "GetParentRef >> (%08x)"
0x50C216: call    Interface_ConsolePrint
0x50C21B: add     esp, 8
0x50C21E: mov     al, 1
0x50C220: retn
