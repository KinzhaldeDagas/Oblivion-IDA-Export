0x761C50: push    esi
0x761C51: push    edi; Src
0x761C52: mov     edi, ecx
0x761C54: test    byte ptr [edi+5C4h], 10h
0x761C5B: lea     esi, [edi+5E4h]
0x761C61: mov     byte ptr [esi], 0
0x761C64: jz      short loc_761C76
0x761C66: push    offset aPure; "PURE"
0x761C6B: push    20h ; ' '; SizeInBytes
0x761C6D: push    esi; Dst
0x761C6E: call    _strcat_s
0x761C73: add     esp, 0Ch
0x761C76: test    byte ptr [edi+5C4h], 4
0x761C7D: jz      short loc_761C8F
0x761C7F: push    offset off_A88598; Src
0x761C84: push    20h ; ' '; SizeInBytes
0x761C86: push    esi; Dst
0x761C87: call    _strcat_s
0x761C8C: add     esp, 0Ch
0x761C8F: test    byte ptr [edi+5C4h], 40h
0x761C96: jz      short loc_761CA8
0x761C98: push    offset aHwvp; " HWVP"
0x761C9D: push    20h ; ' '; SizeInBytes
0x761C9F: push    esi; Dst
0x761CA0: call    _strcat_s
0x761CA5: add     esp, 0Ch
0x761CA8: test    byte ptr [edi+5C4h], 80h
0x761CAF: jz      short loc_761CC1
0x761CB1: push    offset aMixvp; " MIXVP"
0x761CB6: push    20h ; ' '; SizeInBytes
0x761CB8: push    esi; Dst
0x761CB9: call    _strcat_s
0x761CBE: add     esp, 0Ch
0x761CC1: test    byte ptr [edi+5C4h], 20h
0x761CC8: jz      short loc_761CDA
0x761CCA: push    offset aSwvp; " SWVP"
0x761CCF: push    20h ; ' '; SizeInBytes
0x761CD1: push    esi; Dst
0x761CD2: call    _strcat_s
0x761CD7: add     esp, 0Ch
0x761CDA: pop     edi
0x761CDB: mov     eax, esi
0x761CDD: pop     esi
0x761CDE: retn
