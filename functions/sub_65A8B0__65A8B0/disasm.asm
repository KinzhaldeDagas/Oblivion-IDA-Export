0x65A8B0: mov     eax, ds:0B33398h
0x65A8B5: sub     esp, 0Ch
0x65A8B8: push    ebp
0x65A8B9: mov     ebp, [eax+24h]
0x65A8BC: push    esi
0x65A8BD: xor     esi, esi
0x65A8BF: test    ebp, ebp
0x65A8C1: push    edi
0x65A8C2: mov     edi, ecx
0x65A8C4: jz      loc_65A964
0x65A8CA: mov     edx, [edi]
0x65A8CC: mov     eax, [edx+154h]
0x65A8D2: call    eax
0x65A8D4: test    eax, eax
0x65A8D6: jz      loc_65A964
0x65A8DC: fldz
0x65A8DE: push    ebx
0x65A8DF: mov     ebx, [esp+1Ch+arg_8]
0x65A8E3: push    ecx
0x65A8E4: mov     ecx, [esp+20h+arg_0]
0x65A8E8: fstp    [esp+20h+var_20]
0x65A8EB: push    esi
0x65A8EC: push    ebx
0x65A8ED: push    ecx
0x65A8EE: mov     ecx, ebp
0x65A8F0: call    sub_6AE370
0x65A8F5: mov     esi, eax
0x65A8F7: test    esi, esi
0x65A8F9: jz      short loc_65A95A
0x65A8FB: test    bl, 2
0x65A8FE: jz      short loc_65A94C
0x65A900: mov     edx, [edi]
0x65A902: mov     eax, [edx+174h]
0x65A908: mov     ecx, edi
0x65A90A: call    eax
0x65A90C: mov     ecx, [eax]
0x65A90E: mov     edx, [eax+4]
0x65A911: mov     eax, [eax+8]
0x65A914: sub     esp, 0Ch
0x65A917: mov     [esp+28h+var_4], eax
0x65A91B: fld     [esp+28h+var_4]
0x65A91F: fstp    [esp+28h+var_20]; float
0x65A923: mov     [esp+28h+var_8], edx
0x65A927: fld     [esp+28h+var_8]
0x65A92B: mov     [esp+28h+var_C], ecx
0x65A92F: fstp    [esp+28h+var_24]; float
0x65A933: mov     ecx, esi
0x65A935: fld     [esp+28h+var_C]
0x65A939: fstp    [esp+28h+var_28]; float
0x65A93C: call    sub_6B7360
0x65A941: mov     ecx, [esi]
0x65A943: push    edi
0x65A944: push    ecx
0x65A945: mov     ecx, ebp
0x65A947: call    sub_6AC3E0
0x65A94C: mov     edx, [esp+1Ch+arg_4]
0x65A950: push    edx
0x65A951: mov     ecx, esi
0x65A953: call    sub_6B7190
0x65A958: mov     eax, esi
0x65A95A: pop     ebx
0x65A95B: pop     edi
0x65A95C: pop     esi
0x65A95D: pop     ebp
0x65A95E: add     esp, 0Ch
0x65A961: retn    0Ch
0x65A964: pop     edi
0x65A965: mov     eax, esi
0x65A967: pop     esi
0x65A968: pop     ebp
0x65A969: add     esp, 0Ch
0x65A96C: retn    0Ch
