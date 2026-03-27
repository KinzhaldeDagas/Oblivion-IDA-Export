0x7897B0: push    0FFFFFFFFh
0x7897B2: push    offset SEH_7897B0
0x7897B7: mov     eax, large fs:0
0x7897BD: push    eax
0x7897BE: sub     esp, 88h
0x7897C4: push    ebx
0x7897C5: push    esi
0x7897C6: push    edi
0x7897C7: mov     eax, ds:0B30AACh
0x7897CC: xor     eax, esp
0x7897CE: push    eax
0x7897CF: lea     eax, [esp+0A4h+var_C]
0x7897D6: mov     large fs:0, eax
0x7897DC: mov     edi, ecx
0x7897DE: mov     esi, [esp+0A4h+arg_0]
0x7897E5: mov     ecx, esi
0x7897E7: call    sub_78EB40
0x7897EC: lea     esp, [esp+0]
0x7897F0: cmp     eax, 2AFAh
0x7897F5: jnz     short loc_78983A
0x7897F7: mov     ecx, esi
0x7897F9: call    sub_78EB40
0x7897FE: mov     ecx, [edi]
0x789800: mov     [ecx+0F0h], eax
0x789806: mov     ecx, esi
0x789808: call    sub_787810
0x78980D: test    al, al
0x78980F: jnz     short loc_789881
0x789811: mov     ecx, esi
0x789813: call    sub_78EB40
0x789818: cmp     eax, 2AF9h
0x78981D: jnz     short loc_7897F0
0x78981F: mov     ecx, [esp+0A4h+var_C]
0x789826: mov     large fs:0, ecx
0x78982D: pop     ecx
0x78982E: pop     edi
0x78982F: pop     esi
0x789830: pop     ebx
0x789831: add     esp, 94h
0x789837: retn    4
0x78983A: push    17h; MaxCount
0x78983C: xor     ebx, ebx
0x78983E: push    offset aMalformedNewWi; "malformed new wind info"
0x789843: lea     ecx, [esp+0ACh+var_78]
0x789847: mov     [esp+0ACh+var_60], 0Fh
0x78984F: mov     [esp+0ACh+var_64], ebx
0x789853: mov     [esp+0ACh+var_74], bl
0x789857: call    sub_414500
0x78985C: push    ebx
0x78985D: lea     eax, [esp+0A8h+var_78]
0x789861: push    eax
0x789862: lea     ecx, [esp+0ACh+var_5C]
0x789866: mov     [esp+0ACh+var_4], ebx
0x78986D: call    sub_789190
0x789872: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x789877: lea     ecx, [esp+0A8h+var_5C]
0x78987B: push    ecx
0x78987C: call    ThrowException??
0x789881: push    33h ; '3'; MaxCount
0x789883: xor     ebx, ebx
0x789885: push    offset aPrematureEnd_1; "premature end of file reached parsing n"...
0x78988A: lea     ecx, [esp+0ACh+var_94]
0x78988E: mov     [esp+0ACh+var_7C], 0Fh
0x789896: mov     [esp+0ACh+var_80], ebx
0x78989A: mov     [esp+0ACh+var_90], bl
0x78989E: call    sub_414500
0x7898A3: push    ebx
0x7898A4: lea     edx, [esp+0A8h+var_94]
0x7898A8: push    edx
0x7898A9: lea     ecx, [esp+0ACh+var_34]
0x7898AD: mov     [esp+0ACh+var_4], 1
0x7898B8: call    sub_789190
0x7898BD: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7898C2: lea     eax, [esp+0A8h+var_34]
0x7898C6: push    eax
0x7898C7: call    ThrowException??
