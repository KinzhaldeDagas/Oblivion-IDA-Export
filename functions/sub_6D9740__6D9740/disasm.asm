0x6D9740: push    0FFFFFFFFh
0x6D9742: push    offset SEH_6E3B20
0x6D9747: mov     eax, large fs:0
0x6D974D: push    eax
0x6D974E: push    esi
0x6D974F: push    edi
0x6D9750: mov     eax, ds:0B30AACh
0x6D9755: xor     eax, esp
0x6D9757: push    eax
0x6D9758: lea     eax, [esp+18h+var_C]
0x6D975C: mov     large fs:0, eax
0x6D9762: mov     edi, ecx
0x6D9764: fld     [esp+18h+arg_4]
0x6D9768: sub     esp, 8
0x6D976B: fstp    [esp+20h+var_1C]
0x6D976F: fld     [esp+20h+arg_0]
0x6D9773: fstp    [esp+20h+var_20]
0x6D9776: call    sub_6EBA60
0x6D977B: mov     ecx, [edi+1Ch]
0x6D977E: test    ecx, ecx
0x6D9780: mov     esi, eax
0x6D9782: jz      short loc_6D97E9
0x6D9784: fld     [esp+18h+arg_4]
0x6D9788: sub     esp, 8
0x6D978B: fstp    [esp+20h+var_1C]; float
0x6D978F: lea     eax, [esp+20h+arg_4]
0x6D9793: fld     [esp+20h+arg_0]
0x6D9797: fstp    [esp+20h+var_20]; float
0x6D979A: push    eax; int
0x6D979B: call    sub_6D8E70
0x6D97A0: mov     ecx, [esp+18h+arg_4]
0x6D97A4: push    ecx
0x6D97A5: mov     ecx, esi
0x6D97A7: mov     [esp+1Ch+var_4], 0
0x6D97AF: call    sub_6DABF0
0x6D97B4: mov     edi, [esp+18h+arg_4]
0x6D97B8: test    edi, edi
0x6D97BA: mov     dword ptr [esi+20h], 0
0x6D97C1: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6D97C9: jz      short loc_6D97E7
0x6D97CB: lea     edx, [edi+4]
0x6D97CE: push    edx; lpAddend
0x6D97CF: call    dword ptr ds:0A2807Ch
0x6D97D5: test    eax, eax
0x6D97D7: jnz     short loc_6D97E7
0x6D97D9: test    edi, edi
0x6D97DB: jz      short loc_6D97E7
0x6D97DD: mov     eax, [edi]
0x6D97DF: mov     edx, [eax]
0x6D97E1: push    1
0x6D97E3: mov     ecx, edi
0x6D97E5: call    edx
0x6D97E7: mov     eax, esi
0x6D97E9: mov     ecx, dword ptr [esp+18h+var_C]
0x6D97ED: mov     large fs:0, ecx
0x6D97F4: pop     ecx
0x6D97F5: pop     edi
0x6D97F6: pop     esi
0x6D97F7: add     esp, 0Ch
0x6D97FA: retn    8
