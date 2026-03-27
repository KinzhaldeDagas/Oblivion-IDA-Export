0x6E0630: push    esi
0x6E0631: mov     esi, [esp+4+arg_0]
0x6E0635: push    edi
0x6E0636: push    esi
0x6E0637: mov     edi, ecx
0x6E0639: call    sub_715F40
0x6E063E: cmp     dword ptr [esi+0D8h], 0A000102h
0x6E0648: jnb     short loc_6E0669
0x6E064A: mov     ax, [esi+25Ah]
0x6E0651: shr     ax, 5
0x6E0655: and     ax, 0FFh
0x6E0659: mov     ecx, esi
0x6E065B: mov     [edi+3Ch], ax
0x6E065F: call    sub_712A20
0x6E0664: pop     edi
0x6E0665: pop     esi
0x6E0666: retn    4
0x6E0669: mov     eax, [esi+21Ch]
0x6E066F: mov     edx, [eax+4]
0x6E0672: push    1
0x6E0674: lea     ecx, [esp+0Ch+arg_0]
0x6E0678: push    ecx
0x6E0679: push    2
0x6E067B: add     edi, 3Ch ; '<'
0x6E067E: push    edi
0x6E067F: push    eax
0x6E0680: mov     [esp+1Ch+arg_0], 2
0x6E0688: call    edx
0x6E068A: add     esp, 14h
0x6E068D: mov     ecx, esi
0x6E068F: call    sub_712A20
0x6E0694: pop     edi
0x6E0695: pop     esi
0x6E0696: retn    4
