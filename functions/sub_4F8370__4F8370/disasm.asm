0x4F8370: fldz
0x4F8372: mov     eax, [esp+arg_4]
0x4F8376: push    esi
0x4F8377: push    edi
0x4F8378: mov     edi, [esp+8+arg_C]
0x4F837C: xor     esi, esi
0x4F837E: fstp    qword ptr [edi]
0x4F8380: test    eax, eax
0x4F8382: jz      short loc_4F838C
0x4F8384: cmp     byte ptr [eax+4], 11h
0x4F8388: jnz     short loc_4F838C
0x4F838A: mov     esi, eax
0x4F838C: mov     ecx, ds:0B333C4h
0x4F8392: mov     eax, [ecx]
0x4F8394: mov     edx, [eax+268h]
0x4F839A: call    edx
0x4F839C: cmp     eax, esi
0x4F839E: jnz     short loc_4F83A4
0x4F83A0: fld1
0x4F83A2: fstp    qword ptr [edi]
0x4F83A4: cmp     byte ptr ds:0B361ACh, 0
0x4F83AB: jz      short loc_4F83C2
0x4F83AD: fld     qword ptr [edi]
0x4F83AF: sub     esp, 8
0x4F83B2: fstp    [esp+10h+var_10]
0x4F83B5: push    offset aGetisbirthsignIs0_2f; "GetIsBirthsign is %0.2f"
0x4F83BA: call    Interface_ConsolePrint
0x4F83BF: add     esp, 0Ch
0x4F83C2: pop     edi
0x4F83C3: mov     al, 1
0x4F83C5: pop     esi
0x4F83C6: retn
