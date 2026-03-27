0x8C8100: push    0FFFFFFFFh
0x8C8102: push    offset SEH_8C8900
0x8C8107: mov     eax, large fs:0
0x8C810D: push    eax
0x8C810E: push    ecx
0x8C810F: mov     eax, ds:0B30AACh
0x8C8114: xor     eax, esp
0x8C8116: push    eax
0x8C8117: lea     eax, [esp+14h+var_C]
0x8C811B: mov     large fs:0, eax
0x8C8121: push    14h; Size
0x8C8123: call    FormHeapAlloc
0x8C8128: add     esp, 4
0x8C812B: mov     [esp+14h+var_10], eax
0x8C812F: test    eax, eax
0x8C8131: mov     [esp+14h+var_4], 0
0x8C8139: jz      short loc_8C8152
0x8C813B: mov     ecx, eax; this
0x8C813D: call    ??0bhkCylinderShape@@QAE@XZ; bhkCylinderShape::bhkCylinderShape(void)
0x8C8142: mov     ecx, [esp+14h+var_C]
0x8C8146: mov     large fs:0, ecx
0x8C814D: pop     ecx
0x8C814E: add     esp, 10h
0x8C8151: retn
0x8C8152: xor     eax, eax
0x8C8154: mov     ecx, [esp+14h+var_C]
0x8C8158: mov     large fs:0, ecx
0x8C815F: pop     ecx
0x8C8160: add     esp, 10h
0x8C8163: retn
