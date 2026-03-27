0x6F8920: push    0FFFFFFFFh
0x6F8922: push    offset SEH_6F8920
0x6F8927: mov     eax, large fs:0
0x6F892D: push    eax
0x6F892E: push    esi
0x6F892F: mov     eax, ds:0B30AACh
0x6F8934: xor     eax, esp
0x6F8936: push    eax
0x6F8937: lea     eax, [esp+14h+var_C]
0x6F893B: mov     large fs:0, eax
0x6F8941: mov     esi, [esp+14h+arg_0]
0x6F8945: test    esi, esi
0x6F8947: jz      short loc_6F897B
0x6F8949: cmp     dword ptr [esi], 0
0x6F894C: jnz     short loc_6F897B
0x6F894E: push    18h; Size
0x6F8950: call    FormHeapAlloc
0x6F8955: add     esp, 4
0x6F8958: mov     [esp+14h+arg_0], eax
0x6F895C: test    eax, eax
0x6F895E: mov     [esp+14h+var_4], 0
0x6F8966: jz      short loc_6F8977
0x6F8968: push    0
0x6F896A: push    0
0x6F896C: push    0
0x6F896E: mov     ecx, eax
0x6F8970: call    sub_6F8630
0x6F8975: jmp     short loc_6F8979
0x6F8977: xor     eax, eax
0x6F8979: mov     [esi], eax
0x6F897B: mov     eax, 2
0x6F8980: mov     ecx, [esp+14h+var_C]
0x6F8984: mov     large fs:0, ecx
0x6F898B: pop     ecx
0x6F898C: pop     esi
0x6F898D: add     esp, 0Ch
0x6F8990: retn
