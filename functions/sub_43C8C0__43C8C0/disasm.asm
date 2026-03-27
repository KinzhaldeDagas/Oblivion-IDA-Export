0x43C8C0: push    0FFFFFFFFh
0x43C8C2: push    offset SEH_43C8C0
0x43C8C7: mov     eax, large fs:0
0x43C8CD: push    eax
0x43C8CE: push    ecx
0x43C8CF: push    ebx
0x43C8D0: push    ebp
0x43C8D1: push    esi
0x43C8D2: push    edi
0x43C8D3: mov     eax, ___security_cookie
0x43C8D8: xor     eax, esp
0x43C8DA: push    eax
0x43C8DB: lea     eax, [esp+24h+var_C]
0x43C8DF: mov     large fs:0, eax
0x43C8E5: mov     esi, ecx
0x43C8E7: mov     eax, [esi+10h]
0x43C8EA: mov     edx, [esi+14h]
0x43C8ED: mov     cl, 10h
0x43C8EF: call    __allshr
0x43C8F4: push    0
0x43C8F6: push    1
0x43C8F8: push    0
0x43C8FA: movzx   ecx, al
0x43C8FD: mov     eax, [esi+20h]
0x43C900: push    3
0x43C902: push    esi
0x43C903: push    ecx
0x43C904: add     eax, 5Ch ; '\'
0x43C907: mov     eax, [eax+4]
0x43C90A: push    eax
0x43C90B: lea     ecx, [esp+40h+var_10]
0x43C90F: push    ecx
0x43C910: mov     ecx, ModelLoaderPtr
0x43C916: call    sub_43B280
0x43C91B: mov     ebx, eax
0x43C91D: mov     edi, [esi+24h]
0x43C920: cmp     edi, [ebx]
0x43C922: mov     ebp, ds:InterlockedDecrement
0x43C928: mov     [esp+24h+var_4], 0
0x43C930: jz      short loc_43C961
0x43C932: test    edi, edi
0x43C934: jz      short loc_43C94E
0x43C936: lea     edx, [edi+8]
0x43C939: push    edx; lpAddend
0x43C93A: call    ebp ; InterlockedDecrement
0x43C93C: test    eax, eax
0x43C93E: jnz     short loc_43C94E
0x43C940: test    edi, edi
0x43C942: jz      short loc_43C94E
0x43C944: mov     eax, [edi]
0x43C946: mov     edx, [eax]
0x43C948: push    1
0x43C94A: mov     ecx, edi
0x43C94C: call    edx
0x43C94E: mov     ebx, [ebx]
0x43C950: test    ebx, ebx
0x43C952: mov     [esi+24h], ebx
0x43C955: jz      short loc_43C961
0x43C957: add     ebx, 8
0x43C95A: push    ebx; lpAddend
0x43C95B: call    ds:InterlockedIncrement
0x43C961: mov     edi, [esp+24h+var_10]
0x43C965: test    edi, edi
0x43C967: mov     [esp+24h+var_4], 0FFFFFFFFh
0x43C96F: jz      short loc_43C989
0x43C971: lea     eax, [edi+8]
0x43C974: push    eax; lpAddend
0x43C975: call    ebp ; InterlockedDecrement
0x43C977: test    eax, eax
0x43C979: jnz     short loc_43C989
0x43C97B: test    edi, edi
0x43C97D: jz      short loc_43C989
0x43C97F: mov     edx, [edi]
0x43C981: mov     eax, [edx]
0x43C983: push    1
0x43C985: mov     ecx, edi
0x43C987: call    eax
0x43C989: mov     ecx, ioManager
0x43C98F: mov     edx, [ecx]
0x43C991: mov     eax, [edx+3Ch]
0x43C994: push    esi
0x43C995: call    eax
0x43C997: mov     ecx, dword ptr [esp+24h+var_C]
0x43C99B: mov     large fs:0, ecx
0x43C9A2: pop     ecx
0x43C9A3: pop     edi
0x43C9A4: pop     esi
0x43C9A5: pop     ebp
0x43C9A6: pop     ebx
0x43C9A7: add     esp, 10h
0x43C9AA: retn
