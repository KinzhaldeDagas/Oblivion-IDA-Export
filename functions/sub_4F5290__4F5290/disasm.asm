0x4F5290: fldz
0x4F5292: sub     esp, 8
0x4F5295: push    esi
0x4F5296: mov     esi, [esp+0Ch+arg_0]
0x4F529A: test    esi, esi
0x4F529C: push    edi
0x4F529D: mov     edi, [esp+10h+arg_C]
0x4F52A1: fstp    qword ptr [edi]
0x4F52A3: jz      short loc_4F52E3
0x4F52A5: mov     eax, [esi]
0x4F52A7: mov     edx, [eax+190h]
0x4F52AD: mov     ecx, esi
0x4F52AF: call    edx
0x4F52B1: test    al, al
0x4F52B3: jz      short loc_4F52E3
0x4F52B5: mov     ecx, esi
0x4F52B7: call    sub_5E4420
0x4F52BC: mov     [esp+10h+arg_C], eax
0x4F52C0: fild    [esp+10h+arg_C]
0x4F52C4: mov     eax, [esi]
0x4F52C6: mov     edx, [eax+250h]
0x4F52CC: mov     ecx, esi
0x4F52CE: fstp    [esp+10h+var_8]
0x4F52D2: call    edx
0x4F52D4: fcomp   [esp+10h+var_8]
0x4F52D8: fnstsw  ax
0x4F52DA: test    ah, 41h
0x4F52DD: jp      short loc_4F52E3
0x4F52DF: fld1
0x4F52E1: fstp    qword ptr [edi]
0x4F52E3: cmp     byte ptr ds:0B361ACh, 0
0x4F52EA: jz      short loc_4F5301
0x4F52EC: fld     qword ptr [edi]
0x4F52EE: sub     esp, 8
0x4F52F1: fstp    [esp+18h+var_18]
0x4F52F4: push    offset aCanPayCrimeGol; "Can Pay Crime Gold >> %0.2f"
0x4F52F9: call    Interface_ConsolePrint
0x4F52FE: add     esp, 0Ch
0x4F5301: pop     edi
0x4F5302: mov     al, 1
0x4F5304: pop     esi
0x4F5305: add     esp, 8
0x4F5308: retn
