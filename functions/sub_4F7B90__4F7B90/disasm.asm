0x4F7B90: fldz
0x4F7B92: push    esi
0x4F7B93: mov     esi, [esp+4+arg_0]
0x4F7B97: test    esi, esi
0x4F7B99: push    edi
0x4F7B9A: mov     edi, [esp+8+arg_C]
0x4F7B9E: fstp    qword ptr [edi]
0x4F7BA0: jz      short loc_4F7BDD
0x4F7BA2: mov     eax, [esi]
0x4F7BA4: mov     edx, [eax+170h]
0x4F7BAA: mov     ecx, esi
0x4F7BAC: call    edx
0x4F7BAE: cmp     byte ptr [eax+4], 23h ; '#'
0x4F7BB2: jnz     short loc_4F7BDD
0x4F7BB4: mov     eax, [esi]
0x4F7BB6: mov     edx, [eax+170h]
0x4F7BBC: mov     ecx, esi
0x4F7BBE: call    edx
0x4F7BC0: test    eax, eax
0x4F7BC2: jz      short loc_4F7BDD
0x4F7BC4: mov     eax, [eax+104h]
0x4F7BCA: test    eax, eax
0x4F7BCC: jz      short loc_4F7BDD
0x4F7BCE: mov     ecx, eax
0x4F7BD0: call    TESClass__IsGuardClass
0x4F7BD5: test    al, al
0x4F7BD7: jz      short loc_4F7BDD
0x4F7BD9: fld1
0x4F7BDB: fstp    qword ptr [edi]
0x4F7BDD: cmp     byte ptr ds:0B361ACh, 0
0x4F7BE4: jz      short loc_4F7BFB
0x4F7BE6: fld     qword ptr [edi]
0x4F7BE8: sub     esp, 8
0x4F7BEB: fstp    [esp+10h+var_10]
0x4F7BEE: push    offset aIsGuard0_2f; "Is Guard >> %0.2f"
0x4F7BF3: call    Interface_ConsolePrint
0x4F7BF8: add     esp, 0Ch
0x4F7BFB: pop     edi
0x4F7BFC: mov     al, 1
0x4F7BFE: pop     esi
0x4F7BFF: retn
