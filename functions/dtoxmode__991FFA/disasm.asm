0x991FFA: movzx   eax, [esp+arg_0]
0x991FFF: push    esi
0x992000: mov     esi, [esp+4+arg_4]
0x992004: cmp     byte ptr [esi+1], 3Ah ; ':'
0x992008: push    edi
0x992009: mov     ecx, esi
0x99200B: jnz     short loc_992010
0x99200D: lea     ecx, [esi+2]
0x992010: mov     dl, [ecx]
0x992012: cmp     dl, 5Ch ; '\'
0x992015: jz      short loc_99201C
0x992017: cmp     dl, 2Fh ; '/'
0x99201A: jnz     short loc_992022
0x99201C: cmp     byte ptr [ecx+1], 0
0x992020: jz      short loc_99202F
0x992022: test    al, 10h
0x992024: jnz     short loc_99202F
0x992026: test    dl, dl
0x992028: mov     edi, 8000h
0x99202D: jnz     short loc_992034
0x99202F: mov     edi, 4040h
0x992034: shl     eax, 7
0x992037: not     al
0x992039: push    2Eh ; '.'; unsigned int
0x99203B: push    esi; unsigned __int8 *
0x99203C: and     eax, 0FFFF0080h
0x992041: or      eax, 100h
0x992046: or      edi, eax
0x992048: call    __mbsrchr
0x99204D: mov     esi, eax
0x99204F: test    esi, esi
0x992051: pop     ecx
0x992052: pop     ecx
0x992053: jz      short loc_99209C
0x992055: push    offset a_exe
0x99205A: push    esi; unsigned __int8 *
0x99205B: call    __mbsicmp
0x992060: test    eax, eax
0x992062: pop     ecx
0x992063: pop     ecx
0x992064: jz      short loc_992099
0x992066: push    offset a_cmd
0x99206B: push    esi; unsigned __int8 *
0x99206C: call    __mbsicmp
0x992071: test    eax, eax
0x992073: pop     ecx
0x992074: pop     ecx
0x992075: jz      short loc_992099
0x992077: push    offset a_bat
0x99207C: push    esi; unsigned __int8 *
0x99207D: call    __mbsicmp
0x992082: test    eax, eax
0x992084: pop     ecx
0x992085: pop     ecx
0x992086: jz      short loc_992099
0x992088: push    offset a_com
0x99208D: push    esi; unsigned __int8 *
0x99208E: call    __mbsicmp
0x992093: test    eax, eax
0x992095: pop     ecx
0x992096: pop     ecx
0x992097: jnz     short loc_99209C
0x992099: or      edi, 40h
0x99209C: mov     eax, edi
0x99209E: shr     eax, 3
0x9920A1: and     eax, 38h
0x9920A4: or      edi, eax
0x9920A6: mov     eax, edi
0x9920A8: shr     eax, 6
0x9920AB: and     eax, 7
0x9920AE: or      eax, edi
0x9920B0: pop     edi
0x9920B1: pop     esi
0x9920B2: retn
