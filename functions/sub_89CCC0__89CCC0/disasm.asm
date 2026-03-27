0x89CCC0: mov     eax, [ecx+88h]
0x89CCC6: sub     esp, 8
0x89CCC9: test    eax, eax
0x89CCCB: mov     eax, [esp+8+arg_0]
0x89CCCF: jz      short loc_89CCEF
0x89CCD1: mov     ecx, [ecx+80h]
0x89CCD7: lea     edx, [esp+8+var_8]
0x89CCDA: push    edx
0x89CCDB: mov     [esp+0Ch+var_8], 0Bh
0x89CCE0: mov     [esp+0Ch+var_4], eax
0x89CCE4: call    sub_8D8830
0x89CCE9: add     esp, 8
0x89CCEC: retn    4
0x89CCEF: push    eax
0x89CCF0: call    sub_89BCC0
0x89CCF5: add     esp, 8
0x89CCF8: retn    4
