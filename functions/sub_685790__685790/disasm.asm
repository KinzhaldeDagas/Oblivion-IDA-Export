0x685790: sub     esp, 0Ch
0x685793: push    ebx
0x685794: push    esi
0x685795: push    edi
0x685796: mov     edi, ecx
0x685798: mov     bl, 1
0x68579A: call    sub_6899C0
0x68579F: mov     esi, [eax]
0x6857A1: test    esi, esi
0x6857A3: jz      loc_685862
0x6857A9: push    ebp
0x6857AA: mov     ebp, [esp+1Ch+arg_0]
0x6857AE: test    ebp, ebp
0x6857B0: jz      loc_68586D
0x6857B6: mov     ecx, esi
0x6857B8: call    sub_68B110
0x6857BD: fldz
0x6857BF: mov     ecx, [eax]
0x6857C1: fstp    [esp+1Ch+arg_0]
0x6857C5: mov     edx, [eax+4]
0x6857C8: mov     eax, [eax+8]
0x6857CB: mov     [esp+1Ch+var_C], ecx
0x6857CF: mov     ecx, edi
0x6857D1: mov     [esp+1Ch+var_8], edx
0x6857D5: mov     [esp+1Ch+var_4], eax
0x6857D9: xor     bl, bl
0x6857DB: call    sub_6899C0
0x6857E0: cmp     dword ptr [eax+4], 0
0x6857E4: jnz     short loc_6857F5
0x6857E6: mov     ecx, edi
0x6857E8: call    sub_6899D0
0x6857ED: fstp    [esp+1Ch+arg_0]
0x6857F1: mov     bl, 1
0x6857F3: jmp     short loc_68582A
0x6857F5: mov     ecx, esi
0x6857F7: call    ?status@DName@@QBE?AW4DNameStatus@@XZ; DName::status(void)
0x6857FC: sub     eax, 0
0x6857FF: jz      short loc_68580C
0x685801: sub     eax, 1
0x685804: jnz     short loc_685816
0x685806: fldz
0x685808: mov     bl, 1
0x68580A: jmp     short loc_685812
0x68580C: fld     dword ptr ds:0A3D8F0h
0x685812: fstp    [esp+1Ch+arg_0]
0x685816: mov     edx, [edi]
0x685818: mov     eax, [edx+0Ch]
0x68581B: mov     ecx, edi
0x68581D: call    eax
0x68581F: test    al, al
0x685821: jz      short loc_68582A
0x685823: fld     dword ptr [ebp+34h]
0x685826: fstp    [esp+1Ch+var_4]
0x68582A: fld     [esp+1Ch+arg_0]
0x68582E: test    bl, bl
0x685830: setz    cl
0x685833: lea     edx, [esp+1Ch+var_C]
0x685837: push    ecx; char
0x685838: push    ecx
0x685839: fstp    [esp+24h+var_24]; float
0x68583C: push    edx; int
0x68583D: push    ebp; int
0x68583E: call    sub_684B30
0x685843: add     esp, 10h
0x685846: test    al, al
0x685848: jz      short loc_685856
0x68584A: pop     ebp
0x68584B: pop     edi
0x68584C: pop     esi
0x68584D: mov     al, 1
0x68584F: pop     ebx
0x685850: add     esp, 0Ch
0x685853: retn    4
0x685856: pop     ebp
0x685857: pop     edi
0x685858: pop     esi
0x685859: xor     al, al
0x68585B: pop     ebx
0x68585C: add     esp, 0Ch
0x68585F: retn    4
0x685862: pop     edi
0x685863: pop     esi
0x685864: mov     al, bl
0x685866: pop     ebx
0x685867: add     esp, 0Ch
0x68586A: retn    4
0x68586D: pop     ebp
0x68586E: pop     edi
0x68586F: pop     esi
0x685870: mov     al, bl
0x685872: pop     ebx
0x685873: add     esp, 0Ch
0x685876: retn    4
