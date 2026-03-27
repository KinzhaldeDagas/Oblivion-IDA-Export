0x70C000: push    0FFFFFFFFh
0x70C002: push    offset SEH_7020F0
0x70C007: mov     eax, large fs:0
0x70C00D: push    eax
0x70C00E: push    ecx
0x70C00F: push    esi
0x70C010: push    edi
0x70C011: mov     eax, ds:0B30AACh
0x70C016: xor     eax, esp
0x70C018: push    eax
0x70C019: lea     eax, [esp+1Ch+var_C]
0x70C01D: mov     large fs:0, eax
0x70C023: mov     eax, ds:0B3F928h
0x70C028: test    eax, eax
0x70C02A: jz      short loc_70C09D
0x70C02C: mov     edi, [esp+1Ch+arg_0]
0x70C030: test    edi, edi
0x70C032: jz      short loc_70C09D
0x70C034: mov     esi, [eax+8]
0x70C037: test    esi, esi
0x70C039: mov     [esp+1Ch+var_10], esi
0x70C03D: jz      short loc_70C049
0x70C03F: lea     eax, [esi+4]
0x70C042: push    eax; lpAddend
0x70C043: call    dword ptr ds:0A28078h
0x70C049: test    esi, esi
0x70C04B: mov     [esp+1Ch+var_4], 0
0x70C053: jz      short loc_70C05F
0x70C055: mov     edx, [esi]
0x70C057: mov     eax, [edx+4Ch]
0x70C05A: push    edi
0x70C05B: mov     ecx, esi
0x70C05D: call    eax
0x70C05F: mov     ecx, [esp+1Ch+arg_4]
0x70C063: push    ecx
0x70C064: call    sub_70BF30
0x70C069: add     esp, 4
0x70C06C: test    esi, esi
0x70C06E: jz      short loc_70C079
0x70C070: mov     edx, [esi]
0x70C072: mov     eax, [edx+50h]
0x70C075: mov     ecx, esi
0x70C077: call    eax
0x70C079: test    esi, esi
0x70C07B: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x70C083: jz      short loc_70C09D
0x70C085: lea     ecx, [esi+4]
0x70C088: push    ecx; lpAddend
0x70C089: call    dword ptr ds:0A2807Ch
0x70C08F: test    eax, eax
0x70C091: jnz     short loc_70C09D
0x70C093: mov     edx, [esi]
0x70C095: mov     eax, [edx]
0x70C097: push    1
0x70C099: mov     ecx, esi
0x70C09B: call    eax
0x70C09D: mov     ecx, dword ptr [esp+1Ch+var_C]
0x70C0A1: mov     large fs:0, ecx
0x70C0A8: pop     ecx
0x70C0A9: pop     edi
0x70C0AA: pop     esi
0x70C0AB: add     esp, 10h
0x70C0AE: retn
