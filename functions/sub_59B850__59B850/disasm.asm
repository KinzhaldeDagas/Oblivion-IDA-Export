0x59B850: cmp     [esp+arg_0], 0Dh
0x59B855: push    esi; a3
0x59B856: mov     esi, ecx
0x59B858: jle     short loc_59B8AE
0x59B85A: push    1; arg1
0x59B85C: push    0; canCreate
0x59B85E: call    InterfaceManager_GetSingleton
0x59B863: fld     dword ptr [eax+38h]
0x59B866: call    Double_To_SInt32
0x59B86B: mov     ecx, eax
0x59B86D: mov     eax, 77777777h
0x59B872: imul    ecx
0x59B874: sub     edx, ecx
0x59B876: mov     ecx, [esi+30h]; this
0x59B879: sar     edx, 6
0x59B87C: mov     eax, edx
0x59B87E: shr     eax, 1Fh
0x59B881: add     eax, edx
0x59B883: mov     [esp+0Ch+arg_0], eax
0x59B887: add     esp, 4
0x59B88A: fild    [esp+8+arg_0]
0x59B88E: fstp    [esp+8+a2]; a3
0x59B891: push    0FB7h; a2
0x59B896: call    Tile_SetFloat
0x59B89B: fldz
0x59B89D: push    ecx
0x59B89E: fstp    [esp+8+a2]; a3
0x59B8A1: mov     ecx, [esi+30h]; this
0x59B8A4: push    0FB7h; a2
0x59B8A9: call    Tile_SetFloat
0x59B8AE: pop     esi
0x59B8AF: retn    8
