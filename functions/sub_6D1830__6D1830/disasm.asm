0x6D1830: push    0FFFFFFFFh
0x6D1832: push    offset SEH_8C8900
0x6D1837: mov     eax, large fs:0
0x6D183D: push    eax
0x6D183E: push    ecx
0x6D183F: mov     eax, ds:0B30AACh
0x6D1844: xor     eax, esp
0x6D1846: push    eax
0x6D1847: lea     eax, [esp+14h+var_C]
0x6D184B: mov     large fs:0, eax
0x6D1851: push    34h ; '4'; Size
0x6D1853: call    FormHeapAlloc
0x6D1858: add     esp, 4
0x6D185B: mov     [esp+14h+var_10], eax
0x6D185F: test    eax, eax
0x6D1861: mov     [esp+14h+var_4], 0
0x6D1869: jz      short loc_6D1886
0x6D186B: mov     ecx, [esp+14h+arg_10]
0x6D186F: fld     [esp+14h+arg_C]
0x6D1873: mov     edx, dword ptr [esp+14h+arg_4]
0x6D1877: push    ecx; int
0x6D1878: push    ecx
0x6D1879: fstp    [esp+1Ch+var_1C]; float
0x6D187C: push    edx; char
0x6D187D: mov     ecx, eax
0x6D187F: call    sub_6D2480
0x6D1884: jmp     short loc_6D1888
0x6D1886: xor     eax, eax
0x6D1888: or      byte ptr [eax+0Ch], 2
0x6D188C: mov     ecx, [esp+14h+var_C]
0x6D1890: mov     large fs:0, ecx
0x6D1897: pop     ecx
0x6D1898: add     esp, 10h
0x6D189B: retn    14h
