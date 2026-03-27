0x4F4FB0: fldz
0x4F4FB2: push    esi
0x4F4FB3: mov     esi, [esp+4+arg_0]
0x4F4FB7: test    esi, esi
0x4F4FB9: push    edi
0x4F4FBA: mov     edi, [esp+8+arg_C]
0x4F4FBE: fstp    qword ptr [edi]
0x4F4FC0: jz      short loc_4F5003
0x4F4FC2: mov     eax, [esi]
0x4F4FC4: mov     edx, [eax+190h]
0x4F4FCA: mov     ecx, esi
0x4F4FCC: call    edx
0x4F4FCE: test    al, al
0x4F4FD0: jz      short loc_4F5003
0x4F4FD2: mov     eax, [esi]
0x4F4FD4: mov     edx, [eax+348h]
0x4F4FDA: mov     ecx, esi
0x4F4FDC: call    edx
0x4F4FDE: fst     qword ptr [edi]
0x4F4FE0: cmp     byte ptr ds:0B361ACh, 0
0x4F4FE7: jz      short loc_4F5001
0x4F4FE9: sub     esp, 8
0x4F4FEC: fstp    [esp+10h+var_10]
0x4F4FEF: push    offset aArmorRating0_2; "Armor Rating: %0.2f"
0x4F4FF4: call    Interface_ConsolePrint
0x4F4FF9: add     esp, 0Ch
0x4F4FFC: pop     edi
0x4F4FFD: mov     al, 1
0x4F4FFF: pop     esi
0x4F5000: retn
0x4F5001: fstp    st
0x4F5003: pop     edi
0x4F5004: mov     al, 1
0x4F5006: pop     esi
0x4F5007: retn
