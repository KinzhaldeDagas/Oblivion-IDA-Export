0x530430: push    0FFFFFFFFh
0x530432: push    offset SEH_566010
0x530437: mov     eax, large fs:0
0x53043D: push    eax
0x53043E: sub     esp, 8
0x530441: push    esi
0x530442: mov     eax, ds:0B30AACh
0x530447: xor     eax, esp
0x530449: push    eax
0x53044A: lea     eax, [esp+1Ch+var_C]
0x53044E: mov     large fs:0, eax
0x530454: mov     esi, ecx
0x530456: mov     eax, [esp+1Ch+arg_0]
0x53045A: test    eax, eax
0x53045C: jz      short loc_53047A
0x53045E: push    eax
0x53045F: lea     ecx, [esi+18h]
0x530462: call    sub_56A850
0x530467: mov     ecx, [esp+1Ch+var_C]
0x53046B: mov     large fs:0, ecx
0x530472: pop     ecx
0x530473: pop     esi
0x530474: add     esp, 14h
0x530477: retn    4
0x53047A: lea     ecx, [esp+1Ch+var_14]; this
0x53047E: call    ??0DNameNode@@IAE@XZ; DNameNode::DNameNode(void)
0x530483: lea     eax, [esp+1Ch+var_14]
0x530487: push    eax
0x530488: lea     ecx, [esi+18h]
0x53048B: mov     [esp+20h+var_4], 0
0x530493: call    sub_56A850
0x530498: lea     ecx, [esp+1Ch+var_14]
0x53049C: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5304A4: call    sub_56A7A0
0x5304A9: mov     ecx, [esp+1Ch+var_C]
0x5304AD: mov     large fs:0, ecx
0x5304B4: pop     ecx
0x5304B5: pop     esi
0x5304B6: add     esp, 14h
0x5304B9: retn    4
