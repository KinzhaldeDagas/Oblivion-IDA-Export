0x73B380: push    ebx
0x73B381: push    esi
0x73B382: mov     esi, [esp+8+arg_0]
0x73B386: push    edi
0x73B387: push    esi
0x73B388: mov     edi, ecx
0x73B38A: call    sub_721730
0x73B38F: mov     eax, ds:0B40168h
0x73B394: push    eax; ArgList
0x73B395: call    TESOutput_PrintString
0x73B39A: movzx   ebx, word ptr [esi+0Ah]
0x73B39E: movzx   ecx, word ptr [esi+8]
0x73B3A2: add     esp, 4
0x73B3A5: cmp     ebx, ecx
0x73B3A7: mov     [esp+0Ch+arg_0], eax
0x73B3AB: jb      short loc_73B3BB
0x73B3AD: movzx   edx, word ptr [esi+0Eh]
0x73B3B1: add     edx, ebx
0x73B3B3: push    edx
0x73B3B4: mov     ecx, esi
0x73B3B6: call    NiTArray_SetSize
0x73B3BB: lea     eax, [esp+0Ch+arg_0]
0x73B3BF: push    eax
0x73B3C0: push    ebx
0x73B3C1: mov     ecx, esi
0x73B3C3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73B3C8: push    37h ; '7'; Size
0x73B3CA: call    FormHeapAlloc
0x73B3CF: fld     dword ptr [edi+18h]
0x73B3D2: sub     esp, 1Ch
0x73B3D5: fstp    [esp+2Ch+var_14]
0x73B3D9: mov     [esp+2Ch+arg_0], eax
0x73B3DD: fld     dword ptr [edi+14h]
0x73B3E0: fstp    [esp+2Ch+var_1C]
0x73B3E4: fld     dword ptr [edi+10h]
0x73B3E7: fstp    [esp+2Ch+var_24]
0x73B3EB: fld     dword ptr [edi+0Ch]
0x73B3EE: fstp    qword ptr [esp+2Ch+ArgList]; ArgList
0x73B3F1: push    offset aVector5_3f5_3f; "Vector = (%5.3f,%5.3f,%5.3f,%5.3f)"
0x73B3F6: push    37h ; '7'; SizeInBytes
0x73B3F8: push    eax; DstBuf
0x73B3F9: call    sub_6C5D40
0x73B3FE: movzx   edi, word ptr [esi+0Ah]
0x73B402: movzx   ecx, word ptr [esi+8]
0x73B406: add     esp, 2Ch
0x73B409: cmp     edi, ecx
0x73B40B: jb      short loc_73B41B
0x73B40D: movzx   edx, word ptr [esi+0Eh]
0x73B411: add     edx, edi
0x73B413: push    edx
0x73B414: mov     ecx, esi
0x73B416: call    NiTArray_SetSize
0x73B41B: lea     eax, [esp+0Ch+arg_0]
0x73B41F: push    eax
0x73B420: push    edi
0x73B421: mov     ecx, esi
0x73B423: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73B428: pop     edi
0x73B429: pop     esi
0x73B42A: pop     ebx
0x73B42B: retn    4
