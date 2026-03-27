0x6EC080: push    0FFFFFFFFh
0x6EC082: push    offset SEH_8C62B0
0x6EC087: mov     eax, large fs:0
0x6EC08D: push    eax
0x6EC08E: sub     esp, 8
0x6EC091: mov     eax, ds:0B30AACh
0x6EC096: xor     eax, esp
0x6EC098: push    eax
0x6EC099: lea     eax, [esp+18h+var_C]
0x6EC09D: mov     large fs:0, eax
0x6EC0A3: mov     eax, [ecx]
0x6EC0A5: mov     eax, [eax+0A8h]
0x6EC0AB: lea     edx, [esp+18h+var_14]
0x6EC0AF: push    edx
0x6EC0B0: call    eax
0x6EC0B2: push    18h; Size
0x6EC0B4: call    FormHeapAlloc
0x6EC0B9: add     esp, 4
0x6EC0BC: mov     [esp+18h+var_10], eax
0x6EC0C0: test    eax, eax
0x6EC0C2: mov     [esp+18h+var_4], 0
0x6EC0CA: jz      short loc_6EC0ED
0x6EC0CC: fld     [esp+18h+var_14]
0x6EC0D0: push    ecx
0x6EC0D1: mov     ecx, eax
0x6EC0D3: fstp    [esp+1Ch+var_1C]; float
0x6EC0D6: call    sub_6D29E0
0x6EC0DB: mov     ecx, dword ptr [esp+18h+var_C]
0x6EC0DF: mov     large fs:0, ecx
0x6EC0E6: pop     ecx
0x6EC0E7: add     esp, 14h
0x6EC0EA: retn    4
0x6EC0ED: xor     eax, eax
0x6EC0EF: mov     ecx, dword ptr [esp+18h+var_C]
0x6EC0F3: mov     large fs:0, ecx
0x6EC0FA: pop     ecx
0x6EC0FB: add     esp, 14h
0x6EC0FE: retn    4
