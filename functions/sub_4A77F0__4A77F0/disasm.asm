0x4A77F0: push    ebp
0x4A77F1: mov     ebp, [esp+4+arg_0]
0x4A77F5: test    ebp, ebp
0x4A77F7: push    esi
0x4A77F8: mov     esi, ecx
0x4A77FA: jnz     short loc_4A7840
0x4A77FC: push    28h ; '('; Size
0x4A77FE: call    FormHeapAlloc
0x4A7803: add     esp, 4
0x4A7806: test    eax, eax
0x4A7808: jz      short loc_4A783C
0x4A780A: mov     cl, [esi+0Ch]
0x4A780D: fld     dword ptr ds:0A32048h
0x4A7813: fst     dword ptr [eax+14h]
0x4A7816: mov     [eax], ebp
0x4A7818: fstp    dword ptr [eax+10h]
0x4A781B: mov     [eax+4], ebp
0x4A781E: fld     dword ptr ds:0A3B888h
0x4A7824: mov     [eax+0Ch], cl
0x4A7827: fst     dword ptr [eax+1Ch]
0x4A782A: mov     dword ptr [eax+20h], 400h
0x4A7831: fstp    dword ptr [eax+18h]
0x4A7834: mov     [eax+24h], ebp
0x4A7837: mov     [eax+8], ebp
0x4A783A: jmp     short loc_4A783E
0x4A783C: xor     eax, eax
0x4A783E: mov     ebp, eax
0x4A7840: test    esi, esi
0x4A7842: jz      short loc_4A788B
0x4A7844: push    edi
0x4A7845: cmp     byte ptr [ebp+0Ch], 0
0x4A7849: jz      short loc_4A7873
0x4A784B: mov     ecx, [esi]
0x4A784D: push    0
0x4A784F: call    sub_4A6A20
0x4A7854: fldz
0x4A7856: push    ecx
0x4A7857: fstp    [esp+10h+var_10]; float
0x4A785A: mov     edi, eax
0x4A785C: push    edi; int
0x4A785D: mov     ecx, ebp
0x4A785F: call    sub_4A7710
0x4A7864: test    al, al
0x4A7866: jnz     short loc_4A7883
0x4A7868: push    edi
0x4A7869: call    FormHeapFree
0x4A786E: add     esp, 4
0x4A7871: jmp     short loc_4A7883
0x4A7873: fldz
0x4A7875: mov     eax, [esi]
0x4A7877: push    ecx
0x4A7878: fstp    [esp+10h+var_10]; float
0x4A787B: push    eax; int
0x4A787C: mov     ecx, ebp
0x4A787E: call    sub_4A7710
0x4A7883: mov     esi, [esi+4]
0x4A7886: test    esi, esi
0x4A7888: jnz     short loc_4A7845
0x4A788A: pop     edi
0x4A788B: pop     esi
0x4A788C: mov     eax, ebp
0x4A788E: pop     ebp
0x4A788F: retn    4
