0x4AA030: push    ecx
0x4AA031: push    esi
0x4AA032: mov     esi, ecx
0x4AA034: mov     eax, [esi]
0x4AA036: mov     edx, [eax+16Ch]
0x4AA03C: push    1
0x4AA03E: call    edx
0x4AA040: test    al, al
0x4AA042: jz      short loc_4AA05A
0x4AA044: mov     eax, [esi+94h]
0x4AA04A: test    eax, eax
0x4AA04C: jz      short loc_4AA05A
0x4AA04E: fld     dword ptr [eax+38h]
0x4AA051: pop     esi
0x4AA052: fstp    [esp+4+var_4]
0x4AA055: fld     [esp+4+var_4]
0x4AA058: pop     ecx
0x4AA059: retn
0x4AA05A: fld     dword ptr ds:0B35710h
0x4AA060: pop     esi
0x4AA061: fstp    [esp+4+var_4]
0x4AA064: fld     [esp+4+var_4]
0x4AA067: pop     ecx
0x4AA068: retn
