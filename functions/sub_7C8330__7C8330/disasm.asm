0x7C8330: push    0FFFFFFFFh
0x7C8332: push    offset SEH_8C8970
0x7C8337: mov     eax, large fs:0
0x7C833D: push    eax
0x7C833E: push    ecx
0x7C833F: push    esi
0x7C8340: push    edi
0x7C8341: mov     eax, ds:0B30AACh
0x7C8346: xor     eax, esp
0x7C8348: push    eax
0x7C8349: lea     eax, [esp+1Ch+var_C]
0x7C834D: mov     large fs:0, eax
0x7C8353: mov     edi, ecx
0x7C8355: push    34h ; '4'; Size
0x7C8357: call    FormHeapAlloc
0x7C835C: add     esp, 4
0x7C835F: mov     [esp+1Ch+var_10], eax
0x7C8363: xor     esi, esi
0x7C8365: cmp     eax, esi
0x7C8367: mov     [esp+1Ch+var_4], esi
0x7C836B: jz      short loc_7C8376
0x7C836D: mov     ecx, eax
0x7C836F: call    NiFogProperty_constr
0x7C8374: mov     esi, eax
0x7C8376: mov     eax, [esp+1Ch+arg_0]
0x7C837A: push    eax
0x7C837B: push    esi
0x7C837C: mov     ecx, edi
0x7C837E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C8386: call    sub_740CF0
0x7C838B: mov     eax, esi
0x7C838D: mov     ecx, [esp+1Ch+var_C]
0x7C8391: mov     large fs:0, ecx
0x7C8398: pop     ecx
0x7C8399: pop     edi
0x7C839A: pop     esi
0x7C839B: add     esp, 10h
0x7C839E: retn    4
