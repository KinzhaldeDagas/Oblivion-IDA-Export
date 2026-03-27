0x4384E0: push    ecx
0x4384E1: push    esi
0x4384E2: push    edi
0x4384E3: mov     edi, [esp+0Ch+arg_0]
0x4384E7: mov     esi, ecx
0x4384E9: mov     ecx, [esi]
0x4384EB: lea     edx, [esp+0Ch+var_4]
0x4384EF: mov     [esp+0Ch+var_4], 0
0x4384F7: mov     eax, [ecx]
0x4384F9: mov     eax, [eax+4]
0x4384FC: push    edx
0x4384FD: push    edi
0x4384FE: call    eax
0x438500: test    al, al
0x438502: jz      short loc_438539
0x438504: mov     eax, [esp+0Ch+arg_8]
0x438508: cmp     eax, 1
0x43850B: mov     ecx, [esp+0Ch+var_4]
0x43850F: jnz     short loc_43851D
0x438511: add     ecx, 4
0x438514: push    ecx; lpAddend
0x438515: call    ds:InterlockedDecrement
0x43851B: jmp     short loc_438525
0x43851D: neg     eax
0x43851F: push    eax
0x438520: call    sub_434C00
0x438525: cmp     [esp+0Ch+arg_4], 0
0x43852A: jz      short loc_438539
0x43852C: mov     edx, [esp+0Ch+var_4]
0x438530: push    edi
0x438531: push    edx
0x438532: mov     ecx, esi
0x438534: call    sub_435A10
0x438539: pop     edi
0x43853A: pop     esi
0x43853B: pop     ecx
0x43853C: retn    0Ch
