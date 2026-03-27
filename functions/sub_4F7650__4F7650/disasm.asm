0x4F7650: fldz
0x4F7652: push    esi
0x4F7653: mov     esi, [esp+4+arg_0]
0x4F7657: test    esi, esi
0x4F7659: push    edi
0x4F765A: mov     edi, [esp+8+arg_C]
0x4F765E: fstp    qword ptr [edi]
0x4F7660: jz      short loc_4F768D
0x4F7662: mov     eax, [esi]
0x4F7664: mov     edx, [eax+190h]
0x4F766A: mov     ecx, esi
0x4F766C: call    edx
0x4F766E: test    al, al
0x4F7670: jz      short loc_4F768D
0x4F7672: mov     ecx, [esi+58h]
0x4F7675: test    ecx, ecx
0x4F7677: jz      short loc_4F768D
0x4F7679: mov     eax, [ecx]
0x4F767B: mov     edx, [eax+0F8h]
0x4F7681: push    1
0x4F7683: call    edx
0x4F7685: test    eax, eax
0x4F7687: jz      short loc_4F768D
0x4F7689: fld1
0x4F768B: fstp    qword ptr [edi]
0x4F768D: cmp     byte ptr ds:0B361ACh, 0
0x4F7694: jz      short loc_4F76AB
0x4F7696: fld     qword ptr [edi]
0x4F7698: sub     esp, 8
0x4F769B: fstp    [esp+10h+var_14+4]
0x4F769E: push    offset aIsShieldOut0_2; "Is Shield Out >> %0.2f"
0x4F76A3: call    Interface_ConsolePrint
0x4F76A8: add     esp, 0Ch
0x4F76AB: pop     edi
0x4F76AC: mov     al, 1
0x4F76AE: pop     esi
0x4F76AF: retn
