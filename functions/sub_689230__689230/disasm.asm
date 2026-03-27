0x689230: cmp     byte ptr ds:0B3C089h, 0
0x689237: jz      short loc_68923C
0x689239: mov     al, 1
0x68923B: retn
0x68923C: cmp     dword ptr ds:0B33A1Ch, 0
0x689243: push    ebp
0x689244: mov     ebp, [esp+4+arg_4]
0x689248: push    esi
0x689249: push    edi
0x68924A: mov     edi, [esp+0Ch+arg_8]
0x68924E: jz      short loc_6892BF
0x689250: mov     ecx, ds:0B333A0h
0x689256: cmp     dword ptr [ecx+34h], 0
0x68925A: jnz     short loc_6892BF
0x68925C: call    TES__GetCurrentWorldspace
0x689261: test    eax, eax
0x689263: jz      short loc_6892BF
0x689265: mov     ecx, ds:0B333A0h
0x68926B: push    ebp; float *
0x68926C: call    TES__GetCurrentWorldspace
0x689271: mov     ecx, eax; this
0x689273: call    TESWorldSpace__GetCellAtPos
0x689278: mov     esi, eax
0x68927A: test    esi, esi
0x68927C: jz      short loc_6892B9
0x68927E: mov     ecx, ds:0B33A1Ch
0x689284: push    esi
0x689285: call    sub_43E000
0x68928A: test    al, al
0x68928C: jnz     short loc_6892B9
0x68928E: mov     ecx, ds:0B333A0h
0x689294: push    edi; float *
0x689295: call    TES__GetCurrentWorldspace
0x68929A: mov     ecx, eax; this
0x68929C: call    TESWorldSpace__GetCellAtPos
0x6892A1: cmp     eax, esi
0x6892A3: jz      short loc_6892BF
0x6892A5: test    eax, eax
0x6892A7: jz      short loc_6892B9
0x6892A9: mov     ecx, ds:0B33A1Ch
0x6892AF: push    eax
0x6892B0: call    sub_43E000
0x6892B5: test    al, al
0x6892B7: jz      short loc_6892BF
0x6892B9: pop     edi
0x6892BA: pop     esi
0x6892BB: xor     al, al
0x6892BD: pop     ebp
0x6892BE: retn
0x6892BF: mov     esi, [esp+0Ch+arg_0]
0x6892C3: push    ebx
0x6892C4: xor     bl, bl
0x6892C6: test    esi, esi
0x6892C8: jz      short loc_6892F1
0x6892CA: fld     dword ptr ds:0A2FF44h
0x6892D0: push    ecx
0x6892D1: fstp    [esp+14h+var_14]; float
0x6892D4: push    edi; int
0x6892D5: push    ebp; int
0x6892D6: call    sub_480520
0x6892DB: add     esp, 0Ch
0x6892DE: test    eax, eax
0x6892E0: jge     short loc_6892F1
0x6892E2: push    0
0x6892E4: push    edi
0x6892E5: push    ebp
0x6892E6: push    esi
0x6892E7: call    sub_688DC0
0x6892EC: add     esp, 10h
0x6892EF: mov     bl, al
0x6892F1: mov     al, bl
0x6892F3: pop     ebx
0x6892F4: pop     edi
0x6892F5: pop     esi
0x6892F6: pop     ebp
0x6892F7: retn
