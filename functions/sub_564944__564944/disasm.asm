0x564944: push    ebp; a2
0x564945: add     ecx, esi; this
0x564947: call    NiSmartPointer_Set??
0x56494C: lea     ecx, [esp+arg_10]; void *
0x564950: mov     [esp+arg_20], 0FFFFFFFFh
0x564958: call    BSStringT_Clear
0x56495D: mov     al, 1
0x56495F: jmp     short loc_56496C
0x564961: push    ebx
0x564962: call    FormHeapFree
0x564967: add     esp, 4
0x56496A: xor     al, al
0x56496C: mov     ecx, [esp+arg_18]
0x564970: mov     large fs:0, ecx
0x564977: pop     ecx
0x564978: pop     edi
0x564979: pop     esi
0x56497A: pop     ebp
0x56497B: pop     ebx
0x56497C: add     esp, 14h
0x56497F: retn    8
