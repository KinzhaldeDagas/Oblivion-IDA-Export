0x503930: push    ecx
0x503931: mov     ecx, [esp+4+l]
0x503935: mov     edx, [esp+4+arg_10]
0x503939: push    esi
0x50393A: mov     esi, [esp+8+a4]
0x50393E: lea     eax, [esp+8+var_4]
0x503942: push    eax; UInt16
0x503943: mov     eax, [esp+0Ch+arg_C]
0x503947: push    ecx; l
0x503948: mov     ecx, [esp+10h+a3]
0x50394C: push    edx; a6
0x50394D: mov     edx, [esp+14h+arg_4]
0x503951: push    eax; a5
0x503952: mov     eax, [esp+18h+a1]
0x503956: push    esi; a4
0x503957: push    ecx; a3
0x503958: push    edx; a2
0x503959: push    eax; a1
0x50395A: mov     dword ptr [esp+28h+var_4], 0
0x503962: call    Script_ExtractArgs
0x503967: add     esp, 20h
0x50396A: test    al, al
0x50396C: jnz     short loc_503971
0x50396E: pop     esi
0x50396F: pop     ecx
0x503970: retn
0x503971: mov     ecx, [esp+8+arg_18]
0x503975: mov     edx, dword ptr [esp+8+var_4]
0x503979: push    ecx
0x50397A: push    0
0x50397C: push    edx
0x50397D: push    esi
0x50397E: call    sub_4F7330
0x503983: add     esp, 10h
0x503986: pop     esi
0x503987: pop     ecx
0x503988: retn
