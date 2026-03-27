0x6ECAB0: push    0FFFFFFFFh
0x6ECAB2: push    offset SEH_6ECAB0
0x6ECAB7: mov     eax, large fs:0
0x6ECABD: push    eax
0x6ECABE: sub     esp, 10h
0x6ECAC1: mov     eax, ds:0B30AACh
0x6ECAC6: xor     eax, esp
0x6ECAC8: push    eax
0x6ECAC9: lea     eax, [esp+20h+var_C]
0x6ECACD: mov     large fs:0, eax
0x6ECAD3: mov     eax, [ecx]
0x6ECAD5: mov     eax, [eax+0A8h]
0x6ECADB: lea     edx, [esp+20h+var_18]
0x6ECADF: push    edx
0x6ECAE0: call    eax
0x6ECAE2: push    20h ; ' '; Size
0x6ECAE4: call    FormHeapAlloc
0x6ECAE9: add     esp, 4
0x6ECAEC: mov     [esp+20h+var_1C], eax
0x6ECAF0: test    eax, eax
0x6ECAF2: mov     [esp+20h+var_4], 0
0x6ECAFA: jz      short loc_6ECB2E
0x6ECAFC: mov     ecx, [esp+20h+var_18]
0x6ECB00: sub     esp, 0Ch
0x6ECB03: mov     edx, esp
0x6ECB05: mov     [edx], ecx
0x6ECB07: mov     ecx, [esp+2Ch+var_14]
0x6ECB0B: mov     [edx+4], ecx
0x6ECB0E: mov     ecx, [esp+2Ch+var_10]
0x6ECB12: mov     [edx+8], ecx
0x6ECB15: mov     ecx, eax
0x6ECB17: call    sub_6DA240
0x6ECB1C: mov     ecx, dword ptr [esp+20h+var_C]
0x6ECB20: mov     large fs:0, ecx
0x6ECB27: pop     ecx
0x6ECB28: add     esp, 1Ch
0x6ECB2B: retn    4
0x6ECB2E: xor     eax, eax
0x6ECB30: mov     ecx, dword ptr [esp+20h+var_C]
0x6ECB34: mov     large fs:0, ecx
0x6ECB3B: pop     ecx
0x6ECB3C: add     esp, 1Ch
0x6ECB3F: retn    4
