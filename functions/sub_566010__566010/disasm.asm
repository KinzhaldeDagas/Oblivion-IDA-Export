0x566010: push    0FFFFFFFFh
0x566012: push    offset SEH_566010
0x566017: mov     eax, large fs:0
0x56601D: push    eax
0x56601E: sub     esp, 8
0x566021: push    esi
0x566022: mov     eax, ds:0B30AACh
0x566027: xor     eax, esp
0x566029: push    eax
0x56602A: lea     eax, [esp+1Ch+var_C]
0x56602E: mov     large fs:0, eax
0x566034: mov     esi, ecx
0x566036: mov     eax, [esp+1Ch+arg_0]
0x56603A: test    eax, eax
0x56603C: jz      short loc_56605A
0x56603E: push    eax
0x56603F: lea     ecx, [esi+34h]
0x566042: call    sub_56A850
0x566047: mov     ecx, [esp+1Ch+var_C]
0x56604B: mov     large fs:0, ecx
0x566052: pop     ecx
0x566053: pop     esi
0x566054: add     esp, 14h
0x566057: retn    4
0x56605A: lea     ecx, [esp+1Ch+var_14]; this
0x56605E: call    ??0DNameNode@@IAE@XZ; DNameNode::DNameNode(void)
0x566063: lea     eax, [esp+1Ch+var_14]
0x566067: push    eax
0x566068: lea     ecx, [esi+34h]
0x56606B: mov     [esp+20h+var_4], 0
0x566073: call    sub_56A850
0x566078: lea     ecx, [esp+1Ch+var_14]
0x56607C: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x566084: call    sub_56A7A0
0x566089: mov     ecx, [esp+1Ch+var_C]
0x56608D: mov     large fs:0, ecx
0x566094: pop     ecx
0x566095: pop     esi
0x566096: add     esp, 14h
0x566099: retn    4
