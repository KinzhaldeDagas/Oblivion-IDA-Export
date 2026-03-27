0x47D8F0: push    ebx
0x47D8F1: mov     ebx, [esp+4+arg_4]
0x47D8F5: push    esi
0x47D8F6: mov     esi, [esp+8+Str1]
0x47D8FA: mov     byte ptr [ebx], 0
0x47D8FD: cmp     byte ptr [esi+1], 3Ah ; ':'
0x47D901: push    edi
0x47D902: jnz     short loc_47D907
0x47D904: add     esi, 3
0x47D907: cmp     byte ptr [esi], 5Ch ; '\'
0x47D90A: jnz     short loc_47D90F
0x47D90C: add     esi, 1
0x47D90F: push    5; MaxCount
0x47D911: push    offset Str2; "data\\"
0x47D916: push    esi; Str1
0x47D917: call    __strnicmp
0x47D91C: add     esp, 0Ch
0x47D91F: test    eax, eax
0x47D921: jnz     short loc_47D926
0x47D923: add     esi, 5
0x47D926: mov     eax, esi
0x47D928: mov     edx, esi
0x47D92A: lea     ebx, [ebx+0]
0x47D930: mov     cl, [eax]
0x47D932: add     eax, 1
0x47D935: test    cl, cl
0x47D937: jnz     short loc_47D930
0x47D939: mov     edi, ebx
0x47D93B: sub     eax, edx
0x47D93D: add     edi, 0FFFFFFFFh
0x47D940: mov     cl, [edi+1]
0x47D943: add     edi, 1
0x47D946: test    cl, cl
0x47D948: jnz     short loc_47D940
0x47D94A: mov     ecx, eax
0x47D94C: shr     ecx, 2
0x47D94F: mov     esi, edx
0x47D951: rep movsd
0x47D953: mov     ecx, eax
0x47D955: and     ecx, 3
0x47D958: push    ebx; String
0x47D959: rep movsb
0x47D95B: call    __strlwr
0x47D960: add     esp, 4
0x47D963: pop     edi
0x47D964: pop     esi
0x47D965: mov     al, 1
0x47D967: pop     ebx
0x47D968: retn
