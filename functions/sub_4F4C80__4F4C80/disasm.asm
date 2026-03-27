0x4F4C80: push    esi
0x4F4C81: mov     esi, [esp+4+arg_0]
0x4F4C85: test    esi, esi
0x4F4C87: push    edi
0x4F4C88: mov     edi, [esp+8+arg_C]
0x4F4C8C: jz      short loc_4F4CB7
0x4F4C8E: mov     eax, [esi]
0x4F4C90: mov     edx, [eax+190h]
0x4F4C96: mov     ecx, esi
0x4F4C98: call    edx
0x4F4C9A: test    al, al
0x4F4C9C: jz      short loc_4F4CB7
0x4F4C9E: mov     eax, [esi]
0x4F4CA0: mov     edx, [eax+390h]
0x4F4CA6: mov     ecx, esi
0x4F4CA8: call    edx
0x4F4CAA: movzx   eax, al
0x4F4CAD: mov     [esp+8+arg_0], eax
0x4F4CB1: fild    [esp+8+arg_0]
0x4F4CB5: fstp    qword ptr [edi]
0x4F4CB7: cmp     byte ptr ds:0B361ACh, 0
0x4F4CBE: jz      short loc_4F4CD5
0x4F4CC0: fld     qword ptr [edi]
0x4F4CC2: sub     esp, 8
0x4F4CC5: fstp    [esp+10h+var_10]
0x4F4CC8: push    offset aGetattacked0_2; "GetAttacked >> %0.2f"
0x4F4CCD: call    Interface_ConsolePrint
0x4F4CD2: add     esp, 0Ch
0x4F4CD5: pop     edi
0x4F4CD6: mov     al, 1
0x4F4CD8: pop     esi
0x4F4CD9: retn
