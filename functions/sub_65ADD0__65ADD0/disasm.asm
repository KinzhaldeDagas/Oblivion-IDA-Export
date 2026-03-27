0x65ADD0: push    esi
0x65ADD1: mov     esi, ecx
0x65ADD3: cmp     dword ptr [esi+58h], 0
0x65ADD7: jz      loc_65AE6B
0x65ADDD: mov     ecx, [esi+58h]
0x65ADE0: mov     eax, [ecx]
0x65ADE2: mov     edx, [eax+46Ch]
0x65ADE8: call    edx
0x65ADEA: test    eax, eax
0x65ADEC: jz      short loc_65AE6B
0x65ADEE: mov     ecx, [esi+58h]
0x65ADF1: mov     eax, [ecx]
0x65ADF3: mov     edx, [eax+46Ch]
0x65ADF9: call    edx
0x65ADFB: fld     dword ptr [eax+18h]
0x65ADFE: fchs
0x65AE00: pop     esi
0x65AE01: fstp    dword ptr ds:0B3BAACh
0x65AE07: fld     dword ptr [eax+1Ch]
0x65AE0A: fchs
0x65AE0C: fstp    dword ptr ds:0B3BAB0h
0x65AE12: fld     dword ptr [eax+20h]
0x65AE15: fchs
0x65AE17: fstp    dword ptr ds:0B3BAB4h
0x65AE1D: fld     dword ptr [eax+0Ch]
0x65AE20: fadd    dword ptr ds:0B3BAACh
0x65AE26: fstp    dword ptr ds:0B3BAACh
0x65AE2C: mov     ecx, ds:0B3BAACh
0x65AE32: fld     dword ptr [eax+10h]
0x65AE35: fadd    dword ptr ds:0B3BAB0h
0x65AE3B: fstp    dword ptr ds:0B3BAB0h
0x65AE41: fld     dword ptr [eax+14h]
0x65AE44: mov     eax, [esp+arg_0]
0x65AE48: fadd    dword ptr ds:0B3BAB4h
0x65AE4E: fstp    dword ptr ds:0B3BAB4h
0x65AE54: mov     [eax], ecx
0x65AE56: mov     edx, ds:0B3BAB0h
0x65AE5C: mov     [eax+4], edx
0x65AE5F: mov     ecx, ds:0B3BAB4h
0x65AE65: mov     [eax+8], ecx
0x65AE68: retn    4
0x65AE6B: push    edi
0x65AE6C: mov     edi, [esp+8+arg_0]
0x65AE70: push    edi
0x65AE71: mov     ecx, esi
0x65AE73: call    sub_4DC360
0x65AE78: mov     eax, edi
0x65AE7A: pop     edi
0x65AE7B: pop     esi
0x65AE7C: retn    4
