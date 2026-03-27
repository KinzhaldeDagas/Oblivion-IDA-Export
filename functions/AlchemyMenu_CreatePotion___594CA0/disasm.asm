0x594CA0: push    0FFFFFFFFh
0x594CA2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x594CA7: mov     eax, large fs:0
0x594CAD: push    eax
0x594CAE: push    ecx
0x594CAF: push    ebx
0x594CB0: push    ebp
0x594CB1: push    esi
0x594CB2: push    edi
0x594CB3: mov     eax, ds:0B30AACh
0x594CB8: xor     eax, esp
0x594CBA: push    eax
0x594CBB: lea     eax, [esp+24h+var_C]
0x594CBF: mov     large fs:0, eax
0x594CC5: mov     edi, ecx
0x594CC7: mov     ecx, ds:0B333C4h
0x594CCD: fldz
0x594CCF: mov     eax, [ecx]
0x594CD1: mov     edx, [eax+39Ch]
0x594CD7: push    ecx
0x594CD8: fstp    [esp+28h+var_28]
0x594CDB: push    0
0x594CDD: push    13h
0x594CDF: call    edx
0x594CE1: mov     eax, ds:0B333C4h
0x594CE6: add     dword ptr [eax+688h], 1
0x594CED: mov     eax, [edi+94h]
0x594CF3: mov     ecx, ds:0B33A98h
0x594CF9: push    eax
