0x557BB0: push    0FFFFFFFFh
0x557BB2: push    offset SEH_557BB0
0x557BB7: mov     eax, large fs:0
0x557BBD: push    eax
0x557BBE: sub     esp, 20h
0x557BC1: push    ebp
0x557BC2: push    esi
0x557BC3: push    edi
0x557BC4: mov     eax, ds:0B30AACh
0x557BC9: xor     eax, esp
0x557BCB: push    eax
0x557BCC: lea     eax, [esp+3Ch+var_C]
0x557BD0: mov     large fs:0, eax
0x557BD6: mov     esi, ecx
0x557BD8: mov     [esp+3Ch+var_2C], esi
0x557BDC: push    offset sub_557B30; a5
0x557BE1: push    offset sub_6EF4A0; a4
0x557BE6: push    2; size
0x557BE8: push    10h; a2
0x557BEA: lea     edi, [esi+4]
0x557BED: push    edi; a1
0x557BEE: call    ArrayConstructor
0x557BF3: mov     edx, [esp+3Ch+Src]
0x557BF7: mov     eax, edx
0x557BF9: mov     [esp+3Ch+var_4], 0
0x557C01: mov     [esp+3Ch+var_10], 0Fh
0x557C09: mov     [esp+3Ch+var_14], 0
0x557C11: mov     byte ptr [esp+3Ch+var_24], 0
0x557C16: lea     ebp, [eax+1]
0x557C19: lea     esp, [esp+0]
0x557C20: mov     cl, [eax]
0x557C22: add     eax, 1
0x557C25: test    cl, cl
0x557C27: jnz     short loc_557C20
0x557C29: sub     eax, ebp
0x557C2B: push    eax; MaxCount
0x557C2C: push    edx; Src
0x557C2D: lea     ecx, [esp+44h+var_28]
0x557C31: call    sub_414500
0x557C36: lea     eax, [esi+14h]
0x557C39: push    eax
0x557C3A: push    edi
0x557C3B: lea     ecx, [esp+44h+var_28]
0x557C3F: push    esi
0x557C40: push    ecx
0x557C41: mov     byte ptr [esp+4Ch+var_4], 1
0x557C46: call    sub_6EFA20
0x557C4B: add     esp, 10h
0x557C4E: cmp     [esp+3Ch+var_10], 10h
0x557C53: jb      short loc_557C62
0x557C55: mov     edx, [esp+3Ch+var_24]
0x557C59: push    edx
0x557C5A: call    FormHeapFree
0x557C5F: add     esp, 4
0x557C62: mov     eax, esi
0x557C64: mov     ecx, [esp+3Ch+var_C]
0x557C68: mov     large fs:0, ecx
0x557C6F: pop     ecx
0x557C70: pop     edi
0x557C71: pop     esi
0x557C72: pop     ebp
0x557C73: add     esp, 2Ch
0x557C76: retn    4
