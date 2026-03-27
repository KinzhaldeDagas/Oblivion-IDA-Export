0x51C8C0: sub     esp, 108h
0x51C8C6: mov     eax, ds:0B30AACh
0x51C8CB: xor     eax, esp
0x51C8CD: mov     [esp+108h+var_4], eax
0x51C8D4: push    ebx
0x51C8D5: mov     ebx, [esp+10Ch+arg_0]
0x51C8DC: push    esi
0x51C8DD: push    edi
0x51C8DE: mov     edi, ecx
0x51C8E0: lea     esi, [edi+0F0h]
0x51C8E6: test    esi, esi
0x51C8E8: jz      short loc_51C95B
0x51C8EA: lea     ebx, [ebx+0]
0x51C8F0: cmp     dword ptr [esi+4], 0
0x51C8F4: jnz     short loc_51C8FB
0x51C8F6: cmp     dword ptr [esi], 0
0x51C8F9: jz      short loc_51C95B
0x51C8FB: mov     eax, [edi+0ACh]
0x51C901: mov     edx, [eax+14h]
0x51C904: lea     ecx, [edi+0ACh]
0x51C90A: call    edx
0x51C90C: lea     edx, [esp+114h+Str]
0x51C910: mov     cl, [eax]
0x51C912: mov     [edx], cl
0x51C914: add     eax, 1
0x51C917: add     edx, 1
0x51C91A: test    cl, cl
0x51C91C: jnz     short loc_51C910
0x51C91E: lea     eax, [esp+114h+Str]
0x51C922: push    5Ch ; '\'; Ch
0x51C924: push    eax; Str
0x51C925: call    _strrchr
0x51C92A: mov     ecx, [esi]
0x51C92C: add     esp, 8
0x51C92F: lea     edx, [eax+1]
0x51C932: mov     al, [ecx]
0x51C934: mov     [edx], al
0x51C936: add     ecx, 1
0x51C939: add     edx, 1
0x51C93C: test    al, al
0x51C93E: jnz     short loc_51C932
0x51C940: push    1
0x51C942: push    1
0x51C944: lea     ecx, [esp+11Ch+Str]
0x51C948: push    ecx
0x51C949: mov     ecx, ds:0B33A1Ch
0x51C94F: call    QueuedModelLoader_RemoveModel
0x51C954: mov     esi, [esi+4]
0x51C957: test    esi, esi
0x51C959: jnz     short loc_51C8F0
0x51C95B: push    ebx
0x51C95C: mov     ecx, edi
0x51C95E: call    sub_4B3210
0x51C963: mov     ecx, [esp+114h+var_4]
0x51C96A: pop     edi
0x51C96B: pop     esi
0x51C96C: pop     ebx
0x51C96D: xor     ecx, esp
0x51C96F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51C974: add     esp, 108h
0x51C97A: retn    4
