0x754C30: push    esi
0x754C31: push    edi
0x754C32: push    0B0h ; '°'; Size
0x754C37: mov     edi, ecx
0x754C39: call    FormHeapAlloc
0x754C3E: add     esp, 4
0x754C41: test    eax, eax
0x754C43: jz      short loc_754C62
0x754C45: fld1
0x754C47: push    ecx
0x754C48: fst     [esp+0Ch+var_C]; float
0x754C4B: push    0; int
0x754C4D: push    0; int
0x754C4F: push    0; char
0x754C51: push    0; char
0x754C53: push    ecx
0x754C54: mov     ecx, eax
0x754C56: fstp    [esp+20h+var_20]; float
0x754C59: call    sub_754B20
0x754C5E: mov     esi, eax
0x754C60: jmp     short loc_754C64
0x754C62: xor     esi, esi
0x754C64: mov     eax, [esp+8+arg_0]
0x754C68: push    eax
0x754C69: push    esi
0x754C6A: mov     ecx, edi
0x754C6C: call    sub_75ED50
0x754C71: fld     dword ptr [edi+30h]
0x754C74: pop     edi
0x754C75: fstp    dword ptr [esi+30h]
0x754C78: mov     eax, esi
0x754C7A: pop     esi
0x754C7B: retn    4
