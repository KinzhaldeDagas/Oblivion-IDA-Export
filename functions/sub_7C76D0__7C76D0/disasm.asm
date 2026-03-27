0x7C76D0: push    0FFFFFFFFh
0x7C76D2: push    offset SEH_7C77C0
0x7C76D7: mov     eax, large fs:0
0x7C76DD: push    eax
0x7C76DE: push    ecx
0x7C76DF: push    esi
0x7C76E0: push    edi
0x7C76E1: mov     eax, ds:0B30AACh
0x7C76E6: xor     eax, esp
0x7C76E8: push    eax
0x7C76E9: lea     eax, [esp+1Ch+var_C]
0x7C76ED: mov     large fs:0, eax
0x7C76F3: mov     esi, ecx
0x7C76F5: mov     ecx, [esi+0F8h]
0x7C76FB: test    ecx, ecx
0x7C76FD: jz      loc_7C77A9
0x7C7703: mov     edx, [esp+1Ch+arg_0]
0x7C7707: lea     eax, [ecx+8]
0x7C770A: mov     eax, [eax]
0x7C770C: test    eax, eax
0x7C770E: mov     ecx, [ecx]
0x7C7710: jz      short loc_7C771A
0x7C7712: cmp     [eax+130h], edx
0x7C7718: jz      short loc_7C7732
0x7C771A: test    ecx, ecx
0x7C771C: jnz     short loc_7C7707
0x7C771E: mov     ecx, [esp+1Ch+var_C]
0x7C7722: mov     large fs:0, ecx
0x7C7729: pop     ecx
0x7C772A: pop     edi
0x7C772B: pop     esi
0x7C772C: add     esp, 10h
0x7C772F: retn    4
0x7C7732: mov     [esp+1Ch+arg_0], eax
0x7C7736: add     eax, 4
0x7C7739: push    eax; lpAddend
0x7C773A: call    dword ptr ds:0A28078h
0x7C7740: lea     eax, [esp+1Ch+arg_0]
0x7C7744: push    eax
0x7C7745: lea     ecx, [esp+20h+var_10]
0x7C7749: push    ecx
0x7C774A: lea     ecx, [esi+0F4h]
0x7C7750: mov     [esp+24h+var_4], 0
0x7C7758: call    sub_7D5F80
0x7C775D: mov     eax, [esp+1Ch+var_10]
0x7C7761: test    eax, eax
0x7C7763: mov     edi, ds:0A2807Ch
0x7C7769: jz      short loc_7C7785
0x7C776B: mov     esi, eax
0x7C776D: add     eax, 4
0x7C7770: push    eax; lpAddend
0x7C7771: call    edi ; InterlockedDecrement
0x7C7773: test    eax, eax
0x7C7775: jnz     short loc_7C7785
0x7C7777: test    esi, esi
0x7C7779: jz      short loc_7C7785
0x7C777B: mov     edx, [esi]
0x7C777D: mov     eax, [edx]
0x7C777F: push    1
0x7C7781: mov     ecx, esi
0x7C7783: call    eax
0x7C7785: mov     esi, [esp+1Ch+arg_0]
0x7C7789: test    esi, esi
0x7C778B: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7C7793: jz      short loc_7C77A9
0x7C7795: lea     ecx, [esi+4]
0x7C7798: push    ecx; lpAddend
0x7C7799: call    edi ; InterlockedDecrement
0x7C779B: test    eax, eax
0x7C779D: jnz     short loc_7C77A9
0x7C779F: mov     edx, [esi]
0x7C77A1: mov     eax, [edx]
0x7C77A3: push    1
0x7C77A5: mov     ecx, esi
0x7C77A7: call    eax
0x7C77A9: mov     ecx, [esp+1Ch+var_C]
0x7C77AD: mov     large fs:0, ecx
0x7C77B4: pop     ecx
0x7C77B5: pop     edi
0x7C77B6: pop     esi
0x7C77B7: add     esp, 10h
0x7C77BA: retn    4
