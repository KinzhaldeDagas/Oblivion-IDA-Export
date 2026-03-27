0x507AE0: sub     esp, 8
0x507AE3: mov     edx, [esp+8+l]
0x507AE7: lea     eax, [esp+8+var_4]
0x507AEB: push    eax
0x507AEC: mov     eax, [esp+0Ch+arg_10]
0x507AF0: lea     ecx, [esp+0Ch+var_8]
0x507AF4: push    ecx; UInt16
0x507AF5: mov     ecx, [esp+10h+arg_C]
0x507AF9: push    edx; l
0x507AFA: mov     edx, [esp+14h+a4]
0x507AFE: push    eax; a6
0x507AFF: mov     eax, [esp+18h+a3]
0x507B03: push    ecx; a5
0x507B04: mov     ecx, [esp+1Ch+arg_4]
0x507B08: push    edx; a4
0x507B09: mov     edx, [esp+20h+a1]
0x507B0D: push    eax; a3
0x507B0E: push    ecx; a2
0x507B0F: push    edx; a1
0x507B10: mov     dword ptr [esp+2Ch+var_8], 0
0x507B18: mov     [esp+2Ch+var_4], 0
0x507B20: call    Script_ExtractArgs
0x507B25: add     esp, 24h
0x507B28: test    al, al
0x507B2A: jnz     short loc_507B30
0x507B2C: add     esp, 8
0x507B2F: retn
0x507B30: call    Sky_CreateOrGetGlobalObject
0x507B35: mov     ecx, eax
0x507B37: cmp     dword ptr [ecx+10h], 0
0x507B3B: jz      short loc_507B77
0x507B3D: cmp     [esp+8+var_4], 0
0x507B42: jz      short loc_507B4C
0x507B44: mov     eax, dword ptr [esp+8+var_8]
0x507B47: mov     [ecx+1Ch], eax
0x507B4A: jmp     short loc_507B61
0x507B4C: mov     edx, dword ptr [esp+8+var_8]
0x507B4F: mov     [ecx+18h], edx
0x507B52: mov     eax, ds:0B333C4h
0x507B57: mov     dword ptr [eax+6E8h], 0
0x507B61: cmp     byte ptr ds:0B361ACh, 0
0x507B68: jnz     short loc_507B89
0x507B6A: push    1
0x507B6C: call    sub_53FB60
0x507B71: mov     al, 1
0x507B73: add     esp, 8
0x507B76: retn
0x507B77: cmp     [esp+8+var_4], 0
0x507B7C: mov     eax, dword ptr [esp+8+var_8]
0x507B7F: setnz   dl
0x507B82: push    edx
0x507B83: push    eax
0x507B84: call    ForceWeather
0x507B89: mov     al, 1
0x507B8B: add     esp, 8
0x507B8E: retn
