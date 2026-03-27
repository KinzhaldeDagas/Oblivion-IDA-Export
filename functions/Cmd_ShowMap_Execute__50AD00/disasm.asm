0x50AD00: sub     esp, 8
0x50AD03: mov     edx, [esp+8+l]
0x50AD07: push    ebx
0x50AD08: lea     eax, [esp+0Ch+var_4]
0x50AD0C: push    eax
0x50AD0D: mov     eax, [esp+10h+arg_10]
0x50AD11: lea     ecx, [esp+10h+var_8]
0x50AD15: push    ecx; UInt16
0x50AD16: mov     ecx, [esp+14h+arg_C]
0x50AD1A: push    edx; l
0x50AD1B: mov     edx, [esp+18h+a4]
0x50AD1F: push    eax; a6
0x50AD20: mov     eax, [esp+1Ch+a3]
0x50AD24: push    ecx; a5
0x50AD25: mov     ecx, [esp+20h+arg_4]
0x50AD29: push    edx; a4
0x50AD2A: mov     edx, [esp+24h+a1]
0x50AD2E: push    eax; a3
0x50AD2F: push    ecx; a2
0x50AD30: push    edx; a1
0x50AD31: xor     bl, bl
0x50AD33: mov     dword ptr [esp+30h+var_8], 0
0x50AD3B: mov     [esp+30h+var_4], 0
0x50AD43: call    Script_ExtractArgs
0x50AD48: add     esp, 24h
0x50AD4B: test    al, al
0x50AD4D: jnz     short loc_50AD54
0x50AD4F: pop     ebx
0x50AD50: add     esp, 8
0x50AD53: retn
0x50AD54: mov     ecx, dword ptr [esp+0Ch+var_8]
0x50AD58: test    ecx, ecx
0x50AD5A: jz      loc_50ADF4
0x50AD60: call    sub_4D7730
0x50AD65: test    eax, eax
0x50AD67: jz      loc_50ADF4
0x50AD6D: mov     ecx, dword ptr [esp+0Ch+var_8]
0x50AD71: call    sub_4D7730
0x50AD76: mov     ecx, eax
0x50AD78: call    sub_42B310
0x50AD7D: test    al, al
0x50AD7F: jnz     short loc_50AD83
0x50AD81: mov     bl, 1
0x50AD83: mov     ecx, dword ptr [esp+0Ch+var_8]
0x50AD87: push    1
0x50AD89: call    sub_4D7730
0x50AD8E: mov     ecx, eax
0x50AD90: call    AddMapMarker
0x50AD95: mov     ecx, dword ptr [esp+0Ch+var_8]
0x50AD99: mov     eax, [ecx]
0x50AD9B: mov     edx, [eax+40h]
0x50AD9E: push    400h
0x50ADA3: call    edx
0x50ADA5: cmp     [esp+0Ch+var_4], 0
0x50ADAA: jz      short loc_50ADD4
0x50ADAC: mov     ecx, dword ptr [esp+0Ch+var_8]
0x50ADB0: call    sub_4D7730
0x50ADB5: mov     ecx, eax
0x50ADB7: call    sub_42B340
0x50ADBC: test    al, al
0x50ADBE: jnz     short loc_50ADC2
0x50ADC0: mov     bl, 1
0x50ADC2: mov     ecx, dword ptr [esp+0Ch+var_8]
0x50ADC6: push    1
0x50ADC8: call    sub_4D7730
0x50ADCD: mov     ecx, eax
0x50ADCF: call    sub_42B350
0x50ADD4: test    bl, bl
0x50ADD6: jz      short loc_50ADF4
0x50ADD8: fld     dword ptr ds:0A30634h
0x50ADDE: mov     eax, ds:0B394E0h
0x50ADE3: push    0; int
0x50ADE5: push    0; int
0x50ADE7: push    ecx
0x50ADE8: fstp    [esp+18h+var_18]; float
0x50ADEB: push    eax; int
0x50ADEC: call    QueueUIMessage
0x50ADF1: add     esp, 10h
0x50ADF4: fld1
0x50ADF6: mov     ecx, [esp+0Ch+arg_18]
0x50ADFA: fstp    qword ptr [ecx]
0x50ADFC: mov     al, 1
0x50ADFE: pop     ebx
0x50ADFF: add     esp, 8
0x50AE02: retn
