0x8AA920: push    0FFFFFFFFh
0x8AA922: push    offset SEH_8C8900
0x8AA927: mov     eax, large fs:0
0x8AA92D: push    eax
0x8AA92E: push    ecx
0x8AA92F: mov     eax, ds:0B30AACh
0x8AA934: xor     eax, esp
0x8AA936: push    eax
0x8AA937: lea     eax, [esp+14h+var_C]
0x8AA93B: mov     large fs:0, eax
0x8AA941: push    64h ; 'd'; Size
0x8AA943: call    FormHeapAlloc
0x8AA948: add     esp, 4
0x8AA94B: mov     [esp+14h+var_10], eax
0x8AA94F: test    eax, eax
0x8AA951: mov     [esp+14h+var_4], 0
0x8AA959: jz      short loc_8AA972
0x8AA95B: mov     ecx, eax
0x8AA95D: call    sub_8AA810
0x8AA962: mov     ecx, [esp+14h+var_C]
0x8AA966: mov     large fs:0, ecx
0x8AA96D: pop     ecx
0x8AA96E: add     esp, 10h
0x8AA971: retn
0x8AA972: xor     eax, eax
0x8AA974: mov     ecx, [esp+14h+var_C]
0x8AA978: mov     large fs:0, ecx
0x8AA97F: pop     ecx
0x8AA980: add     esp, 10h
0x8AA983: retn
