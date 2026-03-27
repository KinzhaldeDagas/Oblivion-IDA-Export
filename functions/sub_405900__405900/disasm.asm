0x405900: push    0FFFFFFFFh
0x405902: push    offset SEH_8C8970
0x405907: mov     eax, large fs:0
0x40590D: push    eax
0x40590E: push    ecx
0x40590F: push    esi
0x405910: push    edi
0x405911: mov     eax, ___security_cookie
0x405916: xor     eax, esp
0x405918: push    eax
0x405919: lea     eax, [esp+1Ch+var_C]
0x40591D: mov     large fs:0, eax
0x405923: mov     edi, ecx
0x405925: mov     eax, [edi+20h]
0x405928: mov     esi, [eax]
0x40592A: test    esi, esi
0x40592C: jnz     short loc_405964
0x40592E: push    10h; Size
0x405930: call    FormHeapAlloc
0x405935: add     esp, 4
0x405938: mov     [esp+1Ch+var_10], eax
0x40593C: test    eax, eax
0x40593E: mov     [esp+1Ch+var_4], esi
0x405942: jz      short loc_40594D
0x405944: mov     ecx, eax
0x405946: call    sub_704100
0x40594B: jmp     short loc_40594F
0x40594D: xor     eax, eax
0x40594F: lea     ecx, [esp+1Ch+var_10]
0x405953: push    ecx
0x405954: mov     esi, eax
0x405956: push    0
0x405958: lea     ecx, [edi+1Ch]
0x40595B: mov     [esp+24h+var_10], esi
0x40595F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x405964: mov     dx, [esi+4]
0x405968: xor     eax, eax
0x40596A: mov     ah, [esp+1Ch+a2]
0x40596E: and     dx, 0F0FFh
0x405973: or      dx, ax
0x405976: mov     [esi+4], dx
0x40597A: mov     ecx, [esp+1Ch+var_C]
0x40597E: mov     large fs:0, ecx
0x405985: pop     ecx
0x405986: pop     edi
0x405987: pop     esi
0x405988: add     esp, 10h
0x40598B: retn    4
