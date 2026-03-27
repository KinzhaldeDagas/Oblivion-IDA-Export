0x980869: push    4
0x98086B: mov     eax, offset ?_Locimp_dtor@_Locimp@locale@std@@CAXPAV123@@Z_____ehhandler$?_Locimp_dtor@_Locimp@locale@std@@CAXPAV123@@Z
0x980870: call    __EH_prolog3
0x980875: push    0; int
0x980877: lea     ecx, [ebp+var_10]; this
0x98087A: call    ??0_Lockit@std@@QAE@H@Z
0x98087F: mov     edi, [ebp+arg_0]
0x980882: and     [ebp+var_4], 0
0x980886: mov     esi, [edi+0Ch]
0x980889: jmp     short loc_9808AA
0x98088B: mov     eax, [edi+8]
0x98088E: dec     esi
0x98088F: lea     eax, [eax+esi*4]
0x980892: cmp     dword ptr [eax], 0
0x980895: jz      short loc_9808AA
0x980897: mov     ecx, [eax]
0x980899: call    sub_6F6DC0
0x98089E: test    eax, eax
0x9808A0: jz      short loc_9808AA
0x9808A2: mov     edx, [eax]
0x9808A4: push    1
0x9808A6: mov     ecx, eax
0x9808A8: call    dword ptr [edx]
0x9808AA: test    esi, esi
0x9808AC: ja      short loc_98088B
0x9808AE: push    dword ptr [edi+8]; Memory
0x9808B1: call    _free
0x9808B6: or      [ebp+var_4], 0FFFFFFFFh
0x9808BA: pop     ecx
0x9808BB: lea     ecx, [ebp+var_10]; this
0x9808BE: call    ??1_Lockit@std@@QAE@XZ
0x9808C3: call    __EH_epilog3
0x9808C8: retn
