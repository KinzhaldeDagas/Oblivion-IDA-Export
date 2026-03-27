0x6EC260: push    ebx
0x6EC261: push    esi
0x6EC262: push    edi
0x6EC263: mov     edi, [esp+0Ch+arg_4]
0x6EC267: mov     esi, ecx
0x6EC269: mov     eax, [esi]
0x6EC26B: mov     edx, [eax+0ACh]
0x6EC271: push    edi
0x6EC272: call    edx
0x6EC274: mov     bl, al
0x6EC276: mov     eax, [esi]
0x6EC278: mov     edx, [eax+0A8h]
0x6EC27E: push    edi
0x6EC27F: mov     ecx, esi
0x6EC281: call    edx
0x6EC283: movzx   ecx, bl
0x6EC286: imul    ecx, [esp+0Ch+arg_0]
0x6EC28B: pop     edi
0x6EC28C: pop     esi
0x6EC28D: add     eax, ecx
0x6EC28F: pop     ebx
0x6EC290: retn    8
