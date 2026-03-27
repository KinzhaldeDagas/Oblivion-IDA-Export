0x5041D0: push    ecx
0x5041D1: mov     ecx, [esp+4+arg_10]
0x5041D5: mov     edx, [esp+4+arg_C]
0x5041D9: push    esi
0x5041DA: mov     esi, [esp+8+a4]
0x5041DE: push    edi
0x5041DF: mov     edi, [esp+0Ch+l]
0x5041E3: lea     eax, [esp+0Ch+var_4]
0x5041E7: push    eax; UInt16
0x5041E8: mov     eax, [esp+10h+a3]
0x5041EC: push    edi; l
0x5041ED: push    ecx; a6
0x5041EE: mov     ecx, [esp+18h+arg_4]
0x5041F2: push    edx; a5
0x5041F3: mov     edx, [esp+1Ch+a1]
0x5041F7: push    esi; a4
0x5041F8: push    eax; a3
0x5041F9: push    ecx; a2
0x5041FA: push    edx; a1
0x5041FB: mov     dword ptr [esp+2Ch+var_4], 0
0x504203: call    Script_ExtractArgs
0x504208: add     esp, 20h
0x50420B: test    al, al
0x50420D: jnz     short loc_504213
0x50420F: pop     edi
0x504210: pop     esi
0x504211: pop     ecx
0x504212: retn
0x504213: test    esi, esi
0x504215: fldz
0x504217: push    ebx
0x504218: mov     ebx, [esp+10h+arg_18]
0x50421C: fstp    qword ptr [ebx]
0x50421E: jz      short loc_50423D
0x504220: test    edi, edi
0x504222: jz      short loc_50423D
0x504224: mov     eax, dword ptr [esp+10h+var_4]
0x504228: push    8000h
0x50422D: push    eax
0x50422E: mov     ecx, edi
0x504230: call    sub_4FB5F0
0x504235: test    al, al
0x504237: jz      short loc_50423D
0x504239: fld1
0x50423B: fstp    qword ptr [ebx]
0x50423D: pop     ebx
0x50423E: pop     edi
0x50423F: mov     al, 1
0x504241: pop     esi
0x504242: pop     ecx
0x504243: retn
